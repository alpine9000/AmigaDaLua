// generated with roid_lua_generate.py - run: python3 roid_lua_generate.py roid_lua_template.h > _lua_gen.h
void

_lua_gen_pushWindow(lua_State *L, struct Window* obj)
{
  if (obj) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = obj;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Window*
_lua_gen_checkWindow(lua_State* L, int stackIndex)
{
  struct Window **ud = (struct Window **)luaL_checkudata(L, stackIndex, "Window");

  if (!ud) {
    return 0;
  }
  return *ud;
}
void

_lua_gen_pushRastPort(lua_State *L, struct RastPort* obj)
{
  if (obj) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = obj;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct RastPort*
_lua_gen_checkRastPort(lua_State* L, int stackIndex)
{
  struct RastPort **ud = (struct RastPort **)luaL_checkudata(L, stackIndex, "RastPort");

  if (!ud) {
    return 0;
  }
  return *ud;
}
void

_lua_gen_pushMsgPort(lua_State *L, struct MsgPort* obj)
{
  if (obj) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = obj;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MsgPort*
_lua_gen_checkMsgPort(lua_State* L, int stackIndex)
{
  struct MsgPort **ud = (struct MsgPort **)luaL_checkudata(L, stackIndex, "MsgPort");

  if (!ud) {
    return 0;
  }
  return *ud;
}
void

_lua_gen_pushMessage(lua_State *L, struct Message* obj)
{
  if (obj) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = obj;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Message*
_lua_gen_checkMessage(lua_State* L, int stackIndex)
{
  struct Message **ud = (struct Message **)luaL_checkudata(L, stackIndex, "Message");

  if (!ud) {
    return 0;
  }
  return *ud;
}
void

_lua_gen_pushIntuiMessage(lua_State *L, struct IntuiMessage* obj)
{
  if (obj) {
    struct IntuiMessage **ud = (struct IntuiMessage **)lua_newuserdata(L, sizeof(struct IntuiMessage *));
    *ud = obj;
    luaL_getmetatable(L, "IntuiMessage");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct IntuiMessage*
_lua_gen_checkIntuiMessage(lua_State* L, int stackIndex)
{
  struct IntuiMessage **ud = (struct IntuiMessage **)luaL_checkudata(L, stackIndex, "IntuiMessage");

  if (!ud) {
    return 0;
  }
  return *ud;
}
static int
_lua_Open(lua_State* L)
{
  CONST_STRPTR name = luaL_checkstring(L, 1);
  LONG accessMode = luaL_checkinteger(L, 2);
  BPTR result = Open(name, accessMode);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_Read(lua_State* L)
{
  BPTR file = luaL_checkinteger(L, 1);
  APTR buffer = lua_touserdata(L, 2);
  LONG length = luaL_checkinteger(L, 3);
  LONG result = Read(file, buffer, length);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_PutStr(lua_State* L)
{
  CONST_STRPTR str = luaL_checkstring(L, 1);
  LONG result = PutStr(str);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_AllocMem(lua_State* L)
{
  ULONG byteSize = luaL_checkinteger(L, 1);
  ULONG requirements = luaL_checkinteger(L, 2);
  APTR result = AllocMem(byteSize, requirements);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_lua_GetMsg(lua_State* L)
{
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * result = GetMsg(port);
  _lua_gen_pushMessage(L, result);
  return 1;
}

static int
_lua_ReplyMsg(lua_State* L)
{
  struct Message * message = _lua_gen_checkMessage(L, 1);
  ReplyMsg(message);
  return 0;
}

static int
_lua_WaitPort(lua_State* L)
{
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * result = WaitPort(port);
  _lua_gen_pushMessage(L, result);
  return 1;
}

static int
_lua_Text(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  CONST_STRPTR string = luaL_checkstring(L, 2);
  ULONG count = luaL_checkinteger(L, 3);
  LONG result = Text(rp, string, count);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_Move(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  Move(rp, x, y);
  return 0;
}

static int
_lua_CloseWindow(lua_State* L)
{
  struct Window * window = _lua_gen_checkWindow(L, 1);
  CloseWindow(window);
  return 0;
}

static int
_lua_gen_Window_newindex(lua_State *L)
{
  Window *obj = *(Window **)luaL_checkudata(L, 1, "Window");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextWindow") == 0) {
    obj->NextWindow = (Window *)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "LeftEdge") == 0) {
    obj->LeftEdge = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TopEdge") == 0) {
    obj->TopEdge = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Width") == 0) {
    obj->Width = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Height") == 0) {
    obj->Height = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MouseY") == 0) {
    obj->MouseY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MouseX") == 0) {
    obj->MouseX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MinWidth") == 0) {
    obj->MinWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MinHeight") == 0) {
    obj->MinHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxWidth") == 0) {
    obj->MaxWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxHeight") == 0) {
    obj->MaxHeight = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ReqCount") == 0) {
    obj->ReqCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RPort") == 0) {
    obj->RPort = (RastPort *)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "BorderLeft") == 0) {
    obj->BorderLeft = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BorderTop") == 0) {
    obj->BorderTop = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BorderRight") == 0) {
    obj->BorderRight = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BorderBottom") == 0) {
    obj->BorderBottom = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BorderRPort") == 0) {
    obj->BorderRPort = (RastPort *)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "Parent") == 0) {
    obj->Parent = (Window *)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "Descendant") == 0) {
    obj->Descendant = (Window *)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "PtrHeight") == 0) {
    obj->PtrHeight = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PtrWidth") == 0) {
    obj->PtrWidth = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "XOffset") == 0) {
    obj->XOffset = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "YOffset") == 0) {
    obj->YOffset = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "IDCMPFlags") == 0) {
    obj->IDCMPFlags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "UserPort") == 0) {
    obj->UserPort = (MsgPort *)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "WindowPort") == 0) {
    obj->WindowPort = (MsgPort *)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "MessageKey") == 0) {
    obj->MessageKey = (IntuiMessage *)luaL_checkudata(L, 3, "IntuiMessage");
    return 0;
  }
  if (strcmp(key, "DetailPen") == 0) {
    obj->DetailPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlockPen") == 0) {
    obj->BlockPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GZZMouseX") == 0) {
    obj->GZZMouseX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GZZMouseY") == 0) {
    obj->GZZMouseY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GZZWidth") == 0) {
    obj->GZZWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GZZHeight") == 0) {
    obj->GZZHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MoreFlags") == 0) {
    obj->MoreFlags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}

static int
_lua_gen_Window_index(lua_State *L)
{
  Window *obj = *(Window **)luaL_checkudata(L, 1, "Window");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = obj->NextWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LeftEdge") == 0) {
    lua_pushinteger(L, obj->LeftEdge);
    return 1;
  }
  if (strcmp(key, "TopEdge") == 0) {
    lua_pushinteger(L, obj->TopEdge);
    return 1;
  }
  if (strcmp(key, "Width") == 0) {
    lua_pushinteger(L, obj->Width);
    return 1;
  }
  if (strcmp(key, "Height") == 0) {
    lua_pushinteger(L, obj->Height);
    return 1;
  }
  if (strcmp(key, "MouseY") == 0) {
    lua_pushinteger(L, obj->MouseY);
    return 1;
  }
  if (strcmp(key, "MouseX") == 0) {
    lua_pushinteger(L, obj->MouseX);
    return 1;
  }
  if (strcmp(key, "MinWidth") == 0) {
    lua_pushinteger(L, obj->MinWidth);
    return 1;
  }
  if (strcmp(key, "MinHeight") == 0) {
    lua_pushinteger(L, obj->MinHeight);
    return 1;
  }
  if (strcmp(key, "MaxWidth") == 0) {
    lua_pushinteger(L, obj->MaxWidth);
    return 1;
  }
  if (strcmp(key, "MaxHeight") == 0) {
    lua_pushinteger(L, obj->MaxHeight);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "ReqCount") == 0) {
    lua_pushinteger(L, obj->ReqCount);
    return 1;
  }
  if (strcmp(key, "RPort") == 0) {
    RastPort **ud = (RastPort **)lua_newuserdata(L, sizeof(RastPort *));
    *ud = obj->RPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BorderLeft") == 0) {
    lua_pushinteger(L, obj->BorderLeft);
    return 1;
  }
  if (strcmp(key, "BorderTop") == 0) {
    lua_pushinteger(L, obj->BorderTop);
    return 1;
  }
  if (strcmp(key, "BorderRight") == 0) {
    lua_pushinteger(L, obj->BorderRight);
    return 1;
  }
  if (strcmp(key, "BorderBottom") == 0) {
    lua_pushinteger(L, obj->BorderBottom);
    return 1;
  }
  if (strcmp(key, "BorderRPort") == 0) {
    RastPort **ud = (RastPort **)lua_newuserdata(L, sizeof(RastPort *));
    *ud = obj->BorderRPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Parent") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = obj->Parent;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Descendant") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = obj->Descendant;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PtrHeight") == 0) {
    lua_pushinteger(L, obj->PtrHeight);
    return 1;
  }
  if (strcmp(key, "PtrWidth") == 0) {
    lua_pushinteger(L, obj->PtrWidth);
    return 1;
  }
  if (strcmp(key, "XOffset") == 0) {
    lua_pushinteger(L, obj->XOffset);
    return 1;
  }
  if (strcmp(key, "YOffset") == 0) {
    lua_pushinteger(L, obj->YOffset);
    return 1;
  }
  if (strcmp(key, "IDCMPFlags") == 0) {
    lua_pushinteger(L, obj->IDCMPFlags);
    return 1;
  }
  if (strcmp(key, "UserPort") == 0) {
    MsgPort **ud = (MsgPort **)lua_newuserdata(L, sizeof(MsgPort *));
    *ud = obj->UserPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "WindowPort") == 0) {
    MsgPort **ud = (MsgPort **)lua_newuserdata(L, sizeof(MsgPort *));
    *ud = obj->WindowPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MessageKey") == 0) {
    IntuiMessage **ud = (IntuiMessage **)lua_newuserdata(L, sizeof(IntuiMessage *));
    *ud = obj->MessageKey;
    luaL_getmetatable(L, "IntuiMessage");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DetailPen") == 0) {
    lua_pushinteger(L, obj->DetailPen);
    return 1;
  }
  if (strcmp(key, "BlockPen") == 0) {
    lua_pushinteger(L, obj->BlockPen);
    return 1;
  }
  if (strcmp(key, "GZZMouseX") == 0) {
    lua_pushinteger(L, obj->GZZMouseX);
    return 1;
  }
  if (strcmp(key, "GZZMouseY") == 0) {
    lua_pushinteger(L, obj->GZZMouseY);
    return 1;
  }
  if (strcmp(key, "GZZWidth") == 0) {
    lua_pushinteger(L, obj->GZZWidth);
    return 1;
  }
  if (strcmp(key, "GZZHeight") == 0) {
    lua_pushinteger(L, obj->GZZHeight);
    return 1;
  }
  if (strcmp(key, "MoreFlags") == 0) {
    lua_pushinteger(L, obj->MoreFlags);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Window_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "NextWindow");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "MinWidth");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "MinHeight");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "MaxWidth");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "MaxHeight");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "ReqCount");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "RPort");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "BorderLeft");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "BorderTop");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "BorderRight");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "BorderBottom");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "BorderRPort");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "Parent");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "Descendant");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "Pointer");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "PtrHeight");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "PtrWidth");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "XOffset");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "YOffset");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "IDCMPFlags");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "UserPort");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "WindowPort");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "MessageKey");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "GZZMouseX");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "GZZMouseY");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "GZZWidth");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "GZZHeight");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "MoreFlags");
  lua_rawseti(L, -2, 39);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Window(lua_State *L) {
  if (luaL_newmetatable(L, "Window")) {
    lua_pushcfunction(L, _lua_gen_Window_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Window_newindex);
    lua_setfield(L, -2, "__newindex");
    _lua_gen_Window_install_keys(L);
    lua_pushstring(L, "Window");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_RastPort_newindex(lua_State *L)
{
  RastPort *obj = *(RastPort **)luaL_checkudata(L, 1, "RastPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Mask") == 0) {
    obj->Mask = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "FgPen") == 0) {
    obj->FgPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BgPen") == 0) {
    obj->BgPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AOlPen") == 0) {
    obj->AOlPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DrawMode") == 0) {
    obj->DrawMode = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AreaPtSz") == 0) {
    obj->AreaPtSz = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "linpatcnt") == 0) {
    obj->linpatcnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dummy") == 0) {
    obj->dummy = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LinePtrn") == 0) {
    obj->LinePtrn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cp_x") == 0) {
    obj->cp_x = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cp_y") == 0) {
    obj->cp_y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PenWidth") == 0) {
    obj->PenWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PenHeight") == 0) {
    obj->PenHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AlgoStyle") == 0) {
    obj->AlgoStyle = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TxFlags") == 0) {
    obj->TxFlags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TxHeight") == 0) {
    obj->TxHeight = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TxWidth") == 0) {
    obj->TxWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TxBaseline") == 0) {
    obj->TxBaseline = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TxSpacing") == 0) {
    obj->TxSpacing = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}

static int
_lua_gen_RastPort_index(lua_State *L)
{
  RastPort *obj = *(RastPort **)luaL_checkudata(L, 1, "RastPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Mask") == 0) {
    lua_pushinteger(L, obj->Mask);
    return 1;
  }
  if (strcmp(key, "FgPen") == 0) {
    lua_pushinteger(L, obj->FgPen);
    return 1;
  }
  if (strcmp(key, "BgPen") == 0) {
    lua_pushinteger(L, obj->BgPen);
    return 1;
  }
  if (strcmp(key, "AOlPen") == 0) {
    lua_pushinteger(L, obj->AOlPen);
    return 1;
  }
  if (strcmp(key, "DrawMode") == 0) {
    lua_pushinteger(L, obj->DrawMode);
    return 1;
  }
  if (strcmp(key, "AreaPtSz") == 0) {
    lua_pushinteger(L, obj->AreaPtSz);
    return 1;
  }
  if (strcmp(key, "linpatcnt") == 0) {
    lua_pushinteger(L, obj->linpatcnt);
    return 1;
  }
  if (strcmp(key, "dummy") == 0) {
    lua_pushinteger(L, obj->dummy);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "LinePtrn") == 0) {
    lua_pushinteger(L, obj->LinePtrn);
    return 1;
  }
  if (strcmp(key, "cp_x") == 0) {
    lua_pushinteger(L, obj->cp_x);
    return 1;
  }
  if (strcmp(key, "cp_y") == 0) {
    lua_pushinteger(L, obj->cp_y);
    return 1;
  }
  if (strcmp(key, "PenWidth") == 0) {
    lua_pushinteger(L, obj->PenWidth);
    return 1;
  }
  if (strcmp(key, "PenHeight") == 0) {
    lua_pushinteger(L, obj->PenHeight);
    return 1;
  }
  if (strcmp(key, "AlgoStyle") == 0) {
    lua_pushinteger(L, obj->AlgoStyle);
    return 1;
  }
  if (strcmp(key, "TxFlags") == 0) {
    lua_pushinteger(L, obj->TxFlags);
    return 1;
  }
  if (strcmp(key, "TxHeight") == 0) {
    lua_pushinteger(L, obj->TxHeight);
    return 1;
  }
  if (strcmp(key, "TxWidth") == 0) {
    lua_pushinteger(L, obj->TxWidth);
    return 1;
  }
  if (strcmp(key, "TxBaseline") == 0) {
    lua_pushinteger(L, obj->TxBaseline);
    return 1;
  }
  if (strcmp(key, "TxSpacing") == 0) {
    lua_pushinteger(L, obj->TxSpacing);
    return 1;
  }
  return 0;
}

static void
_lua_gen_RastPort_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "AreaPtrn");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Mask");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "FgPen");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "BgPen");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "AOlPen");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "DrawMode");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "AreaPtSz");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "linpatcnt");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dummy");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "LinePtrn");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "cp_x");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "cp_y");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "PenWidth");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "PenHeight");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "AlgoStyle");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "TxFlags");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "TxHeight");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "TxWidth");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "TxBaseline");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "TxSpacing");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "RP_User");
  lua_rawseti(L, -2, 22);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_RastPort(lua_State *L) {
  if (luaL_newmetatable(L, "RastPort")) {
    lua_pushcfunction(L, _lua_gen_RastPort_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_RastPort_newindex);
    lua_setfield(L, -2, "__newindex");
    _lua_gen_RastPort_install_keys(L);
    lua_pushstring(L, "RastPort");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MsgPort_newindex(lua_State *L)
{
  MsgPort *obj = *(MsgPort **)luaL_checkudata(L, 1, "MsgPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mp_Flags") == 0) {
    obj->mp_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_SigBit") == 0) {
    obj->mp_SigBit = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}

static int
_lua_gen_MsgPort_index(lua_State *L)
{
  MsgPort *obj = *(MsgPort **)luaL_checkudata(L, 1, "MsgPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mp_Flags") == 0) {
    lua_pushinteger(L, obj->mp_Flags);
    return 1;
  }
  if (strcmp(key, "mp_SigBit") == 0) {
    lua_pushinteger(L, obj->mp_SigBit);
    return 1;
  }
  return 0;
}

static void
_lua_gen_MsgPort_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mp_Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mp_SigBit");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MsgPort(lua_State *L) {
  if (luaL_newmetatable(L, "MsgPort")) {
    lua_pushcfunction(L, _lua_gen_MsgPort_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MsgPort_newindex);
    lua_setfield(L, -2, "__newindex");
    _lua_gen_MsgPort_install_keys(L);
    lua_pushstring(L, "MsgPort");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Message_newindex(lua_State *L)
{
  Message *obj = *(Message **)luaL_checkudata(L, 1, "Message");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mn_ReplyPort") == 0) {
    obj->mn_ReplyPort = (MsgPort *)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "mn_Length") == 0) {
    obj->mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}

static int
_lua_gen_Message_index(lua_State *L)
{
  Message *obj = *(Message **)luaL_checkudata(L, 1, "Message");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mn_ReplyPort") == 0) {
    MsgPort **ud = (MsgPort **)lua_newuserdata(L, sizeof(MsgPort *));
    *ud = obj->mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mn_Length") == 0) {
    lua_pushinteger(L, obj->mn_Length);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Message_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mn_ReplyPort");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mn_Length");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Message(lua_State *L) {
  if (luaL_newmetatable(L, "Message")) {
    lua_pushcfunction(L, _lua_gen_Message_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Message_newindex);
    lua_setfield(L, -2, "__newindex");
    _lua_gen_Message_install_keys(L);
    lua_pushstring(L, "Message");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_IntuiMessage_newindex(lua_State *L)
{
  IntuiMessage *obj = *(IntuiMessage **)luaL_checkudata(L, 1, "IntuiMessage");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ExecMessage") == 0) {
    Message *val = *(Message **)luaL_checkudata(L, 3, "Message");
    obj->ExecMessage = *val;
    return 0;
  }
  if (strcmp(key, "Class") == 0) {
    obj->Class = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Code") == 0) {
    obj->Code = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Qualifier") == 0) {
    obj->Qualifier = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "IAddress") == 0) {
    obj->IAddress = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "MouseX") == 0) {
    obj->MouseX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MouseY") == 0) {
    obj->MouseY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Seconds") == 0) {
    obj->Seconds = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Micros") == 0) {
    obj->Micros = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "IDCMPWindow") == 0) {
    obj->IDCMPWindow = (Window *)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    obj->SpecialLink = (IntuiMessage *)luaL_checkudata(L, 3, "IntuiMessage");
    return 0;
  }
  return 0;
}

static int
_lua_gen_IntuiMessage_index(lua_State *L)
{
  IntuiMessage *obj = *(IntuiMessage **)luaL_checkudata(L, 1, "IntuiMessage");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ExecMessage") == 0) {
    Message **ud = (Message **)lua_newuserdata(L, sizeof(Message *));
    *ud = &obj->ExecMessage;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Class") == 0) {
    lua_pushinteger(L, obj->Class);
    return 1;
  }
  if (strcmp(key, "Code") == 0) {
    lua_pushinteger(L, obj->Code);
    return 1;
  }
  if (strcmp(key, "Qualifier") == 0) {
    lua_pushinteger(L, obj->Qualifier);
    return 1;
  }
  if (strcmp(key, "IAddress") == 0) {
    lua_pushlightuserdata(L, obj->IAddress);
    return 1;
  }
  if (strcmp(key, "MouseX") == 0) {
    lua_pushinteger(L, obj->MouseX);
    return 1;
  }
  if (strcmp(key, "MouseY") == 0) {
    lua_pushinteger(L, obj->MouseY);
    return 1;
  }
  if (strcmp(key, "Seconds") == 0) {
    lua_pushinteger(L, obj->Seconds);
    return 1;
  }
  if (strcmp(key, "Micros") == 0) {
    lua_pushinteger(L, obj->Micros);
    return 1;
  }
  if (strcmp(key, "IDCMPWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = obj->IDCMPWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    IntuiMessage **ud = (IntuiMessage **)lua_newuserdata(L, sizeof(IntuiMessage *));
    *ud = obj->SpecialLink;
    luaL_getmetatable(L, "IntuiMessage");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_IntuiMessage_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ExecMessage");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Class");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Code");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Qualifier");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "IAddress");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Seconds");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Micros");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "IDCMPWindow");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "SpecialLink");
  lua_rawseti(L, -2, 11);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_IntuiMessage(lua_State *L) {
  if (luaL_newmetatable(L, "IntuiMessage")) {
    lua_pushcfunction(L, _lua_gen_IntuiMessage_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_IntuiMessage_newindex);
    lua_setfield(L, -2, "__newindex");
    _lua_gen_IntuiMessage_install_keys(L);
    lua_pushstring(L, "IntuiMessage");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_TO_CONST_STRPTR(lua_State* L)
{
  void * data = lua_touserdata(L, 1);
  CONST_STRPTR result = TO_CONST_STRPTR(data);
  lua_pushstring(L, result);
  return 1;
}

static int
_lua_TO_IntuiMessage(lua_State* L)
{
  struct Message * msg = _lua_gen_checkMessage(L, 1);
  struct IntuiMessage * result = TO_IntuiMessage(msg);
  _lua_gen_pushIntuiMessage(L, result);
  return 1;
}

static void
_lua_gen_install_defines(lua_State *L)
{
  lua_pushinteger(L, TRUE);
  lua_setglobal(L, "TRUE");
  lua_pushinteger(L, MEMF_PUBLIC);
  lua_setglobal(L, "MEMF_PUBLIC");
  lua_pushinteger(L, MEMF_CLEAR);
  lua_setglobal(L, "MEMF_CLEAR");
  lua_pushinteger(L, MEMF_CHIP);
  lua_setglobal(L, "MEMF_CHIP");
  lua_pushinteger(L, MEMF_FAST);
  lua_setglobal(L, "MEMF_FAST");
  lua_pushinteger(L, MODE_OLDFILE);
  lua_setglobal(L, "MODE_OLDFILE");
  lua_pushinteger(L, MODE_NEWFILE);
  lua_setglobal(L, "MODE_NEWFILE");
  lua_pushinteger(L, MODE_READWRITE);
  lua_setglobal(L, "MODE_READWRITE");
  lua_pushinteger(L, DOSTRUE);
  lua_setglobal(L, "DOSTRUE");
  lua_pushinteger(L, DOSFALSE);
  lua_setglobal(L, "DOSFALSE");
  lua_pushinteger(L, WA_Title);
  lua_setglobal(L, "WA_Title");
  lua_pushinteger(L, WA_Width);
  lua_setglobal(L, "WA_Width");
  lua_pushinteger(L, WA_Height);
  lua_setglobal(L, "WA_Height");
  lua_pushinteger(L, WA_Left);
  lua_setglobal(L, "WA_Left");
  lua_pushinteger(L, WA_Top);
  lua_setglobal(L, "WA_Top");
  lua_pushinteger(L, WA_CloseGadget);
  lua_setglobal(L, "WA_CloseGadget");
  lua_pushinteger(L, WA_DepthGadget);
  lua_setglobal(L, "WA_DepthGadget");
  lua_pushinteger(L, WA_DragBar);
  lua_setglobal(L, "WA_DragBar");
  lua_pushinteger(L, WA_Activate);
  lua_setglobal(L, "WA_Activate");
  lua_pushinteger(L, WA_SmartRefresh);
  lua_setglobal(L, "WA_SmartRefresh");
  lua_pushinteger(L, WA_IDCMP);
  lua_setglobal(L, "WA_IDCMP");
  lua_pushinteger(L, TAG_END);
  lua_setglobal(L, "TAG_END");
  lua_pushinteger(L, IDCMP_CLOSEWINDOW);
  lua_setglobal(L, "IDCMP_CLOSEWINDOW");
  lua_pushinteger(L, IDCMP_RAWKEY);
  lua_setglobal(L, "IDCMP_RAWKEY");
  lua_pushinteger(L, IDCMP_MOUSEMOVE);
  lua_setglobal(L, "IDCMP_MOUSEMOVE");
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
  _lua_gen_install_meta_Window(L);
  _lua_gen_install_meta_RastPort(L);
  _lua_gen_install_meta_MsgPort(L);
  _lua_gen_install_meta_Message(L);
  _lua_gen_install_meta_IntuiMessage(L);
}

static void
_lua_gen_installGeneratedEnums(lua_State *L)
{
  (void)L;
}

static void
_lua_gen_installGeneratedFunctions(lua_State *L)
{
  lua_register(L, "Open", _lua_Open);
  lua_register(L, "Read", _lua_Read);
  lua_register(L, "PutStr", _lua_PutStr);
  lua_register(L, "AllocMem", _lua_AllocMem);
  lua_register(L, "GetMsg", _lua_GetMsg);
  lua_register(L, "ReplyMsg", _lua_ReplyMsg);
  lua_register(L, "WaitPort", _lua_WaitPort);
  lua_register(L, "Text", _lua_Text);
  lua_register(L, "Move", _lua_Move);
  lua_register(L, "CloseWindow", _lua_CloseWindow);
  lua_register(L, "TO_CONST_STRPTR", _lua_TO_CONST_STRPTR);
  lua_register(L, "TO_IntuiMessage", _lua_TO_IntuiMessage);
}

static void
_lua_gen_installGeneratedFunctionCallers(lua_State *L)
{
  (void)L;
}

void
lua_gen_install(lua_State *L) {
  _lua_gen_install_defines(L);

  _lua_gen_installGeneratedMetaTables(L);
  _lua_gen_installGeneratedEnums(L);
  _lua_gen_installGeneratedFunctions(L);
  _lua_gen_installGeneratedFunctionCallers(L);
}

