#include "lauxlib.h"
#include "lualib.h"
#include "amiga.h"
#include "_lua_gen.h"


static int
_lua_OpenWindowTagList(lua_State* L)
{
  // Arg 1: optional NewWindow*
  struct NewWindow *nw = NULL;
  if (!lua_isnoneornil(L, 1)) {
    if (lua_islightuserdata(L, 1)) {
      nw = (struct NewWindow *)lua_touserdata(L, 1);
    } else {
      return luaL_error(L, "Expected nil or lightuserdata for NewWindow (arg 1)");
    }
  }
  
  // Arg 2: TagList table (array of TagItem tables)
  luaL_checktype(L, 2, LUA_TTABLE);
  
  struct TagItem tags[32];
  int count = 0;
  
  lua_Integer len = luaL_len(L, 2);
  for (lua_Integer i = 1; i <= len && count < 31; ++i) {
    lua_rawgeti(L, 2, i); // -> stack: tag table
    
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
  
  struct Window *win = OpenWindowTagList(nw, tags);
  if (win) {
    _lua_gen_pushWindow(L, win);
  } else {
    lua_pushnil(L);
  }
  
  return 1;
}

void
lua_install(lua_State* L)
{
  lua_register(L, "OpenWindowTagList", _lua_OpenWindowTagList);  
}


