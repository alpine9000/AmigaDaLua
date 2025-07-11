#include "lauxlib.h"
#include "lualib.h"
#include "amiga.h"

#define countof(x) (sizeof(x) / sizeof(x[0]))
static int
_amiga_readVarTags(lua_State* L, struct TagItem* taglist, int maxTags, int argNum);
static int _amiga_doTagList(lua_State *L, struct TagItem *tags,
                            uint16_t maxTags, uint16_t argNumber);
static void
_amiga_push_u16array_proxy(lua_State *L, uint16_t *array, int count);

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

int
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


int
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

int lua_u16array_index(lua_State *L) {
    uint16_t *array = lua_touserdata(L, lua_upvalueindex(1));
    int count       = lua_tointeger(L, lua_upvalueindex(2));

    // if key is not a number, let normal lookup proceed
    if (!lua_isinteger(L, 2)) {
        lua_getmetatable(L, 1);
        lua_pushvalue(L, 2);
        lua_rawget(L, -2);
        return 1;
    }
    
    int index = luaL_checkinteger(L, 2);
    if (index < 1 || index > count)
        return luaL_error(L, "index out of range (1..%d)", count);

    lua_pushinteger(L, array[index - 1]);
    return 1;
}

int lua_u16array_newindex(lua_State *L) {
    uint16_t *array = lua_touserdata(L, lua_upvalueindex(1));
    int count       = lua_tointeger(L, lua_upvalueindex(2));

    int index = luaL_checkinteger(L, 2);
    if (index < 1 || index > count)
        return luaL_error(L, "index out of range (1..%d)", count);

    uint16_t val = luaL_checkinteger(L, 3);

    array[index-1] = val;
    return 0;
}

static int
_amiga_u16array_element_ptr(lua_State *L)
{
  uint16_t *array = lua_touserdata(L, lua_upvalueindex(1));
  int count       = lua_tointeger(L, lua_upvalueindex(2));
  
  int index = luaL_checkinteger(L, 1);
  if (index < 1 || index > count)
    return luaL_error(L, "index out of range (1..%d)", count);
  // Return as lightuserdata (raw pointer)
  lua_pushlightuserdata(L, &array[index - 1]);
  return 1;
}

static void
_amiga_push_u16array_proxy(lua_State *L, uint16_t *array, int count)
{
    lua_newtable(L); // the proxy

    lua_pushlightuserdata(L, array);
    lua_pushinteger(L, count);

    lua_pushcclosure(L, lua_u16array_index, 2);
    lua_setfield(L, -2, "__index");

    lua_pushlightuserdata(L, array);
    lua_pushinteger(L, count);

    lua_pushcclosure(L, lua_u16array_newindex, 2);
    lua_setfield(L, -2, "__newindex");

    lua_pushlightuserdata(L, array);
    lua_pushinteger(L, count);
    lua_pushcclosure(L, _amiga_u16array_element_ptr, 2);
    lua_setfield(L, -2, "ptr");
    
    lua_setmetatable(L, -2);
}


static void
_amiga_push_u16array_metatable(lua_State *L, uint16_t *array, int count) {
    luaL_newmetatable(L, "u16array_proxy");

    lua_pushlightuserdata(L, array);
    lua_pushinteger(L, count);
    lua_pushcclosure(L, lua_u16array_index, 2);
    lua_setfield(L, -2, "__index");

    lua_pushlightuserdata(L, array);
    lua_pushinteger(L, count);
    lua_pushcclosure(L, lua_u16array_newindex, 2);
    lua_setfield(L, -2, "__newindex");

    lua_setmetatable(L, -2);    
}

static int
_amiga_create_u16array(lua_State *L) {
    int n = luaL_len(L, 1);
    uint16_t *data = lua_newuserdata(L, n * sizeof(uint16_t));

    for (int i = 0; i < n; i++) {
        lua_rawgeti(L, 1, i + 1);
	data[i] = (uint16_t)luaL_checkinteger(L, -1);
        lua_pop(L, 1);
    }

    _amiga_push_u16array_metatable(L, data, n);  // bind proxy metatable
    return 1;
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

  lua_pushcfunction(L, _amiga_create_u16array);
  lua_setglobal(L, "CreateArrayUWORD");
}


