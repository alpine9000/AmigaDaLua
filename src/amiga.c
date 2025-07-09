#include "lauxlib.h"
#include "lualib.h"
#include "amiga.h"
#include "_lua_gen.h"

#define countof(x) (sizeof(x) / sizeof(x[0]))


static int
_amiga_readVarTags(lua_State* L, TagItem* taglist, int maxTags, int argNum)
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
_amiga_openWindowTags(lua_State *L)
{
  struct NewWindow *nw = NULL;
  if (!lua_isnoneornil(L, 1)) {
    nw = _lua_gen_checkNewWindow(L, 1);
  }

  struct TagItem taglist[64];  
  _amiga_readVarTags(L, taglist, countof(taglist), 2);  
  
  struct Window *win = OpenWindowTagList(nw, taglist);
  if (!win) {
    lua_pushnil(L);
    return 1;
  }
  
  struct Window **ud = lua_newuserdata(L, sizeof(struct Window *));
  *ud = win;
  luaL_getmetatable(L, "Window");
  lua_setmetatable(L, -2);
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
_amiga_getVisualInfo(lua_State *L)
{
  struct Screen * screen = NULL;
  if (!lua_isnoneornil(L, 1)) {
    screen = _lua_gen_checkScreen(L, 1);      
  }
  
  int nargs = lua_gettop(L);
  if ((nargs - 1) % 2 != 0) {
    return luaL_error(L, "Expected even number of tag-value arguments after screen");
  }
  
  struct TagItem taglist[64];
  int tag_count = 0;
  
  for (int i = 2; i <= nargs; i += 2) {
    if (tag_count >= 63) {
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
    tag_count++;
  }
  
  taglist[tag_count].ti_Tag = TAG_END;
  taglist[tag_count].ti_Data = 0;

  APTR result = GetVisualInfoA(screen, taglist);
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
_amiga_createGadget(lua_State *L)
{
  uint32_t kind = (uint32_t)luaL_checkinteger(L, 1);

  struct Gadget * gadPtr = NULL;
  if (!lua_isnoneornil(L, 2)) {  
    gadPtr = _lua_gen_checkGadget(L, 2);
  }

  struct NewGadget * ngPtr = _lua_gen_checkNewGadget(L, 3);
  
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 4);  

  struct Gadget *result = CreateGadgetA(kind, gadPtr, ngPtr, taglist);
  _lua_gen_pushGadget(L, result);
  return 1; 
}


static int
_amiga_gt_setGadgetAttrsA(lua_State* L)
{
  struct Gadget * gadget = NULL;
  if (!lua_isnoneornil(L, 1)) {
    gadget = _lua_gen_checkGadget(L, 1);      
  }

  struct Window * window = NULL;
  if (!lua_isnoneornil(L, 2)) {
    window = _lua_gen_checkWindow(L, 2);      
  }  

  struct Requester * requester = NULL;
  if (!lua_isnoneornil(L, 3)) {
    requester = _lua_gen_checkRequester(L, 3);      
  }
  
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 4)) {  
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  
  GT_SetGadgetAttrsA(gadget, window, requester, tags);

  return 0;
}


static int
_amiga_gt_setGadgetAttrs(lua_State *L)
{
  struct Gadget * gadget = NULL;
  if (!lua_isnoneornil(L, 1)) {
    gadget = _lua_gen_checkGadget(L, 1);      
  }

  struct Window * window = NULL;
  if (!lua_isnoneornil(L, 2)) {
    window = _lua_gen_checkWindow(L, 2);      
  }  

  struct Requester * requester = NULL;
  if (!lua_isnoneornil(L, 3)) {
    requester = _lua_gen_checkRequester(L, 3);      
  }
  
  struct TagItem taglist[64];

  _amiga_readVarTags(L, taglist, countof(taglist), 4);

  GT_SetGadgetAttrsA(gadget, window, requester, taglist);  

  return 0;
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

int
_amiga_getStringInfo(lua_State* L)
{
  void* raw = lua_touserdata(L, 1);
  if (!raw) {
    luaL_error(L, "expected lightuserdata");
    return 0;
  }
  
  StringInfo* ptr = (StringInfo*)raw;
  _lua_gen_pushStringInfo(L, ptr);
  return 1;
}

void
lua_install(lua_State* L)
{
  lua_register(L, "OpenWindowTagList", _amiga_openWindowTagList);
  lua_register(L, "OpenWindowTags", _amiga_openWindowTags);
  lua_register(L, "NewGadgetList", _amiga_newGadgetPtr);
  lua_register(L, "GetVisualInfo", _amiga_getVisualInfo);  
  lua_register(L, "GetVisualInfoA", _amiga_getVisualInfoA);
  lua_register(L, "CreateGadgetA", _amiga_createGadgetA);
  lua_register(L, "CreateGadget", _amiga_createGadget);  
  lua_register(L, "GetPtr", _amiga_getPtr);
  lua_register(L, "GetGadget", _amiga_getGadget);
  lua_register(L, "GetStringInfo", _amiga_getStringInfo);
  lua_register(L, "GT_SetGadgetAttrs", _amiga_gt_setGadgetAttrs);
  lua_register(L, "GT_SetGadgetAttrsA", _amiga_gt_setGadgetAttrsA);  
}


