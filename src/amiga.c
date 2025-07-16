#include "lauxlib.h"
#include "lualib.h"

#include "amiga.h"

#include "thunk.c"
#include "thread.c"

#undef NM_BARLABEL
#define NM_BARLABEL ((uint32_t)(STRPTR)-1)

#ifdef AMIGA_BIG
#include "_lua_gen_big.h"
#else
#include "_lua_gen.h"
#endif

amiga_da_lua_bft_t _bft = {
  .lua_type = lua_type,
  .lua_setfield = lua_setfield,
  .lua_settable = lua_settable,
  .lua_settop = lua_settop,
  .lua_setglobal = lua_setglobal,
  .lua_setmetatable = lua_setmetatable,
  .lua_getmetatable = lua_getmetatable,
  .lua_gettable = lua_gettable,
  .lua_getfield = lua_getfield,
  .lua_isinteger = lua_isinteger,
  .lua_tointegerx = lua_tointegerx,
  .lua_touserdata = lua_touserdata,
  .lua_next = lua_next,
  .lua_rotate = lua_rotate,
  .lua_rawseti = lua_rawseti,
  .lua_pushvalue = lua_pushvalue,
  .lua_pushcclosure = lua_pushcclosure,
  .lua_pushboolean = lua_pushboolean,
  .lua_pushlightuserdata = lua_pushlightuserdata,
  .lua_pushnil = lua_pushnil,
  .lua_pushinteger = lua_pushinteger,
  .lua_pushstring = lua_pushstring,
  .lua_createtable = lua_createtable,
  .luaL_newmetatable = luaL_newmetatable,
  .lua_newuserdatauv = lua_newuserdatauv,
  .luaL_error = luaL_error,
  .luaL_checklstring = luaL_checklstring,
  .luaL_checkudata = luaL_checkudata,
  .luaL_checkinteger = luaL_checkinteger,
  .amiga_checkConstNullableString = amiga_checkConstNullableString,
  .amiga_checkGadgetPtr = amiga_checkGadgetPtr,
  .amiga_checkNullableString = amiga_checkNullableString,
  .amiga_pushBSTR = amiga_pushBSTR,
  .amiga_checkBSTR = amiga_checkBSTR,
  .DeleteTask = DeleteTask,
  .strncpy = strncpy,
  .strcmp = strcmp,
  .malloc = malloc,
  .memset = memset,
  .DOSBase = 0,
  .seglists = 0,
};

void
RemBob(struct Bob* b)
{
  (b)->Flags |= BOBSAWAY;
}

CONST_STRPTR TO_CONST_STRPTR(void* data)
{
  return (CONST_STRPTR)data;
}

struct IntuiMessage* TO_IntuiMessage(struct Message* msg)
{
  return (struct IntuiMessage*)msg;
}

int
amiga_readVarTags(lua_State* L, struct TagItem* taglist, int maxTags, int argNum)
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

int
amiga_doTagList(lua_State* L, struct TagItem* tags, uint16_t maxTags, uint16_t argNumber)
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


static int32_t
_amiga_hexChar(int16_t s)
{
  static const char _string_hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  int32_t c;

  c = (s >= 0 && s <= 9) ? s + '0' : _string_hex[s - 10];
  return c;
}

static char*
_itoh(uint32_t n, uint16_t numChars)
{
  static char _string_buf[9];
  uint32_t c;
  char* ptr = &_string_buf[numChars];
  *ptr = 0;
  ptr--;
  for (c = 1; c <= numChars; c++) {
    *ptr = _amiga_hexChar(n & 0xf);
    ptr--;
    n = n >> 4;
  }

  return _string_buf;
}


static int
_amiga_itoh(lua_State* L)
{
  int value = luaL_checkinteger(L, 1);
  int numChars = luaL_checkinteger(L, 2);
  lua_pushstring(L, _itoh(value, numChars));
  return 1;
}

void
amiga_serialPrint(const char* text)
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

static int
_amiga_serialPrint(lua_State* L)    
{
  const char* msg = luaL_checkstring(L, 1);
  amiga_serialPrint(msg);
  amiga_serialPrint("\n");
  return 0;
}

static int
_amiga_createTask(lua_State* L)
{
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG pri = luaL_checkinteger(L, 2);
  const char* expression = luaL_checkstring(L, 3);
  APTR initPC = thread_make68000Thunk(L, expression);
  ULONG stackSize = luaL_checkinteger(L, 4);
  struct Task * _result = CreateTask(name, pri, initPC, stackSize);
  _lua_gen_pushTask(L, _result);
  return 1;
  //return 0;
}

static int
_amiga_makePtr(lua_State *L)
{
  uintptr_t addr = (uintptr_t)luaL_checknumber(L, 1);
  void *ptr = (void *)addr;
  lua_pushlightuserdata(L, ptr);
  return 1;
}

static int
_amiga_getLong(lua_State *L)
{
  long *ptr = (long *)lua_touserdata(L, 1);
  lua_pushinteger(L, *ptr);
  return 1;
}

static int
_amiga_setLong(lua_State *L)
{
  long *ptr = (long *)lua_touserdata(L, 1);
  long value = luaL_checkinteger(L, 2);
  *ptr = value;
  return 0;
}

int (*entry)(register amiga_da_lua_bft_t *bft asm("a0"));

void
amiga_dtor(lua_State *L)
{
  (void)L;

#ifndef AMIGA_BIG    
  dll_t* ptr = _bft.seglists;

  while (ptr) {
    BPTR seglist = (BPTR)ptr->data;
    UnLoadSeg(seglist);
    ptr = ptr->next;
  }

  dll_free(&_bft.seglists, 0);
#endif
}

void
amiga_lua_install(lua_State* L, uint16_t extensions)
{
  extern struct Custom custom;
  struct Custom **ud = (struct Custom **)lua_newuserdata(L, sizeof(struct Custom *));
  *ud = &custom;
  luaL_getmetatable(L, "Custom");
  lua_setmetatable(L, -2);
  lua_setglobal(L, "custom");
  
  lua_register(L, "NewGadgetList", _amiga_newGadgetPtr);
  lua_register(L, "GetPtr", _amiga_getPtr);
  lua_register(L, "MakePtr", _amiga_makePtr);
  lua_register(L, "GetLong", _amiga_getLong);
  lua_register(L, "SetLong", _amiga_setLong);    
  lua_register(L, "GetGadget", _amiga_getGadget);
  lua_register(L, "GetStringInfo", _amiga_getStringInfo);
  lua_register(L, "serial_print", _amiga_serialPrint);
  lua_register(L, "itoh", _amiga_itoh);
  lua_register(L, "CreateTask", _amiga_createTask);  
  
  lua_pushcfunction(L, _amiga_create_uint16_t_array);
  lua_setglobal(L, "CreateArrayUWORD");

  lua_pushcfunction(L, _amiga_create_chip_uint16_t_array);
  lua_setglobal(L, "CreateChipArrayUWORD");

#ifndef AMIGA_BIG  
  if (extensions) {
    BPTR seglist = LoadSeg("dos.lex");
    dll_append(&_bft.seglists, (void*)seglist);
    if (!seglist) {
      printf("failed to load dos.lex\n");
      return;
    }
    struct Segment *seg = (struct Segment *)BADDR(seglist);
    entry = (void*)&seg->seg_UC;  
    _bft.DOSBase = DOSBase;
    _bft.L = L;
    entry(&_bft);
  }
#else
  (void)extensions;
#endif
}
