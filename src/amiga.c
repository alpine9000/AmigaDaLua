#include "lauxlib.h"
#include "lualib.h"
#include "amiga.h"
#include "_lua_gen.h"

#define countof(x) (sizeof(x) / sizeof(x[0]))

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
_amiga_openWindowTagList(lua_State* L)
{
  struct NewWindow *nw = NULL;
  if (!lua_isnoneornil(L, 1)) {
    nw = _lua_gen_checkNewWindow(L, 1);
  }
  
  struct TagItem tags[32];
  _amiga_doTagList(L, tags, countof(tags), 2);

  struct Window *win = OpenWindowTagList(nw, tags);
				      
  if (win) {
    _lua_gen_pushWindow(L, win);
  } else {
    lua_pushnil(L);
  }
  
  return 1;
}

static int
_amiga_getVisualInfoA(lua_State* L)
{
  struct Screen * screen = NULL;
  if (!lua_isnoneornil(L, 1)) {
    screen = _lua_gen_checkScreen(L, 1);      
  }
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 1)) {  
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  APTR result = GetVisualInfoA(screen, tags);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_amiga_createGadgetA(lua_State* L)
{
  ULONG kind = luaL_checkinteger(L, 1);

  struct Gadget * gadPtr = NULL;
  if (!lua_isnoneornil(L, 2)) {  
    gadPtr = _lua_gen_checkGadget(L, 2);
  }

  struct NewGadget * ngPtr = _lua_gen_checkNewGadget(L, 3);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 1)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 4);
    taglist = _tags;
  }

  struct Gadget * result = CreateGadgetA(kind, gadPtr, ngPtr, taglist);
  _lua_gen_pushGadget(L, result);
  return 1;
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
amiga_checkNullableString(lua_State *L, int stackIndex)
{
  const char* result = 0;
  if (!lua_isnoneornil(L, 1)) {
    result = luaL_checkstring(L, stackIndex);
  }
  return result;
}

struct Gadget**
amiga_checkGadgetPtr(lua_State* L, int stackIndex)
{
  struct GadgetPtr **ud = (struct GadgetPtr **)luaL_checkudata(L, stackIndex, "GadgetPtr");

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
  
  Gadget* ptr = (Gadget*)raw;
  _lua_gen_pushGadget(L, ptr);
  return 1;
}

void
lua_install(lua_State* L)
{
  lua_register(L, "OpenWindowTagList", _amiga_openWindowTagList);
  lua_register(L, "NewGadgetList", _amiga_newGadgetPtr);
  lua_register(L, "GetVisualInfoA", _amiga_getVisualInfoA);
  lua_register(L, "CreateGadgetA", _amiga_createGadgetA);
  lua_register(L, "GetPtr", _amiga_getPtr);
  lua_register(L, "GetGadget", _amiga_getGadget);
}


