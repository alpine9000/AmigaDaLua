// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h

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
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Window **ud = (struct Window **)luaL_checkudata(L, stackIndex, "Window");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
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
   if (!lua_isnoneornil(L, stackIndex)) {
      struct RastPort **ud = (struct RastPort **)luaL_checkudata(L, stackIndex, "RastPort");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTagItem(lua_State *L, struct TagItem* obj)
{
  if (obj) {
    struct TagItem **ud = (struct TagItem **)lua_newuserdata(L, sizeof(struct TagItem *));
    *ud = obj;
    luaL_getmetatable(L, "TagItem");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct TagItem*
_lua_gen_checkTagItem(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct TagItem **ud = (struct TagItem **)luaL_checkudata(L, stackIndex, "TagItem");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
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
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MsgPort **ud = (struct MsgPort **)luaL_checkudata(L, stackIndex, "MsgPort");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
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
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Message **ud = (struct Message **)luaL_checkudata(L, stackIndex, "Message");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
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
   if (!lua_isnoneornil(L, stackIndex)) {
      struct IntuiMessage **ud = (struct IntuiMessage **)luaL_checkudata(L, stackIndex, "IntuiMessage");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushGadget(lua_State *L, struct Gadget* obj)
{
  if (obj) {
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = obj;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Gadget*
_lua_gen_checkGadget(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Gadget **ud = (struct Gadget **)luaL_checkudata(L, stackIndex, "Gadget");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushScreen(lua_State *L, struct Screen* obj)
{
  if (obj) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = obj;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Screen*
_lua_gen_checkScreen(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Screen **ud = (struct Screen **)luaL_checkudata(L, stackIndex, "Screen");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushNewGadget(lua_State *L, struct NewGadget* obj)
{
  if (obj) {
    struct NewGadget **ud = (struct NewGadget **)lua_newuserdata(L, sizeof(struct NewGadget *));
    *ud = obj;
    luaL_getmetatable(L, "NewGadget");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct NewGadget*
_lua_gen_checkNewGadget(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct NewGadget **ud = (struct NewGadget **)luaL_checkudata(L, stackIndex, "NewGadget");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushNewWindow(lua_State *L, struct NewWindow* obj)
{
  if (obj) {
    struct NewWindow **ud = (struct NewWindow **)lua_newuserdata(L, sizeof(struct NewWindow *));
    *ud = obj;
    luaL_getmetatable(L, "NewWindow");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct NewWindow*
_lua_gen_checkNewWindow(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct NewWindow **ud = (struct NewWindow **)luaL_checkudata(L, stackIndex, "NewWindow");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushRequester(lua_State *L, struct Requester* obj)
{
  if (obj) {
    struct Requester **ud = (struct Requester **)lua_newuserdata(L, sizeof(struct Requester *));
    *ud = obj;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Requester*
_lua_gen_checkRequester(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Requester **ud = (struct Requester **)luaL_checkudata(L, stackIndex, "Requester");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTextAttr(lua_State *L, struct TextAttr* obj)
{
  if (obj) {
    struct TextAttr **ud = (struct TextAttr **)lua_newuserdata(L, sizeof(struct TextAttr *));
    *ud = obj;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct TextAttr*
_lua_gen_checkTextAttr(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct TextAttr **ud = (struct TextAttr **)luaL_checkudata(L, stackIndex, "TextAttr");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushStringInfo(lua_State *L, struct StringInfo* obj)
{
  if (obj) {
    struct StringInfo **ud = (struct StringInfo **)lua_newuserdata(L, sizeof(struct StringInfo *));
    *ud = obj;
    luaL_getmetatable(L, "StringInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct StringInfo*
_lua_gen_checkStringInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct StringInfo **ud = (struct StringInfo **)luaL_checkudata(L, stackIndex, "StringInfo");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTextFont(lua_State *L, struct TextFont* obj)
{
  if (obj) {
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = obj;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct TextFont*
_lua_gen_checkTextFont(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct TextFont **ud = (struct TextFont **)luaL_checkudata(L, stackIndex, "TextFont");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushGadgetPtr(lua_State *L, struct GadgetPtr* obj)
{
  if (obj) {
    struct GadgetPtr **ud = (struct GadgetPtr **)lua_newuserdata(L, sizeof(struct GadgetPtr *));
    *ud = obj;
    luaL_getmetatable(L, "GadgetPtr");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct GadgetPtr*
_lua_gen_checkGadgetPtr(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct GadgetPtr **ud = (struct GadgetPtr **)luaL_checkudata(L, stackIndex, "GadgetPtr");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}
static int
_lua_Open(lua_State* L)
{
  CONST_STRPTR name = amiga_checkNullableString(L, 1);
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
  CONST_STRPTR str = amiga_checkNullableString(L, 1);
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
  CONST_STRPTR string = amiga_checkNullableString(L, 2);
  ULONG count = luaL_checkinteger(L, 3);
  LONG result = Text(rp, string, count);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_OpenFont(lua_State* L)
{
  const struct TextAttr * textAttr = _lua_gen_checkTextAttr(L, 1);
  struct TextFont * result = OpenFont(textAttr);
  _lua_gen_pushTextFont(L, result);
  return 1;
}

static int
_lua_CloseFont(lua_State* L)
{
  struct TextFont * textFont = _lua_gen_checkTextFont(L, 1);
  CloseFont(textFont);
  return 0;
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
_lua_ActivateGadget(lua_State* L)
{
  struct Gadget * gadgets = _lua_gen_checkGadget(L, 1);
  struct Window * window = _lua_gen_checkWindow(L, 2);
  struct Requester * requester = _lua_gen_checkRequester(L, 3);
  BOOL result = ActivateGadget(gadgets, window, requester);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_LockPubScreen(lua_State* L)
{
  CONST_STRPTR name = amiga_checkNullableString(L, 1);
  struct Screen * result = LockPubScreen(name);
  _lua_gen_pushScreen(L, result);
  return 1;
}

static int
_lua_UnlockPubScreen(lua_State* L)
{
  CONST_STRPTR name = amiga_checkNullableString(L, 1);
  struct Screen * screen = _lua_gen_checkScreen(L, 2);
  UnlockPubScreen(name, screen);
  return 0;
}

static int
_lua_FreeGadgets(lua_State* L)
{
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  FreeGadgets(gad);
  return 0;
}

static int
_lua_GT_GetIMsg(lua_State* L)
{
  struct MsgPort * iport = _lua_gen_checkMsgPort(L, 1);
  struct IntuiMessage * result = GT_GetIMsg(iport);
  _lua_gen_pushIntuiMessage(L, result);
  return 1;
}

static int
_lua_GT_ReplyIMsg(lua_State* L)
{
  struct IntuiMessage * imsg = _lua_gen_checkIntuiMessage(L, 1);
  GT_ReplyIMsg(imsg);
  return 0;
}

static int
_lua_GT_RefreshWindow(lua_State* L)
{
  struct Window * win = _lua_gen_checkWindow(L, 1);
  struct Requester * req = _lua_gen_checkRequester(L, 2);
  GT_RefreshWindow(win, req);
  return 0;
}

static int
_lua_GT_BeginRefresh(lua_State* L)
{
  struct Window * win = _lua_gen_checkWindow(L, 1);
  GT_BeginRefresh(win);
  return 0;
}

static int
_lua_GT_EndRefresh(lua_State* L)
{
  struct Window * win = _lua_gen_checkWindow(L, 1);
  LONG complete = luaL_checkinteger(L, 2);
  GT_EndRefresh(win, complete);
  return 0;
}

static int
_lua_CreateContext(lua_State* L)
{
  struct Gadget ** glistptr = amiga_checkGadgetPtr(L, 1);
  struct Gadget * result = CreateContext(glistptr);
  _lua_gen_pushGadget(L, result);
  return 1;
}

static int
_lua_FreeVisualInfo(lua_State* L)
{
  APTR vi = lua_touserdata(L, 1);
  FreeVisualInfo(vi);
  return 0;
}

static int
_lua_gen_Window_newindex(lua_State *L)
{
  Window *obj = *(Window **)luaL_checkudata(L, 1, "Window");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextWindow") == 0) {
    // finder 1
    obj->NextWindow = *(Window **)luaL_checkudata(L, 3, "Window");
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
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstRequest") == 0) {
    // finder 1
    obj->FirstRequest = *(Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "DMRequest") == 0) {
    // finder 1
    obj->DMRequest = *(Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "ReqCount") == 0) {
    obj->ReqCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WScreen") == 0) {
    // finder 1
    obj->WScreen = *(Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "RPort") == 0) {
    // finder 1
    obj->RPort = *(RastPort **)luaL_checkudata(L, 3, "RastPort");
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
    // finder 1
    obj->BorderRPort = *(RastPort **)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    // finder 1
    obj->FirstGadget = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "Parent") == 0) {
    // finder 1
    obj->Parent = *(Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "Descendant") == 0) {
    // finder 1
    obj->Descendant = *(Window **)luaL_checkudata(L, 3, "Window");
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
    // finder 1
    obj->UserPort = *(MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "WindowPort") == 0) {
    // finder 1
    obj->WindowPort = *(MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "MessageKey") == 0) {
    // finder 1
    obj->MessageKey = *(IntuiMessage **)luaL_checkudata(L, 3, "IntuiMessage");
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
  if (strcmp(key, "ScreenTitle") == 0) {
    obj->ScreenTitle = (STRPTR)amiga_checkNullableString(L, 3);
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
  if (strcmp(key, "IFont") == 0) {
    // finder 1
    obj->IFont = *(TextFont **)luaL_checkudata(L, 3, "TextFont");
    return 0;
  }
  if (strcmp(key, "MoreFlags") == 0) {
    obj->MoreFlags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Window_constructor(lua_State *L)
{
  // Allocate pointer-to-Window in userdata
  Window **objp = lua_newuserdata(L, sizeof(Window *));
  *objp = malloc(sizeof(Window));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Window));

  // Set metatable
  luaL_getmetatable(L, "Window");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_Window_index(lua_State *L)
{
  Window *obj = *(Window **)luaL_checkudata(L, 1, "Window");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->NextWindow;
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
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  if (strcmp(key, "FirstRequest") == 0) {
    Requester **ud = (Requester **)lua_newuserdata(L, sizeof(Requester *));
    *ud = (Requester*)obj->FirstRequest;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DMRequest") == 0) {
    Requester **ud = (Requester **)lua_newuserdata(L, sizeof(Requester *));
    *ud = (Requester*)obj->DMRequest;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ReqCount") == 0) {
    lua_pushinteger(L, obj->ReqCount);
    return 1;
  }
  if (strcmp(key, "WScreen") == 0) {
    Screen **ud = (Screen **)lua_newuserdata(L, sizeof(Screen *));
    *ud = (Screen*)obj->WScreen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RPort") == 0) {
    RastPort **ud = (RastPort **)lua_newuserdata(L, sizeof(RastPort *));
    *ud = (RastPort*)obj->RPort;
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
    *ud = (RastPort*)obj->BorderRPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->FirstGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Parent") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->Parent;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Descendant") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->Descendant;
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
    *ud = (MsgPort*)obj->UserPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "WindowPort") == 0) {
    MsgPort **ud = (MsgPort **)lua_newuserdata(L, sizeof(MsgPort *));
    *ud = (MsgPort*)obj->WindowPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MessageKey") == 0) {
    IntuiMessage **ud = (IntuiMessage **)lua_newuserdata(L, sizeof(IntuiMessage *));
    *ud = (IntuiMessage*)obj->MessageKey;
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
  if (strcmp(key, "ScreenTitle") == 0) {
    lua_pushstring(L, obj->ScreenTitle);
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
  if (strcmp(key, "IFont") == 0) {
    TextFont **ud = (TextFont **)lua_newuserdata(L, sizeof(TextFont *));
    *ud = (TextFont*)obj->IFont;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
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
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "FirstRequest");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "DMRequest");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "ReqCount");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "WScreen");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "RPort");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "BorderLeft");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "BorderTop");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "BorderRight");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "BorderBottom");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "BorderRPort");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "FirstGadget");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "Parent");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "Descendant");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "Pointer");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "PtrHeight");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "PtrWidth");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "XOffset");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "YOffset");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "IDCMPFlags");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "UserPort");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "WindowPort");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "MessageKey");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "ScreenTitle");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "GZZMouseX");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "GZZMouseY");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "GZZWidth");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "GZZHeight");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "IFont");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "MoreFlags");
  lua_rawseti(L, -2, 46);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Window(lua_State *L) {
  if (luaL_newmetatable(L, "Window")) {
    lua_pushcfunction(L, _lua_gen_Window_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Window_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Window_constructor);
    lua_setglobal(L, "Window");
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
  if (strcmp(key, "Font") == 0) {
    // finder 1
    obj->Font = *(TextFont **)luaL_checkudata(L, 3, "TextFont");
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
_lua_RastPort_constructor(lua_State *L)
{
  // Allocate pointer-to-RastPort in userdata
  RastPort **objp = lua_newuserdata(L, sizeof(RastPort *));
  *objp = malloc(sizeof(RastPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(RastPort));

  // Set metatable
  luaL_getmetatable(L, "RastPort");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
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
  if (strcmp(key, "Font") == 0) {
    TextFont **ud = (TextFont **)lua_newuserdata(L, sizeof(TextFont *));
    *ud = (TextFont*)obj->Font;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
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
  lua_pushstring(L, "Font");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "AlgoStyle");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "TxFlags");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "TxHeight");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "TxWidth");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "TxBaseline");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "TxSpacing");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "RP_User");
  lua_rawseti(L, -2, 23);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_RastPort(lua_State *L) {
  if (luaL_newmetatable(L, "RastPort")) {
    lua_pushcfunction(L, _lua_gen_RastPort_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_RastPort_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_RastPort_constructor);
    lua_setglobal(L, "RastPort");
    _lua_gen_RastPort_install_keys(L);
    lua_pushstring(L, "RastPort");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TagItem_newindex(lua_State *L)
{
  TagItem *obj = *(TagItem **)luaL_checkudata(L, 1, "TagItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ti_Data") == 0) {
    obj->ti_Data = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TagItem_constructor(lua_State *L)
{
  // Allocate pointer-to-TagItem in userdata
  TagItem **objp = lua_newuserdata(L, sizeof(TagItem *));
  *objp = malloc(sizeof(TagItem));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(TagItem));

  // Set metatable
  luaL_getmetatable(L, "TagItem");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_TagItem_index(lua_State *L)
{
  TagItem *obj = *(TagItem **)luaL_checkudata(L, 1, "TagItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ti_Data") == 0) {
    lua_pushinteger(L, obj->ti_Data);
    return 1;
  }
  return 0;
}

static void
_lua_gen_TagItem_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ti_Data");
  lua_rawseti(L, -2, 1);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_TagItem(lua_State *L) {
  if (luaL_newmetatable(L, "TagItem")) {
    lua_pushcfunction(L, _lua_gen_TagItem_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_TagItem_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_TagItem_constructor);
    lua_setglobal(L, "TagItem");
    _lua_gen_TagItem_install_keys(L);
    lua_pushstring(L, "TagItem");
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
_lua_MsgPort_constructor(lua_State *L)
{
  // Allocate pointer-to-MsgPort in userdata
  MsgPort **objp = lua_newuserdata(L, sizeof(MsgPort *));
  *objp = malloc(sizeof(MsgPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(MsgPort));

  // Set metatable
  luaL_getmetatable(L, "MsgPort");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
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
    lua_pushcfunction(L, _lua_MsgPort_constructor);
    lua_setglobal(L, "MsgPort");
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
    // finder 1
    obj->mn_ReplyPort = *(MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "mn_Length") == 0) {
    obj->mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Message_constructor(lua_State *L)
{
  // Allocate pointer-to-Message in userdata
  Message **objp = lua_newuserdata(L, sizeof(Message *));
  *objp = malloc(sizeof(Message));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Message));

  // Set metatable
  luaL_getmetatable(L, "Message");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_Message_index(lua_State *L)
{
  Message *obj = *(Message **)luaL_checkudata(L, 1, "Message");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mn_ReplyPort") == 0) {
    MsgPort **ud = (MsgPort **)lua_newuserdata(L, sizeof(MsgPort *));
    *ud = (MsgPort*)obj->mn_ReplyPort;
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
    lua_pushcfunction(L, _lua_Message_constructor);
    lua_setglobal(L, "Message");
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
    // finder 0
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
    // finder 1
    obj->IDCMPWindow = *(Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    // finder 1
    obj->SpecialLink = *(IntuiMessage **)luaL_checkudata(L, 3, "IntuiMessage");
    return 0;
  }
  return 0;
}


static int
_lua_IntuiMessage_constructor(lua_State *L)
{
  // Allocate pointer-to-IntuiMessage in userdata
  IntuiMessage **objp = lua_newuserdata(L, sizeof(IntuiMessage *));
  *objp = malloc(sizeof(IntuiMessage));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(IntuiMessage));

  // Set metatable
  luaL_getmetatable(L, "IntuiMessage");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_IntuiMessage_index(lua_State *L)
{
  IntuiMessage *obj = *(IntuiMessage **)luaL_checkudata(L, 1, "IntuiMessage");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ExecMessage") == 0) {
    Message **ud = (Message **)lua_newuserdata(L, sizeof(Message *));
    *ud = (Message*)&obj->ExecMessage;
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
    *ud = (Window*)obj->IDCMPWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    IntuiMessage **ud = (IntuiMessage **)lua_newuserdata(L, sizeof(IntuiMessage *));
    *ud = (IntuiMessage*)obj->SpecialLink;
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
    lua_pushcfunction(L, _lua_IntuiMessage_constructor);
    lua_setglobal(L, "IntuiMessage");
    _lua_gen_IntuiMessage_install_keys(L);
    lua_pushstring(L, "IntuiMessage");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Gadget_newindex(lua_State *L)
{
  Gadget *obj = *(Gadget **)luaL_checkudata(L, 1, "Gadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextGadget") == 0) {
    // finder 1
    obj->NextGadget = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
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
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Activation") == 0) {
    obj->Activation = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GadgetType") == 0) {
    obj->GadgetType = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GadgetRender") == 0) {
    obj->GadgetRender = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SelectRender") == 0) {
    obj->SelectRender = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "MutualExclude") == 0) {
    obj->MutualExclude = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpecialInfo") == 0) {
    obj->SpecialInfo = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "GadgetID") == 0) {
    obj->GadgetID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "UserData") == 0) {
    obj->UserData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Gadget_constructor(lua_State *L)
{
  // Allocate pointer-to-Gadget in userdata
  Gadget **objp = lua_newuserdata(L, sizeof(Gadget *));
  *objp = malloc(sizeof(Gadget));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Gadget));

  // Set metatable
  luaL_getmetatable(L, "Gadget");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_Gadget_index(lua_State *L)
{
  Gadget *obj = *(Gadget **)luaL_checkudata(L, 1, "Gadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextGadget") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->NextGadget;
    luaL_getmetatable(L, "Gadget");
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
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Activation") == 0) {
    lua_pushinteger(L, obj->Activation);
    return 1;
  }
  if (strcmp(key, "GadgetType") == 0) {
    lua_pushinteger(L, obj->GadgetType);
    return 1;
  }
  if (strcmp(key, "GadgetRender") == 0) {
    lua_pushlightuserdata(L, obj->GadgetRender);
    return 1;
  }
  if (strcmp(key, "SelectRender") == 0) {
    lua_pushlightuserdata(L, obj->SelectRender);
    return 1;
  }
  if (strcmp(key, "MutualExclude") == 0) {
    lua_pushinteger(L, obj->MutualExclude);
    return 1;
  }
  if (strcmp(key, "SpecialInfo") == 0) {
    lua_pushlightuserdata(L, obj->SpecialInfo);
    return 1;
  }
  if (strcmp(key, "GadgetID") == 0) {
    lua_pushinteger(L, obj->GadgetID);
    return 1;
  }
  if (strcmp(key, "UserData") == 0) {
    lua_pushlightuserdata(L, obj->UserData);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Gadget_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "NextGadget");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Activation");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "GadgetType");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "GadgetRender");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "SelectRender");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "MutualExclude");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "SpecialInfo");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "GadgetID");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 14);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Gadget(lua_State *L) {
  if (luaL_newmetatable(L, "Gadget")) {
    lua_pushcfunction(L, _lua_gen_Gadget_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Gadget_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Gadget_constructor);
    lua_setglobal(L, "Gadget");
    _lua_gen_Gadget_install_keys(L);
    lua_pushstring(L, "Gadget");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Screen_newindex(lua_State *L)
{
  Screen *obj = *(Screen **)luaL_checkudata(L, 1, "Screen");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextScreen") == 0) {
    // finder 1
    obj->NextScreen = *(Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "FirstWindow") == 0) {
    // finder 1
    obj->FirstWindow = *(Window **)luaL_checkudata(L, 3, "Window");
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
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    obj->DefaultTitle = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "BarHeight") == 0) {
    obj->BarHeight = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BarVBorder") == 0) {
    obj->BarVBorder = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BarHBorder") == 0) {
    obj->BarHBorder = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MenuVBorder") == 0) {
    obj->MenuVBorder = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MenuHBorder") == 0) {
    obj->MenuHBorder = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WBorTop") == 0) {
    obj->WBorTop = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WBorLeft") == 0) {
    obj->WBorLeft = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WBorRight") == 0) {
    obj->WBorRight = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WBorBottom") == 0) {
    obj->WBorBottom = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Font") == 0) {
    // finder 1
    obj->Font = *(TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "RastPort") == 0) {
    // finder 0
    RastPort *val = *(RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->RastPort = *val;
    return 0;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    // finder 1
    obj->FirstGadget = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
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
  if (strcmp(key, "SaveColor0") == 0) {
    obj->SaveColor0 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Screen_constructor(lua_State *L)
{
  // Allocate pointer-to-Screen in userdata
  Screen **objp = lua_newuserdata(L, sizeof(Screen *));
  *objp = malloc(sizeof(Screen));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Screen));

  // Set metatable
  luaL_getmetatable(L, "Screen");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_Screen_index(lua_State *L)
{
  Screen *obj = *(Screen **)luaL_checkudata(L, 1, "Screen");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextScreen") == 0) {
    Screen **ud = (Screen **)lua_newuserdata(L, sizeof(Screen *));
    *ud = (Screen*)obj->NextScreen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "FirstWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->FirstWindow;
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
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    lua_pushstring(L, obj->DefaultTitle);
    return 1;
  }
  if (strcmp(key, "BarHeight") == 0) {
    lua_pushinteger(L, obj->BarHeight);
    return 1;
  }
  if (strcmp(key, "BarVBorder") == 0) {
    lua_pushinteger(L, obj->BarVBorder);
    return 1;
  }
  if (strcmp(key, "BarHBorder") == 0) {
    lua_pushinteger(L, obj->BarHBorder);
    return 1;
  }
  if (strcmp(key, "MenuVBorder") == 0) {
    lua_pushinteger(L, obj->MenuVBorder);
    return 1;
  }
  if (strcmp(key, "MenuHBorder") == 0) {
    lua_pushinteger(L, obj->MenuHBorder);
    return 1;
  }
  if (strcmp(key, "WBorTop") == 0) {
    lua_pushinteger(L, obj->WBorTop);
    return 1;
  }
  if (strcmp(key, "WBorLeft") == 0) {
    lua_pushinteger(L, obj->WBorLeft);
    return 1;
  }
  if (strcmp(key, "WBorRight") == 0) {
    lua_pushinteger(L, obj->WBorRight);
    return 1;
  }
  if (strcmp(key, "WBorBottom") == 0) {
    lua_pushinteger(L, obj->WBorBottom);
    return 1;
  }
  if (strcmp(key, "Font") == 0) {
    TextAttr **ud = (TextAttr **)lua_newuserdata(L, sizeof(TextAttr *));
    *ud = (TextAttr*)obj->Font;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort") == 0) {
    RastPort **ud = (RastPort **)lua_newuserdata(L, sizeof(RastPort *));
    *ud = (RastPort*)&obj->RastPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->FirstGadget;
    luaL_getmetatable(L, "Gadget");
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
  if (strcmp(key, "SaveColor0") == 0) {
    lua_pushinteger(L, obj->SaveColor0);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Screen_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "NextScreen");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "FirstWindow");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "DefaultTitle");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "BarHeight");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "BarVBorder");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "BarHBorder");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "MenuVBorder");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "MenuHBorder");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "WBorTop");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "WBorLeft");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "WBorRight");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "WBorBottom");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "Font");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "RastPort");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "FirstGadget");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "SaveColor0");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 28);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Screen(lua_State *L) {
  if (luaL_newmetatable(L, "Screen")) {
    lua_pushcfunction(L, _lua_gen_Screen_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Screen_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Screen_constructor);
    lua_setglobal(L, "Screen");
    _lua_gen_Screen_install_keys(L);
    lua_pushstring(L, "Screen");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_NewGadget_newindex(lua_State *L)
{
  NewGadget *obj = *(NewGadget **)luaL_checkudata(L, 1, "NewGadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ng_LeftEdge") == 0) {
    obj->ng_LeftEdge = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_TopEdge") == 0) {
    obj->ng_TopEdge = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_Width") == 0) {
    obj->ng_Width = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_Height") == 0) {
    obj->ng_Height = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_GadgetText") == 0) {
    obj->ng_GadgetText = (CONST_STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_TextAttr") == 0) {
    // finder 1
    obj->ng_TextAttr = *(TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "ng_GadgetID") == 0) {
    obj->ng_GadgetID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_Flags") == 0) {
    obj->ng_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_VisualInfo") == 0) {
    obj->ng_VisualInfo = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ng_UserData") == 0) {
    obj->ng_UserData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_NewGadget_constructor(lua_State *L)
{
  // Allocate pointer-to-NewGadget in userdata
  NewGadget **objp = lua_newuserdata(L, sizeof(NewGadget *));
  *objp = malloc(sizeof(NewGadget));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(NewGadget));

  // Set metatable
  luaL_getmetatable(L, "NewGadget");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_NewGadget_index(lua_State *L)
{
  NewGadget *obj = *(NewGadget **)luaL_checkudata(L, 1, "NewGadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ng_LeftEdge") == 0) {
    lua_pushinteger(L, obj->ng_LeftEdge);
    return 1;
  }
  if (strcmp(key, "ng_TopEdge") == 0) {
    lua_pushinteger(L, obj->ng_TopEdge);
    return 1;
  }
  if (strcmp(key, "ng_Width") == 0) {
    lua_pushinteger(L, obj->ng_Width);
    return 1;
  }
  if (strcmp(key, "ng_Height") == 0) {
    lua_pushinteger(L, obj->ng_Height);
    return 1;
  }
  if (strcmp(key, "ng_GadgetText") == 0) {
    lua_pushstring(L, obj->ng_GadgetText);
    return 1;
  }
  if (strcmp(key, "ng_TextAttr") == 0) {
    TextAttr **ud = (TextAttr **)lua_newuserdata(L, sizeof(TextAttr *));
    *ud = (TextAttr*)obj->ng_TextAttr;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ng_GadgetID") == 0) {
    lua_pushinteger(L, obj->ng_GadgetID);
    return 1;
  }
  if (strcmp(key, "ng_Flags") == 0) {
    lua_pushinteger(L, obj->ng_Flags);
    return 1;
  }
  if (strcmp(key, "ng_VisualInfo") == 0) {
    lua_pushlightuserdata(L, obj->ng_VisualInfo);
    return 1;
  }
  if (strcmp(key, "ng_UserData") == 0) {
    lua_pushlightuserdata(L, obj->ng_UserData);
    return 1;
  }
  return 0;
}

static void
_lua_gen_NewGadget_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ng_LeftEdge");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ng_TopEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ng_Width");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ng_Height");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ng_GadgetText");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ng_TextAttr");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ng_GadgetID");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ng_Flags");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ng_VisualInfo");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "ng_UserData");
  lua_rawseti(L, -2, 10);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_NewGadget(lua_State *L) {
  if (luaL_newmetatable(L, "NewGadget")) {
    lua_pushcfunction(L, _lua_gen_NewGadget_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_NewGadget_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_NewGadget_constructor);
    lua_setglobal(L, "NewGadget");
    _lua_gen_NewGadget_install_keys(L);
    lua_pushstring(L, "NewGadget");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_NewWindow_newindex(lua_State *L)
{
  NewWindow *obj = *(NewWindow **)luaL_checkudata(L, 1, "NewWindow");
  const char *key = luaL_checkstring(L, 2);
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
  if (strcmp(key, "DetailPen") == 0) {
    obj->DetailPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlockPen") == 0) {
    obj->BlockPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "IDCMPFlags") == 0) {
    obj->IDCMPFlags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    // finder 1
    obj->FirstGadget = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "Screen") == 0) {
    // finder 1
    obj->Screen = *(Screen **)luaL_checkudata(L, 3, "Screen");
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
  if (strcmp(key, "Type") == 0) {
    obj->Type = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_NewWindow_constructor(lua_State *L)
{
  // Allocate pointer-to-NewWindow in userdata
  NewWindow **objp = lua_newuserdata(L, sizeof(NewWindow *));
  *objp = malloc(sizeof(NewWindow));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(NewWindow));

  // Set metatable
  luaL_getmetatable(L, "NewWindow");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_NewWindow_index(lua_State *L)
{
  NewWindow *obj = *(NewWindow **)luaL_checkudata(L, 1, "NewWindow");
  const char *key = luaL_checkstring(L, 2);
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
  if (strcmp(key, "DetailPen") == 0) {
    lua_pushinteger(L, obj->DetailPen);
    return 1;
  }
  if (strcmp(key, "BlockPen") == 0) {
    lua_pushinteger(L, obj->BlockPen);
    return 1;
  }
  if (strcmp(key, "IDCMPFlags") == 0) {
    lua_pushinteger(L, obj->IDCMPFlags);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->FirstGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  if (strcmp(key, "Screen") == 0) {
    Screen **ud = (Screen **)lua_newuserdata(L, sizeof(Screen *));
    *ud = (Screen*)obj->Screen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
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
  if (strcmp(key, "Type") == 0) {
    lua_pushinteger(L, obj->Type);
    return 1;
  }
  return 0;
}

static void
_lua_gen_NewWindow_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "IDCMPFlags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "FirstGadget");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Screen");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "MinWidth");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "MinHeight");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "MaxWidth");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "MaxHeight");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "Type");
  lua_rawseti(L, -2, 16);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_NewWindow(lua_State *L) {
  if (luaL_newmetatable(L, "NewWindow")) {
    lua_pushcfunction(L, _lua_gen_NewWindow_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_NewWindow_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_NewWindow_constructor);
    lua_setglobal(L, "NewWindow");
    _lua_gen_NewWindow_install_keys(L);
    lua_pushstring(L, "NewWindow");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Requester_newindex(lua_State *L)
{
  Requester *obj = *(Requester **)luaL_checkudata(L, 1, "Requester");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "OlderRequest") == 0) {
    // finder 1
    obj->OlderRequest = *(Requester **)luaL_checkudata(L, 3, "Requester");
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
  if (strcmp(key, "RelLeft") == 0) {
    obj->RelLeft = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RelTop") == 0) {
    obj->RelTop = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ReqGadget") == 0) {
    // finder 1
    obj->ReqGadget = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BackFill") == 0) {
    obj->BackFill = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RWindow") == 0) {
    // finder 1
    obj->RWindow = *(Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  return 0;
}


static int
_lua_Requester_constructor(lua_State *L)
{
  // Allocate pointer-to-Requester in userdata
  Requester **objp = lua_newuserdata(L, sizeof(Requester *));
  *objp = malloc(sizeof(Requester));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Requester));

  // Set metatable
  luaL_getmetatable(L, "Requester");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_Requester_index(lua_State *L)
{
  Requester *obj = *(Requester **)luaL_checkudata(L, 1, "Requester");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "OlderRequest") == 0) {
    Requester **ud = (Requester **)lua_newuserdata(L, sizeof(Requester *));
    *ud = (Requester*)obj->OlderRequest;
    luaL_getmetatable(L, "Requester");
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
  if (strcmp(key, "RelLeft") == 0) {
    lua_pushinteger(L, obj->RelLeft);
    return 1;
  }
  if (strcmp(key, "RelTop") == 0) {
    lua_pushinteger(L, obj->RelTop);
    return 1;
  }
  if (strcmp(key, "ReqGadget") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->ReqGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "BackFill") == 0) {
    lua_pushinteger(L, obj->BackFill);
    return 1;
  }
  if (strcmp(key, "RWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->RWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Requester_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "OlderRequest");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "RelLeft");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "RelTop");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ReqGadget");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "BackFill");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "RWindow");
  lua_rawseti(L, -2, 11);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Requester(lua_State *L) {
  if (luaL_newmetatable(L, "Requester")) {
    lua_pushcfunction(L, _lua_gen_Requester_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Requester_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Requester_constructor);
    lua_setglobal(L, "Requester");
    _lua_gen_Requester_install_keys(L);
    lua_pushstring(L, "Requester");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TextAttr_newindex(lua_State *L)
{
  TextAttr *obj = *(TextAttr **)luaL_checkudata(L, 1, "TextAttr");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ta_Name") == 0) {
    obj->ta_Name = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "ta_YSize") == 0) {
    obj->ta_YSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ta_Style") == 0) {
    obj->ta_Style = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ta_Flags") == 0) {
    obj->ta_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TextAttr_constructor(lua_State *L)
{
  // Allocate pointer-to-TextAttr in userdata
  TextAttr **objp = lua_newuserdata(L, sizeof(TextAttr *));
  *objp = malloc(sizeof(TextAttr));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(TextAttr));

  // Set metatable
  luaL_getmetatable(L, "TextAttr");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_TextAttr_index(lua_State *L)
{
  TextAttr *obj = *(TextAttr **)luaL_checkudata(L, 1, "TextAttr");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ta_Name") == 0) {
    lua_pushstring(L, obj->ta_Name);
    return 1;
  }
  if (strcmp(key, "ta_YSize") == 0) {
    lua_pushinteger(L, obj->ta_YSize);
    return 1;
  }
  if (strcmp(key, "ta_Style") == 0) {
    lua_pushinteger(L, obj->ta_Style);
    return 1;
  }
  if (strcmp(key, "ta_Flags") == 0) {
    lua_pushinteger(L, obj->ta_Flags);
    return 1;
  }
  return 0;
}

static void
_lua_gen_TextAttr_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ta_Name");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ta_YSize");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ta_Style");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ta_Flags");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_TextAttr(lua_State *L) {
  if (luaL_newmetatable(L, "TextAttr")) {
    lua_pushcfunction(L, _lua_gen_TextAttr_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_TextAttr_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_TextAttr_constructor);
    lua_setglobal(L, "TextAttr");
    _lua_gen_TextAttr_install_keys(L);
    lua_pushstring(L, "TextAttr");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_StringInfo_newindex(lua_State *L)
{
  StringInfo *obj = *(StringInfo **)luaL_checkudata(L, 1, "StringInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Buffer") == 0) {
    obj->Buffer = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "UndoBuffer") == 0) {
    obj->UndoBuffer = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "BufferPos") == 0) {
    obj->BufferPos = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxChars") == 0) {
    obj->MaxChars = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DispPos") == 0) {
    obj->DispPos = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "UndoPos") == 0) {
    obj->UndoPos = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NumChars") == 0) {
    obj->NumChars = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DispCount") == 0) {
    obj->DispCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "CLeft") == 0) {
    obj->CLeft = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "CTop") == 0) {
    obj->CTop = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LongInt") == 0) {
    obj->LongInt = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_StringInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-StringInfo in userdata
  StringInfo **objp = lua_newuserdata(L, sizeof(StringInfo *));
  *objp = malloc(sizeof(StringInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(StringInfo));

  // Set metatable
  luaL_getmetatable(L, "StringInfo");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_StringInfo_index(lua_State *L)
{
  StringInfo *obj = *(StringInfo **)luaL_checkudata(L, 1, "StringInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Buffer") == 0) {
    lua_pushstring(L, obj->Buffer);
    return 1;
  }
  if (strcmp(key, "UndoBuffer") == 0) {
    lua_pushstring(L, obj->UndoBuffer);
    return 1;
  }
  if (strcmp(key, "BufferPos") == 0) {
    lua_pushinteger(L, obj->BufferPos);
    return 1;
  }
  if (strcmp(key, "MaxChars") == 0) {
    lua_pushinteger(L, obj->MaxChars);
    return 1;
  }
  if (strcmp(key, "DispPos") == 0) {
    lua_pushinteger(L, obj->DispPos);
    return 1;
  }
  if (strcmp(key, "UndoPos") == 0) {
    lua_pushinteger(L, obj->UndoPos);
    return 1;
  }
  if (strcmp(key, "NumChars") == 0) {
    lua_pushinteger(L, obj->NumChars);
    return 1;
  }
  if (strcmp(key, "DispCount") == 0) {
    lua_pushinteger(L, obj->DispCount);
    return 1;
  }
  if (strcmp(key, "CLeft") == 0) {
    lua_pushinteger(L, obj->CLeft);
    return 1;
  }
  if (strcmp(key, "CTop") == 0) {
    lua_pushinteger(L, obj->CTop);
    return 1;
  }
  if (strcmp(key, "LongInt") == 0) {
    lua_pushinteger(L, obj->LongInt);
    return 1;
  }
  return 0;
}

static void
_lua_gen_StringInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Buffer");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "UndoBuffer");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "BufferPos");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "MaxChars");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "DispPos");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "UndoPos");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "NumChars");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "DispCount");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "CLeft");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "CTop");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "LongInt");
  lua_rawseti(L, -2, 11);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_StringInfo(lua_State *L) {
  if (luaL_newmetatable(L, "StringInfo")) {
    lua_pushcfunction(L, _lua_gen_StringInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_StringInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_StringInfo_constructor);
    lua_setglobal(L, "StringInfo");
    _lua_gen_StringInfo_install_keys(L);
    lua_pushstring(L, "StringInfo");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TextFont_newindex(lua_State *L)
{
  TextFont *obj = *(TextFont **)luaL_checkudata(L, 1, "TextFont");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "tf_Message") == 0) {
    // finder 0
    Message *val = *(Message **)luaL_checkudata(L, 3, "Message");
    obj->tf_Message = *val;
    return 0;
  }
  if (strcmp(key, "tf_YSize") == 0) {
    obj->tf_YSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Style") == 0) {
    obj->tf_Style = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Flags") == 0) {
    obj->tf_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_XSize") == 0) {
    obj->tf_XSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Baseline") == 0) {
    obj->tf_Baseline = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_BoldSmear") == 0) {
    obj->tf_BoldSmear = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Accessors") == 0) {
    obj->tf_Accessors = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_LoChar") == 0) {
    obj->tf_LoChar = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_HiChar") == 0) {
    obj->tf_HiChar = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_CharData") == 0) {
    obj->tf_CharData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Modulo") == 0) {
    obj->tf_Modulo = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_CharLoc") == 0) {
    obj->tf_CharLoc = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_CharSpace") == 0) {
    obj->tf_CharSpace = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_CharKern") == 0) {
    obj->tf_CharKern = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TextFont_constructor(lua_State *L)
{
  // Allocate pointer-to-TextFont in userdata
  TextFont **objp = lua_newuserdata(L, sizeof(TextFont *));
  *objp = malloc(sizeof(TextFont));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(TextFont));

  // Set metatable
  luaL_getmetatable(L, "TextFont");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_TextFont_index(lua_State *L)
{
  TextFont *obj = *(TextFont **)luaL_checkudata(L, 1, "TextFont");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "tf_Message") == 0) {
    Message **ud = (Message **)lua_newuserdata(L, sizeof(Message *));
    *ud = (Message*)&obj->tf_Message;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tf_YSize") == 0) {
    lua_pushinteger(L, obj->tf_YSize);
    return 1;
  }
  if (strcmp(key, "tf_Style") == 0) {
    lua_pushinteger(L, obj->tf_Style);
    return 1;
  }
  if (strcmp(key, "tf_Flags") == 0) {
    lua_pushinteger(L, obj->tf_Flags);
    return 1;
  }
  if (strcmp(key, "tf_XSize") == 0) {
    lua_pushinteger(L, obj->tf_XSize);
    return 1;
  }
  if (strcmp(key, "tf_Baseline") == 0) {
    lua_pushinteger(L, obj->tf_Baseline);
    return 1;
  }
  if (strcmp(key, "tf_BoldSmear") == 0) {
    lua_pushinteger(L, obj->tf_BoldSmear);
    return 1;
  }
  if (strcmp(key, "tf_Accessors") == 0) {
    lua_pushinteger(L, obj->tf_Accessors);
    return 1;
  }
  if (strcmp(key, "tf_LoChar") == 0) {
    lua_pushinteger(L, obj->tf_LoChar);
    return 1;
  }
  if (strcmp(key, "tf_HiChar") == 0) {
    lua_pushinteger(L, obj->tf_HiChar);
    return 1;
  }
  if (strcmp(key, "tf_CharData") == 0) {
    lua_pushlightuserdata(L, obj->tf_CharData);
    return 1;
  }
  if (strcmp(key, "tf_Modulo") == 0) {
    lua_pushinteger(L, obj->tf_Modulo);
    return 1;
  }
  if (strcmp(key, "tf_CharLoc") == 0) {
    lua_pushlightuserdata(L, obj->tf_CharLoc);
    return 1;
  }
  if (strcmp(key, "tf_CharSpace") == 0) {
    lua_pushlightuserdata(L, obj->tf_CharSpace);
    return 1;
  }
  if (strcmp(key, "tf_CharKern") == 0) {
    lua_pushlightuserdata(L, obj->tf_CharKern);
    return 1;
  }
  return 0;
}

static void
_lua_gen_TextFont_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tf_Message");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tf_YSize");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tf_Style");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tf_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tf_XSize");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tf_Baseline");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tf_BoldSmear");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tf_Accessors");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "tf_LoChar");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "tf_HiChar");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "tf_CharData");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "tf_Modulo");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "tf_CharLoc");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "tf_CharSpace");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "tf_CharKern");
  lua_rawseti(L, -2, 15);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_TextFont(lua_State *L) {
  if (luaL_newmetatable(L, "TextFont")) {
    lua_pushcfunction(L, _lua_gen_TextFont_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_TextFont_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_TextFont_constructor);
    lua_setglobal(L, "TextFont");
    _lua_gen_TextFont_install_keys(L);
    lua_pushstring(L, "TextFont");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_GadgetPtr_newindex(lua_State *L)
{
  GadgetPtr *obj = *(GadgetPtr **)luaL_checkudata(L, 1, "GadgetPtr");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ptr") == 0) {
    // finder 1
    obj->ptr = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  return 0;
}


static int
_lua_GadgetPtr_constructor(lua_State *L)
{
  // Allocate pointer-to-GadgetPtr in userdata
  GadgetPtr **objp = lua_newuserdata(L, sizeof(GadgetPtr *));
  *objp = malloc(sizeof(GadgetPtr));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(GadgetPtr));

  // Set metatable
  luaL_getmetatable(L, "GadgetPtr");
  lua_setmetatable(L, -2);

  // If a table is passed, use __newindex to copy fields
  if (lua_istable(L, 1)) {
    lua_insert(L, 1); // move userdata below table
    lua_pushnil(L); // first key
    while (lua_next(L, 2) != 0) {
      lua_pushvalue(L, -2); // copy key
      lua_pushvalue(L, -2); // copy value
      lua_settable(L, 1);   // userdata[key] = value (via __newindex)
      lua_pop(L, 1); // pop original value, keep key
    }
    lua_remove(L, 2); // remove table, leave userdata
  }

  return 1; // return userdata
}

static int
_lua_gen_GadgetPtr_index(lua_State *L)
{
  GadgetPtr *obj = *(GadgetPtr **)luaL_checkudata(L, 1, "GadgetPtr");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ptr") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->ptr;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_GadgetPtr_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ptr");
  lua_rawseti(L, -2, 1);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_GadgetPtr(lua_State *L) {
  if (luaL_newmetatable(L, "GadgetPtr")) {
    lua_pushcfunction(L, _lua_gen_GadgetPtr_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_GadgetPtr_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_GadgetPtr_constructor);
    lua_setglobal(L, "GadgetPtr");
    _lua_gen_GadgetPtr_install_keys(L);
    lua_pushstring(L, "GadgetPtr");
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
  lua_pushinteger(L, WA_AutoAdjust);
  lua_setglobal(L, "WA_AutoAdjust");
  lua_pushinteger(L, WA_InnerHeight);
  lua_setglobal(L, "WA_InnerHeight");
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
  lua_pushinteger(L, WA_MinHeight);
  lua_setglobal(L, "WA_MinHeight");
  lua_pushinteger(L, WA_MinWidth);
  lua_setglobal(L, "WA_MinWidth");
  lua_pushinteger(L, WA_SizeGadget);
  lua_setglobal(L, "WA_SizeGadget");
  lua_pushinteger(L, WA_IDCMP);
  lua_setglobal(L, "WA_IDCMP");
  lua_pushinteger(L, WA_Gadgets);
  lua_setglobal(L, "WA_Gadgets");
  lua_pushinteger(L, WA_PubScreen);
  lua_setglobal(L, "WA_PubScreen");
  lua_pushinteger(L, WA_SimpleRefresh);
  lua_setglobal(L, "WA_SimpleRefresh");
  lua_pushinteger(L, TAG_END);
  lua_setglobal(L, "TAG_END");
  lua_pushinteger(L, IDCMP_CLOSEWINDOW);
  lua_setglobal(L, "IDCMP_CLOSEWINDOW");
  lua_pushinteger(L, IDCMP_GADGETUP);
  lua_setglobal(L, "IDCMP_GADGETUP");
  lua_pushinteger(L, IDCMP_MOUSEMOVE);
  lua_setglobal(L, "IDCMP_MOUSEMOVE");
  lua_pushinteger(L, IDCMP_RAWKEY);
  lua_setglobal(L, "IDCMP_RAWKEY");
  lua_pushinteger(L, IDCMP_REFRESHWINDOW);
  lua_setglobal(L, "IDCMP_REFRESHWINDOW");
  lua_pushinteger(L, IDCMP_VANILLAKEY);
  lua_setglobal(L, "IDCMP_VANILLAKEY");
  lua_pushinteger(L, BUTTONIDCMP);
  lua_setglobal(L, "BUTTONIDCMP");
  lua_pushinteger(L, SLIDERIDCMP);
  lua_setglobal(L, "SLIDERIDCMP");
  lua_pushinteger(L, STRINGIDCMP);
  lua_setglobal(L, "STRINGIDCMP");
  lua_pushinteger(L, BUTTON_KIND);
  lua_setglobal(L, "BUTTON_KIND");
  lua_pushinteger(L, SLIDER_KIND);
  lua_setglobal(L, "SLIDER_KIND");
  lua_pushinteger(L, STRING_KIND);
  lua_setglobal(L, "STRING_KIND");
  lua_pushinteger(L, NG_HIGHLABEL);
  lua_setglobal(L, "NG_HIGHLABEL");
  lua_pushinteger(L, GTSL_Min);
  lua_setglobal(L, "GTSL_Min");
  lua_pushinteger(L, GTSL_Max);
  lua_setglobal(L, "GTSL_Max");
  lua_pushinteger(L, GTSL_Level);
  lua_setglobal(L, "GTSL_Level");
  lua_pushinteger(L, GTSL_LevelFormat);
  lua_setglobal(L, "GTSL_LevelFormat");
  lua_pushinteger(L, GTSL_MaxLevelLen);
  lua_setglobal(L, "GTSL_MaxLevelLen");
  lua_pushinteger(L, GT_Underscore);
  lua_setglobal(L, "GT_Underscore");
  lua_pushinteger(L, GTST_String);
  lua_setglobal(L, "GTST_String");
  lua_pushinteger(L, GTST_MaxChars);
  lua_setglobal(L, "GTST_MaxChars");
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
  _lua_gen_install_meta_Window(L);
  _lua_gen_install_meta_RastPort(L);
  _lua_gen_install_meta_TagItem(L);
  _lua_gen_install_meta_MsgPort(L);
  _lua_gen_install_meta_Message(L);
  _lua_gen_install_meta_IntuiMessage(L);
  _lua_gen_install_meta_Gadget(L);
  _lua_gen_install_meta_Screen(L);
  _lua_gen_install_meta_NewGadget(L);
  _lua_gen_install_meta_NewWindow(L);
  _lua_gen_install_meta_Requester(L);
  _lua_gen_install_meta_TextAttr(L);
  _lua_gen_install_meta_StringInfo(L);
  _lua_gen_install_meta_TextFont(L);
  _lua_gen_install_meta_GadgetPtr(L);
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
  lua_register(L, "OpenFont", _lua_OpenFont);
  lua_register(L, "CloseFont", _lua_CloseFont);
  lua_register(L, "Move", _lua_Move);
  lua_register(L, "CloseWindow", _lua_CloseWindow);
  lua_register(L, "ActivateGadget", _lua_ActivateGadget);
  lua_register(L, "LockPubScreen", _lua_LockPubScreen);
  lua_register(L, "UnlockPubScreen", _lua_UnlockPubScreen);
  lua_register(L, "FreeGadgets", _lua_FreeGadgets);
  lua_register(L, "GT_GetIMsg", _lua_GT_GetIMsg);
  lua_register(L, "GT_ReplyIMsg", _lua_GT_ReplyIMsg);
  lua_register(L, "GT_RefreshWindow", _lua_GT_RefreshWindow);
  lua_register(L, "GT_BeginRefresh", _lua_GT_BeginRefresh);
  lua_register(L, "GT_EndRefresh", _lua_GT_EndRefresh);
  lua_register(L, "CreateContext", _lua_CreateContext);
  lua_register(L, "FreeVisualInfo", _lua_FreeVisualInfo);
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

