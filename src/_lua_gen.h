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
_lua_gen_pushView(lua_State *L, struct View* obj)
{
  if (obj) {
    struct View **ud = (struct View **)lua_newuserdata(L, sizeof(struct View *));
    *ud = obj;
    luaL_getmetatable(L, "View");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct View*
_lua_gen_checkView(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct View **ud = (struct View **)luaL_checkudata(L, stackIndex, "View");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushViewPort(lua_State *L, struct ViewPort* obj)
{
  if (obj) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = obj;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ViewPort*
_lua_gen_checkViewPort(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ViewPort **ud = (struct ViewPort **)luaL_checkudata(L, stackIndex, "ViewPort");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushIntuiText(lua_State *L, struct IntuiText* obj)
{
  if (obj) {
    struct IntuiText **ud = (struct IntuiText **)lua_newuserdata(L, sizeof(struct IntuiText *));
    *ud = obj;
    luaL_getmetatable(L, "IntuiText");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct IntuiText*
_lua_gen_checkIntuiText(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct IntuiText **ud = (struct IntuiText **)luaL_checkudata(L, stackIndex, "IntuiText");
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
_lua_gen_pushHook(lua_State *L, struct Hook* obj)
{
  if (obj) {
    struct Hook **ud = (struct Hook **)lua_newuserdata(L, sizeof(struct Hook *));
    *ud = obj;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Hook*
_lua_gen_checkHook(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Hook **ud = (struct Hook **)luaL_checkudata(L, stackIndex, "Hook");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushList(lua_State *L, struct List* obj)
{
  if (obj) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = obj;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct List*
_lua_gen_checkList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct List **ud = (struct List **)luaL_checkudata(L, stackIndex, "List");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushGadgetInfo(lua_State *L, struct GadgetInfo* obj)
{
  if (obj) {
    struct GadgetInfo **ud = (struct GadgetInfo **)lua_newuserdata(L, sizeof(struct GadgetInfo *));
    *ud = obj;
    luaL_getmetatable(L, "GadgetInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct GadgetInfo*
_lua_gen_checkGadgetInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct GadgetInfo **ud = (struct GadgetInfo **)luaL_checkudata(L, stackIndex, "GadgetInfo");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushImage(lua_State *L, struct Image* obj)
{
  if (obj) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = obj;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Image*
_lua_gen_checkImage(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Image **ud = (struct Image **)luaL_checkudata(L, stackIndex, "Image");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushIClass(lua_State *L, struct IClass* obj)
{
  if (obj) {
    struct IClass **ud = (struct IClass **)lua_newuserdata(L, sizeof(struct IClass *));
    *ud = obj;
    luaL_getmetatable(L, "IClass");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct IClass*
_lua_gen_checkIClass(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct IClass **ud = (struct IClass **)luaL_checkudata(L, stackIndex, "IClass");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDrawInfo(lua_State *L, struct DrawInfo* obj)
{
  if (obj) {
    struct DrawInfo **ud = (struct DrawInfo **)lua_newuserdata(L, sizeof(struct DrawInfo *));
    *ud = obj;
    luaL_getmetatable(L, "DrawInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DrawInfo*
_lua_gen_checkDrawInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DrawInfo **ud = (struct DrawInfo **)luaL_checkudata(L, stackIndex, "DrawInfo");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushScreenBuffer(lua_State *L, struct ScreenBuffer* obj)
{
  if (obj) {
    struct ScreenBuffer **ud = (struct ScreenBuffer **)lua_newuserdata(L, sizeof(struct ScreenBuffer *));
    *ud = obj;
    luaL_getmetatable(L, "ScreenBuffer");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ScreenBuffer*
_lua_gen_checkScreenBuffer(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ScreenBuffer **ud = (struct ScreenBuffer **)luaL_checkudata(L, stackIndex, "ScreenBuffer");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushNewScreen(lua_State *L, struct NewScreen* obj)
{
  if (obj) {
    struct NewScreen **ud = (struct NewScreen **)lua_newuserdata(L, sizeof(struct NewScreen *));
    *ud = obj;
    luaL_getmetatable(L, "NewScreen");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct NewScreen*
_lua_gen_checkNewScreen(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct NewScreen **ud = (struct NewScreen **)luaL_checkudata(L, stackIndex, "NewScreen");
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
_lua_gen_pushNewMenu(lua_State *L, struct NewMenu* obj)
{
  if (obj) {
    struct NewMenu **ud = (struct NewMenu **)lua_newuserdata(L, sizeof(struct NewMenu *));
    *ud = obj;
    luaL_getmetatable(L, "NewMenu");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct NewMenu*
_lua_gen_checkNewMenu(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct NewMenu **ud = (struct NewMenu **)luaL_checkudata(L, stackIndex, "NewMenu");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMenu(lua_State *L, struct Menu* obj)
{
  if (obj) {
    struct Menu **ud = (struct Menu **)lua_newuserdata(L, sizeof(struct Menu *));
    *ud = obj;
    luaL_getmetatable(L, "Menu");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Menu*
_lua_gen_checkMenu(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Menu **ud = (struct Menu **)luaL_checkudata(L, stackIndex, "Menu");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMenuItem(lua_State *L, struct MenuItem* obj)
{
  if (obj) {
    struct MenuItem **ud = (struct MenuItem **)lua_newuserdata(L, sizeof(struct MenuItem *));
    *ud = obj;
    luaL_getmetatable(L, "MenuItem");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MenuItem*
_lua_gen_checkMenuItem(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MenuItem **ud = (struct MenuItem **)luaL_checkudata(L, stackIndex, "MenuItem");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushInputEvent(lua_State *L, struct InputEvent* obj)
{
  if (obj) {
    struct InputEvent **ud = (struct InputEvent **)lua_newuserdata(L, sizeof(struct InputEvent *));
    *ud = obj;
    luaL_getmetatable(L, "InputEvent");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct InputEvent*
_lua_gen_checkInputEvent(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct InputEvent **ud = (struct InputEvent **)luaL_checkudata(L, stackIndex, "InputEvent");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushBitMap(lua_State *L, struct BitMap* obj)
{
  if (obj) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = obj;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct BitMap*
_lua_gen_checkBitMap(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct BitMap **ud = (struct BitMap **)luaL_checkudata(L, stackIndex, "BitMap");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDBufInfo(lua_State *L, struct DBufInfo* obj)
{
  if (obj) {
    struct DBufInfo **ud = (struct DBufInfo **)lua_newuserdata(L, sizeof(struct DBufInfo *));
    *ud = obj;
    luaL_getmetatable(L, "DBufInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DBufInfo*
_lua_gen_checkDBufInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DBufInfo **ud = (struct DBufInfo **)luaL_checkudata(L, stackIndex, "DBufInfo");
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
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG accessMode = luaL_checkinteger(L, 2);
  BPTR result = Open(name, accessMode);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_Read(lua_State* L)
{
  (void)L;
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
  (void)L;
  CONST_STRPTR str = amiga_checkConstNullableString(L, 1);
  LONG result = PutStr(str);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_AllocMem(lua_State* L)
{
  (void)L;
  ULONG byteSize = luaL_checkinteger(L, 1);
  ULONG requirements = luaL_checkinteger(L, 2);
  APTR result = AllocMem(byteSize, requirements);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_lua_GetMsg(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * result = GetMsg(port);
  _lua_gen_pushMessage(L, result);
  return 1;
}

static int
_lua_ReplyMsg(lua_State* L)
{
  (void)L;
  struct Message * message = _lua_gen_checkMessage(L, 1);
  ReplyMsg(message);
  return 0;
}

static int
_lua_WaitPort(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * result = WaitPort(port);
  _lua_gen_pushMessage(L, result);
  return 1;
}

static int
_lua_Text(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  CONST_STRPTR string = amiga_checkConstNullableString(L, 2);
  ULONG count = luaL_checkinteger(L, 3);
  LONG result = Text(rp, string, count);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_OpenFont(lua_State* L)
{
  (void)L;
  const struct TextAttr * textAttr = _lua_gen_checkTextAttr(L, 1);
  struct TextFont * result = OpenFont(textAttr);
  _lua_gen_pushTextFont(L, result);
  return 1;
}

static int
_lua_CloseFont(lua_State* L)
{
  (void)L;
  struct TextFont * textFont = _lua_gen_checkTextFont(L, 1);
  CloseFont(textFont);
  return 0;
}

static int
_lua_Move(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  Move(rp, x, y);
  return 0;
}

static int
_lua_OpenIntuition(lua_State* L)
{
  (void)L;
  OpenIntuition();
  return 0;
}

static int
_lua_Intuition(lua_State* L)
{
  (void)L;
  struct InputEvent * iEvent = _lua_gen_checkInputEvent(L, 1);
  Intuition(iEvent);
  return 0;
}

static int
_lua_ClearDMRequest(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  BOOL result = ClearDMRequest(window);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_ClearMenuStrip(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ClearMenuStrip(window);
  return 0;
}

static int
_lua_ClearPointer(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ClearPointer(window);
  return 0;
}

static int
_lua_CloseScreen(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  BOOL result = CloseScreen(screen);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_CloseWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  CloseWindow(window);
  return 0;
}

static int
_lua_CloseWorkBench(lua_State* L)
{
  (void)L;
  LONG result = CloseWorkBench();
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_CurrentTime(lua_State* L)
{
  (void)L;
  ULONG * seconds = lua_touserdata(L, 1);
  ULONG * micros = lua_touserdata(L, 2);
  CurrentTime(seconds, micros);
  return 0;
}

static int
_lua_DisplayAlert(lua_State* L)
{
  (void)L;
  ULONG alertNumber = luaL_checkinteger(L, 1);
  CONST_STRPTR string = amiga_checkConstNullableString(L, 2);
  ULONG height = luaL_checkinteger(L, 3);
  BOOL result = DisplayAlert(alertNumber, string, height);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_DisplayBeep(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  DisplayBeep(screen);
  return 0;
}

static int
_lua_EndRequest(lua_State* L)
{
  (void)L;
  struct Requester * requester = _lua_gen_checkRequester(L, 1);
  struct Window * window = _lua_gen_checkWindow(L, 2);
  EndRequest(requester, window);
  return 0;
}

static int
_lua_InitRequester(lua_State* L)
{
  (void)L;
  struct Requester * requester = _lua_gen_checkRequester(L, 1);
  InitRequester(requester);
  return 0;
}

static int
_lua_ItemAddress(lua_State* L)
{
  (void)L;
  const struct Menu * menuStrip = _lua_gen_checkMenu(L, 1);
  ULONG menuNumber = luaL_checkinteger(L, 2);
  struct MenuItem * result = ItemAddress(menuStrip, menuNumber);
  _lua_gen_pushMenuItem(L, result);
  return 1;
}

static int
_lua_ModifyIDCMP(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  BOOL result = ModifyIDCMP(window, flags);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_MoveScreen(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  LONG dx = luaL_checkinteger(L, 2);
  LONG dy = luaL_checkinteger(L, 3);
  MoveScreen(screen, dx, dy);
  return 0;
}

static int
_lua_MoveWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  LONG dx = luaL_checkinteger(L, 2);
  LONG dy = luaL_checkinteger(L, 3);
  MoveWindow(window, dx, dy);
  return 0;
}

static int
_lua_OffMenu(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG menuNumber = luaL_checkinteger(L, 2);
  OffMenu(window, menuNumber);
  return 0;
}

static int
_lua_OnMenu(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG menuNumber = luaL_checkinteger(L, 2);
  OnMenu(window, menuNumber);
  return 0;
}

static int
_lua_OpenScreen(lua_State* L)
{
  (void)L;
  const struct NewScreen * newScreen = _lua_gen_checkNewScreen(L, 1);
  struct Screen * result = OpenScreen(newScreen);
  _lua_gen_pushScreen(L, result);
  return 1;
}

static int
_lua_OpenWindow(lua_State* L)
{
  (void)L;
  const struct NewWindow * newWindow = _lua_gen_checkNewWindow(L, 1);
  struct Window * result = OpenWindow(newWindow);
  _lua_gen_pushWindow(L, result);
  return 1;
}

static int
_lua_OpenWorkBench(lua_State* L)
{
  (void)L;
  ULONG result = OpenWorkBench();
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_RemoveGadget(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Gadget * gadget = _lua_gen_checkGadget(L, 2);
  UWORD result = RemoveGadget(window, gadget);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ReportMouse(lua_State* L)
{
  (void)L;
  LONG flag = luaL_checkinteger(L, 1);
  struct Window * window = _lua_gen_checkWindow(L, 2);
  ReportMouse(flag, window);
  return 0;
}

static int
_lua_ReportMouse1(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  LONG flag = luaL_checkinteger(L, 2);
  ReportMouse1(window, flag);
  return 0;
}

static int
_lua_Request(lua_State* L)
{
  (void)L;
  struct Requester * requester = _lua_gen_checkRequester(L, 1);
  struct Window * window = _lua_gen_checkWindow(L, 2);
  BOOL result = Request(requester, window);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_ScreenToBack(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  ScreenToBack(screen);
  return 0;
}

static int
_lua_ScreenToFront(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  ScreenToFront(screen);
  return 0;
}

static int
_lua_SetDMRequest(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Requester * requester = _lua_gen_checkRequester(L, 2);
  BOOL result = SetDMRequest(window, requester);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_SetMenuStrip(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Menu * menu = _lua_gen_checkMenu(L, 2);
  BOOL result = SetMenuStrip(window, menu);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_ShowTitle(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  LONG showIt = luaL_checkinteger(L, 2);
  ShowTitle(screen, showIt);
  return 0;
}

static int
_lua_SizeWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  LONG dx = luaL_checkinteger(L, 2);
  LONG dy = luaL_checkinteger(L, 3);
  SizeWindow(window, dx, dy);
  return 0;
}

static int
_lua_ViewAddress(lua_State* L)
{
  (void)L;
  struct View * result = ViewAddress();
  _lua_gen_pushView(L, result);
  return 1;
}

static int
_lua_ViewPortAddress(lua_State* L)
{
  (void)L;
  const struct Window * window = _lua_gen_checkWindow(L, 1);
  struct ViewPort * result = ViewPortAddress(window);
  _lua_gen_pushViewPort(L, result);
  return 1;
}

static int
_lua_WindowToBack(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  WindowToBack(window);
  return 0;
}

static int
_lua_WindowToFront(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  WindowToFront(window);
  return 0;
}

static int
_lua_IntuiTextLength(lua_State* L)
{
  (void)L;
  const struct IntuiText * iText = _lua_gen_checkIntuiText(L, 1);
  LONG result = IntuiTextLength(iText);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_WBenchToBack(lua_State* L)
{
  (void)L;
  BOOL result = WBenchToBack();
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_WBenchToFront(lua_State* L)
{
  (void)L;
  BOOL result = WBenchToFront();
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_BeginRefresh(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  BeginRefresh(window);
  return 0;
}

static int
_lua_EndRefresh(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  LONG complete = luaL_checkinteger(L, 2);
  EndRefresh(window, complete);
  return 0;
}

static int
_lua_FreeSysRequest(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  FreeSysRequest(window);
  return 0;
}

static int
_lua_MakeScreen(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  LONG result = MakeScreen(screen);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_RemakeDisplay(lua_State* L)
{
  (void)L;
  LONG result = RemakeDisplay();
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_RethinkDisplay(lua_State* L)
{
  (void)L;
  LONG result = RethinkDisplay();
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_AlohaWorkbench(lua_State* L)
{
  (void)L;
  LONG wbport = luaL_checkinteger(L, 1);
  AlohaWorkbench(wbport);
  return 0;
}

static int
_lua_LockIBase(lua_State* L)
{
  (void)L;
  ULONG dontknow = luaL_checkinteger(L, 1);
  ULONG result = LockIBase(dontknow);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_UnlockIBase(lua_State* L)
{
  (void)L;
  ULONG ibLock = luaL_checkinteger(L, 1);
  UnlockIBase(ibLock);
  return 0;
}

static int
_lua_ActivateWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ActivateWindow(window);
  return 0;
}

static int
_lua_RefreshWindowFrame(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  RefreshWindowFrame(window);
  return 0;
}

static int
_lua_SetEditHook(lua_State* L)
{
  (void)L;
  struct Hook * hook = _lua_gen_checkHook(L, 1);
  struct Hook * result = SetEditHook(hook);
  _lua_gen_pushHook(L, result);
  return 1;
}

static int
_lua_SetMouseQueue(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG queueLength = luaL_checkinteger(L, 2);
  LONG result = SetMouseQueue(window, queueLength);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ZipWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ZipWindow(window);
  return 0;
}

static int
_lua_LockPubScreen(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct Screen * result = LockPubScreen(name);
  _lua_gen_pushScreen(L, result);
  return 1;
}

static int
_lua_UnlockPubScreen(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct Screen * screen = _lua_gen_checkScreen(L, 2);
  UnlockPubScreen(name, screen);
  return 0;
}

static int
_lua_LockPubScreenList(lua_State* L)
{
  (void)L;
  struct List * result = LockPubScreenList();
  _lua_gen_pushList(L, result);
  return 1;
}

static int
_lua_UnlockPubScreenList(lua_State* L)
{
  (void)L;
  UnlockPubScreenList();
  return 0;
}

static int
_lua_NextPubScreen(lua_State* L)
{
  (void)L;
  const struct Screen * screen = _lua_gen_checkScreen(L, 1);
  STRPTR namebuf = amiga_checkNullableString(L, 2);
  STRPTR result = NextPubScreen(screen, namebuf);
  lua_pushstring(L, result);
  return 1;
}

static int
_lua_SetDefaultPubScreen(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  SetDefaultPubScreen(name);
  return 0;
}

static int
_lua_SetPubScreenModes(lua_State* L)
{
  (void)L;
  ULONG modes = luaL_checkinteger(L, 1);
  UWORD result = SetPubScreenModes(modes);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_PubScreenStatus(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  ULONG statusFlags = luaL_checkinteger(L, 2);
  UWORD result = PubScreenStatus(screen, statusFlags);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ObtainGIRPort(lua_State* L)
{
  (void)L;
  struct GadgetInfo * gInfo = _lua_gen_checkGadgetInfo(L, 1);
  struct RastPort * result = ObtainGIRPort(gInfo);
  _lua_gen_pushRastPort(L, result);
  return 1;
}

static int
_lua_ReleaseGIRPort(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ReleaseGIRPort(rp);
  return 0;
}

static int
_lua_GetDefaultPubScreen(lua_State* L)
{
  (void)L;
  STRPTR nameBuffer = amiga_checkNullableString(L, 1);
  GetDefaultPubScreen(nameBuffer);
  return 0;
}

static int
_lua_OpenWindowTagList(lua_State* L)
{
  const struct NewWindow * newWindow = _lua_gen_checkNewWindow(L, 1);
  struct TagItem* tagList = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tagList = _tags;
  }
  struct Window * result = OpenWindowTagList(newWindow, tagList);
  _lua_gen_pushWindow(L, result);
  return 1;
}

static int
_lua_OpenWindowTags(lua_State* L)
{
  const struct NewWindow * newWindow = _lua_gen_checkNewWindow(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct Window * result = OpenWindowTagList(newWindow, taglist);
  _lua_gen_pushWindow(L, result);
  return 1;
}

static int
_lua_PointInImage(lua_State* L)
{
  (void)L;
  ULONG point = luaL_checkinteger(L, 1);
  const struct Image * image = _lua_gen_checkImage(L, 2);
  BOOL result = PointInImage(point, image);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_DisposeObject(lua_State* L)
{
  (void)L;
  APTR object = lua_touserdata(L, 1);
  DisposeObject(object);
  return 0;
}

static int
_lua_SetAttrsA(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem* tagList = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tagList = _tags;
  }
  ULONG result = SetAttrsA(object, tagList);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_SetAttrs(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  ULONG result = SetAttrsA(object, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_GetAttr(lua_State* L)
{
  (void)L;
  ULONG attrID = luaL_checkinteger(L, 1);
  APTR object = lua_touserdata(L, 2);
  ULONG * storagePtr = lua_touserdata(L, 3);
  ULONG result = GetAttr(attrID, object, storagePtr);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_NextObject(lua_State* L)
{
  (void)L;
  CONST_APTR objectPtrPtr = lua_touserdata(L, 1);
  APTR result = NextObject(objectPtrPtr);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_lua_AddClass(lua_State* L)
{
  (void)L;
  struct IClass * classPtr = _lua_gen_checkIClass(L, 1);
  AddClass(classPtr);
  return 0;
}

static int
_lua_GetScreenDrawInfo(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  struct DrawInfo * result = GetScreenDrawInfo(screen);
  _lua_gen_pushDrawInfo(L, result);
  return 1;
}

static int
_lua_ResetMenuStrip(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Menu * menu = _lua_gen_checkMenu(L, 2);
  BOOL result = ResetMenuStrip(window, menu);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_RemoveClass(lua_State* L)
{
  (void)L;
  struct IClass * classPtr = _lua_gen_checkIClass(L, 1);
  RemoveClass(classPtr);
  return 0;
}

static int
_lua_FreeClass(lua_State* L)
{
  (void)L;
  struct IClass * classPtr = _lua_gen_checkIClass(L, 1);
  BOOL result = FreeClass(classPtr);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_FreeScreenBuffer(lua_State* L)
{
  (void)L;
  struct Screen * sc = _lua_gen_checkScreen(L, 1);
  struct ScreenBuffer * sb = _lua_gen_checkScreenBuffer(L, 2);
  FreeScreenBuffer(sc, sb);
  return 0;
}

static int
_lua_ChangeScreenBuffer(lua_State* L)
{
  (void)L;
  struct Screen * sc = _lua_gen_checkScreen(L, 1);
  struct ScreenBuffer * sb = _lua_gen_checkScreenBuffer(L, 2);
  ULONG result = ChangeScreenBuffer(sc, sb);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ScreenDepth(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  APTR reserved = lua_touserdata(L, 3);
  ScreenDepth(screen, flags, reserved);
  return 0;
}

static int
_lua_LendMenus(lua_State* L)
{
  (void)L;
  struct Window * fromwindow = _lua_gen_checkWindow(L, 1);
  struct Window * towindow = _lua_gen_checkWindow(L, 2);
  LendMenus(fromwindow, towindow);
  return 0;
}

static int
_lua_SetWindowPointerA(lua_State* L)
{
  struct Window * win = _lua_gen_checkWindow(L, 1);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    taglist = _tags;
  }
  SetWindowPointerA(win, taglist);
  return 0;
}

static int
_lua_SetWindowPointer(lua_State* L)
{
  struct Window * win = _lua_gen_checkWindow(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  SetWindowPointerA(win, taglist);
  return 0;
}

static int
_lua_TimedDisplayAlert(lua_State* L)
{
  (void)L;
  ULONG alertNumber = luaL_checkinteger(L, 1);
  CONST_STRPTR string = amiga_checkConstNullableString(L, 2);
  ULONG height = luaL_checkinteger(L, 3);
  ULONG time = luaL_checkinteger(L, 4);
  BOOL result = TimedDisplayAlert(alertNumber, string, height, time);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_HelpControl(lua_State* L)
{
  (void)L;
  struct Window * win = _lua_gen_checkWindow(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  HelpControl(win, flags);
  return 0;
}

static int
_lua_ShowWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Window * other = _lua_gen_checkWindow(L, 2);
  BOOL result = ShowWindow(window, other);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_HideWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  BOOL result = HideWindow(window);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_IntuitionControlA(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    taglist = _tags;
  }
  ULONG result = IntuitionControlA(object, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_IntuitionControl(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  ULONG result = IntuitionControlA(object, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_CreateGadgetA(lua_State* L)
{
  ULONG kind = luaL_checkinteger(L, 1);
  struct Gadget * gad = _lua_gen_checkGadget(L, 2);
  struct NewGadget * ng = _lua_gen_checkNewGadget(L, 3);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 4)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 4);
    taglist = _tags;
  }
  struct Gadget * result = CreateGadgetA(kind, gad, ng, taglist);
  _lua_gen_pushGadget(L, result);
  return 1;
}

static int
_lua_CreateGadget(lua_State* L)
{
  ULONG kind = luaL_checkinteger(L, 1);
  struct Gadget * gad = _lua_gen_checkGadget(L, 2);
  struct NewGadget * ng = _lua_gen_checkNewGadget(L, 3);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 4);
  struct Gadget * result = CreateGadgetA(kind, gad, ng, taglist);
  _lua_gen_pushGadget(L, result);
  return 1;
}

static int
_lua_FreeGadgets(lua_State* L)
{
  (void)L;
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  FreeGadgets(gad);
  return 0;
}

static int
_lua_GT_SetGadgetAttrsA(lua_State* L)
{
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  struct Window * win = _lua_gen_checkWindow(L, 2);
  struct Requester * req = _lua_gen_checkRequester(L, 3);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 4)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 4);
    taglist = _tags;
  }
  GT_SetGadgetAttrsA(gad, win, req, taglist);
  return 0;
}

static int
_lua_GT_SetGadgetAttrs(lua_State* L)
{
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  struct Window * win = _lua_gen_checkWindow(L, 2);
  struct Requester * req = _lua_gen_checkRequester(L, 3);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 4);
  GT_SetGadgetAttrsA(gad, win, req, taglist);
  return 0;
}

static int
_lua_CreateMenusA(lua_State* L)
{
  const struct NewMenu * newmenu = _lua_gen_checkNewMenu(L, 1);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    taglist = _tags;
  }
  struct Menu * result = CreateMenusA(newmenu, taglist);
  _lua_gen_pushMenu(L, result);
  return 1;
}

static int
_lua_CreateMenus(lua_State* L)
{
  const struct NewMenu * newmenu = _lua_gen_checkNewMenu(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct Menu * result = CreateMenusA(newmenu, taglist);
  _lua_gen_pushMenu(L, result);
  return 1;
}

static int
_lua_FreeMenus(lua_State* L)
{
  (void)L;
  struct Menu * menu = _lua_gen_checkMenu(L, 1);
  FreeMenus(menu);
  return 0;
}

static int
_lua_LayoutMenuItemsA(lua_State* L)
{
  struct MenuItem * firstitem = _lua_gen_checkMenuItem(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 3)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 3);
    taglist = _tags;
  }
  BOOL result = LayoutMenuItemsA(firstitem, vi, taglist);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_LayoutMenuItems(lua_State* L)
{
  struct MenuItem * firstitem = _lua_gen_checkMenuItem(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  BOOL result = LayoutMenuItemsA(firstitem, vi, taglist);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_LayoutMenusA(lua_State* L)
{
  struct Menu * firstmenu = _lua_gen_checkMenu(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 3)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 3);
    taglist = _tags;
  }
  BOOL result = LayoutMenusA(firstmenu, vi, taglist);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_LayoutMenus(lua_State* L)
{
  struct Menu * firstmenu = _lua_gen_checkMenu(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  BOOL result = LayoutMenusA(firstmenu, vi, taglist);
  lua_pushboolean(L, result);
  return 1;
}

static int
_lua_GT_GetIMsg(lua_State* L)
{
  (void)L;
  struct MsgPort * iport = _lua_gen_checkMsgPort(L, 1);
  struct IntuiMessage * result = GT_GetIMsg(iport);
  _lua_gen_pushIntuiMessage(L, result);
  return 1;
}

static int
_lua_GT_ReplyIMsg(lua_State* L)
{
  (void)L;
  struct IntuiMessage * imsg = _lua_gen_checkIntuiMessage(L, 1);
  GT_ReplyIMsg(imsg);
  return 0;
}

static int
_lua_GT_RefreshWindow(lua_State* L)
{
  (void)L;
  struct Window * win = _lua_gen_checkWindow(L, 1);
  struct Requester * req = _lua_gen_checkRequester(L, 2);
  GT_RefreshWindow(win, req);
  return 0;
}

static int
_lua_GT_BeginRefresh(lua_State* L)
{
  (void)L;
  struct Window * win = _lua_gen_checkWindow(L, 1);
  GT_BeginRefresh(win);
  return 0;
}

static int
_lua_GT_EndRefresh(lua_State* L)
{
  (void)L;
  struct Window * win = _lua_gen_checkWindow(L, 1);
  LONG complete = luaL_checkinteger(L, 2);
  GT_EndRefresh(win, complete);
  return 0;
}

static int
_lua_GT_FilterIMsg(lua_State* L)
{
  (void)L;
  const struct IntuiMessage * imsg = _lua_gen_checkIntuiMessage(L, 1);
  struct IntuiMessage * result = GT_FilterIMsg(imsg);
  _lua_gen_pushIntuiMessage(L, result);
  return 1;
}

static int
_lua_GT_PostFilterIMsg(lua_State* L)
{
  (void)L;
  struct IntuiMessage * imsg = _lua_gen_checkIntuiMessage(L, 1);
  struct IntuiMessage * result = GT_PostFilterIMsg(imsg);
  _lua_gen_pushIntuiMessage(L, result);
  return 1;
}

static int
_lua_CreateContext(lua_State* L)
{
  (void)L;
  struct Gadget ** glistptr = amiga_checkGadgetPtr(L, 1);
  struct Gadget * result = CreateContext(glistptr);
  _lua_gen_pushGadget(L, result);
  return 1;
}

static int
_lua_DrawBevelBoxA(lua_State* L)
{
  struct RastPort * rport = _lua_gen_checkRastPort(L, 1);
  LONG left = luaL_checkinteger(L, 2);
  LONG top = luaL_checkinteger(L, 3);
  LONG width = luaL_checkinteger(L, 4);
  LONG height = luaL_checkinteger(L, 5);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 6)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 6);
    taglist = _tags;
  }
  DrawBevelBoxA(rport, left, top, width, height, taglist);
  return 0;
}

static int
_lua_DrawBevelBox(lua_State* L)
{
  struct RastPort * rport = _lua_gen_checkRastPort(L, 1);
  LONG left = luaL_checkinteger(L, 2);
  LONG top = luaL_checkinteger(L, 3);
  LONG width = luaL_checkinteger(L, 4);
  LONG height = luaL_checkinteger(L, 5);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 6);
  DrawBevelBoxA(rport, left, top, width, height, taglist);
  return 0;
}

static int
_lua_GetVisualInfoA(lua_State* L)
{
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    taglist = _tags;
  }
  APTR result = GetVisualInfoA(screen, taglist);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_lua_GetVisualInfo(lua_State* L)
{
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  APTR result = GetVisualInfoA(screen, taglist);
  lua_pushlightuserdata(L, result);
  return 1;
}

static int
_lua_FreeVisualInfo(lua_State* L)
{
  (void)L;
  APTR vi = lua_touserdata(L, 1);
  FreeVisualInfo(vi);
  return 0;
}

static int
_lua_SetDesignFontA(lua_State* L)
{
  APTR vi = lua_touserdata(L, 1);
  struct TextAttr * tattr = _lua_gen_checkTextAttr(L, 2);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 3)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 3);
    tags = _tags;
  }
  LONG result = SetDesignFontA(vi, tattr, tags);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_SetDesignFont(lua_State* L)
{
  APTR vi = lua_touserdata(L, 1);
  struct TextAttr * tattr = _lua_gen_checkTextAttr(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  LONG result = SetDesignFontA(vi, tattr, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ScaleGadgetRectA(lua_State* L)
{
  struct NewGadget * ng = _lua_gen_checkNewGadget(L, 1);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  LONG result = ScaleGadgetRectA(ng, tags);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_ScaleGadgetRect(lua_State* L)
{
  struct NewGadget * ng = _lua_gen_checkNewGadget(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  LONG result = ScaleGadgetRectA(ng, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_GT_GetGadgetAttrsA(lua_State* L)
{
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  struct Window * win = _lua_gen_checkWindow(L, 2);
  struct Requester * req = _lua_gen_checkRequester(L, 3);
  struct TagItem* taglist = NULL;
  if (!lua_isnoneornil(L, 4)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 4);
    taglist = _tags;
  }
  LONG result = GT_GetGadgetAttrsA(gad, win, req, taglist);
  lua_pushinteger(L, result);
  return 1;
}

static int
_lua_GT_GetGadgetAttrs(lua_State* L)
{
  struct Gadget * gad = _lua_gen_checkGadget(L, 1);
  struct Window * win = _lua_gen_checkWindow(L, 2);
  struct Requester * req = _lua_gen_checkRequester(L, 3);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 4);
  LONG result = GT_GetGadgetAttrsA(gad, win, req, taglist);
  lua_pushinteger(L, result);
  return 1;
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
  if (strcmp(key, "MenuStrip") == 0) {
    // finder 1
    obj->MenuStrip = *(Menu **)luaL_checkudata(L, 3, "Menu");
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
  if (strcmp(key, "CheckMark") == 0) {
    // finder 1
    obj->CheckMark = *(Image **)luaL_checkudata(L, 3, "Image");
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
  if (strcmp(key, "MenuStrip") == 0) {
    Menu **ud = (Menu **)lua_newuserdata(L, sizeof(Menu *));
    *ud = (Menu*)obj->MenuStrip;
    luaL_getmetatable(L, "Menu");
    lua_setmetatable(L, -2);
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
  if (strcmp(key, "CheckMark") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->CheckMark;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
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
  lua_pushstring(L, "MenuStrip");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "FirstRequest");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "DMRequest");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "ReqCount");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "WScreen");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "RPort");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "BorderLeft");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "BorderTop");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "BorderRight");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "BorderBottom");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "BorderRPort");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "FirstGadget");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "Parent");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "Descendant");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "Pointer");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "PtrHeight");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "PtrWidth");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "XOffset");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "YOffset");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "IDCMPFlags");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "UserPort");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "WindowPort");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "MessageKey");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "CheckMark");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "ScreenTitle");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "GZZMouseX");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "GZZMouseY");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "GZZWidth");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "GZZHeight");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 46);
  lua_pushstring(L, "IFont");
  lua_rawseti(L, -2, 47);
  lua_pushstring(L, "MoreFlags");
  lua_rawseti(L, -2, 48);
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
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    obj->BitMap = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
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
  if (strcmp(key, "BitMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)obj->BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
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
  lua_pushstring(L, "BitMap");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "AreaPtrn");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Mask");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "FgPen");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "BgPen");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "AOlPen");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "DrawMode");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "AreaPtSz");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "linpatcnt");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dummy");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "LinePtrn");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "cp_x");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "cp_y");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "PenWidth");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "PenHeight");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "Font");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "AlgoStyle");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "TxFlags");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "TxHeight");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "TxWidth");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "TxBaseline");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "TxSpacing");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "RP_User");
  lua_rawseti(L, -2, 24);
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
  if (strcmp(key, "mp_MsgList") == 0) {
    // finder 0
    List *val = *(List **)luaL_checkudata(L, 3, "List");
    obj->mp_MsgList = *val;
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
  if (strcmp(key, "mp_MsgList") == 0) {
    List **ud = (List **)lua_newuserdata(L, sizeof(List *));
    *ud = (List*)&obj->mp_MsgList;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
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
  lua_pushstring(L, "mp_MsgList");
  lua_rawseti(L, -2, 3);
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
  if (strcmp(key, "GadgetText") == 0) {
    // finder 1
    obj->GadgetText = *(IntuiText **)luaL_checkudata(L, 3, "IntuiText");
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
  if (strcmp(key, "GadgetText") == 0) {
    IntuiText **ud = (IntuiText **)lua_newuserdata(L, sizeof(IntuiText *));
    *ud = (IntuiText*)obj->GadgetText;
    luaL_getmetatable(L, "IntuiText");
    lua_setmetatable(L, -2);
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
  lua_pushstring(L, "GadgetText");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "MutualExclude");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "SpecialInfo");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "GadgetID");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 15);
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
_lua_gen_View_newindex(lua_State *L)
{
  View *obj = *(View **)luaL_checkudata(L, 1, "View");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ViewPort") == 0) {
    // finder 1
    obj->ViewPort = *(ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    return 0;
  }
  if (strcmp(key, "DyOffset") == 0) {
    obj->DyOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DxOffset") == 0) {
    obj->DxOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Modes") == 0) {
    obj->Modes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_View_constructor(lua_State *L)
{
  // Allocate pointer-to-View in userdata
  View **objp = lua_newuserdata(L, sizeof(View *));
  *objp = malloc(sizeof(View));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(View));

  // Set metatable
  luaL_getmetatable(L, "View");
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
_lua_gen_View_index(lua_State *L)
{
  View *obj = *(View **)luaL_checkudata(L, 1, "View");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ViewPort") == 0) {
    ViewPort **ud = (ViewPort **)lua_newuserdata(L, sizeof(ViewPort *));
    *ud = (ViewPort*)obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DyOffset") == 0) {
    lua_pushinteger(L, obj->DyOffset);
    return 1;
  }
  if (strcmp(key, "DxOffset") == 0) {
    lua_pushinteger(L, obj->DxOffset);
    return 1;
  }
  if (strcmp(key, "Modes") == 0) {
    lua_pushinteger(L, obj->Modes);
    return 1;
  }
  return 0;
}

static void
_lua_gen_View_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ViewPort");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "DyOffset");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "DxOffset");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Modes");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_View(lua_State *L) {
  if (luaL_newmetatable(L, "View")) {
    lua_pushcfunction(L, _lua_gen_View_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_View_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_View_constructor);
    lua_setglobal(L, "View");
    _lua_gen_View_install_keys(L);
    lua_pushstring(L, "View");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ViewPort_newindex(lua_State *L)
{
  ViewPort *obj = *(ViewPort **)luaL_checkudata(L, 1, "ViewPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    // finder 1
    obj->Next = *(ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    return 0;
  }
  if (strcmp(key, "DWidth") == 0) {
    obj->DWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DHeight") == 0) {
    obj->DHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DxOffset") == 0) {
    obj->DxOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DyOffset") == 0) {
    obj->DyOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Modes") == 0) {
    obj->Modes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpritePriorities") == 0) {
    obj->SpritePriorities = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ExtendedModes") == 0) {
    obj->ExtendedModes = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_ViewPort_constructor(lua_State *L)
{
  // Allocate pointer-to-ViewPort in userdata
  ViewPort **objp = lua_newuserdata(L, sizeof(ViewPort *));
  *objp = malloc(sizeof(ViewPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(ViewPort));

  // Set metatable
  luaL_getmetatable(L, "ViewPort");
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
_lua_gen_ViewPort_index(lua_State *L)
{
  ViewPort *obj = *(ViewPort **)luaL_checkudata(L, 1, "ViewPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    ViewPort **ud = (ViewPort **)lua_newuserdata(L, sizeof(ViewPort *));
    *ud = (ViewPort*)obj->Next;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DWidth") == 0) {
    lua_pushinteger(L, obj->DWidth);
    return 1;
  }
  if (strcmp(key, "DHeight") == 0) {
    lua_pushinteger(L, obj->DHeight);
    return 1;
  }
  if (strcmp(key, "DxOffset") == 0) {
    lua_pushinteger(L, obj->DxOffset);
    return 1;
  }
  if (strcmp(key, "DyOffset") == 0) {
    lua_pushinteger(L, obj->DyOffset);
    return 1;
  }
  if (strcmp(key, "Modes") == 0) {
    lua_pushinteger(L, obj->Modes);
    return 1;
  }
  if (strcmp(key, "SpritePriorities") == 0) {
    lua_pushinteger(L, obj->SpritePriorities);
    return 1;
  }
  if (strcmp(key, "ExtendedModes") == 0) {
    lua_pushinteger(L, obj->ExtendedModes);
    return 1;
  }
  return 0;
}

static void
_lua_gen_ViewPort_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Next");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "DWidth");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "DHeight");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "DxOffset");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "DyOffset");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Modes");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "SpritePriorities");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ExtendedModes");
  lua_rawseti(L, -2, 8);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ViewPort(lua_State *L) {
  if (luaL_newmetatable(L, "ViewPort")) {
    lua_pushcfunction(L, _lua_gen_ViewPort_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ViewPort_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ViewPort_constructor);
    lua_setglobal(L, "ViewPort");
    _lua_gen_ViewPort_install_keys(L);
    lua_pushstring(L, "ViewPort");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_IntuiText_newindex(lua_State *L)
{
  IntuiText *obj = *(IntuiText **)luaL_checkudata(L, 1, "IntuiText");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "FrontPen") == 0) {
    obj->FrontPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BackPen") == 0) {
    obj->BackPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DrawMode") == 0) {
    obj->DrawMode = (UBYTE)luaL_checkinteger(L, 3);
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
  if (strcmp(key, "ITextFont") == 0) {
    // finder 1
    obj->ITextFont = *(TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "IText") == 0) {
    obj->IText = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "NextText") == 0) {
    // finder 1
    obj->NextText = *(IntuiText **)luaL_checkudata(L, 3, "IntuiText");
    return 0;
  }
  return 0;
}


static int
_lua_IntuiText_constructor(lua_State *L)
{
  // Allocate pointer-to-IntuiText in userdata
  IntuiText **objp = lua_newuserdata(L, sizeof(IntuiText *));
  *objp = malloc(sizeof(IntuiText));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(IntuiText));

  // Set metatable
  luaL_getmetatable(L, "IntuiText");
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
_lua_gen_IntuiText_index(lua_State *L)
{
  IntuiText *obj = *(IntuiText **)luaL_checkudata(L, 1, "IntuiText");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "FrontPen") == 0) {
    lua_pushinteger(L, obj->FrontPen);
    return 1;
  }
  if (strcmp(key, "BackPen") == 0) {
    lua_pushinteger(L, obj->BackPen);
    return 1;
  }
  if (strcmp(key, "DrawMode") == 0) {
    lua_pushinteger(L, obj->DrawMode);
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
  if (strcmp(key, "ITextFont") == 0) {
    TextAttr **ud = (TextAttr **)lua_newuserdata(L, sizeof(TextAttr *));
    *ud = (TextAttr*)obj->ITextFont;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "IText") == 0) {
    lua_pushstring(L, obj->IText);
    return 1;
  }
  if (strcmp(key, "NextText") == 0) {
    IntuiText **ud = (IntuiText **)lua_newuserdata(L, sizeof(IntuiText *));
    *ud = (IntuiText*)obj->NextText;
    luaL_getmetatable(L, "IntuiText");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_IntuiText_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "FrontPen");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "BackPen");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "DrawMode");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ITextFont");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "IText");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "NextText");
  lua_rawseti(L, -2, 8);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_IntuiText(lua_State *L) {
  if (luaL_newmetatable(L, "IntuiText")) {
    lua_pushcfunction(L, _lua_gen_IntuiText_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_IntuiText_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_IntuiText_constructor);
    lua_setglobal(L, "IntuiText");
    _lua_gen_IntuiText_install_keys(L);
    lua_pushstring(L, "IntuiText");
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
  if (strcmp(key, "ViewPort") == 0) {
    // finder 0
    ViewPort *val = *(ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort = *val;
    return 0;
  }
  if (strcmp(key, "RastPort") == 0) {
    // finder 0
    RastPort *val = *(RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->RastPort = *val;
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 0
    BitMap *val = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->BitMap = *val;
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
  if (strcmp(key, "ViewPort") == 0) {
    ViewPort **ud = (ViewPort **)lua_newuserdata(L, sizeof(ViewPort *));
    *ud = (ViewPort*)&obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
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
  if (strcmp(key, "BitMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)&obj->BitMap;
    luaL_getmetatable(L, "BitMap");
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
  lua_pushstring(L, "ViewPort");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "RastPort");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "BitMap");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "FirstGadget");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "SaveColor0");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 30);
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
_lua_gen_Hook_newindex(lua_State *L)
{
  Hook *obj = *(Hook **)luaL_checkudata(L, 1, "Hook");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "h_Data") == 0) {
    obj->h_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Hook_constructor(lua_State *L)
{
  // Allocate pointer-to-Hook in userdata
  Hook **objp = lua_newuserdata(L, sizeof(Hook *));
  *objp = malloc(sizeof(Hook));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Hook));

  // Set metatable
  luaL_getmetatable(L, "Hook");
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
_lua_gen_Hook_index(lua_State *L)
{
  Hook *obj = *(Hook **)luaL_checkudata(L, 1, "Hook");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "h_Data") == 0) {
    lua_pushlightuserdata(L, obj->h_Data);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Hook_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "h_Entry");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "h_SubEntry");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "h_Data");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Hook(lua_State *L) {
  if (luaL_newmetatable(L, "Hook")) {
    lua_pushcfunction(L, _lua_gen_Hook_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Hook_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Hook_constructor);
    lua_setglobal(L, "Hook");
    _lua_gen_Hook_install_keys(L);
    lua_pushstring(L, "Hook");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_List_newindex(lua_State *L)
{
  List *obj = *(List **)luaL_checkudata(L, 1, "List");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lh_Type") == 0) {
    obj->lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "l_pad") == 0) {
    obj->l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_List_constructor(lua_State *L)
{
  // Allocate pointer-to-List in userdata
  List **objp = lua_newuserdata(L, sizeof(List *));
  *objp = malloc(sizeof(List));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(List));

  // Set metatable
  luaL_getmetatable(L, "List");
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
_lua_gen_List_index(lua_State *L)
{
  List *obj = *(List **)luaL_checkudata(L, 1, "List");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lh_Type") == 0) {
    lua_pushinteger(L, obj->lh_Type);
    return 1;
  }
  if (strcmp(key, "l_pad") == 0) {
    lua_pushinteger(L, obj->l_pad);
    return 1;
  }
  return 0;
}

static void
_lua_gen_List_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "lh_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "l_pad");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_List(lua_State *L) {
  if (luaL_newmetatable(L, "List")) {
    lua_pushcfunction(L, _lua_gen_List_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_List_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_List_constructor);
    lua_setglobal(L, "List");
    _lua_gen_List_install_keys(L);
    lua_pushstring(L, "List");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_GadgetInfo_newindex(lua_State *L)
{
  GadgetInfo *obj = *(GadgetInfo **)luaL_checkudata(L, 1, "GadgetInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "gi_Screen") == 0) {
    // finder 1
    obj->gi_Screen = *(Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "gi_Window") == 0) {
    // finder 1
    obj->gi_Window = *(Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "gi_Requester") == 0) {
    // finder 1
    obj->gi_Requester = *(Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "gi_RastPort") == 0) {
    // finder 1
    obj->gi_RastPort = *(RastPort **)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "gi_DrInfo") == 0) {
    // finder 1
    obj->gi_DrInfo = *(DrawInfo **)luaL_checkudata(L, 3, "DrawInfo");
    return 0;
  }
  return 0;
}


static int
_lua_GadgetInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-GadgetInfo in userdata
  GadgetInfo **objp = lua_newuserdata(L, sizeof(GadgetInfo *));
  *objp = malloc(sizeof(GadgetInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(GadgetInfo));

  // Set metatable
  luaL_getmetatable(L, "GadgetInfo");
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
_lua_gen_GadgetInfo_index(lua_State *L)
{
  GadgetInfo *obj = *(GadgetInfo **)luaL_checkudata(L, 1, "GadgetInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "gi_Screen") == 0) {
    Screen **ud = (Screen **)lua_newuserdata(L, sizeof(Screen *));
    *ud = (Screen*)obj->gi_Screen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_Window") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->gi_Window;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_Requester") == 0) {
    Requester **ud = (Requester **)lua_newuserdata(L, sizeof(Requester *));
    *ud = (Requester*)obj->gi_Requester;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_RastPort") == 0) {
    RastPort **ud = (RastPort **)lua_newuserdata(L, sizeof(RastPort *));
    *ud = (RastPort*)obj->gi_RastPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_DrInfo") == 0) {
    DrawInfo **ud = (DrawInfo **)lua_newuserdata(L, sizeof(DrawInfo *));
    *ud = (DrawInfo*)obj->gi_DrInfo;
    luaL_getmetatable(L, "DrawInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_GadgetInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "gi_Screen");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "gi_Window");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "gi_Requester");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "gi_RastPort");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "gi_DrInfo");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_GadgetInfo(lua_State *L) {
  if (luaL_newmetatable(L, "GadgetInfo")) {
    lua_pushcfunction(L, _lua_gen_GadgetInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_GadgetInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_GadgetInfo_constructor);
    lua_setglobal(L, "GadgetInfo");
    _lua_gen_GadgetInfo_install_keys(L);
    lua_pushstring(L, "GadgetInfo");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Image_newindex(lua_State *L)
{
  Image *obj = *(Image **)luaL_checkudata(L, 1, "Image");
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
  if (strcmp(key, "Depth") == 0) {
    obj->Depth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PlanePick") == 0) {
    obj->PlanePick = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PlaneOnOff") == 0) {
    obj->PlaneOnOff = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NextImage") == 0) {
    // finder 1
    obj->NextImage = *(Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  return 0;
}


static int
_lua_Image_constructor(lua_State *L)
{
  // Allocate pointer-to-Image in userdata
  Image **objp = lua_newuserdata(L, sizeof(Image *));
  *objp = malloc(sizeof(Image));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Image));

  // Set metatable
  luaL_getmetatable(L, "Image");
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
_lua_gen_Image_index(lua_State *L)
{
  Image *obj = *(Image **)luaL_checkudata(L, 1, "Image");
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
  if (strcmp(key, "Depth") == 0) {
    lua_pushinteger(L, obj->Depth);
    return 1;
  }
  if (strcmp(key, "PlanePick") == 0) {
    lua_pushinteger(L, obj->PlanePick);
    return 1;
  }
  if (strcmp(key, "PlaneOnOff") == 0) {
    lua_pushinteger(L, obj->PlaneOnOff);
    return 1;
  }
  if (strcmp(key, "NextImage") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->NextImage;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Image_install_keys(lua_State *L)
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
  lua_pushstring(L, "Depth");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ImageData");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "PlanePick");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "PlaneOnOff");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "NextImage");
  lua_rawseti(L, -2, 9);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Image(lua_State *L) {
  if (luaL_newmetatable(L, "Image")) {
    lua_pushcfunction(L, _lua_gen_Image_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Image_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Image_constructor);
    lua_setglobal(L, "Image");
    _lua_gen_Image_install_keys(L);
    lua_pushstring(L, "Image");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_IClass_newindex(lua_State *L)
{
  IClass *obj = *(IClass **)luaL_checkudata(L, 1, "IClass");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cl_Dispatcher") == 0) {
    // finder 0
    Hook *val = *(Hook **)luaL_checkudata(L, 3, "Hook");
    obj->cl_Dispatcher = *val;
    return 0;
  }
  if (strcmp(key, "cl_Reserved") == 0) {
    obj->cl_Reserved = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_Super") == 0) {
    // finder 1
    obj->cl_Super = *(IClass **)luaL_checkudata(L, 3, "IClass");
    return 0;
  }
  if (strcmp(key, "cl_InstOffset") == 0) {
    obj->cl_InstOffset = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_InstSize") == 0) {
    obj->cl_InstSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_UserData") == 0) {
    obj->cl_UserData = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_SubclassCount") == 0) {
    obj->cl_SubclassCount = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_ObjectCount") == 0) {
    obj->cl_ObjectCount = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_Flags") == 0) {
    obj->cl_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_IClass_constructor(lua_State *L)
{
  // Allocate pointer-to-IClass in userdata
  IClass **objp = lua_newuserdata(L, sizeof(IClass *));
  *objp = malloc(sizeof(IClass));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(IClass));

  // Set metatable
  luaL_getmetatable(L, "IClass");
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
_lua_gen_IClass_index(lua_State *L)
{
  IClass *obj = *(IClass **)luaL_checkudata(L, 1, "IClass");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cl_Dispatcher") == 0) {
    Hook **ud = (Hook **)lua_newuserdata(L, sizeof(Hook *));
    *ud = (Hook*)&obj->cl_Dispatcher;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "cl_Reserved") == 0) {
    lua_pushinteger(L, obj->cl_Reserved);
    return 1;
  }
  if (strcmp(key, "cl_Super") == 0) {
    IClass **ud = (IClass **)lua_newuserdata(L, sizeof(IClass *));
    *ud = (IClass*)obj->cl_Super;
    luaL_getmetatable(L, "IClass");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "cl_InstOffset") == 0) {
    lua_pushinteger(L, obj->cl_InstOffset);
    return 1;
  }
  if (strcmp(key, "cl_InstSize") == 0) {
    lua_pushinteger(L, obj->cl_InstSize);
    return 1;
  }
  if (strcmp(key, "cl_UserData") == 0) {
    lua_pushinteger(L, obj->cl_UserData);
    return 1;
  }
  if (strcmp(key, "cl_SubclassCount") == 0) {
    lua_pushinteger(L, obj->cl_SubclassCount);
    return 1;
  }
  if (strcmp(key, "cl_ObjectCount") == 0) {
    lua_pushinteger(L, obj->cl_ObjectCount);
    return 1;
  }
  if (strcmp(key, "cl_Flags") == 0) {
    lua_pushinteger(L, obj->cl_Flags);
    return 1;
  }
  return 0;
}

static void
_lua_gen_IClass_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "cl_Dispatcher");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "cl_Reserved");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "cl_Super");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "cl_InstOffset");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "cl_InstSize");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "cl_UserData");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "cl_SubclassCount");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "cl_ObjectCount");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "cl_Flags");
  lua_rawseti(L, -2, 9);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_IClass(lua_State *L) {
  if (luaL_newmetatable(L, "IClass")) {
    lua_pushcfunction(L, _lua_gen_IClass_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_IClass_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_IClass_constructor);
    lua_setglobal(L, "IClass");
    _lua_gen_IClass_install_keys(L);
    lua_pushstring(L, "IClass");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DrawInfo_newindex(lua_State *L)
{
  DrawInfo *obj = *(DrawInfo **)luaL_checkudata(L, 1, "DrawInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dri_Version") == 0) {
    obj->dri_Version = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dri_NumPens") == 0) {
    obj->dri_NumPens = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dri_Font") == 0) {
    // finder 1
    obj->dri_Font = *(TextFont **)luaL_checkudata(L, 3, "TextFont");
    return 0;
  }
  if (strcmp(key, "dri_Depth") == 0) {
    obj->dri_Depth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dri_Flags") == 0) {
    obj->dri_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dri_CheckMark") == 0) {
    // finder 1
    obj->dri_CheckMark = *(Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  if (strcmp(key, "dri_AmigaKey") == 0) {
    // finder 1
    obj->dri_AmigaKey = *(Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  if (strcmp(key, "dri_Screen") == 0) {
    // finder 1
    obj->dri_Screen = *(Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  return 0;
}


static int
_lua_DrawInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-DrawInfo in userdata
  DrawInfo **objp = lua_newuserdata(L, sizeof(DrawInfo *));
  *objp = malloc(sizeof(DrawInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(DrawInfo));

  // Set metatable
  luaL_getmetatable(L, "DrawInfo");
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
_lua_gen_DrawInfo_index(lua_State *L)
{
  DrawInfo *obj = *(DrawInfo **)luaL_checkudata(L, 1, "DrawInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dri_Version") == 0) {
    lua_pushinteger(L, obj->dri_Version);
    return 1;
  }
  if (strcmp(key, "dri_NumPens") == 0) {
    lua_pushinteger(L, obj->dri_NumPens);
    return 1;
  }
  if (strcmp(key, "dri_Font") == 0) {
    TextFont **ud = (TextFont **)lua_newuserdata(L, sizeof(TextFont *));
    *ud = (TextFont*)obj->dri_Font;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_Depth") == 0) {
    lua_pushinteger(L, obj->dri_Depth);
    return 1;
  }
  if (strcmp(key, "dri_Flags") == 0) {
    lua_pushinteger(L, obj->dri_Flags);
    return 1;
  }
  if (strcmp(key, "dri_CheckMark") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->dri_CheckMark;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_AmigaKey") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->dri_AmigaKey;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_Screen") == 0) {
    Screen **ud = (Screen **)lua_newuserdata(L, sizeof(Screen *));
    *ud = (Screen*)obj->dri_Screen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DrawInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dri_Version");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dri_NumPens");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dri_Pens");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dri_Font");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dri_Depth");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dri_Flags");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dri_CheckMark");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dri_AmigaKey");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dri_Screen");
  lua_rawseti(L, -2, 9);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DrawInfo(lua_State *L) {
  if (luaL_newmetatable(L, "DrawInfo")) {
    lua_pushcfunction(L, _lua_gen_DrawInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DrawInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DrawInfo_constructor);
    lua_setglobal(L, "DrawInfo");
    _lua_gen_DrawInfo_install_keys(L);
    lua_pushstring(L, "DrawInfo");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ScreenBuffer_newindex(lua_State *L)
{
  ScreenBuffer *obj = *(ScreenBuffer **)luaL_checkudata(L, 1, "ScreenBuffer");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sb_BitMap") == 0) {
    // finder 1
    obj->sb_BitMap = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "sb_DBufInfo") == 0) {
    // finder 1
    obj->sb_DBufInfo = *(DBufInfo **)luaL_checkudata(L, 3, "DBufInfo");
    return 0;
  }
  return 0;
}


static int
_lua_ScreenBuffer_constructor(lua_State *L)
{
  // Allocate pointer-to-ScreenBuffer in userdata
  ScreenBuffer **objp = lua_newuserdata(L, sizeof(ScreenBuffer *));
  *objp = malloc(sizeof(ScreenBuffer));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(ScreenBuffer));

  // Set metatable
  luaL_getmetatable(L, "ScreenBuffer");
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
_lua_gen_ScreenBuffer_index(lua_State *L)
{
  ScreenBuffer *obj = *(ScreenBuffer **)luaL_checkudata(L, 1, "ScreenBuffer");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sb_BitMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)obj->sb_BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "sb_DBufInfo") == 0) {
    DBufInfo **ud = (DBufInfo **)lua_newuserdata(L, sizeof(DBufInfo *));
    *ud = (DBufInfo*)obj->sb_DBufInfo;
    luaL_getmetatable(L, "DBufInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_ScreenBuffer_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "sb_BitMap");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "sb_DBufInfo");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ScreenBuffer(lua_State *L) {
  if (luaL_newmetatable(L, "ScreenBuffer")) {
    lua_pushcfunction(L, _lua_gen_ScreenBuffer_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ScreenBuffer_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ScreenBuffer_constructor);
    lua_setglobal(L, "ScreenBuffer");
    _lua_gen_ScreenBuffer_install_keys(L);
    lua_pushstring(L, "ScreenBuffer");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_NewScreen_newindex(lua_State *L)
{
  NewScreen *obj = *(NewScreen **)luaL_checkudata(L, 1, "NewScreen");
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
  if (strcmp(key, "Depth") == 0) {
    obj->Depth = (WORD)luaL_checkinteger(L, 3);
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
  if (strcmp(key, "ViewModes") == 0) {
    obj->ViewModes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Type") == 0) {
    obj->Type = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Font") == 0) {
    // finder 1
    obj->Font = *(TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    obj->DefaultTitle = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "Gadgets") == 0) {
    // finder 1
    obj->Gadgets = *(Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "CustomBitMap") == 0) {
    // finder 1
    obj->CustomBitMap = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  return 0;
}


static int
_lua_NewScreen_constructor(lua_State *L)
{
  // Allocate pointer-to-NewScreen in userdata
  NewScreen **objp = lua_newuserdata(L, sizeof(NewScreen *));
  *objp = malloc(sizeof(NewScreen));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(NewScreen));

  // Set metatable
  luaL_getmetatable(L, "NewScreen");
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
_lua_gen_NewScreen_index(lua_State *L)
{
  NewScreen *obj = *(NewScreen **)luaL_checkudata(L, 1, "NewScreen");
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
  if (strcmp(key, "Depth") == 0) {
    lua_pushinteger(L, obj->Depth);
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
  if (strcmp(key, "ViewModes") == 0) {
    lua_pushinteger(L, obj->ViewModes);
    return 1;
  }
  if (strcmp(key, "Type") == 0) {
    lua_pushinteger(L, obj->Type);
    return 1;
  }
  if (strcmp(key, "Font") == 0) {
    TextAttr **ud = (TextAttr **)lua_newuserdata(L, sizeof(TextAttr *));
    *ud = (TextAttr*)obj->Font;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    lua_pushstring(L, obj->DefaultTitle);
    return 1;
  }
  if (strcmp(key, "Gadgets") == 0) {
    Gadget **ud = (Gadget **)lua_newuserdata(L, sizeof(Gadget *));
    *ud = (Gadget*)obj->Gadgets;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CustomBitMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)obj->CustomBitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_NewScreen_install_keys(lua_State *L)
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
  lua_pushstring(L, "Depth");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ViewModes");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Type");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Font");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "DefaultTitle");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "Gadgets");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "CustomBitMap");
  lua_rawseti(L, -2, 13);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_NewScreen(lua_State *L) {
  if (luaL_newmetatable(L, "NewScreen")) {
    lua_pushcfunction(L, _lua_gen_NewScreen_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_NewScreen_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_NewScreen_constructor);
    lua_setglobal(L, "NewScreen");
    _lua_gen_NewScreen_install_keys(L);
    lua_pushstring(L, "NewScreen");
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
    obj->ng_GadgetText = (CONST_STRPTR)amiga_checkConstNullableString(L, 3);
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
  if (strcmp(key, "CheckMark") == 0) {
    // finder 1
    obj->CheckMark = *(Image **)luaL_checkudata(L, 3, "Image");
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
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    obj->BitMap = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
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
  if (strcmp(key, "CheckMark") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->CheckMark;
    luaL_getmetatable(L, "Image");
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
  if (strcmp(key, "BitMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)obj->BitMap;
    luaL_getmetatable(L, "BitMap");
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
  lua_pushstring(L, "CheckMark");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "Screen");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "BitMap");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "MinWidth");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "MinHeight");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "MaxWidth");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "MaxHeight");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "Type");
  lua_rawseti(L, -2, 18);
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
  if (strcmp(key, "ReqText") == 0) {
    // finder 1
    obj->ReqText = *(IntuiText **)luaL_checkudata(L, 3, "IntuiText");
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
  if (strcmp(key, "ImageBMap") == 0) {
    // finder 1
    obj->ImageBMap = *(BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "RWindow") == 0) {
    // finder 1
    obj->RWindow = *(Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "ReqImage") == 0) {
    // finder 1
    obj->ReqImage = *(Image **)luaL_checkudata(L, 3, "Image");
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
  if (strcmp(key, "ReqText") == 0) {
    IntuiText **ud = (IntuiText **)lua_newuserdata(L, sizeof(IntuiText *));
    *ud = (IntuiText*)obj->ReqText;
    luaL_getmetatable(L, "IntuiText");
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
  if (strcmp(key, "ImageBMap") == 0) {
    BitMap **ud = (BitMap **)lua_newuserdata(L, sizeof(BitMap *));
    *ud = (BitMap*)obj->ImageBMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RWindow") == 0) {
    Window **ud = (Window **)lua_newuserdata(L, sizeof(Window *));
    *ud = (Window*)obj->RWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ReqImage") == 0) {
    Image **ud = (Image **)lua_newuserdata(L, sizeof(Image *));
    *ud = (Image*)obj->ReqImage;
    luaL_getmetatable(L, "Image");
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
  lua_pushstring(L, "ReqText");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "BackFill");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "ImageBMap");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "RWindow");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "ReqImage");
  lua_rawseti(L, -2, 14);
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
_lua_gen_NewMenu_newindex(lua_State *L)
{
  NewMenu *obj = *(NewMenu **)luaL_checkudata(L, 1, "NewMenu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "nm_Type") == 0) {
    obj->nm_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nm_Label") == 0) {
    obj->nm_Label = (CONST_STRPTR)amiga_checkConstNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "nm_CommKey") == 0) {
    obj->nm_CommKey = (CONST_STRPTR)amiga_checkConstNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "nm_Flags") == 0) {
    obj->nm_Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nm_MutualExclude") == 0) {
    obj->nm_MutualExclude = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nm_UserData") == 0) {
    obj->nm_UserData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_NewMenu_constructor(lua_State *L)
{
  // Allocate pointer-to-NewMenu in userdata
  NewMenu **objp = lua_newuserdata(L, sizeof(NewMenu *));
  *objp = malloc(sizeof(NewMenu));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(NewMenu));

  // Set metatable
  luaL_getmetatable(L, "NewMenu");
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
_lua_gen_NewMenu_index(lua_State *L)
{
  NewMenu *obj = *(NewMenu **)luaL_checkudata(L, 1, "NewMenu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "nm_Type") == 0) {
    lua_pushinteger(L, obj->nm_Type);
    return 1;
  }
  if (strcmp(key, "nm_Label") == 0) {
    lua_pushstring(L, obj->nm_Label);
    return 1;
  }
  if (strcmp(key, "nm_CommKey") == 0) {
    lua_pushstring(L, obj->nm_CommKey);
    return 1;
  }
  if (strcmp(key, "nm_Flags") == 0) {
    lua_pushinteger(L, obj->nm_Flags);
    return 1;
  }
  if (strcmp(key, "nm_MutualExclude") == 0) {
    lua_pushinteger(L, obj->nm_MutualExclude);
    return 1;
  }
  if (strcmp(key, "nm_UserData") == 0) {
    lua_pushlightuserdata(L, obj->nm_UserData);
    return 1;
  }
  return 0;
}

static void
_lua_gen_NewMenu_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "nm_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "nm_Label");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "nm_CommKey");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "nm_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "nm_MutualExclude");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "nm_UserData");
  lua_rawseti(L, -2, 6);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_NewMenu(lua_State *L) {
  if (luaL_newmetatable(L, "NewMenu")) {
    lua_pushcfunction(L, _lua_gen_NewMenu_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_NewMenu_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_NewMenu_constructor);
    lua_setglobal(L, "NewMenu");
    _lua_gen_NewMenu_install_keys(L);
    lua_pushstring(L, "NewMenu");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Menu_newindex(lua_State *L)
{
  Menu *obj = *(Menu **)luaL_checkudata(L, 1, "Menu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextMenu") == 0) {
    // finder 1
    obj->NextMenu = *(Menu **)luaL_checkudata(L, 3, "Menu");
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
  if (strcmp(key, "MenuName") == 0) {
    obj->MenuName = (CONST_STRPTR)amiga_checkConstNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstItem") == 0) {
    // finder 1
    obj->FirstItem = *(MenuItem **)luaL_checkudata(L, 3, "MenuItem");
    return 0;
  }
  if (strcmp(key, "JazzX") == 0) {
    obj->JazzX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "JazzY") == 0) {
    obj->JazzY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BeatX") == 0) {
    obj->BeatX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BeatY") == 0) {
    obj->BeatY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Menu_constructor(lua_State *L)
{
  // Allocate pointer-to-Menu in userdata
  Menu **objp = lua_newuserdata(L, sizeof(Menu *));
  *objp = malloc(sizeof(Menu));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Menu));

  // Set metatable
  luaL_getmetatable(L, "Menu");
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
_lua_gen_Menu_index(lua_State *L)
{
  Menu *obj = *(Menu **)luaL_checkudata(L, 1, "Menu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextMenu") == 0) {
    Menu **ud = (Menu **)lua_newuserdata(L, sizeof(Menu *));
    *ud = (Menu*)obj->NextMenu;
    luaL_getmetatable(L, "Menu");
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
  if (strcmp(key, "MenuName") == 0) {
    lua_pushstring(L, obj->MenuName);
    return 1;
  }
  if (strcmp(key, "FirstItem") == 0) {
    MenuItem **ud = (MenuItem **)lua_newuserdata(L, sizeof(MenuItem *));
    *ud = (MenuItem*)obj->FirstItem;
    luaL_getmetatable(L, "MenuItem");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "JazzX") == 0) {
    lua_pushinteger(L, obj->JazzX);
    return 1;
  }
  if (strcmp(key, "JazzY") == 0) {
    lua_pushinteger(L, obj->JazzY);
    return 1;
  }
  if (strcmp(key, "BeatX") == 0) {
    lua_pushinteger(L, obj->BeatX);
    return 1;
  }
  if (strcmp(key, "BeatY") == 0) {
    lua_pushinteger(L, obj->BeatY);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Menu_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "NextMenu");
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
  lua_pushstring(L, "MenuName");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "FirstItem");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "JazzX");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "JazzY");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "BeatX");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "BeatY");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Menu(lua_State *L) {
  if (luaL_newmetatable(L, "Menu")) {
    lua_pushcfunction(L, _lua_gen_Menu_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Menu_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Menu_constructor);
    lua_setglobal(L, "Menu");
    _lua_gen_Menu_install_keys(L);
    lua_pushstring(L, "Menu");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MenuItem_newindex(lua_State *L)
{
  MenuItem *obj = *(MenuItem **)luaL_checkudata(L, 1, "MenuItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextItem") == 0) {
    // finder 1
    obj->NextItem = *(MenuItem **)luaL_checkudata(L, 3, "MenuItem");
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
  if (strcmp(key, "MutualExclude") == 0) {
    obj->MutualExclude = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ItemFill") == 0) {
    obj->ItemFill = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SelectFill") == 0) {
    obj->SelectFill = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Command") == 0) {
    obj->Command = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SubItem") == 0) {
    // finder 1
    obj->SubItem = *(MenuItem **)luaL_checkudata(L, 3, "MenuItem");
    return 0;
  }
  if (strcmp(key, "NextSelect") == 0) {
    obj->NextSelect = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_MenuItem_constructor(lua_State *L)
{
  // Allocate pointer-to-MenuItem in userdata
  MenuItem **objp = lua_newuserdata(L, sizeof(MenuItem *));
  *objp = malloc(sizeof(MenuItem));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(MenuItem));

  // Set metatable
  luaL_getmetatable(L, "MenuItem");
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
_lua_gen_MenuItem_index(lua_State *L)
{
  MenuItem *obj = *(MenuItem **)luaL_checkudata(L, 1, "MenuItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextItem") == 0) {
    MenuItem **ud = (MenuItem **)lua_newuserdata(L, sizeof(MenuItem *));
    *ud = (MenuItem*)obj->NextItem;
    luaL_getmetatable(L, "MenuItem");
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
  if (strcmp(key, "MutualExclude") == 0) {
    lua_pushinteger(L, obj->MutualExclude);
    return 1;
  }
  if (strcmp(key, "ItemFill") == 0) {
    lua_pushlightuserdata(L, obj->ItemFill);
    return 1;
  }
  if (strcmp(key, "SelectFill") == 0) {
    lua_pushlightuserdata(L, obj->SelectFill);
    return 1;
  }
  if (strcmp(key, "Command") == 0) {
    lua_pushinteger(L, obj->Command);
    return 1;
  }
  if (strcmp(key, "SubItem") == 0) {
    MenuItem **ud = (MenuItem **)lua_newuserdata(L, sizeof(MenuItem *));
    *ud = (MenuItem*)obj->SubItem;
    luaL_getmetatable(L, "MenuItem");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "NextSelect") == 0) {
    lua_pushinteger(L, obj->NextSelect);
    return 1;
  }
  return 0;
}

static void
_lua_gen_MenuItem_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "NextItem");
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
  lua_pushstring(L, "MutualExclude");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ItemFill");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "SelectFill");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Command");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "SubItem");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "NextSelect");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MenuItem(lua_State *L) {
  if (luaL_newmetatable(L, "MenuItem")) {
    lua_pushcfunction(L, _lua_gen_MenuItem_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MenuItem_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MenuItem_constructor);
    lua_setglobal(L, "MenuItem");
    _lua_gen_MenuItem_install_keys(L);
    lua_pushstring(L, "MenuItem");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_InputEvent_newindex(lua_State *L)
{
  InputEvent *obj = *(InputEvent **)luaL_checkudata(L, 1, "InputEvent");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ie_NextEvent") == 0) {
    // finder 1
    obj->ie_NextEvent = *(InputEvent **)luaL_checkudata(L, 3, "InputEvent");
    return 0;
  }
  if (strcmp(key, "ie_Class") == 0) {
    obj->ie_Class = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_SubClass") == 0) {
    obj->ie_SubClass = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_Code") == 0) {
    obj->ie_Code = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_Qualifier") == 0) {
    obj->ie_Qualifier = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_InputEvent_constructor(lua_State *L)
{
  // Allocate pointer-to-InputEvent in userdata
  InputEvent **objp = lua_newuserdata(L, sizeof(InputEvent *));
  *objp = malloc(sizeof(InputEvent));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(InputEvent));

  // Set metatable
  luaL_getmetatable(L, "InputEvent");
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
_lua_gen_InputEvent_index(lua_State *L)
{
  InputEvent *obj = *(InputEvent **)luaL_checkudata(L, 1, "InputEvent");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ie_NextEvent") == 0) {
    InputEvent **ud = (InputEvent **)lua_newuserdata(L, sizeof(InputEvent *));
    *ud = (InputEvent*)obj->ie_NextEvent;
    luaL_getmetatable(L, "InputEvent");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ie_Class") == 0) {
    lua_pushinteger(L, obj->ie_Class);
    return 1;
  }
  if (strcmp(key, "ie_SubClass") == 0) {
    lua_pushinteger(L, obj->ie_SubClass);
    return 1;
  }
  if (strcmp(key, "ie_Code") == 0) {
    lua_pushinteger(L, obj->ie_Code);
    return 1;
  }
  if (strcmp(key, "ie_Qualifier") == 0) {
    lua_pushinteger(L, obj->ie_Qualifier);
    return 1;
  }
  return 0;
}

static void
_lua_gen_InputEvent_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ie_NextEvent");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ie_Class");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ie_SubClass");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ie_Code");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ie_Qualifier");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_InputEvent(lua_State *L) {
  if (luaL_newmetatable(L, "InputEvent")) {
    lua_pushcfunction(L, _lua_gen_InputEvent_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_InputEvent_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_InputEvent_constructor);
    lua_setglobal(L, "InputEvent");
    _lua_gen_InputEvent_install_keys(L);
    lua_pushstring(L, "InputEvent");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_BitMap_newindex(lua_State *L)
{
  BitMap *obj = *(BitMap **)luaL_checkudata(L, 1, "BitMap");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "BytesPerRow") == 0) {
    obj->BytesPerRow = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Rows") == 0) {
    obj->Rows = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Depth") == 0) {
    obj->Depth = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pad") == 0) {
    obj->pad = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_BitMap_constructor(lua_State *L)
{
  // Allocate pointer-to-BitMap in userdata
  BitMap **objp = lua_newuserdata(L, sizeof(BitMap *));
  *objp = malloc(sizeof(BitMap));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(BitMap));

  // Set metatable
  luaL_getmetatable(L, "BitMap");
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
_lua_gen_BitMap_index(lua_State *L)
{
  BitMap *obj = *(BitMap **)luaL_checkudata(L, 1, "BitMap");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "BytesPerRow") == 0) {
    lua_pushinteger(L, obj->BytesPerRow);
    return 1;
  }
  if (strcmp(key, "Rows") == 0) {
    lua_pushinteger(L, obj->Rows);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Depth") == 0) {
    lua_pushinteger(L, obj->Depth);
    return 1;
  }
  if (strcmp(key, "pad") == 0) {
    lua_pushinteger(L, obj->pad);
    return 1;
  }
  return 0;
}

static void
_lua_gen_BitMap_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "BytesPerRow");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Rows");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Depth");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "pad");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_BitMap(lua_State *L) {
  if (luaL_newmetatable(L, "BitMap")) {
    lua_pushcfunction(L, _lua_gen_BitMap_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_BitMap_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_BitMap_constructor);
    lua_setglobal(L, "BitMap");
    _lua_gen_BitMap_install_keys(L);
    lua_pushstring(L, "BitMap");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DBufInfo_newindex(lua_State *L)
{
  DBufInfo *obj = *(DBufInfo **)luaL_checkudata(L, 1, "DBufInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dbi_Link1") == 0) {
    obj->dbi_Link1 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_Count1") == 0) {
    obj->dbi_Count1 = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage") == 0) {
    // finder 0
    Message *val = *(Message **)luaL_checkudata(L, 3, "Message");
    obj->dbi_SafeMessage = *val;
    return 0;
  }
  if (strcmp(key, "dbi_UserData1") == 0) {
    obj->dbi_UserData1 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_Link2") == 0) {
    obj->dbi_Link2 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_Count2") == 0) {
    obj->dbi_Count2 = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage") == 0) {
    // finder 0
    Message *val = *(Message **)luaL_checkudata(L, 3, "Message");
    obj->dbi_DispMessage = *val;
    return 0;
  }
  if (strcmp(key, "dbi_UserData2") == 0) {
    obj->dbi_UserData2 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_MatchLong") == 0) {
    obj->dbi_MatchLong = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_CopPtr1") == 0) {
    obj->dbi_CopPtr1 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_CopPtr2") == 0) {
    obj->dbi_CopPtr2 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_CopPtr3") == 0) {
    obj->dbi_CopPtr3 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_BeamPos1") == 0) {
    obj->dbi_BeamPos1 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_BeamPos2") == 0) {
    obj->dbi_BeamPos2 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DBufInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-DBufInfo in userdata
  DBufInfo **objp = lua_newuserdata(L, sizeof(DBufInfo *));
  *objp = malloc(sizeof(DBufInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(DBufInfo));

  // Set metatable
  luaL_getmetatable(L, "DBufInfo");
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
_lua_gen_DBufInfo_index(lua_State *L)
{
  DBufInfo *obj = *(DBufInfo **)luaL_checkudata(L, 1, "DBufInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dbi_Link1") == 0) {
    lua_pushlightuserdata(L, obj->dbi_Link1);
    return 1;
  }
  if (strcmp(key, "dbi_Count1") == 0) {
    lua_pushinteger(L, obj->dbi_Count1);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage") == 0) {
    Message **ud = (Message **)lua_newuserdata(L, sizeof(Message *));
    *ud = (Message*)&obj->dbi_SafeMessage;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_UserData1") == 0) {
    lua_pushlightuserdata(L, obj->dbi_UserData1);
    return 1;
  }
  if (strcmp(key, "dbi_Link2") == 0) {
    lua_pushlightuserdata(L, obj->dbi_Link2);
    return 1;
  }
  if (strcmp(key, "dbi_Count2") == 0) {
    lua_pushinteger(L, obj->dbi_Count2);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage") == 0) {
    Message **ud = (Message **)lua_newuserdata(L, sizeof(Message *));
    *ud = (Message*)&obj->dbi_DispMessage;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_UserData2") == 0) {
    lua_pushlightuserdata(L, obj->dbi_UserData2);
    return 1;
  }
  if (strcmp(key, "dbi_MatchLong") == 0) {
    lua_pushinteger(L, obj->dbi_MatchLong);
    return 1;
  }
  if (strcmp(key, "dbi_CopPtr1") == 0) {
    lua_pushlightuserdata(L, obj->dbi_CopPtr1);
    return 1;
  }
  if (strcmp(key, "dbi_CopPtr2") == 0) {
    lua_pushlightuserdata(L, obj->dbi_CopPtr2);
    return 1;
  }
  if (strcmp(key, "dbi_CopPtr3") == 0) {
    lua_pushlightuserdata(L, obj->dbi_CopPtr3);
    return 1;
  }
  if (strcmp(key, "dbi_BeamPos1") == 0) {
    lua_pushinteger(L, obj->dbi_BeamPos1);
    return 1;
  }
  if (strcmp(key, "dbi_BeamPos2") == 0) {
    lua_pushinteger(L, obj->dbi_BeamPos2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DBufInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dbi_Link1");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dbi_Count1");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dbi_SafeMessage");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dbi_UserData1");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dbi_Link2");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dbi_Count2");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dbi_DispMessage");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dbi_UserData2");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dbi_MatchLong");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dbi_CopPtr1");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "dbi_CopPtr2");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "dbi_CopPtr3");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "dbi_BeamPos1");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "dbi_BeamPos2");
  lua_rawseti(L, -2, 14);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DBufInfo(lua_State *L) {
  if (luaL_newmetatable(L, "DBufInfo")) {
    lua_pushcfunction(L, _lua_gen_DBufInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DBufInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DBufInfo_constructor);
    lua_setglobal(L, "DBufInfo");
    _lua_gen_DBufInfo_install_keys(L);
    lua_pushstring(L, "DBufInfo");
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
  (void)L;
  void * data = lua_touserdata(L, 1);
  CONST_STRPTR result = TO_CONST_STRPTR(data);
  lua_pushstring(L, result);
  return 1;
}

static int
_lua_TO_IntuiMessage(lua_State* L)
{
  (void)L;
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
  lua_pushinteger(L, WA_Left);
  lua_setglobal(L, "WA_Left");
  lua_pushinteger(L, WA_Top);
  lua_setglobal(L, "WA_Top");
  lua_pushinteger(L, WA_Width);
  lua_setglobal(L, "WA_Width");
  lua_pushinteger(L, WA_Height);
  lua_setglobal(L, "WA_Height");
  lua_pushinteger(L, WA_DetailPen);
  lua_setglobal(L, "WA_DetailPen");
  lua_pushinteger(L, WA_BlockPen);
  lua_setglobal(L, "WA_BlockPen");
  lua_pushinteger(L, WA_IDCMP);
  lua_setglobal(L, "WA_IDCMP");
  lua_pushinteger(L, WA_Flags);
  lua_setglobal(L, "WA_Flags");
  lua_pushinteger(L, WA_Gadgets);
  lua_setglobal(L, "WA_Gadgets");
  lua_pushinteger(L, WA_Checkmark);
  lua_setglobal(L, "WA_Checkmark");
  lua_pushinteger(L, WA_Title);
  lua_setglobal(L, "WA_Title");
  lua_pushinteger(L, WA_ScreenTitle);
  lua_setglobal(L, "WA_ScreenTitle");
  lua_pushinteger(L, WA_CustomScreen);
  lua_setglobal(L, "WA_CustomScreen");
  lua_pushinteger(L, WA_SuperBitMap);
  lua_setglobal(L, "WA_SuperBitMap");
  lua_pushinteger(L, WA_MinWidth);
  lua_setglobal(L, "WA_MinWidth");
  lua_pushinteger(L, WA_MinHeight);
  lua_setglobal(L, "WA_MinHeight");
  lua_pushinteger(L, WA_MaxWidth);
  lua_setglobal(L, "WA_MaxWidth");
  lua_pushinteger(L, WA_MaxHeight);
  lua_setglobal(L, "WA_MaxHeight");
  lua_pushinteger(L, WA_InnerWidth);
  lua_setglobal(L, "WA_InnerWidth");
  lua_pushinteger(L, WA_InnerHeight);
  lua_setglobal(L, "WA_InnerHeight");
  lua_pushinteger(L, WA_PubScreenName);
  lua_setglobal(L, "WA_PubScreenName");
  lua_pushinteger(L, WA_PubScreen);
  lua_setglobal(L, "WA_PubScreen");
  lua_pushinteger(L, WA_PubScreenFallBack);
  lua_setglobal(L, "WA_PubScreenFallBack");
  lua_pushinteger(L, WA_WindowName);
  lua_setglobal(L, "WA_WindowName");
  lua_pushinteger(L, WA_Colors);
  lua_setglobal(L, "WA_Colors");
  lua_pushinteger(L, WA_Zoom);
  lua_setglobal(L, "WA_Zoom");
  lua_pushinteger(L, WA_MouseQueue);
  lua_setglobal(L, "WA_MouseQueue");
  lua_pushinteger(L, WA_BackFill);
  lua_setglobal(L, "WA_BackFill");
  lua_pushinteger(L, WA_RptQueue);
  lua_setglobal(L, "WA_RptQueue");
  lua_pushinteger(L, WA_SizeGadget);
  lua_setglobal(L, "WA_SizeGadget");
  lua_pushinteger(L, WA_DragBar);
  lua_setglobal(L, "WA_DragBar");
  lua_pushinteger(L, WA_DepthGadget);
  lua_setglobal(L, "WA_DepthGadget");
  lua_pushinteger(L, WA_CloseGadget);
  lua_setglobal(L, "WA_CloseGadget");
  lua_pushinteger(L, WA_Backdrop);
  lua_setglobal(L, "WA_Backdrop");
  lua_pushinteger(L, WA_ReportMouse);
  lua_setglobal(L, "WA_ReportMouse");
  lua_pushinteger(L, WA_NoCareRefresh);
  lua_setglobal(L, "WA_NoCareRefresh");
  lua_pushinteger(L, WA_Borderless);
  lua_setglobal(L, "WA_Borderless");
  lua_pushinteger(L, WA_Activate);
  lua_setglobal(L, "WA_Activate");
  lua_pushinteger(L, WA_RMBTrap);
  lua_setglobal(L, "WA_RMBTrap");
  lua_pushinteger(L, WA_WBenchWindow);
  lua_setglobal(L, "WA_WBenchWindow");
  lua_pushinteger(L, WA_SimpleRefresh);
  lua_setglobal(L, "WA_SimpleRefresh");
  lua_pushinteger(L, WA_SmartRefresh);
  lua_setglobal(L, "WA_SmartRefresh");
  lua_pushinteger(L, WA_SizeBRight);
  lua_setglobal(L, "WA_SizeBRight");
  lua_pushinteger(L, WA_SizeBBottom);
  lua_setglobal(L, "WA_SizeBBottom");
  lua_pushinteger(L, WA_AutoAdjust);
  lua_setglobal(L, "WA_AutoAdjust");
  lua_pushinteger(L, WA_GimmeZeroZero);
  lua_setglobal(L, "WA_GimmeZeroZero");
  lua_pushinteger(L, WA_MenuHelp);
  lua_setglobal(L, "WA_MenuHelp");
  lua_pushinteger(L, WA_NewLookMenus);
  lua_setglobal(L, "WA_NewLookMenus");
  lua_pushinteger(L, WA_AmigaKey);
  lua_setglobal(L, "WA_AmigaKey");
  lua_pushinteger(L, WA_NotifyDepth);
  lua_setglobal(L, "WA_NotifyDepth");
  lua_pushinteger(L, WA_Pointer);
  lua_setglobal(L, "WA_Pointer");
  lua_pushinteger(L, WA_BusyPointer);
  lua_setglobal(L, "WA_BusyPointer");
  lua_pushinteger(L, WA_PointerDelay);
  lua_setglobal(L, "WA_PointerDelay");
  lua_pushinteger(L, WA_TabletMessages);
  lua_setglobal(L, "WA_TabletMessages");
  lua_pushinteger(L, WA_HelpGroup);
  lua_setglobal(L, "WA_HelpGroup");
  lua_pushinteger(L, WA_HelpGroupWindow);
  lua_setglobal(L, "WA_HelpGroupWindow");
  lua_pushinteger(L, WA_Hidden);
  lua_setglobal(L, "WA_Hidden");
  lua_pushinteger(L, WA_PointerType);
  lua_setglobal(L, "WA_PointerType");
  lua_pushinteger(L, WA_IconifyGadget);
  lua_setglobal(L, "WA_IconifyGadget");
  lua_pushinteger(L, TAG_END);
  lua_setglobal(L, "TAG_END");
  lua_pushinteger(L, IDCMP_SIZEVERIFY);
  lua_setglobal(L, "IDCMP_SIZEVERIFY");
  lua_pushinteger(L, IDCMP_NEWSIZE);
  lua_setglobal(L, "IDCMP_NEWSIZE");
  lua_pushinteger(L, IDCMP_REFRESHWINDOW);
  lua_setglobal(L, "IDCMP_REFRESHWINDOW");
  lua_pushinteger(L, IDCMP_MOUSEBUTTONS);
  lua_setglobal(L, "IDCMP_MOUSEBUTTONS");
  lua_pushinteger(L, IDCMP_MOUSEMOVE);
  lua_setglobal(L, "IDCMP_MOUSEMOVE");
  lua_pushinteger(L, IDCMP_GADGETDOWN);
  lua_setglobal(L, "IDCMP_GADGETDOWN");
  lua_pushinteger(L, IDCMP_GADGETUP);
  lua_setglobal(L, "IDCMP_GADGETUP");
  lua_pushinteger(L, IDCMP_REQSET);
  lua_setglobal(L, "IDCMP_REQSET");
  lua_pushinteger(L, IDCMP_MENUPICK);
  lua_setglobal(L, "IDCMP_MENUPICK");
  lua_pushinteger(L, IDCMP_CLOSEWINDOW);
  lua_setglobal(L, "IDCMP_CLOSEWINDOW");
  lua_pushinteger(L, IDCMP_RAWKEY);
  lua_setglobal(L, "IDCMP_RAWKEY");
  lua_pushinteger(L, IDCMP_REQVERIFY);
  lua_setglobal(L, "IDCMP_REQVERIFY");
  lua_pushinteger(L, IDCMP_REQCLEAR);
  lua_setglobal(L, "IDCMP_REQCLEAR");
  lua_pushinteger(L, IDCMP_MENUVERIFY);
  lua_setglobal(L, "IDCMP_MENUVERIFY");
  lua_pushinteger(L, IDCMP_NEWPREFS);
  lua_setglobal(L, "IDCMP_NEWPREFS");
  lua_pushinteger(L, IDCMP_DISKINSERTED);
  lua_setglobal(L, "IDCMP_DISKINSERTED");
  lua_pushinteger(L, IDCMP_DISKREMOVED);
  lua_setglobal(L, "IDCMP_DISKREMOVED");
  lua_pushinteger(L, IDCMP_WBENCHMESSAGE);
  lua_setglobal(L, "IDCMP_WBENCHMESSAGE");
  lua_pushinteger(L, IDCMP_ACTIVEWINDOW);
  lua_setglobal(L, "IDCMP_ACTIVEWINDOW");
  lua_pushinteger(L, IDCMP_INACTIVEWINDOW);
  lua_setglobal(L, "IDCMP_INACTIVEWINDOW");
  lua_pushinteger(L, IDCMP_DELTAMOVE);
  lua_setglobal(L, "IDCMP_DELTAMOVE");
  lua_pushinteger(L, IDCMP_VANILLAKEY);
  lua_setglobal(L, "IDCMP_VANILLAKEY");
  lua_pushinteger(L, IDCMP_INTUITICKS);
  lua_setglobal(L, "IDCMP_INTUITICKS");
  lua_pushinteger(L, IDCMP_IDCMPUPDATE);
  lua_setglobal(L, "IDCMP_IDCMPUPDATE");
  lua_pushinteger(L, IDCMP_MENUHELP);
  lua_setglobal(L, "IDCMP_MENUHELP");
  lua_pushinteger(L, IDCMP_CHANGEWINDOW);
  lua_setglobal(L, "IDCMP_CHANGEWINDOW");
  lua_pushinteger(L, IDCMP_GADGETHELP);
  lua_setglobal(L, "IDCMP_GADGETHELP");
  lua_pushinteger(L, IDCMP_EXTENDEDMOUSE);
  lua_setglobal(L, "IDCMP_EXTENDEDMOUSE");
  lua_pushinteger(L, IDCMP_LONELYMESSAGE);
  lua_setglobal(L, "IDCMP_LONELYMESSAGE");
  lua_pushinteger(L, GENERIC_KIND);
  lua_setglobal(L, "GENERIC_KIND");
  lua_pushinteger(L, BUTTON_KIND);
  lua_setglobal(L, "BUTTON_KIND");
  lua_pushinteger(L, CHECKBOX_KIND);
  lua_setglobal(L, "CHECKBOX_KIND");
  lua_pushinteger(L, INTEGER_KIND);
  lua_setglobal(L, "INTEGER_KIND");
  lua_pushinteger(L, LISTVIEW_KIND);
  lua_setglobal(L, "LISTVIEW_KIND");
  lua_pushinteger(L, MX_KIND);
  lua_setglobal(L, "MX_KIND");
  lua_pushinteger(L, NUMBER_KIND);
  lua_setglobal(L, "NUMBER_KIND");
  lua_pushinteger(L, CYCLE_KIND);
  lua_setglobal(L, "CYCLE_KIND");
  lua_pushinteger(L, PALETTE_KIND);
  lua_setglobal(L, "PALETTE_KIND");
  lua_pushinteger(L, SCROLLER_KIND);
  lua_setglobal(L, "SCROLLER_KIND");
  lua_pushinteger(L, SLIDER_KIND);
  lua_setglobal(L, "SLIDER_KIND");
  lua_pushinteger(L, STRING_KIND);
  lua_setglobal(L, "STRING_KIND");
  lua_pushinteger(L, TEXT_KIND);
  lua_setglobal(L, "TEXT_KIND");
  lua_pushinteger(L, NUM_KINDS);
  lua_setglobal(L, "NUM_KINDS");
  lua_pushinteger(L, ARROWIDCMP);
  lua_setglobal(L, "ARROWIDCMP");
  lua_pushinteger(L, BUTTONIDCMP);
  lua_setglobal(L, "BUTTONIDCMP");
  lua_pushinteger(L, CHECKBOXIDCMP);
  lua_setglobal(L, "CHECKBOXIDCMP");
  lua_pushinteger(L, INTEGERIDCMP);
  lua_setglobal(L, "INTEGERIDCMP");
  lua_pushinteger(L, LISTVIEWIDCMP);
  lua_setglobal(L, "LISTVIEWIDCMP");
  lua_pushinteger(L, MXIDCMP);
  lua_setglobal(L, "MXIDCMP");
  lua_pushinteger(L, NUMBERIDCMP);
  lua_setglobal(L, "NUMBERIDCMP");
  lua_pushinteger(L, CYCLEIDCMP);
  lua_setglobal(L, "CYCLEIDCMP");
  lua_pushinteger(L, PALETTEIDCMP);
  lua_setglobal(L, "PALETTEIDCMP");
  lua_pushinteger(L, SCROLLERIDCMP);
  lua_setglobal(L, "SCROLLERIDCMP");
  lua_pushinteger(L, SLIDERIDCMP);
  lua_setglobal(L, "SLIDERIDCMP");
  lua_pushinteger(L, STRINGIDCMP);
  lua_setglobal(L, "STRINGIDCMP");
  lua_pushinteger(L, TEXTIDCMP);
  lua_setglobal(L, "TEXTIDCMP");
  lua_pushinteger(L, PLACETEXT_LEFT);
  lua_setglobal(L, "PLACETEXT_LEFT");
  lua_pushinteger(L, PLACETEXT_RIGHT);
  lua_setglobal(L, "PLACETEXT_RIGHT");
  lua_pushinteger(L, PLACETEXT_ABOVE);
  lua_setglobal(L, "PLACETEXT_ABOVE");
  lua_pushinteger(L, PLACETEXT_BELOW);
  lua_setglobal(L, "PLACETEXT_BELOW");
  lua_pushinteger(L, PLACETEXT_IN);
  lua_setglobal(L, "PLACETEXT_IN");
  lua_pushinteger(L, NG_HIGHLABEL);
  lua_setglobal(L, "NG_HIGHLABEL");
  lua_pushinteger(L, NG_GRIDLAYOUT);
  lua_setglobal(L, "NG_GRIDLAYOUT");
  lua_pushinteger(L, MENU_IMAGE);
  lua_setglobal(L, "MENU_IMAGE");
  lua_pushinteger(L, NM_TITLE);
  lua_setglobal(L, "NM_TITLE");
  lua_pushinteger(L, NM_ITEM);
  lua_setglobal(L, "NM_ITEM");
  lua_pushinteger(L, NM_SUB);
  lua_setglobal(L, "NM_SUB");
  lua_pushinteger(L, IM_ITEM);
  lua_setglobal(L, "IM_ITEM");
  lua_pushinteger(L, IM_SUB);
  lua_setglobal(L, "IM_SUB");
  lua_pushinteger(L, NM_END);
  lua_setglobal(L, "NM_END");
  lua_pushinteger(L, NM_IGNORE);
  lua_setglobal(L, "NM_IGNORE");
  lua_pushinteger(L, NM_BARLABEL);
  lua_setglobal(L, "NM_BARLABEL");
  lua_pushinteger(L, NM_MENUDISABLED);
  lua_setglobal(L, "NM_MENUDISABLED");
  lua_pushinteger(L, NM_ITEMDISABLED);
  lua_setglobal(L, "NM_ITEMDISABLED");
  lua_pushinteger(L, NM_COMMANDSTRING);
  lua_setglobal(L, "NM_COMMANDSTRING");
  lua_pushinteger(L, NM_FLAGMASK);
  lua_setglobal(L, "NM_FLAGMASK");
  lua_pushinteger(L, NM_FLAGMASK_V39);
  lua_setglobal(L, "NM_FLAGMASK_V39");
  lua_pushinteger(L, GTMENU_TRIMMED);
  lua_setglobal(L, "GTMENU_TRIMMED");
  lua_pushinteger(L, GTMENU_INVALID);
  lua_setglobal(L, "GTMENU_INVALID");
  lua_pushinteger(L, GTMENU_NOMEM);
  lua_setglobal(L, "GTMENU_NOMEM");
  lua_pushinteger(L, MX_WIDTH);
  lua_setglobal(L, "MX_WIDTH");
  lua_pushinteger(L, MX_HEIGHT);
  lua_setglobal(L, "MX_HEIGHT");
  lua_pushinteger(L, CHECKBOX_WIDTH);
  lua_setglobal(L, "CHECKBOX_WIDTH");
  lua_pushinteger(L, CHECKBOX_HEIGHT);
  lua_setglobal(L, "CHECKBOX_HEIGHT");
  lua_pushinteger(L, GT_TagBase);
  lua_setglobal(L, "GT_TagBase");
  lua_pushinteger(L, GTVI_NewWindow);
  lua_setglobal(L, "GTVI_NewWindow");
  lua_pushinteger(L, GTVI_NWTags);
  lua_setglobal(L, "GTVI_NWTags");
  lua_pushinteger(L, GT_Private0);
  lua_setglobal(L, "GT_Private0");
  lua_pushinteger(L, GTCB_Checked);
  lua_setglobal(L, "GTCB_Checked");
  lua_pushinteger(L, GTLV_Top);
  lua_setglobal(L, "GTLV_Top");
  lua_pushinteger(L, GTLV_Labels);
  lua_setglobal(L, "GTLV_Labels");
  lua_pushinteger(L, GTLV_ReadOnly);
  lua_setglobal(L, "GTLV_ReadOnly");
  lua_pushinteger(L, GTLV_ScrollWidth);
  lua_setglobal(L, "GTLV_ScrollWidth");
  lua_pushinteger(L, GTMX_Labels);
  lua_setglobal(L, "GTMX_Labels");
  lua_pushinteger(L, GTMX_Active);
  lua_setglobal(L, "GTMX_Active");
  lua_pushinteger(L, GTTX_Text);
  lua_setglobal(L, "GTTX_Text");
  lua_pushinteger(L, GTTX_CopyText);
  lua_setglobal(L, "GTTX_CopyText");
  lua_pushinteger(L, GTNM_Number);
  lua_setglobal(L, "GTNM_Number");
  lua_pushinteger(L, GTCY_Labels);
  lua_setglobal(L, "GTCY_Labels");
  lua_pushinteger(L, GTCY_Active);
  lua_setglobal(L, "GTCY_Active");
  lua_pushinteger(L, GTPA_Depth);
  lua_setglobal(L, "GTPA_Depth");
  lua_pushinteger(L, GTPA_Color);
  lua_setglobal(L, "GTPA_Color");
  lua_pushinteger(L, GTPA_ColorOffset);
  lua_setglobal(L, "GTPA_ColorOffset");
  lua_pushinteger(L, GTPA_IndicatorWidth);
  lua_setglobal(L, "GTPA_IndicatorWidth");
  lua_pushinteger(L, GTPA_IndicatorHeight);
  lua_setglobal(L, "GTPA_IndicatorHeight");
  lua_pushinteger(L, GTSC_Top);
  lua_setglobal(L, "GTSC_Top");
  lua_pushinteger(L, GTSC_Total);
  lua_setglobal(L, "GTSC_Total");
  lua_pushinteger(L, GTSC_Visible);
  lua_setglobal(L, "GTSC_Visible");
  lua_pushinteger(L, GTSC_Overlap);
  lua_setglobal(L, "GTSC_Overlap");
  lua_pushinteger(L, GTSL_Min);
  lua_setglobal(L, "GTSL_Min");
  lua_pushinteger(L, GTSL_Max);
  lua_setglobal(L, "GTSL_Max");
  lua_pushinteger(L, GTSL_Level);
  lua_setglobal(L, "GTSL_Level");
  lua_pushinteger(L, GTSL_MaxLevelLen);
  lua_setglobal(L, "GTSL_MaxLevelLen");
  lua_pushinteger(L, GTSL_LevelFormat);
  lua_setglobal(L, "GTSL_LevelFormat");
  lua_pushinteger(L, GTSL_LevelPlace);
  lua_setglobal(L, "GTSL_LevelPlace");
  lua_pushinteger(L, GTSL_DispFunc);
  lua_setglobal(L, "GTSL_DispFunc");
  lua_pushinteger(L, GTST_String);
  lua_setglobal(L, "GTST_String");
  lua_pushinteger(L, GTST_MaxChars);
  lua_setglobal(L, "GTST_MaxChars");
  lua_pushinteger(L, GTIN_Number);
  lua_setglobal(L, "GTIN_Number");
  lua_pushinteger(L, GTIN_MaxChars);
  lua_setglobal(L, "GTIN_MaxChars");
  lua_pushinteger(L, GTMN_TextAttr);
  lua_setglobal(L, "GTMN_TextAttr");
  lua_pushinteger(L, GTMN_FrontPen);
  lua_setglobal(L, "GTMN_FrontPen");
  lua_pushinteger(L, GTBB_Recessed);
  lua_setglobal(L, "GTBB_Recessed");
  lua_pushinteger(L, GT_VisualInfo);
  lua_setglobal(L, "GT_VisualInfo");
  lua_pushinteger(L, GTLV_ShowSelected);
  lua_setglobal(L, "GTLV_ShowSelected");
  lua_pushinteger(L, GTLV_Selected);
  lua_setglobal(L, "GTLV_Selected");
  lua_pushinteger(L, GT_Reserved1);
  lua_setglobal(L, "GT_Reserved1");
  lua_pushinteger(L, GTTX_Border);
  lua_setglobal(L, "GTTX_Border");
  lua_pushinteger(L, GTNM_Border);
  lua_setglobal(L, "GTNM_Border");
  lua_pushinteger(L, GTSC_Arrows);
  lua_setglobal(L, "GTSC_Arrows");
  lua_pushinteger(L, GTMN_Menu);
  lua_setglobal(L, "GTMN_Menu");
  lua_pushinteger(L, GTMX_Spacing);
  lua_setglobal(L, "GTMX_Spacing");
  lua_pushinteger(L, GTMN_FullMenu);
  lua_setglobal(L, "GTMN_FullMenu");
  lua_pushinteger(L, GTMN_SecondaryError);
  lua_setglobal(L, "GTMN_SecondaryError");
  lua_pushinteger(L, GT_Underscore);
  lua_setglobal(L, "GT_Underscore");
  lua_pushinteger(L, GTST_EditHook);
  lua_setglobal(L, "GTST_EditHook");
  lua_pushinteger(L, GTIN_EditHook);
  lua_setglobal(L, "GTIN_EditHook");
  lua_pushinteger(L, GTMN_Checkmark);
  lua_setglobal(L, "GTMN_Checkmark");
  lua_pushinteger(L, GTMN_AmigaKey);
  lua_setglobal(L, "GTMN_AmigaKey");
  lua_pushinteger(L, GTMN_NewLookMenus);
  lua_setglobal(L, "GTMN_NewLookMenus");
  lua_pushinteger(L, GTCB_Scaled);
  lua_setglobal(L, "GTCB_Scaled");
  lua_pushinteger(L, GTMX_Scaled);
  lua_setglobal(L, "GTMX_Scaled");
  lua_pushinteger(L, GTPA_NumColors);
  lua_setglobal(L, "GTPA_NumColors");
  lua_pushinteger(L, GTMX_TitlePlace);
  lua_setglobal(L, "GTMX_TitlePlace");
  lua_pushinteger(L, GTTX_FrontPen);
  lua_setglobal(L, "GTTX_FrontPen");
  lua_pushinteger(L, GTTX_BackPen);
  lua_setglobal(L, "GTTX_BackPen");
  lua_pushinteger(L, GTTX_Justification);
  lua_setglobal(L, "GTTX_Justification");
  lua_pushinteger(L, GTNM_FrontPen);
  lua_setglobal(L, "GTNM_FrontPen");
  lua_pushinteger(L, GTNM_BackPen);
  lua_setglobal(L, "GTNM_BackPen");
  lua_pushinteger(L, GTNM_Justification);
  lua_setglobal(L, "GTNM_Justification");
  lua_pushinteger(L, GTNM_Format);
  lua_setglobal(L, "GTNM_Format");
  lua_pushinteger(L, GTNM_MaxNumberLen);
  lua_setglobal(L, "GTNM_MaxNumberLen");
  lua_pushinteger(L, GTBB_FrameType);
  lua_setglobal(L, "GTBB_FrameType");
  lua_pushinteger(L, GTLV_MakeVisible);
  lua_setglobal(L, "GTLV_MakeVisible");
  lua_pushinteger(L, GTLV_ItemHeight);
  lua_setglobal(L, "GTLV_ItemHeight");
  lua_pushinteger(L, GTSL_MaxPixelLen);
  lua_setglobal(L, "GTSL_MaxPixelLen");
  lua_pushinteger(L, GTSL_Justification);
  lua_setglobal(L, "GTSL_Justification");
  lua_pushinteger(L, GTPA_ColorTable);
  lua_setglobal(L, "GTPA_ColorTable");
  lua_pushinteger(L, GTLV_CallBack);
  lua_setglobal(L, "GTLV_CallBack");
  lua_pushinteger(L, GTLV_MaxPen);
  lua_setglobal(L, "GTLV_MaxPen");
  lua_pushinteger(L, GTTX_Clipped);
  lua_setglobal(L, "GTTX_Clipped");
  lua_pushinteger(L, GTNM_Clipped);
  lua_setglobal(L, "GTNM_Clipped");
  lua_pushinteger(L, GTBB_reserved1);
  lua_setglobal(L, "GTBB_reserved1");
  lua_pushinteger(L, GTMN_reserved1);
  lua_setglobal(L, "GTMN_reserved1");
  lua_pushinteger(L, GTLV_Total);
  lua_setglobal(L, "GTLV_Total");
  lua_pushinteger(L, GTLV_Visible);
  lua_setglobal(L, "GTLV_Visible");
  lua_pushinteger(L, GTBB_Scale);
  lua_setglobal(L, "GTBB_Scale");
  lua_pushinteger(L, GTBB_Headline);
  lua_setglobal(L, "GTBB_Headline");
  lua_pushinteger(L, GTBB_HeadlinePen);
  lua_setglobal(L, "GTBB_HeadlinePen");
  lua_pushinteger(L, GTBB_HeadlineFont);
  lua_setglobal(L, "GTBB_HeadlineFont");
  lua_pushinteger(L, GTVI_LeftBorder);
  lua_setglobal(L, "GTVI_LeftBorder");
  lua_pushinteger(L, GTVI_TopBorder);
  lua_setglobal(L, "GTVI_TopBorder");
  lua_pushinteger(L, GTVI_AlignRight);
  lua_setglobal(L, "GTVI_AlignRight");
  lua_pushinteger(L, GTVI_AlignBottom);
  lua_setglobal(L, "GTVI_AlignBottom");
  lua_pushinteger(L, GTVI_MinFontWidth);
  lua_setglobal(L, "GTVI_MinFontWidth");
  lua_pushinteger(L, GTVI_MinFontHeight);
  lua_setglobal(L, "GTVI_MinFontHeight");
  lua_pushinteger(L, GTMX_ScaledSpacing);
  lua_setglobal(L, "GTMX_ScaledSpacing");
  lua_pushinteger(L, GT_Reserved0);
  lua_setglobal(L, "GT_Reserved0");
  lua_pushinteger(L, GTJ_LEFT);
  lua_setglobal(L, "GTJ_LEFT");
  lua_pushinteger(L, GTJ_RIGHT);
  lua_setglobal(L, "GTJ_RIGHT");
  lua_pushinteger(L, GTJ_CENTER);
  lua_setglobal(L, "GTJ_CENTER");
  lua_pushinteger(L, BBFT_BUTTON);
  lua_setglobal(L, "BBFT_BUTTON");
  lua_pushinteger(L, BBFT_RIDGE);
  lua_setglobal(L, "BBFT_RIDGE");
  lua_pushinteger(L, BBFT_ICONDROPBOX);
  lua_setglobal(L, "BBFT_ICONDROPBOX");
  lua_pushinteger(L, BBFT_DISPLAY);
  lua_setglobal(L, "BBFT_DISPLAY");
  lua_pushinteger(L, BBFT_CTXTFRAME);
  lua_setglobal(L, "BBFT_CTXTFRAME");
  lua_pushinteger(L, INTERWIDTH);
  lua_setglobal(L, "INTERWIDTH");
  lua_pushinteger(L, INTERHEIGHT);
  lua_setglobal(L, "INTERHEIGHT");
  lua_pushinteger(L, NWAY_KIND);
  lua_setglobal(L, "NWAY_KIND");
  lua_pushinteger(L, NWAYIDCMP);
  lua_setglobal(L, "NWAYIDCMP");
  lua_pushinteger(L, GTNW_Labels);
  lua_setglobal(L, "GTNW_Labels");
  lua_pushinteger(L, GTNW_Active);
  lua_setglobal(L, "GTNW_Active");
  lua_pushinteger(L, GADTOOLBIT);
  lua_setglobal(L, "GADTOOLBIT");
  lua_pushinteger(L, GADTOOLMASK);
  lua_setglobal(L, "GADTOOLMASK");
  lua_pushinteger(L, LV_DRAW);
  lua_setglobal(L, "LV_DRAW");
  lua_pushinteger(L, LVCB_OK);
  lua_setglobal(L, "LVCB_OK");
  lua_pushinteger(L, LVCB_UNKNOWN);
  lua_setglobal(L, "LVCB_UNKNOWN");
  lua_pushinteger(L, LVR_NORMAL);
  lua_setglobal(L, "LVR_NORMAL");
  lua_pushinteger(L, LVR_SELECTED);
  lua_setglobal(L, "LVR_SELECTED");
  lua_pushinteger(L, LVR_NORMALDISABLED);
  lua_setglobal(L, "LVR_NORMALDISABLED");
  lua_pushinteger(L, LVR_SELECTEDDISABLED);
  lua_setglobal(L, "LVR_SELECTEDDISABLED");
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
  _lua_gen_install_meta_View(L);
  _lua_gen_install_meta_ViewPort(L);
  _lua_gen_install_meta_IntuiText(L);
  _lua_gen_install_meta_Screen(L);
  _lua_gen_install_meta_Hook(L);
  _lua_gen_install_meta_List(L);
  _lua_gen_install_meta_GadgetInfo(L);
  _lua_gen_install_meta_Image(L);
  _lua_gen_install_meta_IClass(L);
  _lua_gen_install_meta_DrawInfo(L);
  _lua_gen_install_meta_ScreenBuffer(L);
  _lua_gen_install_meta_NewScreen(L);
  _lua_gen_install_meta_NewGadget(L);
  _lua_gen_install_meta_NewWindow(L);
  _lua_gen_install_meta_Requester(L);
  _lua_gen_install_meta_TextAttr(L);
  _lua_gen_install_meta_StringInfo(L);
  _lua_gen_install_meta_TextFont(L);
  _lua_gen_install_meta_NewMenu(L);
  _lua_gen_install_meta_Menu(L);
  _lua_gen_install_meta_MenuItem(L);
  _lua_gen_install_meta_InputEvent(L);
  _lua_gen_install_meta_BitMap(L);
  _lua_gen_install_meta_DBufInfo(L);
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
  lua_register(L, "OpenIntuition", _lua_OpenIntuition);
  lua_register(L, "Intuition", _lua_Intuition);
  lua_register(L, "ClearDMRequest", _lua_ClearDMRequest);
  lua_register(L, "ClearMenuStrip", _lua_ClearMenuStrip);
  lua_register(L, "ClearPointer", _lua_ClearPointer);
  lua_register(L, "CloseScreen", _lua_CloseScreen);
  lua_register(L, "CloseWindow", _lua_CloseWindow);
  lua_register(L, "CloseWorkBench", _lua_CloseWorkBench);
  lua_register(L, "CurrentTime", _lua_CurrentTime);
  lua_register(L, "DisplayAlert", _lua_DisplayAlert);
  lua_register(L, "DisplayBeep", _lua_DisplayBeep);
  lua_register(L, "EndRequest", _lua_EndRequest);
  lua_register(L, "InitRequester", _lua_InitRequester);
  lua_register(L, "ItemAddress", _lua_ItemAddress);
  lua_register(L, "ModifyIDCMP", _lua_ModifyIDCMP);
  lua_register(L, "MoveScreen", _lua_MoveScreen);
  lua_register(L, "MoveWindow", _lua_MoveWindow);
  lua_register(L, "OffMenu", _lua_OffMenu);
  lua_register(L, "OnMenu", _lua_OnMenu);
  lua_register(L, "OpenScreen", _lua_OpenScreen);
  lua_register(L, "OpenWindow", _lua_OpenWindow);
  lua_register(L, "OpenWorkBench", _lua_OpenWorkBench);
  lua_register(L, "RemoveGadget", _lua_RemoveGadget);
  lua_register(L, "ReportMouse", _lua_ReportMouse);
  lua_register(L, "ReportMouse1", _lua_ReportMouse1);
  lua_register(L, "Request", _lua_Request);
  lua_register(L, "ScreenToBack", _lua_ScreenToBack);
  lua_register(L, "ScreenToFront", _lua_ScreenToFront);
  lua_register(L, "SetDMRequest", _lua_SetDMRequest);
  lua_register(L, "SetMenuStrip", _lua_SetMenuStrip);
  lua_register(L, "ShowTitle", _lua_ShowTitle);
  lua_register(L, "SizeWindow", _lua_SizeWindow);
  lua_register(L, "ViewAddress", _lua_ViewAddress);
  lua_register(L, "ViewPortAddress", _lua_ViewPortAddress);
  lua_register(L, "WindowToBack", _lua_WindowToBack);
  lua_register(L, "WindowToFront", _lua_WindowToFront);
  lua_register(L, "IntuiTextLength", _lua_IntuiTextLength);
  lua_register(L, "WBenchToBack", _lua_WBenchToBack);
  lua_register(L, "WBenchToFront", _lua_WBenchToFront);
  lua_register(L, "BeginRefresh", _lua_BeginRefresh);
  lua_register(L, "EndRefresh", _lua_EndRefresh);
  lua_register(L, "FreeSysRequest", _lua_FreeSysRequest);
  lua_register(L, "MakeScreen", _lua_MakeScreen);
  lua_register(L, "RemakeDisplay", _lua_RemakeDisplay);
  lua_register(L, "RethinkDisplay", _lua_RethinkDisplay);
  lua_register(L, "AlohaWorkbench", _lua_AlohaWorkbench);
  lua_register(L, "LockIBase", _lua_LockIBase);
  lua_register(L, "UnlockIBase", _lua_UnlockIBase);
  lua_register(L, "ActivateWindow", _lua_ActivateWindow);
  lua_register(L, "RefreshWindowFrame", _lua_RefreshWindowFrame);
  lua_register(L, "SetEditHook", _lua_SetEditHook);
  lua_register(L, "SetMouseQueue", _lua_SetMouseQueue);
  lua_register(L, "ZipWindow", _lua_ZipWindow);
  lua_register(L, "LockPubScreen", _lua_LockPubScreen);
  lua_register(L, "UnlockPubScreen", _lua_UnlockPubScreen);
  lua_register(L, "LockPubScreenList", _lua_LockPubScreenList);
  lua_register(L, "UnlockPubScreenList", _lua_UnlockPubScreenList);
  lua_register(L, "NextPubScreen", _lua_NextPubScreen);
  lua_register(L, "SetDefaultPubScreen", _lua_SetDefaultPubScreen);
  lua_register(L, "SetPubScreenModes", _lua_SetPubScreenModes);
  lua_register(L, "PubScreenStatus", _lua_PubScreenStatus);
  lua_register(L, "ObtainGIRPort", _lua_ObtainGIRPort);
  lua_register(L, "ReleaseGIRPort", _lua_ReleaseGIRPort);
  lua_register(L, "GetDefaultPubScreen", _lua_GetDefaultPubScreen);
  lua_register(L, "OpenWindowTagList", _lua_OpenWindowTagList);
  lua_register(L, "OpenWindowTags", _lua_OpenWindowTags);
  lua_register(L, "PointInImage", _lua_PointInImage);
  lua_register(L, "DisposeObject", _lua_DisposeObject);
  lua_register(L, "SetAttrsA", _lua_SetAttrsA);
  lua_register(L, "SetAttrs", _lua_SetAttrs);
  lua_register(L, "GetAttr", _lua_GetAttr);
  lua_register(L, "NextObject", _lua_NextObject);
  lua_register(L, "AddClass", _lua_AddClass);
  lua_register(L, "GetScreenDrawInfo", _lua_GetScreenDrawInfo);
  lua_register(L, "ResetMenuStrip", _lua_ResetMenuStrip);
  lua_register(L, "RemoveClass", _lua_RemoveClass);
  lua_register(L, "FreeClass", _lua_FreeClass);
  lua_register(L, "FreeScreenBuffer", _lua_FreeScreenBuffer);
  lua_register(L, "ChangeScreenBuffer", _lua_ChangeScreenBuffer);
  lua_register(L, "ScreenDepth", _lua_ScreenDepth);
  lua_register(L, "LendMenus", _lua_LendMenus);
  lua_register(L, "SetWindowPointerA", _lua_SetWindowPointerA);
  lua_register(L, "SetWindowPointer", _lua_SetWindowPointer);
  lua_register(L, "TimedDisplayAlert", _lua_TimedDisplayAlert);
  lua_register(L, "HelpControl", _lua_HelpControl);
  lua_register(L, "ShowWindow", _lua_ShowWindow);
  lua_register(L, "HideWindow", _lua_HideWindow);
  lua_register(L, "IntuitionControlA", _lua_IntuitionControlA);
  lua_register(L, "IntuitionControl", _lua_IntuitionControl);
  lua_register(L, "CreateGadgetA", _lua_CreateGadgetA);
  lua_register(L, "CreateGadget", _lua_CreateGadget);
  lua_register(L, "FreeGadgets", _lua_FreeGadgets);
  lua_register(L, "GT_SetGadgetAttrsA", _lua_GT_SetGadgetAttrsA);
  lua_register(L, "GT_SetGadgetAttrs", _lua_GT_SetGadgetAttrs);
  lua_register(L, "CreateMenusA", _lua_CreateMenusA);
  lua_register(L, "CreateMenus", _lua_CreateMenus);
  lua_register(L, "FreeMenus", _lua_FreeMenus);
  lua_register(L, "LayoutMenuItemsA", _lua_LayoutMenuItemsA);
  lua_register(L, "LayoutMenuItems", _lua_LayoutMenuItems);
  lua_register(L, "LayoutMenusA", _lua_LayoutMenusA);
  lua_register(L, "LayoutMenus", _lua_LayoutMenus);
  lua_register(L, "GT_GetIMsg", _lua_GT_GetIMsg);
  lua_register(L, "GT_ReplyIMsg", _lua_GT_ReplyIMsg);
  lua_register(L, "GT_RefreshWindow", _lua_GT_RefreshWindow);
  lua_register(L, "GT_BeginRefresh", _lua_GT_BeginRefresh);
  lua_register(L, "GT_EndRefresh", _lua_GT_EndRefresh);
  lua_register(L, "GT_FilterIMsg", _lua_GT_FilterIMsg);
  lua_register(L, "GT_PostFilterIMsg", _lua_GT_PostFilterIMsg);
  lua_register(L, "CreateContext", _lua_CreateContext);
  lua_register(L, "DrawBevelBoxA", _lua_DrawBevelBoxA);
  lua_register(L, "DrawBevelBox", _lua_DrawBevelBox);
  lua_register(L, "GetVisualInfoA", _lua_GetVisualInfoA);
  lua_register(L, "GetVisualInfo", _lua_GetVisualInfo);
  lua_register(L, "FreeVisualInfo", _lua_FreeVisualInfo);
  lua_register(L, "SetDesignFontA", _lua_SetDesignFontA);
  lua_register(L, "SetDesignFont", _lua_SetDesignFont);
  lua_register(L, "ScaleGadgetRectA", _lua_ScaleGadgetRectA);
  lua_register(L, "ScaleGadgetRect", _lua_ScaleGadgetRect);
  lua_register(L, "GT_GetGadgetAttrsA", _lua_GT_GetGadgetAttrsA);
  lua_register(L, "GT_GetGadgetAttrs", _lua_GT_GetGadgetAttrs);
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

