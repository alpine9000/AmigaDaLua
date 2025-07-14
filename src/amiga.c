#include "lauxlib.h"
#include "lualib.h"
#include "amiga.h"

#define countof(x) (sizeof(x) / sizeof(x[0]))

static int
_amiga_readVarTags(lua_State* L, struct TagItem* taglist, int maxTags, int argNum);

static int
_amiga_doTagList(lua_State *L, struct TagItem *tags, uint16_t maxTags, uint16_t argNumber);

void
lua_install(lua_State* L);

void
amiga_debug_print(const char *text);

#include "thunk.c"

#undef NM_BARLABEL
#define NM_BARLABEL ((uint32_t)(STRPTR)-1)

#include "_lua_gen.h"

static int
_amiga_readVarTags(lua_State* L, struct TagItem* taglist, int maxTags, int argNum)
{
  int nargs = lua_gettop(L);
  if ((nargs - (argNum-1)) % 2 != 0) {
    return luaL_error(L, "Expected even number of tag-value arguments after screen");
  }
  
  int tag_count = 0;
  
  for (int i = argNum; i <= nargs; i += 2) {
    if (tag_count >= maxTags) {
      return luaL_error(L, "Too many tag arguments");
    }
    
    uint32_t tag = (uint32_t)luaL_checkinteger(L, i);
    uintptr_t value;
    
    switch (lua_type(L, i + 1)) {
    case LUA_TBOOLEAN:
      value = lua_toboolean(L, i + 1) ? 1 : 0;
      break;
    case LUA_TNUMBER:
      value = (uintptr_t)lua_tointeger(L, i + 1);
      break;
    case LUA_TSTRING:
      value = (uintptr_t)lua_tolstring(L, i + 1, NULL);
      break;
    case LUA_TLIGHTUSERDATA:
      value = (uintptr_t)lua_touserdata(L, i + 1);
      break;
    default:
      return luaL_error(L, "Invalid tag value type at argument %d", i + 1);
    }
    
    taglist[tag_count].ti_Tag = tag;
    taglist[tag_count].ti_Data = (uint32_t)value;
    if (tag == GT_Underscore) {
      taglist[tag_count].ti_Data = (uint32_t)((char*)taglist[tag_count].ti_Data)[0];
    }    
    tag_count++;
  }
  
  taglist[tag_count].ti_Tag = TAG_END;
  taglist[tag_count].ti_Data = 0;

 
  return LUA_OK;
}

static int
_amiga_doTagList(lua_State* L, struct TagItem* tags, uint16_t maxTags, uint16_t argNumber)
{
  luaL_checktype(L, argNumber, LUA_TTABLE);
  
  int count = 0;
  
  lua_Integer len = luaL_len(L, argNumber);
  for (lua_Integer i = 1; i <= len && count < maxTags; ++i) {
    lua_rawgeti(L, argNumber, i); // -> stack: tag table
    
    if (!lua_istable(L, -1)) {
      return luaL_error(L, "TagList entry at index %d is not a table", (int)i);
    }
    
    // tag = entry.tag
    lua_getfield(L, -1, "tag");
    if (!lua_isnumber(L, -1)) {
      return luaL_error(L, "TagList[%d].tag must be a number", (int)i);
    }
    ULONG tag = (ULONG)lua_tointeger(L, -1);
    lua_pop(L, 1); // pop .tag
    
    // data = entry.data
    lua_getfield(L, -1, "data");
    int t = lua_type(L, -1);
    ULONG data = 0;
    
    switch (t) {
    case LUA_TNUMBER:
      data = (ULONG)lua_tointeger(L, -1);
      break;
    case LUA_TBOOLEAN:
      data = lua_toboolean(L, -1) ? 1 : 0;
      break;
    case LUA_TSTRING:
      data = (ULONG)(const char *)lua_tostring(L, -1);
      break;
    case LUA_TLIGHTUSERDATA:
    case LUA_TUSERDATA:      
      data = (ULONG)lua_touserdata(L, -1);
      break;
    case LUA_TNIL:
      data = 0;
      break;
    default:
      return luaL_error(L, "Unsupported type for TagList[%d].data: %s", (int)i, lua_typename(L, t));
    }
    
    lua_pop(L, 1); // pop .data
    lua_pop(L, 1); // pop tag entry table
    
    tags[count].ti_Tag = tag;
    tags[count].ti_Data = data;
    ++count;
  }
  
  tags[count].ti_Tag = TAG_END;
  tags[count].ti_Data = 0;

  return LUA_OK; 
}

static int
_amiga_newGadgetPtr(lua_State *L)
{
  GadgetPtr **gp = lua_newuserdata(L, sizeof(GadgetPtr*));
  *gp = malloc(sizeof(GadgetPtr *));
  (*gp)->ptr = 0;
  luaL_getmetatable(L, "GadgetPtr");
  lua_setmetatable(L, -2);
  return 1;
}

const char *
amiga_checkConstNullableString(lua_State *L, int stackIndex)
{
  const char* result = 0;
  if (!lua_isnoneornil(L, 1)) {
    result = luaL_checkstring(L, stackIndex);
  }  
  return result;
}

char *
amiga_checkNullableString(lua_State *L, int stackIndex)
{
  char* result = 0;
  if (!lua_isnoneornil(L, 1)) {
    result = (char*)luaL_checkstring(L, stackIndex);
  }
  return result;
}

struct Gadget**
amiga_checkGadgetPtr(lua_State* L, int stackIndex)
{
  GadgetPtr **ud = (GadgetPtr **)luaL_checkudata(L, stackIndex, "GadgetPtr");

  if (!ud) {
    return 0;
  }
  return &(*ud)->ptr;
}

static int
_amiga_getPtr(lua_State* L)
{
  void** ptr = lua_touserdata(L, 1);

  lua_pushinteger(L, (uintptr_t)*ptr);
  return 1;
}

static int
_amiga_getGadget(lua_State* L)
{
  void* raw = lua_touserdata(L, 1);
  if (!raw) {
    luaL_error(L, "expected lightuserdata");
    return 0;
  }
  
  struct Gadget* ptr = (struct Gadget*)raw;
  _lua_gen_pushGadget(L, ptr);
  return 1;
}


static int
_amiga_getStringInfo(lua_State* L)
{
  void* raw = lua_touserdata(L, 1);
  if (!raw) {
    luaL_error(L, "expected lightuserdata");
    return 0;
  }
  
  struct StringInfo* ptr = (struct StringInfo*)raw;
  _lua_gen_pushStringInfo(L, ptr);
  return 1;
}


static int
_amiga_do_create_UWORD_array(lua_State *L, uint32_t allocFlags)
{
  int count = luaL_len(L, 1);
  UWORD* data = AllocMem(sizeof(uint16_t)*count, allocFlags);
  
  for (int i = 0; i < count; i++) {
    lua_rawgeti(L, 1, i + 1);
    data[i] = (uint16_t)luaL_checkinteger(L, -1);
    lua_pop(L, 1);
  }

  _lua_gen_push_UWORD_array_proxy(L, data, count);  
  return 1;
}


static int
_amiga_create_uint16_t_array(lua_State *L)
{
  return _amiga_do_create_UWORD_array(L, MEMF_CLEAR|MEMF_PUBLIC);
}

    
static int
_amiga_create_chip_uint16_t_array(lua_State *L)
{
  return _amiga_do_create_UWORD_array(L, MEMF_CLEAR|MEMF_CHIP);  
}

BSTR
amiga_checkBSTR(lua_State *L, int index)
{
  size_t len;
  const char *str = luaL_checklstring(L, index, &len);
  if (len > 255)
    luaL_error(L, "BSTR too long (max 255 characters)");
  
  // Allocate len + 1 (length prefix) + up to 3 extra bytes for 4-byte alignment
  size_t total = len + 1 + 3;
  UBYTE *raw = (UBYTE *)lua_newuserdata(L, total);
  
  // Align to next 4-byte boundary
  uintptr_t aligned_addr = ((uintptr_t)raw + 3) & ~3;
  UBYTE *bstr_ptr = (UBYTE *)aligned_addr;
  
  bstr_ptr[0] = (UBYTE)len;
  memcpy(bstr_ptr + 1, str, len);
  
  return (BSTR)MKBADDR(bstr_ptr);
}


void
amiga_pushBSTR(lua_State *L, BSTR bstr)
{
  if (!bstr) {
    lua_pushnil(L);
    return;
  }
  
  UBYTE *real = BADDR(bstr);
  UBYTE len = real[0];
  lua_pushlstring(L, (const char *)(real + 1), len);
}


void
amiga_debug_print(const char* text)
{
  extern struct Custom custom;
  custom.serper = 1;
  char buffer[2] = {1, 'a'};
  uint16_t* b = (uint16_t*)&buffer;
  const char* ptr = text;
  while (*ptr != 0) {
    buffer[1] = *ptr;
    custom.serdat = *b;
    ptr++;
  }
}

int
amiga_sprint(lua_State* L)    
{
  const char* msg = luaL_checkstring(L, 1);
  amiga_debug_print(msg);
  amiga_debug_print("\n");
  return 0;
}

void
lua_install(lua_State* L)
{
  extern struct Custom custom;
  struct Custom **ud = (struct Custom **)lua_newuserdata(L, sizeof(struct Custom *));
  *ud = &custom;
  luaL_getmetatable(L, "Custom");
  lua_setmetatable(L, -2);
  lua_setglobal(L, "custom");
  
  lua_register(L, "NewGadgetList", _amiga_newGadgetPtr);
  lua_register(L, "GetPtr", _amiga_getPtr);
  lua_register(L, "GetGadget", _amiga_getGadget);
  lua_register(L, "GetStringInfo", _amiga_getStringInfo);
  
  lua_pushcfunction(L, _amiga_create_uint16_t_array);
  lua_setglobal(L, "CreateArrayUWORD");

  lua_pushcfunction(L, _amiga_create_chip_uint16_t_array);
  lua_setglobal(L, "CreateChipArrayUWORD");

  lua_pushcfunction(L, amiga_sprint);
  lua_setglobal(L, "amiga_debug_print");
    
}
