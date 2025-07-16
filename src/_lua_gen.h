// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h

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
_lua_gen_pushNode(lua_State *L, struct Node* obj)
{
  if (obj) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = obj;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Node*
_lua_gen_checkNode(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Node **ud = (struct Node **)luaL_checkudata(L, stackIndex, "Node");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMinNode(lua_State *L, struct MinNode* obj)
{
  if (obj) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = obj;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MinNode*
_lua_gen_checkMinNode(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MinNode **ud = (struct MinNode **)luaL_checkudata(L, stackIndex, "MinNode");
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
_lua_gen_pushMinList(lua_State *L, struct MinList* obj)
{
  if (obj) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = obj;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MinList*
_lua_gen_checkMinList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MinList **ud = (struct MinList **)luaL_checkudata(L, stackIndex, "MinList");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTask(lua_State *L, struct Task* obj)
{
  if (obj) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = obj;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Task*
_lua_gen_checkTask(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Task **ud = (struct Task **)luaL_checkudata(L, stackIndex, "Task");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushStackSwapStruct(lua_State *L, struct StackSwapStruct* obj)
{
  if (obj) {
    struct StackSwapStruct **ud = (struct StackSwapStruct **)lua_newuserdata(L, sizeof(struct StackSwapStruct *));
    *ud = obj;
    luaL_getmetatable(L, "StackSwapStruct");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct StackSwapStruct*
_lua_gen_checkStackSwapStruct(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct StackSwapStruct **ud = (struct StackSwapStruct **)luaL_checkudata(L, stackIndex, "StackSwapStruct");
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
_lua_gen_pushLibrary(lua_State *L, struct Library* obj)
{
  if (obj) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = obj;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Library*
_lua_gen_checkLibrary(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Library **ud = (struct Library **)luaL_checkudata(L, stackIndex, "Library");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushSemaphoreRequest(lua_State *L, struct SemaphoreRequest* obj)
{
  if (obj) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = obj;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct SemaphoreRequest*
_lua_gen_checkSemaphoreRequest(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct SemaphoreRequest **ud = (struct SemaphoreRequest **)luaL_checkudata(L, stackIndex, "SemaphoreRequest");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushSignalSemaphore(lua_State *L, struct SignalSemaphore* obj)
{
  if (obj) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = obj;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct SignalSemaphore*
_lua_gen_checkSignalSemaphore(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct SignalSemaphore **ud = (struct SignalSemaphore **)luaL_checkudata(L, stackIndex, "SignalSemaphore");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushSemaphoreMessage(lua_State *L, struct SemaphoreMessage* obj)
{
  if (obj) {
    struct SemaphoreMessage **ud = (struct SemaphoreMessage **)lua_newuserdata(L, sizeof(struct SemaphoreMessage *));
    *ud = obj;
    luaL_getmetatable(L, "SemaphoreMessage");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct SemaphoreMessage*
_lua_gen_checkSemaphoreMessage(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct SemaphoreMessage **ud = (struct SemaphoreMessage **)luaL_checkudata(L, stackIndex, "SemaphoreMessage");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushIORequest(lua_State *L, struct IORequest* obj)
{
  if (obj) {
    struct IORequest **ud = (struct IORequest **)lua_newuserdata(L, sizeof(struct IORequest *));
    *ud = obj;
    luaL_getmetatable(L, "IORequest");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct IORequest*
_lua_gen_checkIORequest(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct IORequest **ud = (struct IORequest **)luaL_checkudata(L, stackIndex, "IORequest");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTimeVal_Type(lua_State *L, TimeVal_Type* obj)
{
  if (obj) {
    TimeVal_Type **ud = (TimeVal_Type **)lua_newuserdata(L, sizeof(TimeVal_Type *));
    *ud = obj;
    luaL_getmetatable(L, "TimeVal_Type");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

TimeVal_Type*
_lua_gen_checkTimeVal_Type(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      TimeVal_Type **ud = (TimeVal_Type **)luaL_checkudata(L, stackIndex, "TimeVal_Type");
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
_lua_gen_pushRectangle(lua_State *L, struct Rectangle* obj)
{
  if (obj) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = obj;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Rectangle*
_lua_gen_checkRectangle(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Rectangle **ud = (struct Rectangle **)luaL_checkudata(L, stackIndex, "Rectangle");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushPoint(lua_State *L, Point* obj)
{
  if (obj) {
    Point **ud = (Point **)lua_newuserdata(L, sizeof(Point *));
    *ud = obj;
    luaL_getmetatable(L, "Point");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

Point*
_lua_gen_checkPoint(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      Point **ud = (Point **)luaL_checkudata(L, stackIndex, "Point");
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
_lua_gen_pushExtendedNode(lua_State *L, struct ExtendedNode* obj)
{
  if (obj) {
    struct ExtendedNode **ud = (struct ExtendedNode **)lua_newuserdata(L, sizeof(struct ExtendedNode *));
    *ud = obj;
    luaL_getmetatable(L, "ExtendedNode");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ExtendedNode*
_lua_gen_checkExtendedNode(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ExtendedNode **ud = (struct ExtendedNode **)luaL_checkudata(L, stackIndex, "ExtendedNode");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushCopIns(lua_State *L, struct CopIns* obj)
{
  if (obj) {
    struct CopIns **ud = (struct CopIns **)lua_newuserdata(L, sizeof(struct CopIns *));
    *ud = obj;
    luaL_getmetatable(L, "CopIns");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct CopIns*
_lua_gen_checkCopIns(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct CopIns **ud = (struct CopIns **)luaL_checkudata(L, stackIndex, "CopIns");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushcprlist(lua_State *L, struct cprlist* obj)
{
  if (obj) {
    struct cprlist **ud = (struct cprlist **)lua_newuserdata(L, sizeof(struct cprlist *));
    *ud = obj;
    luaL_getmetatable(L, "cprlist");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct cprlist*
_lua_gen_checkcprlist(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct cprlist **ud = (struct cprlist **)luaL_checkudata(L, stackIndex, "cprlist");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushCopList(lua_State *L, struct CopList* obj)
{
  if (obj) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = obj;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct CopList*
_lua_gen_checkCopList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct CopList **ud = (struct CopList **)luaL_checkudata(L, stackIndex, "CopList");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushcopinit(lua_State *L, struct copinit* obj)
{
  if (obj) {
    struct copinit **ud = (struct copinit **)lua_newuserdata(L, sizeof(struct copinit *));
    *ud = obj;
    luaL_getmetatable(L, "copinit");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct copinit*
_lua_gen_checkcopinit(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct copinit **ud = (struct copinit **)luaL_checkudata(L, stackIndex, "copinit");
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
_lua_gen_pushCustom(lua_State *L, struct Custom* obj)
{
  if (obj) {
    struct Custom **ud = (struct Custom **)lua_newuserdata(L, sizeof(struct Custom *));
    *ud = obj;
    luaL_getmetatable(L, "Custom");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Custom*
_lua_gen_checkCustom(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Custom **ud = (struct Custom **)luaL_checkudata(L, stackIndex, "Custom");
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
_lua_gen_pushViewPortExtra(lua_State *L, struct ViewPortExtra* obj)
{
  if (obj) {
    struct ViewPortExtra **ud = (struct ViewPortExtra **)lua_newuserdata(L, sizeof(struct ViewPortExtra *));
    *ud = obj;
    luaL_getmetatable(L, "ViewPortExtra");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ViewPortExtra*
_lua_gen_checkViewPortExtra(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ViewPortExtra **ud = (struct ViewPortExtra **)luaL_checkudata(L, stackIndex, "ViewPortExtra");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushColorMap(lua_State *L, struct ColorMap* obj)
{
  if (obj) {
    struct ColorMap **ud = (struct ColorMap **)lua_newuserdata(L, sizeof(struct ColorMap *));
    *ud = obj;
    luaL_getmetatable(L, "ColorMap");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ColorMap*
_lua_gen_checkColorMap(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ColorMap **ud = (struct ColorMap **)luaL_checkudata(L, stackIndex, "ColorMap");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushPaletteExtra(lua_State *L, struct PaletteExtra* obj)
{
  if (obj) {
    struct PaletteExtra **ud = (struct PaletteExtra **)lua_newuserdata(L, sizeof(struct PaletteExtra *));
    *ud = obj;
    luaL_getmetatable(L, "PaletteExtra");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct PaletteExtra*
_lua_gen_checkPaletteExtra(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct PaletteExtra **ud = (struct PaletteExtra **)luaL_checkudata(L, stackIndex, "PaletteExtra");
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
_lua_gen_pushMonitorSpec(lua_State *L, struct MonitorSpec* obj)
{
  if (obj) {
    struct MonitorSpec **ud = (struct MonitorSpec **)lua_newuserdata(L, sizeof(struct MonitorSpec *));
    *ud = obj;
    luaL_getmetatable(L, "MonitorSpec");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MonitorSpec*
_lua_gen_checkMonitorSpec(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MonitorSpec **ud = (struct MonitorSpec **)luaL_checkudata(L, stackIndex, "MonitorSpec");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushAnalogSignalInterval(lua_State *L, struct AnalogSignalInterval* obj)
{
  if (obj) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = obj;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AnalogSignalInterval*
_lua_gen_checkAnalogSignalInterval(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)luaL_checkudata(L, stackIndex, "AnalogSignalInterval");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushSpecialMonitor(lua_State *L, struct SpecialMonitor* obj)
{
  if (obj) {
    struct SpecialMonitor **ud = (struct SpecialMonitor **)lua_newuserdata(L, sizeof(struct SpecialMonitor *));
    *ud = obj;
    luaL_getmetatable(L, "SpecialMonitor");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct SpecialMonitor*
_lua_gen_checkSpecialMonitor(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct SpecialMonitor **ud = (struct SpecialMonitor **)luaL_checkudata(L, stackIndex, "SpecialMonitor");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushAnimOb(lua_State *L, struct AnimOb* obj)
{
  if (obj) {
    struct AnimOb **ud = (struct AnimOb **)lua_newuserdata(L, sizeof(struct AnimOb *));
    *ud = obj;
    luaL_getmetatable(L, "AnimOb");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AnimOb*
_lua_gen_checkAnimOb(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AnimOb **ud = (struct AnimOb **)luaL_checkudata(L, stackIndex, "AnimOb");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushAreaInfo(lua_State *L, struct AreaInfo* obj)
{
  if (obj) {
    struct AreaInfo **ud = (struct AreaInfo **)lua_newuserdata(L, sizeof(struct AreaInfo *));
    *ud = obj;
    luaL_getmetatable(L, "AreaInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AreaInfo*
_lua_gen_checkAreaInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AreaInfo **ud = (struct AreaInfo **)luaL_checkudata(L, stackIndex, "AreaInfo");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushBitScaleArgs(lua_State *L, struct BitScaleArgs* obj)
{
  if (obj) {
    struct BitScaleArgs **ud = (struct BitScaleArgs **)lua_newuserdata(L, sizeof(struct BitScaleArgs *));
    *ud = obj;
    luaL_getmetatable(L, "BitScaleArgs");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct BitScaleArgs*
_lua_gen_checkBitScaleArgs(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct BitScaleArgs **ud = (struct BitScaleArgs **)luaL_checkudata(L, stackIndex, "BitScaleArgs");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushBob(lua_State *L, struct Bob* obj)
{
  if (obj) {
    struct Bob **ud = (struct Bob **)lua_newuserdata(L, sizeof(struct Bob *));
    *ud = obj;
    luaL_getmetatable(L, "Bob");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Bob*
_lua_gen_checkBob(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Bob **ud = (struct Bob **)luaL_checkudata(L, stackIndex, "Bob");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushClipRect(lua_State *L, struct ClipRect* obj)
{
  if (obj) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = obj;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ClipRect*
_lua_gen_checkClipRect(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ClipRect **ud = (struct ClipRect **)luaL_checkudata(L, stackIndex, "ClipRect");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDevice(lua_State *L, struct Device* obj)
{
  if (obj) {
    struct Device **ud = (struct Device **)lua_newuserdata(L, sizeof(struct Device *));
    *ud = obj;
    luaL_getmetatable(L, "Device");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Device*
_lua_gen_checkDevice(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Device **ud = (struct Device **)luaL_checkudata(L, stackIndex, "Device");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushGelsInfo(lua_State *L, struct GelsInfo* obj)
{
  if (obj) {
    struct GelsInfo **ud = (struct GelsInfo **)lua_newuserdata(L, sizeof(struct GelsInfo *));
    *ud = obj;
    luaL_getmetatable(L, "GelsInfo");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct GelsInfo*
_lua_gen_checkGelsInfo(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct GelsInfo **ud = (struct GelsInfo **)luaL_checkudata(L, stackIndex, "GelsInfo");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushGfxBase(lua_State *L, struct GfxBase* obj)
{
  if (obj) {
    struct GfxBase **ud = (struct GfxBase **)lua_newuserdata(L, sizeof(struct GfxBase *));
    *ud = obj;
    luaL_getmetatable(L, "GfxBase");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct GfxBase*
_lua_gen_checkGfxBase(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct GfxBase **ud = (struct GfxBase **)luaL_checkudata(L, stackIndex, "GfxBase");
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
_lua_gen_pushInterrupt(lua_State *L, struct Interrupt* obj)
{
  if (obj) {
    struct Interrupt **ud = (struct Interrupt **)lua_newuserdata(L, sizeof(struct Interrupt *));
    *ud = obj;
    luaL_getmetatable(L, "Interrupt");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Interrupt*
_lua_gen_checkInterrupt(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Interrupt **ud = (struct Interrupt **)luaL_checkudata(L, stackIndex, "Interrupt");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushLayer(lua_State *L, struct Layer* obj)
{
  if (obj) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = obj;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Layer*
_lua_gen_checkLayer(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Layer **ud = (struct Layer **)luaL_checkudata(L, stackIndex, "Layer");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushLayer_Info(lua_State *L, struct Layer_Info* obj)
{
  if (obj) {
    struct Layer_Info **ud = (struct Layer_Info **)lua_newuserdata(L, sizeof(struct Layer_Info *));
    *ud = obj;
    luaL_getmetatable(L, "Layer_Info");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Layer_Info*
_lua_gen_checkLayer_Info(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Layer_Info **ud = (struct Layer_Info **)luaL_checkudata(L, stackIndex, "Layer_Info");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMemHeader(lua_State *L, struct MemHeader* obj)
{
  if (obj) {
    struct MemHeader **ud = (struct MemHeader **)lua_newuserdata(L, sizeof(struct MemHeader *));
    *ud = obj;
    luaL_getmetatable(L, "MemHeader");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MemHeader*
_lua_gen_checkMemHeader(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MemHeader **ud = (struct MemHeader **)luaL_checkudata(L, stackIndex, "MemHeader");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMemList(lua_State *L, struct MemList* obj)
{
  if (obj) {
    struct MemList **ud = (struct MemList **)lua_newuserdata(L, sizeof(struct MemList *));
    *ud = obj;
    luaL_getmetatable(L, "MemList");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MemList*
_lua_gen_checkMemList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MemList **ud = (struct MemList **)luaL_checkudata(L, stackIndex, "MemList");
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
_lua_gen_pushRegion(lua_State *L, struct Region* obj)
{
  if (obj) {
    struct Region **ud = (struct Region **)lua_newuserdata(L, sizeof(struct Region *));
    *ud = obj;
    luaL_getmetatable(L, "Region");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Region*
_lua_gen_checkRegion(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Region **ud = (struct Region **)luaL_checkudata(L, stackIndex, "Region");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushResident(lua_State *L, struct Resident* obj)
{
  if (obj) {
    struct Resident **ud = (struct Resident **)lua_newuserdata(L, sizeof(struct Resident *));
    *ud = obj;
    luaL_getmetatable(L, "Resident");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Resident*
_lua_gen_checkResident(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Resident **ud = (struct Resident **)luaL_checkudata(L, stackIndex, "Resident");
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
_lua_gen_pushSimpleSprite(lua_State *L, struct SimpleSprite* obj)
{
  if (obj) {
    struct SimpleSprite **ud = (struct SimpleSprite **)lua_newuserdata(L, sizeof(struct SimpleSprite *));
    *ud = obj;
    luaL_getmetatable(L, "SimpleSprite");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct SimpleSprite*
_lua_gen_checkSimpleSprite(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct SimpleSprite **ud = (struct SimpleSprite **)luaL_checkudata(L, stackIndex, "SimpleSprite");
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
_lua_gen_pushVSprite(lua_State *L, struct VSprite* obj)
{
  if (obj) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = obj;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct VSprite*
_lua_gen_checkVSprite(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct VSprite **ud = (struct VSprite **)luaL_checkudata(L, stackIndex, "VSprite");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

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
_lua_gen_pushbltnode(lua_State *L, struct bltnode* obj)
{
  if (obj) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = obj;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct bltnode*
_lua_gen_checkbltnode(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct bltnode **ud = (struct bltnode **)luaL_checkudata(L, stackIndex, "bltnode");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushMemChunk(lua_State *L, struct MemChunk* obj)
{
  if (obj) {
    struct MemChunk **ud = (struct MemChunk **)lua_newuserdata(L, sizeof(struct MemChunk *));
    *ud = obj;
    luaL_getmetatable(L, "MemChunk");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct MemChunk*
_lua_gen_checkMemChunk(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct MemChunk **ud = (struct MemChunk **)luaL_checkudata(L, stackIndex, "MemChunk");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushAnimComp(lua_State *L, struct AnimComp* obj)
{
  if (obj) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = obj;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AnimComp*
_lua_gen_checkAnimComp(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AnimComp **ud = (struct AnimComp **)luaL_checkudata(L, stackIndex, "AnimComp");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDBufPacket(lua_State *L, struct DBufPacket* obj)
{
  if (obj) {
    struct DBufPacket **ud = (struct DBufPacket **)lua_newuserdata(L, sizeof(struct DBufPacket *));
    *ud = obj;
    luaL_getmetatable(L, "DBufPacket");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DBufPacket*
_lua_gen_checkDBufPacket(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DBufPacket **ud = (struct DBufPacket **)luaL_checkudata(L, stackIndex, "DBufPacket");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushcollTable(lua_State *L, struct collTable* obj)
{
  if (obj) {
    struct collTable **ud = (struct collTable **)lua_newuserdata(L, sizeof(struct collTable *));
    *ud = obj;
    luaL_getmetatable(L, "collTable");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct collTable*
_lua_gen_checkcollTable(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct collTable **ud = (struct collTable **)luaL_checkudata(L, stackIndex, "collTable");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushTmpRas(lua_State *L, struct TmpRas* obj)
{
  if (obj) {
    struct TmpRas **ud = (struct TmpRas **)lua_newuserdata(L, sizeof(struct TmpRas *));
    *ud = obj;
    luaL_getmetatable(L, "TmpRas");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct TmpRas*
_lua_gen_checkTmpRas(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct TmpRas **ud = (struct TmpRas **)luaL_checkudata(L, stackIndex, "TmpRas");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushRegionRectangle(lua_State *L, struct RegionRectangle* obj)
{
  if (obj) {
    struct RegionRectangle **ud = (struct RegionRectangle **)lua_newuserdata(L, sizeof(struct RegionRectangle *));
    *ud = obj;
    luaL_getmetatable(L, "RegionRectangle");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct RegionRectangle*
_lua_gen_checkRegionRectangle(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct RegionRectangle **ud = (struct RegionRectangle **)luaL_checkudata(L, stackIndex, "RegionRectangle");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushExtSprite(lua_State *L, struct ExtSprite* obj)
{
  if (obj) {
    struct ExtSprite **ud = (struct ExtSprite **)lua_newuserdata(L, sizeof(struct ExtSprite *));
    *ud = obj;
    luaL_getmetatable(L, "ExtSprite");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct ExtSprite*
_lua_gen_checkExtSprite(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct ExtSprite **ud = (struct ExtSprite **)luaL_checkudata(L, stackIndex, "ExtSprite");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}
static int
_lua_gen_TagItem_newindex(lua_State *L)
{
  struct TagItem *obj = *(struct TagItem **)luaL_checkudata(L, 1, "TagItem");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ti_Tag") == 0) {
    // finder 0
    Tag *val = *(Tag **)luaL_checkudata(L, 3, "Tag");
    obj->ti_Tag = *val;
    return 0;
  }
  if (strcmp(key, "ti_Data") == 0) {
    obj->ti_Data = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TagItem_constructor(lua_State *L)
{
  // Allocate pointer-to-struct TagItem in userdata
  struct TagItem **objp = lua_newuserdata(L, sizeof(struct TagItem *));
  *objp = malloc(sizeof(struct TagItem));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct TagItem));

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
  struct TagItem *obj = *(struct TagItem **)luaL_checkudata(L, 1, "TagItem");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ti_Tag") == 0) {
    Tag **ud = (Tag **)lua_newuserdata(L, sizeof(Tag *));
    *ud = (Tag*)&obj->ti_Tag;
    luaL_getmetatable(L, "Tag");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ti_Data") == 0) {
    lua_pushinteger(L, obj->ti_Data);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct TagItem));
    return 1;
}

  return 0;
}

static void
_lua_gen_TagItem_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ti_Tag");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ti_Data");
  lua_rawseti(L, -2, 2);
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
_lua_gen_Node_newindex(lua_State *L)
{
  struct Node *obj = *(struct Node **)luaL_checkudata(L, 1, "Node");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ln_Succ") == 0) {
    // finder 1
    //obj->ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ln_Pred") == 0) {
    // finder 1
    //obj->ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ln_Type") == 0) {
    obj->ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ln_Pri") == 0) {
    obj->ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ln_Name") == 0) {
    obj->ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Node_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Node in userdata
  struct Node **objp = lua_newuserdata(L, sizeof(struct Node *));
  *objp = malloc(sizeof(struct Node));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Node));

  // Set metatable
  luaL_getmetatable(L, "Node");
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
_lua_gen_Node_index(lua_State *L)
{
  struct Node *obj = *(struct Node **)luaL_checkudata(L, 1, "Node");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ln_Type") == 0) {
    lua_pushinteger(L, obj->ln_Type);
    return 1;
  }
  if (strcmp(key, "ln_Pri") == 0) {
    lua_pushinteger(L, obj->ln_Pri);
    return 1;
  }
  if (strcmp(key, "ln_Name") == 0) {
    lua_pushstring(L, obj->ln_Name);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Node));
    return 1;
}

  return 0;
}

static void
_lua_gen_Node_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ln_Name");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Node(lua_State *L) {
  if (luaL_newmetatable(L, "Node")) {
    lua_pushcfunction(L, _lua_gen_Node_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Node_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Node_constructor);
    lua_setglobal(L, "Node");
    _lua_gen_Node_install_keys(L);
    lua_pushstring(L, "Node");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MinNode_newindex(lua_State *L)
{
  struct MinNode *obj = *(struct MinNode **)luaL_checkudata(L, 1, "MinNode");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mln_Succ") == 0) {
    // finder 1
    //obj->mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mln_Pred") == 0) {
    // finder 1
    //obj->mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_MinNode_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MinNode in userdata
  struct MinNode **objp = lua_newuserdata(L, sizeof(struct MinNode *));
  *objp = malloc(sizeof(struct MinNode));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MinNode));

  // Set metatable
  luaL_getmetatable(L, "MinNode");
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
_lua_gen_MinNode_index(lua_State *L)
{
  struct MinNode *obj = *(struct MinNode **)luaL_checkudata(L, 1, "MinNode");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MinNode));
    return 1;
}

  return 0;
}

static void
_lua_gen_MinNode_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MinNode(lua_State *L) {
  if (luaL_newmetatable(L, "MinNode")) {
    lua_pushcfunction(L, _lua_gen_MinNode_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MinNode_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MinNode_constructor);
    lua_setglobal(L, "MinNode");
    _lua_gen_MinNode_install_keys(L);
    lua_pushstring(L, "MinNode");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_List_newindex(lua_State *L)
{
  struct List *obj = *(struct List **)luaL_checkudata(L, 1, "List");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "lh_Head") == 0) {
    // finder 1
    //obj->lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "lh_Tail") == 0) {
    // finder 1
    //obj->lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "lh_TailPred") == 0) {
    // finder 1
    //obj->lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
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
  // Allocate pointer-to-struct List in userdata
  struct List **objp = lua_newuserdata(L, sizeof(struct List *));
  *objp = malloc(sizeof(struct List));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct List));

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
  struct List *obj = *(struct List **)luaL_checkudata(L, 1, "List");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lh_Type") == 0) {
    lua_pushinteger(L, obj->lh_Type);
    return 1;
  }
  if (strcmp(key, "l_pad") == 0) {
    lua_pushinteger(L, obj->l_pad);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct List));
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
_lua_gen_MinList_newindex(lua_State *L)
{
  struct MinList *obj = *(struct MinList **)luaL_checkudata(L, 1, "MinList");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mlh_Head") == 0) {
    // finder 1
    //obj->mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mlh_Tail") == 0) {
    // finder 1
    //obj->mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mlh_TailPred") == 0) {
    // finder 1
    //obj->mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_MinList_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MinList in userdata
  struct MinList **objp = lua_newuserdata(L, sizeof(struct MinList *));
  *objp = malloc(sizeof(struct MinList));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MinList));

  // Set metatable
  luaL_getmetatable(L, "MinList");
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
_lua_gen_MinList_index(lua_State *L)
{
  struct MinList *obj = *(struct MinList **)luaL_checkudata(L, 1, "MinList");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MinList));
    return 1;
}

  return 0;
}

static void
_lua_gen_MinList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MinList(lua_State *L) {
  if (luaL_newmetatable(L, "MinList")) {
    lua_pushcfunction(L, _lua_gen_MinList_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MinList_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MinList_constructor);
    lua_setglobal(L, "MinList");
    _lua_gen_MinList_install_keys(L);
    lua_pushstring(L, "MinList");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Task_newindex(lua_State *L)
{
  struct Task *obj = *(struct Task **)luaL_checkudata(L, 1, "Task");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "tc_Node.ln_Succ") == 0) {
    // finder 1
    //obj->tc_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_Node.ln_Pred") == 0) {
    // finder 1
    //obj->tc_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_Node.ln_Type") == 0) {
    obj->tc_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_Node.ln_Pri") == 0) {
    obj->tc_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_Node.ln_Name") == 0) {
    obj->tc_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_Node = *val;
    return 0;
  }
  if (strcmp(key, "tc_Flags") == 0) {
    obj->tc_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_State") == 0) {
    obj->tc_State = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_IDNestCnt") == 0) {
    obj->tc_IDNestCnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_TDNestCnt") == 0) {
    obj->tc_TDNestCnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SigAlloc") == 0) {
    obj->tc_SigAlloc = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SigWait") == 0) {
    obj->tc_SigWait = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SigRecvd") == 0) {
    obj->tc_SigRecvd = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SigExcept") == 0) {
    obj->tc_SigExcept = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_TrapAlloc") == 0) {
    obj->tc_TrapAlloc = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_TrapAble") == 0) {
    obj->tc_TrapAble = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_ExceptData") == 0) {
    obj->tc_ExceptData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_ExceptCode") == 0) {
    obj->tc_ExceptCode = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_TrapData") == 0) {
    obj->tc_TrapData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_TrapCode") == 0) {
    obj->tc_TrapCode = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SPReg") == 0) {
    obj->tc_SPReg = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SPLower") == 0) {
    obj->tc_SPLower = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_SPUpper") == 0) {
    obj->tc_SPUpper = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type tc_Switch void ()()
  if (strcmp(key, "tc_Switch") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field tc_Switch");
  }
  // Unsupported type tc_Launch void ()()
  if (strcmp(key, "tc_Launch") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field tc_Launch");
  }
  if (strcmp(key, "tc_MemEntry.lh_Head") == 0) {
    // finder 1
    //obj->tc_MemEntry.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_MemEntry.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_MemEntry.lh_Tail") == 0) {
    // finder 1
    //obj->tc_MemEntry.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_MemEntry.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_MemEntry.lh_TailPred") == 0) {
    // finder 1
    //obj->tc_MemEntry.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tc_MemEntry.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_MemEntry.lh_Type") == 0) {
    obj->tc_MemEntry.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_MemEntry.l_pad") == 0) {
    obj->tc_MemEntry.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tc_MemEntry") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->tc_MemEntry = *val;
    return 0;
  }
  if (strcmp(key, "tc_UserData") == 0) {
    obj->tc_UserData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Task_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Task in userdata
  struct Task **objp = lua_newuserdata(L, sizeof(struct Task *));
  *objp = malloc(sizeof(struct Task));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Task));

  // Set metatable
  luaL_getmetatable(L, "Task");
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
_lua_gen_Task_index(lua_State *L)
{
  struct Task *obj = *(struct Task **)luaL_checkudata(L, 1, "Task");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "tc_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tc_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tc_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->tc_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "tc_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->tc_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "tc_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->tc_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "tc_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->tc_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_Flags") == 0) {
    lua_pushinteger(L, obj->tc_Flags);
    return 1;
  }
  if (strcmp(key, "tc_State") == 0) {
    lua_pushinteger(L, obj->tc_State);
    return 1;
  }
  if (strcmp(key, "tc_IDNestCnt") == 0) {
    lua_pushinteger(L, obj->tc_IDNestCnt);
    return 1;
  }
  if (strcmp(key, "tc_TDNestCnt") == 0) {
    lua_pushinteger(L, obj->tc_TDNestCnt);
    return 1;
  }
  if (strcmp(key, "tc_SigAlloc") == 0) {
    lua_pushinteger(L, obj->tc_SigAlloc);
    return 1;
  }
  if (strcmp(key, "tc_SigWait") == 0) {
    lua_pushinteger(L, obj->tc_SigWait);
    return 1;
  }
  if (strcmp(key, "tc_SigRecvd") == 0) {
    lua_pushinteger(L, obj->tc_SigRecvd);
    return 1;
  }
  if (strcmp(key, "tc_SigExcept") == 0) {
    lua_pushinteger(L, obj->tc_SigExcept);
    return 1;
  }
  if (strcmp(key, "tc_TrapAlloc") == 0) {
    lua_pushinteger(L, obj->tc_TrapAlloc);
    return 1;
  }
  if (strcmp(key, "tc_TrapAble") == 0) {
    lua_pushinteger(L, obj->tc_TrapAble);
    return 1;
  }
  if (strcmp(key, "tc_ExceptData") == 0) {
    lua_pushlightuserdata(L, obj->tc_ExceptData);
    return 1;
  }
  if (strcmp(key, "tc_ExceptCode") == 0) {
    lua_pushlightuserdata(L, obj->tc_ExceptCode);
    return 1;
  }
  if (strcmp(key, "tc_TrapData") == 0) {
    lua_pushlightuserdata(L, obj->tc_TrapData);
    return 1;
  }
  if (strcmp(key, "tc_TrapCode") == 0) {
    lua_pushlightuserdata(L, obj->tc_TrapCode);
    return 1;
  }
  if (strcmp(key, "tc_SPReg") == 0) {
    lua_pushlightuserdata(L, obj->tc_SPReg);
    return 1;
  }
  if (strcmp(key, "tc_SPLower") == 0) {
    lua_pushlightuserdata(L, obj->tc_SPLower);
    return 1;
  }
  if (strcmp(key, "tc_SPUpper") == 0) {
    lua_pushlightuserdata(L, obj->tc_SPUpper);
    return 1;
  }
  // Unsupported tc_Switch void (*)()
  if (strcmp(key, "tc_Switch") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field tc_Switch");
  }
  // Unsupported tc_Launch void (*)()
  if (strcmp(key, "tc_Launch") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field tc_Launch");
  }
  if (strcmp(key, "tc_MemEntry.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tc_MemEntry.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_MemEntry.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tc_MemEntry.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_MemEntry.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tc_MemEntry.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_MemEntry.lh_Type") == 0) {
    lua_pushinteger(L, obj->tc_MemEntry.lh_Type);
    return 1;
  }
  if (strcmp(key, "tc_MemEntry.l_pad") == 0) {
    lua_pushinteger(L, obj->tc_MemEntry.l_pad);
    return 1;
  }
  if (strcmp(key, "tc_MemEntry") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->tc_MemEntry;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tc_UserData") == 0) {
    lua_pushlightuserdata(L, obj->tc_UserData);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Task));
    return 1;
}

  return 0;
}

static void
_lua_gen_Task_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tc_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tc_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tc_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tc_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tc_State");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tc_IDNestCnt");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tc_TDNestCnt");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tc_SigAlloc");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "tc_SigWait");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "tc_SigRecvd");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "tc_SigExcept");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "tc_TrapAlloc");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "tc_TrapAble");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "tc_ExceptData");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "tc_ExceptCode");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "tc_TrapData");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "tc_TrapCode");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "tc_SPReg");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "tc_SPLower");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "tc_SPUpper");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "tc_Switch");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "tc_Launch");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "tc_MemEntry.lh_Type");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "tc_MemEntry.l_pad");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "tc_UserData");
  lua_rawseti(L, -2, 25);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Task(lua_State *L) {
  if (luaL_newmetatable(L, "Task")) {
    lua_pushcfunction(L, _lua_gen_Task_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Task_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Task_constructor);
    lua_setglobal(L, "Task");
    _lua_gen_Task_install_keys(L);
    lua_pushstring(L, "Task");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_StackSwapStruct_newindex(lua_State *L)
{
  struct StackSwapStruct *obj = *(struct StackSwapStruct **)luaL_checkudata(L, 1, "StackSwapStruct");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "stk_Lower") == 0) {
    obj->stk_Lower = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "stk_Upper") == 0) {
    obj->stk_Upper = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "stk_Pointer") == 0) {
    obj->stk_Pointer = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_StackSwapStruct_constructor(lua_State *L)
{
  // Allocate pointer-to-struct StackSwapStruct in userdata
  struct StackSwapStruct **objp = lua_newuserdata(L, sizeof(struct StackSwapStruct *));
  *objp = malloc(sizeof(struct StackSwapStruct));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct StackSwapStruct));

  // Set metatable
  luaL_getmetatable(L, "StackSwapStruct");
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
_lua_gen_StackSwapStruct_index(lua_State *L)
{
  struct StackSwapStruct *obj = *(struct StackSwapStruct **)luaL_checkudata(L, 1, "StackSwapStruct");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "stk_Lower") == 0) {
    lua_pushlightuserdata(L, obj->stk_Lower);
    return 1;
  }
  if (strcmp(key, "stk_Upper") == 0) {
    lua_pushinteger(L, obj->stk_Upper);
    return 1;
  }
  if (strcmp(key, "stk_Pointer") == 0) {
    lua_pushlightuserdata(L, obj->stk_Pointer);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct StackSwapStruct));
    return 1;
}

  return 0;
}

static void
_lua_gen_StackSwapStruct_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "stk_Lower");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "stk_Upper");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "stk_Pointer");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_StackSwapStruct(lua_State *L) {
  if (luaL_newmetatable(L, "StackSwapStruct")) {
    lua_pushcfunction(L, _lua_gen_StackSwapStruct_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_StackSwapStruct_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_StackSwapStruct_constructor);
    lua_setglobal(L, "StackSwapStruct");
    _lua_gen_StackSwapStruct_install_keys(L);
    lua_pushstring(L, "StackSwapStruct");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MsgPort_newindex(lua_State *L)
{
  struct MsgPort *obj = *(struct MsgPort **)luaL_checkudata(L, 1, "MsgPort");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mp_Node.ln_Succ") == 0) {
    // finder 1
    //obj->mp_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_Node.ln_Pred") == 0) {
    // finder 1
    //obj->mp_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_Node.ln_Type") == 0) {
    obj->mp_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_Node.ln_Pri") == 0) {
    obj->mp_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_Node.ln_Name") == 0) {
    obj->mp_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_Node = *val;
    return 0;
  }
  if (strcmp(key, "mp_Flags") == 0) {
    obj->mp_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_SigBit") == 0) {
    obj->mp_SigBit = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_SigTask") == 0) {
    obj->mp_SigTask = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.lh_Head") == 0) {
    // finder 1
    //obj->mp_MsgList.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_MsgList.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.lh_Tail") == 0) {
    // finder 1
    //obj->mp_MsgList.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_MsgList.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.lh_TailPred") == 0) {
    // finder 1
    //obj->mp_MsgList.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mp_MsgList.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.lh_Type") == 0) {
    obj->mp_MsgList.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.l_pad") == 0) {
    obj->mp_MsgList.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->mp_MsgList = *val;
    return 0;
  }
  return 0;
}


static int
_lua_MsgPort_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MsgPort in userdata
  struct MsgPort **objp = lua_newuserdata(L, sizeof(struct MsgPort *));
  *objp = malloc(sizeof(struct MsgPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MsgPort));

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
  struct MsgPort *obj = *(struct MsgPort **)luaL_checkudata(L, 1, "MsgPort");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mp_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mp_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mp_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->mp_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "mp_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->mp_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "mp_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->mp_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "mp_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->mp_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_Flags") == 0) {
    lua_pushinteger(L, obj->mp_Flags);
    return 1;
  }
  if (strcmp(key, "mp_SigBit") == 0) {
    lua_pushinteger(L, obj->mp_SigBit);
    return 1;
  }
  if (strcmp(key, "mp_SigTask") == 0) {
    lua_pushlightuserdata(L, obj->mp_SigTask);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mp_MsgList.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mp_MsgList.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mp_MsgList.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.lh_Type") == 0) {
    lua_pushinteger(L, obj->mp_MsgList.lh_Type);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.l_pad") == 0) {
    lua_pushinteger(L, obj->mp_MsgList.l_pad);
    return 1;
  }
  if (strcmp(key, "mp_MsgList") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->mp_MsgList;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MsgPort));
    return 1;
}

  return 0;
}

static void
_lua_gen_MsgPort_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mp_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mp_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "mp_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "mp_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "mp_SigBit");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "mp_MsgList.lh_Type");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "mp_MsgList.l_pad");
  lua_rawseti(L, -2, 7);
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
  struct Message *obj = *(struct Message **)luaL_checkudata(L, 1, "Message");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mn_Node.ln_Type") == 0) {
    obj->mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mn_Node.ln_Pri") == 0) {
    obj->mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mn_Node.ln_Name") == 0) {
    obj->mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "mn_ReplyPort") == 0) {
    // finder 1
    //obj->mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
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
  // Allocate pointer-to-struct Message in userdata
  struct Message **objp = lua_newuserdata(L, sizeof(struct Message *));
  *objp = malloc(sizeof(struct Message));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Message));

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
  struct Message *obj = *(struct Message **)luaL_checkudata(L, 1, "Message");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mn_Length") == 0) {
    lua_pushinteger(L, obj->mn_Length);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Message));
    return 1;
}

  return 0;
}

static void
_lua_gen_Message_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mn_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mn_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "mn_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "mn_Length");
  lua_rawseti(L, -2, 4);
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
_lua_gen_Library_newindex(lua_State *L)
{
  struct Library *obj = *(struct Library **)luaL_checkudata(L, 1, "Library");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "lib_Node.ln_Succ") == 0) {
    // finder 1
    //obj->lib_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lib_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Node.ln_Pred") == 0) {
    // finder 1
    //obj->lib_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lib_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Node.ln_Type") == 0) {
    obj->lib_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Node.ln_Pri") == 0) {
    obj->lib_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Node.ln_Name") == 0) {
    obj->lib_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lib_Node = *val;
    return 0;
  }
  if (strcmp(key, "lib_Flags") == 0) {
    obj->lib_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_pad") == 0) {
    obj->lib_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_NegSize") == 0) {
    obj->lib_NegSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_PosSize") == 0) {
    obj->lib_PosSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Version") == 0) {
    obj->lib_Version = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Revision") == 0) {
    obj->lib_Revision = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_IdString") == 0) {
    obj->lib_IdString = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_Sum") == 0) {
    obj->lib_Sum = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lib_OpenCnt") == 0) {
    obj->lib_OpenCnt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Library_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Library in userdata
  struct Library **objp = lua_newuserdata(L, sizeof(struct Library *));
  *objp = malloc(sizeof(struct Library));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Library));

  // Set metatable
  luaL_getmetatable(L, "Library");
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
_lua_gen_Library_index(lua_State *L)
{
  struct Library *obj = *(struct Library **)luaL_checkudata(L, 1, "Library");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lib_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->lib_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lib_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->lib_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lib_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->lib_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "lib_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->lib_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "lib_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->lib_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "lib_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->lib_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lib_Flags") == 0) {
    lua_pushinteger(L, obj->lib_Flags);
    return 1;
  }
  if (strcmp(key, "lib_pad") == 0) {
    lua_pushinteger(L, obj->lib_pad);
    return 1;
  }
  if (strcmp(key, "lib_NegSize") == 0) {
    lua_pushinteger(L, obj->lib_NegSize);
    return 1;
  }
  if (strcmp(key, "lib_PosSize") == 0) {
    lua_pushinteger(L, obj->lib_PosSize);
    return 1;
  }
  if (strcmp(key, "lib_Version") == 0) {
    lua_pushinteger(L, obj->lib_Version);
    return 1;
  }
  if (strcmp(key, "lib_Revision") == 0) {
    lua_pushinteger(L, obj->lib_Revision);
    return 1;
  }
  if (strcmp(key, "lib_IdString") == 0) {
    lua_pushlightuserdata(L, obj->lib_IdString);
    return 1;
  }
  if (strcmp(key, "lib_Sum") == 0) {
    lua_pushinteger(L, obj->lib_Sum);
    return 1;
  }
  if (strcmp(key, "lib_OpenCnt") == 0) {
    lua_pushinteger(L, obj->lib_OpenCnt);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Library));
    return 1;
}

  return 0;
}

static void
_lua_gen_Library_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "lib_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "lib_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "lib_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "lib_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "lib_pad");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "lib_NegSize");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "lib_PosSize");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "lib_Version");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "lib_Revision");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "lib_IdString");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "lib_Sum");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "lib_OpenCnt");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Library(lua_State *L) {
  if (luaL_newmetatable(L, "Library")) {
    lua_pushcfunction(L, _lua_gen_Library_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Library_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Library_constructor);
    lua_setglobal(L, "Library");
    _lua_gen_Library_install_keys(L);
    lua_pushstring(L, "Library");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_SemaphoreRequest_newindex(lua_State *L)
{
  struct SemaphoreRequest *obj = *(struct SemaphoreRequest **)luaL_checkudata(L, 1, "SemaphoreRequest");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "sr_Waiter") == 0) {
    // finder 1
    //obj->sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_SemaphoreRequest_constructor(lua_State *L)
{
  // Allocate pointer-to-struct SemaphoreRequest in userdata
  struct SemaphoreRequest **objp = lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
  *objp = malloc(sizeof(struct SemaphoreRequest));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct SemaphoreRequest));

  // Set metatable
  luaL_getmetatable(L, "SemaphoreRequest");
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
_lua_gen_SemaphoreRequest_index(lua_State *L)
{
  struct SemaphoreRequest *obj = *(struct SemaphoreRequest **)luaL_checkudata(L, 1, "SemaphoreRequest");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct SemaphoreRequest));
    return 1;
}

  return 0;
}

static void
_lua_gen_SemaphoreRequest_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_SemaphoreRequest(lua_State *L) {
  if (luaL_newmetatable(L, "SemaphoreRequest")) {
    lua_pushcfunction(L, _lua_gen_SemaphoreRequest_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_SemaphoreRequest_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_SemaphoreRequest_constructor);
    lua_setglobal(L, "SemaphoreRequest");
    _lua_gen_SemaphoreRequest_install_keys(L);
    lua_pushstring(L, "SemaphoreRequest");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_SignalSemaphore_newindex(lua_State *L)
{
  struct SignalSemaphore *obj = *(struct SignalSemaphore **)luaL_checkudata(L, 1, "SignalSemaphore");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_Link.ln_Type") == 0) {
    obj->ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_Link.ln_Pri") == 0) {
    obj->ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_Link.ln_Name") == 0) {
    obj->ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "ss_NestCount") == 0) {
    obj->ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "ss_Owner") == 0) {
    // finder 1
    //obj->ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "ss_QueueCount") == 0) {
    obj->ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_SignalSemaphore_constructor(lua_State *L)
{
  // Allocate pointer-to-struct SignalSemaphore in userdata
  struct SignalSemaphore **objp = lua_newuserdata(L, sizeof(struct SignalSemaphore *));
  *objp = malloc(sizeof(struct SignalSemaphore));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct SignalSemaphore));

  // Set metatable
  luaL_getmetatable(L, "SignalSemaphore");
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
_lua_gen_SignalSemaphore_index(lua_State *L)
{
  struct SignalSemaphore *obj = *(struct SignalSemaphore **)luaL_checkudata(L, 1, "SignalSemaphore");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_NestCount") == 0) {
    lua_pushinteger(L, obj->ss_NestCount);
    return 1;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct SignalSemaphore));
    return 1;
}

  return 0;
}

static void
_lua_gen_SignalSemaphore_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ss_Link.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ss_Link.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ss_Link.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ss_NestCount");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ss_QueueCount");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_SignalSemaphore(lua_State *L) {
  if (luaL_newmetatable(L, "SignalSemaphore")) {
    lua_pushcfunction(L, _lua_gen_SignalSemaphore_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_SignalSemaphore_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_SignalSemaphore_constructor);
    lua_setglobal(L, "SignalSemaphore");
    _lua_gen_SignalSemaphore_install_keys(L);
    lua_pushstring(L, "SignalSemaphore");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_SemaphoreMessage_newindex(lua_State *L)
{
  struct SemaphoreMessage *obj = *(struct SemaphoreMessage **)luaL_checkudata(L, 1, "SemaphoreMessage");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ssm_Message.mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->ssm_Message.mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ssm_Message.mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->ssm_Message.mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ssm_Message.mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Type") == 0) {
    obj->ssm_Message.mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Pri") == 0) {
    obj->ssm_Message.mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Name") == 0) {
    obj->ssm_Message.mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ssm_Message.mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_ReplyPort") == 0) {
    // finder 1
    //obj->ssm_Message.mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->ssm_Message.mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message.mn_Length") == 0) {
    obj->ssm_Message.mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ssm_Message") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
    obj->ssm_Message = *val;
    return 0;
  }
  if (strcmp(key, "ssm_Semaphore") == 0) {
    // finder 1
    //obj->ssm_Semaphore = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->ssm_Semaphore = (struct SignalSemaphore *)_lua_gen_checkSignalSemaphore(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_SemaphoreMessage_constructor(lua_State *L)
{
  // Allocate pointer-to-struct SemaphoreMessage in userdata
  struct SemaphoreMessage **objp = lua_newuserdata(L, sizeof(struct SemaphoreMessage *));
  *objp = malloc(sizeof(struct SemaphoreMessage));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct SemaphoreMessage));

  // Set metatable
  luaL_getmetatable(L, "SemaphoreMessage");
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
_lua_gen_SemaphoreMessage_index(lua_State *L)
{
  struct SemaphoreMessage *obj = *(struct SemaphoreMessage **)luaL_checkudata(L, 1, "SemaphoreMessage");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ssm_Message.mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ssm_Message.mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ssm_Message.mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->ssm_Message.mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->ssm_Message.mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->ssm_Message.mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->ssm_Message.mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->ssm_Message.mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ssm_Message.mn_Length") == 0) {
    lua_pushinteger(L, obj->ssm_Message.mn_Length);
    return 1;
  }
  if (strcmp(key, "ssm_Message") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->ssm_Message;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ssm_Semaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)obj->ssm_Semaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct SemaphoreMessage));
    return 1;
}

  return 0;
}

static void
_lua_gen_SemaphoreMessage_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ssm_Message.mn_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ssm_Message.mn_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ssm_Message.mn_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ssm_Message.mn_Length");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_SemaphoreMessage(lua_State *L) {
  if (luaL_newmetatable(L, "SemaphoreMessage")) {
    lua_pushcfunction(L, _lua_gen_SemaphoreMessage_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_SemaphoreMessage_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_SemaphoreMessage_constructor);
    lua_setglobal(L, "SemaphoreMessage");
    _lua_gen_SemaphoreMessage_install_keys(L);
    lua_pushstring(L, "SemaphoreMessage");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_IORequest_newindex(lua_State *L)
{
  struct IORequest *obj = *(struct IORequest **)luaL_checkudata(L, 1, "IORequest");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "io_Message.mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->io_Message.mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->io_Message.mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->io_Message.mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->io_Message.mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Type") == 0) {
    obj->io_Message.mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Pri") == 0) {
    obj->io_Message.mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Name") == 0) {
    obj->io_Message.mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->io_Message.mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "io_Message.mn_ReplyPort") == 0) {
    // finder 1
    //obj->io_Message.mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->io_Message.mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message.mn_Length") == 0) {
    obj->io_Message.mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Message") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
    obj->io_Message = *val;
    return 0;
  }
  if (strcmp(key, "io_Device") == 0) {
    // finder 1
    //obj->io_Device = *(struct Device **)luaL_checkudata(L, 3, "Device");
    obj->io_Device = (struct Device *)_lua_gen_checkDevice(L, 3);
    return 0;
  }
  // Unsupported type io_Unit struct Unit
  if (strcmp(key, "io_Unit") == 0) {
    return luaL_error(L, "Unsupported type struct Unit for field io_Unit");
  }
  if (strcmp(key, "io_Command") == 0) {
    obj->io_Command = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Flags") == 0) {
    obj->io_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "io_Error") == 0) {
    obj->io_Error = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_IORequest_constructor(lua_State *L)
{
  // Allocate pointer-to-struct IORequest in userdata
  struct IORequest **objp = lua_newuserdata(L, sizeof(struct IORequest *));
  *objp = malloc(sizeof(struct IORequest));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct IORequest));

  // Set metatable
  luaL_getmetatable(L, "IORequest");
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
_lua_gen_IORequest_index(lua_State *L)
{
  struct IORequest *obj = *(struct IORequest **)luaL_checkudata(L, 1, "IORequest");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "io_Message.mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->io_Message.mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->io_Message.mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->io_Message.mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->io_Message.mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->io_Message.mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->io_Message.mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->io_Message.mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "io_Message.mn_Length") == 0) {
    lua_pushinteger(L, obj->io_Message.mn_Length);
    return 1;
  }
  if (strcmp(key, "io_Message") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->io_Message;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "io_Device") == 0) {
    struct Device **ud = (struct Device **)lua_newuserdata(L, sizeof(struct Device *));
    *ud = (struct Device*)obj->io_Device;
    luaL_getmetatable(L, "Device");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported io_Unit struct Unit *
  if (strcmp(key, "io_Unit") == 0) {
    return luaL_error(L, "Unsupported type struct Unit * for field io_Unit");
  }
  if (strcmp(key, "io_Command") == 0) {
    lua_pushinteger(L, obj->io_Command);
    return 1;
  }
  if (strcmp(key, "io_Flags") == 0) {
    lua_pushinteger(L, obj->io_Flags);
    return 1;
  }
  if (strcmp(key, "io_Error") == 0) {
    lua_pushinteger(L, obj->io_Error);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct IORequest));
    return 1;
}

  return 0;
}

static void
_lua_gen_IORequest_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "io_Message.mn_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "io_Message.mn_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "io_Message.mn_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "io_Message.mn_Length");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "io_Command");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "io_Flags");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "io_Error");
  lua_rawseti(L, -2, 7);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_IORequest(lua_State *L) {
  if (luaL_newmetatable(L, "IORequest")) {
    lua_pushcfunction(L, _lua_gen_IORequest_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_IORequest_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_IORequest_constructor);
    lua_setglobal(L, "IORequest");
    _lua_gen_IORequest_install_keys(L);
    lua_pushstring(L, "IORequest");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Device_newindex(lua_State *L)
{
  struct Device *obj = *(struct Device **)luaL_checkudata(L, 1, "Device");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "dd_Library.lib_Node.ln_Succ") == 0) {
    // finder 1
    //obj->dd_Library.lib_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dd_Library.lib_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Pred") == 0) {
    // finder 1
    //obj->dd_Library.lib_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dd_Library.lib_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Type") == 0) {
    obj->dd_Library.lib_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Pri") == 0) {
    obj->dd_Library.lib_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Name") == 0) {
    obj->dd_Library.lib_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dd_Library.lib_Node = *val;
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Flags") == 0) {
    obj->dd_Library.lib_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_pad") == 0) {
    obj->dd_Library.lib_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_NegSize") == 0) {
    obj->dd_Library.lib_NegSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_PosSize") == 0) {
    obj->dd_Library.lib_PosSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Version") == 0) {
    obj->dd_Library.lib_Version = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Revision") == 0) {
    obj->dd_Library.lib_Revision = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_IdString") == 0) {
    obj->dd_Library.lib_IdString = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_Sum") == 0) {
    obj->dd_Library.lib_Sum = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library.lib_OpenCnt") == 0) {
    obj->dd_Library.lib_OpenCnt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dd_Library") == 0) {
    // finder 0
    struct Library *val = *(struct Library **)luaL_checkudata(L, 3, "Library");
    obj->dd_Library = *val;
    return 0;
  }
  return 0;
}


static int
_lua_Device_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Device in userdata
  struct Device **objp = lua_newuserdata(L, sizeof(struct Device *));
  *objp = malloc(sizeof(struct Device));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Device));

  // Set metatable
  luaL_getmetatable(L, "Device");
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
_lua_gen_Device_index(lua_State *L)
{
  struct Device *obj = *(struct Device **)luaL_checkudata(L, 1, "Device");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dd_Library.lib_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dd_Library.lib_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dd_Library.lib_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->dd_Library.lib_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->dd_Library.lib_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Flags") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Flags);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_pad") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_pad);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_NegSize") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_NegSize);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_PosSize") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_PosSize);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Version") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Version);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Revision") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Revision);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_IdString") == 0) {
    lua_pushlightuserdata(L, obj->dd_Library.lib_IdString);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_Sum") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_Sum);
    return 1;
  }
  if (strcmp(key, "dd_Library.lib_OpenCnt") == 0) {
    lua_pushinteger(L, obj->dd_Library.lib_OpenCnt);
    return 1;
  }
  if (strcmp(key, "dd_Library") == 0) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = (struct Library*)&obj->dd_Library;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Device));
    return 1;
}

  return 0;
}

static void
_lua_gen_Device_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dd_Library.lib_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dd_Library.lib_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dd_Library.lib_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dd_Library.lib_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dd_Library.lib_pad");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dd_Library.lib_NegSize");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dd_Library.lib_PosSize");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dd_Library.lib_Version");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dd_Library.lib_Revision");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dd_Library.lib_IdString");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "dd_Library.lib_Sum");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "dd_Library.lib_OpenCnt");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Device(lua_State *L) {
  if (luaL_newmetatable(L, "Device")) {
    lua_pushcfunction(L, _lua_gen_Device_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Device_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Device_constructor);
    lua_setglobal(L, "Device");
    _lua_gen_Device_install_keys(L);
    lua_pushstring(L, "Device");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TimeVal_Type_newindex(lua_State *L)
{
  TimeVal_Type *obj = *(TimeVal_Type **)luaL_checkudata(L, 1, "TimeVal_Type");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "tv_sec") == 0) {
    obj->tv_sec = (time_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_secs") == 0) {
    obj->tv_secs = (time_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_sec") == 0) {
    obj->tv_sec = (time_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_secs") == 0) {
    obj->tv_secs = (time_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_usec") == 0) {
    obj->tv_usec = (suseconds_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_micro") == 0) {
    obj->tv_micro = (suseconds_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_usec") == 0) {
    obj->tv_usec = (suseconds_t)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tv_micro") == 0) {
    obj->tv_micro = (suseconds_t)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TimeVal_Type_constructor(lua_State *L)
{
  // Allocate pointer-to-TimeVal_Type in userdata
  TimeVal_Type **objp = lua_newuserdata(L, sizeof(TimeVal_Type *));
  *objp = malloc(sizeof(TimeVal_Type));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(TimeVal_Type));

  // Set metatable
  luaL_getmetatable(L, "TimeVal_Type");
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
_lua_gen_TimeVal_Type_index(lua_State *L)
{
  TimeVal_Type *obj = *(TimeVal_Type **)luaL_checkudata(L, 1, "TimeVal_Type");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "tv_sec") == 0) {
    lua_pushinteger(L, obj->tv_sec);
    return 1;
  }
  if (strcmp(key, "tv_secs") == 0) {
    lua_pushinteger(L, obj->tv_secs);
    return 1;
  }
  if (strcmp(key, "tv_sec") == 0) {
    lua_pushinteger(L, obj->tv_sec);
    return 1;
  }
  if (strcmp(key, "tv_secs") == 0) {
    lua_pushinteger(L, obj->tv_secs);
    return 1;
  }
  if (strcmp(key, "tv_usec") == 0) {
    lua_pushinteger(L, obj->tv_usec);
    return 1;
  }
  if (strcmp(key, "tv_micro") == 0) {
    lua_pushinteger(L, obj->tv_micro);
    return 1;
  }
  if (strcmp(key, "tv_usec") == 0) {
    lua_pushinteger(L, obj->tv_usec);
    return 1;
  }
  if (strcmp(key, "tv_micro") == 0) {
    lua_pushinteger(L, obj->tv_micro);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(TimeVal_Type));
    return 1;
}

  return 0;
}

static void
_lua_gen_TimeVal_Type_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tv_sec");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tv_secs");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tv_sec");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tv_secs");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tv_usec");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tv_micro");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tv_usec");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tv_micro");
  lua_rawseti(L, -2, 8);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_TimeVal_Type(lua_State *L) {
  if (luaL_newmetatable(L, "TimeVal_Type")) {
    lua_pushcfunction(L, _lua_gen_TimeVal_Type_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_TimeVal_Type_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_TimeVal_Type_constructor);
    lua_setglobal(L, "TimeVal_Type");
    _lua_gen_TimeVal_Type_install_keys(L);
    lua_pushstring(L, "TimeVal_Type");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Hook_newindex(lua_State *L)
{
  struct Hook *obj = *(struct Hook **)luaL_checkudata(L, 1, "Hook");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "h_MinNode.mln_Succ") == 0) {
    // finder 1
    //obj->h_MinNode.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->h_MinNode.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "h_MinNode.mln_Pred") == 0) {
    // finder 1
    //obj->h_MinNode.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->h_MinNode.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "h_MinNode") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->h_MinNode = *val;
    return 0;
  }
  // Unsupported type h_Entry ULONG ()()
  if (strcmp(key, "h_Entry") == 0) {
    return luaL_error(L, "Unsupported type ULONG ()() for field h_Entry");
  }
  // Unsupported type h_SubEntry ULONG ()()
  if (strcmp(key, "h_SubEntry") == 0) {
    return luaL_error(L, "Unsupported type ULONG ()() for field h_SubEntry");
  }
  if (strcmp(key, "h_Data") == 0) {
    obj->h_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Hook_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Hook in userdata
  struct Hook **objp = lua_newuserdata(L, sizeof(struct Hook *));
  *objp = malloc(sizeof(struct Hook));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Hook));

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
  struct Hook *obj = *(struct Hook **)luaL_checkudata(L, 1, "Hook");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "h_MinNode.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->h_MinNode.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "h_MinNode.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->h_MinNode.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "h_MinNode") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->h_MinNode;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported h_Entry ULONG (*)()
  if (strcmp(key, "h_Entry") == 0) {
    return luaL_error(L, "Unsupported type ULONG (*)() for field h_Entry");
  }
  // Unsupported h_SubEntry ULONG (*)()
  if (strcmp(key, "h_SubEntry") == 0) {
    return luaL_error(L, "Unsupported type ULONG (*)() for field h_SubEntry");
  }
  if (strcmp(key, "h_Data") == 0) {
    lua_pushlightuserdata(L, obj->h_Data);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Hook));
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
_lua_gen_Rectangle_newindex(lua_State *L)
{
  struct Rectangle *obj = *(struct Rectangle **)luaL_checkudata(L, 1, "Rectangle");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "MinX") == 0) {
    obj->MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MinY") == 0) {
    obj->MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxX") == 0) {
    obj->MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxY") == 0) {
    obj->MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Rectangle_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Rectangle in userdata
  struct Rectangle **objp = lua_newuserdata(L, sizeof(struct Rectangle *));
  *objp = malloc(sizeof(struct Rectangle));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Rectangle));

  // Set metatable
  luaL_getmetatable(L, "Rectangle");
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
_lua_gen_Rectangle_index(lua_State *L)
{
  struct Rectangle *obj = *(struct Rectangle **)luaL_checkudata(L, 1, "Rectangle");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "MinX") == 0) {
    lua_pushinteger(L, obj->MinX);
    return 1;
  }
  if (strcmp(key, "MinY") == 0) {
    lua_pushinteger(L, obj->MinY);
    return 1;
  }
  if (strcmp(key, "MaxX") == 0) {
    lua_pushinteger(L, obj->MaxX);
    return 1;
  }
  if (strcmp(key, "MaxY") == 0) {
    lua_pushinteger(L, obj->MaxY);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Rectangle));
    return 1;
}

  return 0;
}

static void
_lua_gen_Rectangle_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "MinX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "MinY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "MaxX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "MaxY");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Rectangle(lua_State *L) {
  if (luaL_newmetatable(L, "Rectangle")) {
    lua_pushcfunction(L, _lua_gen_Rectangle_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Rectangle_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Rectangle_constructor);
    lua_setglobal(L, "Rectangle");
    _lua_gen_Rectangle_install_keys(L);
    lua_pushstring(L, "Rectangle");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Point_newindex(lua_State *L)
{
  Point *obj = *(Point **)luaL_checkudata(L, 1, "Point");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "x") == 0) {
    obj->x = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "y") == 0) {
    obj->y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Point_constructor(lua_State *L)
{
  // Allocate pointer-to-Point in userdata
  Point **objp = lua_newuserdata(L, sizeof(Point *));
  *objp = malloc(sizeof(Point));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(Point));

  // Set metatable
  luaL_getmetatable(L, "Point");
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
_lua_gen_Point_index(lua_State *L)
{
  Point *obj = *(Point **)luaL_checkudata(L, 1, "Point");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "x") == 0) {
    lua_pushinteger(L, obj->x);
    return 1;
  }
  if (strcmp(key, "y") == 0) {
    lua_pushinteger(L, obj->y);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(Point));
    return 1;
}

  return 0;
}

static void
_lua_gen_Point_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "x");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "y");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Point(lua_State *L) {
  if (luaL_newmetatable(L, "Point")) {
    lua_pushcfunction(L, _lua_gen_Point_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Point_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Point_constructor);
    lua_setglobal(L, "Point");
    _lua_gen_Point_install_keys(L);
    lua_pushstring(L, "Point");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

typedef struct {
  PLANEPTR* data;
  uint16_t count;
} lua_gen_wrapped_PLANEPTR_array_data_t;

static int _lua_gen_wrapped_PLANEPTR_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_PLANEPTR_array_data_t* wrapper = luaL_checkudata(L, 1, "PLANEPTR_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_PLANEPTR_array_index(lua_State* L)
{
  lua_gen_wrapped_PLANEPTR_array_data_t* wrapper = luaL_checkudata(L, 1, "PLANEPTR_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushlightuserdata(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_PLANEPTR_array_newindex(lua_State* L)
{
  lua_gen_wrapped_PLANEPTR_array_data_t* wrapper = luaL_checkudata(L, 1, "PLANEPTR_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  PLANEPTR value = lua_touserdata(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_PLANEPTR_array_proxy(lua_State *L,  PLANEPTR *array, int count)
{

  lua_gen_wrapped_PLANEPTR_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_PLANEPTR_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "PLANEPTR_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_PLANEPTR_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_PLANEPTR_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_PLANEPTR_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
static int
_lua_gen_BitMap_newindex(lua_State *L)
{
  struct BitMap *obj = *(struct BitMap **)luaL_checkudata(L, 1, "BitMap");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
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
  // Planes[8] proxied via the index
  return 0;
}


static int
_lua_BitMap_constructor(lua_State *L)
{
  // Allocate pointer-to-struct BitMap in userdata
  struct BitMap **objp = lua_newuserdata(L, sizeof(struct BitMap *));
  *objp = malloc(sizeof(struct BitMap));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct BitMap));

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
  struct BitMap *obj = *(struct BitMap **)luaL_checkudata(L, 1, "BitMap");
  (void)obj;
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
  if (strcmp(key, "Planes") == 0) {
    _lua_gen_push_PLANEPTR_array_proxy(L, obj->Planes, 8);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct BitMap));
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
  lua_pushstring(L, "Planes");
  lua_rawseti(L, -2, 6);
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
_lua_gen_ExtendedNode_newindex(lua_State *L)
{
  struct ExtendedNode *obj = *(struct ExtendedNode **)luaL_checkudata(L, 1, "ExtendedNode");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "xln_Succ") == 0) {
    // finder 1
    //obj->xln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->xln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Pred") == 0) {
    // finder 1
    //obj->xln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->xln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Type") == 0) {
    obj->xln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Pri") == 0) {
    obj->xln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Name") == 0) {
    obj->xln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Subsystem") == 0) {
    obj->xln_Subsystem = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Subtype") == 0) {
    obj->xln_Subtype = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "xln_Library") == 0) {
    // finder 1
    //obj->xln_Library = *(struct GfxBase **)luaL_checkudata(L, 3, "GfxBase");
    obj->xln_Library = (struct GfxBase *)_lua_gen_checkGfxBase(L, 3);
    return 0;
  }
  // Unsupported type xln_Init LONG ()(struct ExtendedNode , UWORD)
  if (strcmp(key, "xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct ExtendedNode , UWORD) for field xln_Init");
  }
  return 0;
}


static int
_lua_ExtendedNode_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ExtendedNode in userdata
  struct ExtendedNode **objp = lua_newuserdata(L, sizeof(struct ExtendedNode *));
  *objp = malloc(sizeof(struct ExtendedNode));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ExtendedNode));

  // Set metatable
  luaL_getmetatable(L, "ExtendedNode");
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
_lua_gen_ExtendedNode_index(lua_State *L)
{
  struct ExtendedNode *obj = *(struct ExtendedNode **)luaL_checkudata(L, 1, "ExtendedNode");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "xln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->xln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "xln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->xln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "xln_Type") == 0) {
    lua_pushinteger(L, obj->xln_Type);
    return 1;
  }
  if (strcmp(key, "xln_Pri") == 0) {
    lua_pushinteger(L, obj->xln_Pri);
    return 1;
  }
  if (strcmp(key, "xln_Name") == 0) {
    lua_pushstring(L, obj->xln_Name);
    return 1;
  }
  if (strcmp(key, "xln_Subsystem") == 0) {
    lua_pushinteger(L, obj->xln_Subsystem);
    return 1;
  }
  if (strcmp(key, "xln_Subtype") == 0) {
    lua_pushinteger(L, obj->xln_Subtype);
    return 1;
  }
  if (strcmp(key, "xln_Library") == 0) {
    struct GfxBase **ud = (struct GfxBase **)lua_newuserdata(L, sizeof(struct GfxBase *));
    *ud = (struct GfxBase*)obj->xln_Library;
    luaL_getmetatable(L, "GfxBase");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported xln_Init LONG (*)(struct ExtendedNode *, UWORD)
  if (strcmp(key, "xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct ExtendedNode *, UWORD) for field xln_Init");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ExtendedNode));
    return 1;
}

  return 0;
}

static void
_lua_gen_ExtendedNode_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "xln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "xln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "xln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "xln_Subsystem");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "xln_Subtype");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "xln_Init");
  lua_rawseti(L, -2, 6);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ExtendedNode(lua_State *L) {
  if (luaL_newmetatable(L, "ExtendedNode")) {
    lua_pushcfunction(L, _lua_gen_ExtendedNode_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ExtendedNode_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ExtendedNode_constructor);
    lua_setglobal(L, "ExtendedNode");
    _lua_gen_ExtendedNode_install_keys(L);
    lua_pushstring(L, "ExtendedNode");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

typedef struct {
  UBYTE* data;
  uint16_t count;
} lua_gen_wrapped_UBYTE_array_data_t;

static int _lua_gen_wrapped_UBYTE_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_UBYTE_array_data_t* wrapper = luaL_checkudata(L, 1, "UBYTE_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_UBYTE_array_index(lua_State* L)
{
  lua_gen_wrapped_UBYTE_array_data_t* wrapper = luaL_checkudata(L, 1, "UBYTE_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushinteger(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_UBYTE_array_newindex(lua_State* L)
{
  lua_gen_wrapped_UBYTE_array_data_t* wrapper = luaL_checkudata(L, 1, "UBYTE_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  UBYTE value = luaL_checkinteger(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_UBYTE_array_proxy(lua_State *L,  UBYTE *array, int count)
{

  lua_gen_wrapped_UBYTE_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_UBYTE_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "UBYTE_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_UBYTE_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_UBYTE_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_UBYTE_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
typedef struct {
  ULONG* data;
  uint16_t count;
} lua_gen_wrapped_ULONG_array_data_t;

static int _lua_gen_wrapped_ULONG_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_ULONG_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_ULONG_array_index(lua_State* L)
{
  lua_gen_wrapped_ULONG_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushinteger(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_ULONG_array_newindex(lua_State* L)
{
  lua_gen_wrapped_ULONG_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  ULONG value = luaL_checkinteger(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_ULONG_array_proxy(lua_State *L,  ULONG *array, int count)
{

  lua_gen_wrapped_ULONG_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_ULONG_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "ULONG_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
typedef struct {
  ULONG ** data;
  uint16_t count;
} lua_gen_wrapped_ULONG_p_array_data_t;

static int _lua_gen_wrapped_ULONG_p_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_ULONG_p_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_p_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_ULONG_p_array_index(lua_State* L)
{
  lua_gen_wrapped_ULONG_p_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_p_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushlightuserdata(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_ULONG_p_array_newindex(lua_State* L)
{
  lua_gen_wrapped_ULONG_p_array_data_t* wrapper = luaL_checkudata(L, 1, "ULONG_p_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  ULONG * value = lua_touserdata(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_ULONG_p_array_proxy(lua_State *L,  ULONG * *array, int count)
{

  lua_gen_wrapped_ULONG_p_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_ULONG_p_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "ULONG_p_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_p_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_p_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_ULONG_p_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
static int
_lua_gen_GfxBase_newindex(lua_State *L)
{
  struct GfxBase *obj = *(struct GfxBase **)luaL_checkudata(L, 1, "GfxBase");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "LibNode.lib_Node.ln_Succ") == 0) {
    // finder 1
    //obj->LibNode.lib_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LibNode.lib_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Pred") == 0) {
    // finder 1
    //obj->LibNode.lib_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LibNode.lib_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Type") == 0) {
    obj->LibNode.lib_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Pri") == 0) {
    obj->LibNode.lib_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Name") == 0) {
    obj->LibNode.lib_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LibNode.lib_Node = *val;
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Flags") == 0) {
    obj->LibNode.lib_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_pad") == 0) {
    obj->LibNode.lib_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_NegSize") == 0) {
    obj->LibNode.lib_NegSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_PosSize") == 0) {
    obj->LibNode.lib_PosSize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Version") == 0) {
    obj->LibNode.lib_Version = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Revision") == 0) {
    obj->LibNode.lib_Revision = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_IdString") == 0) {
    obj->LibNode.lib_IdString = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_Sum") == 0) {
    obj->LibNode.lib_Sum = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode.lib_OpenCnt") == 0) {
    obj->LibNode.lib_OpenCnt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LibNode") == 0) {
    // finder 0
    struct Library *val = *(struct Library **)luaL_checkudata(L, 3, "Library");
    obj->LibNode = *val;
    return 0;
  }
  if (strcmp(key, "ActiView") == 0) {
    // finder 1
    //obj->ActiView = *(struct View **)luaL_checkudata(L, 3, "View");
    obj->ActiView = (struct View *)_lua_gen_checkView(L, 3);
    return 0;
  }
  if (strcmp(key, "copinit") == 0) {
    // finder 1
    //obj->copinit = *(struct copinit **)luaL_checkudata(L, 3, "copinit");
    obj->copinit = (struct copinit *)_lua_gen_checkcopinit(L, 3);
    return 0;
  }
  if (strcmp(key, "cia") == 0) {
    obj->cia = (LONG *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "blitter") == 0) {
    obj->blitter = (LONG *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LOFlist") == 0) {
    obj->LOFlist = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SHFlist") == 0) {
    obj->SHFlist = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "blthd") == 0) {
    // finder 1
    //obj->blthd = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
    obj->blthd = (struct bltnode *)_lua_gen_checkbltnode(L, 3);
    return 0;
  }
  if (strcmp(key, "blttl") == 0) {
    // finder 1
    //obj->blttl = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
    obj->blttl = (struct bltnode *)_lua_gen_checkbltnode(L, 3);
    return 0;
  }
  if (strcmp(key, "bsblthd") == 0) {
    // finder 1
    //obj->bsblthd = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
    obj->bsblthd = (struct bltnode *)_lua_gen_checkbltnode(L, 3);
    return 0;
  }
  if (strcmp(key, "bsblttl") == 0) {
    // finder 1
    //obj->bsblttl = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
    obj->bsblttl = (struct bltnode *)_lua_gen_checkbltnode(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Succ") == 0) {
    // finder 1
    //obj->vbsrv.is_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->vbsrv.is_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Pred") == 0) {
    // finder 1
    //obj->vbsrv.is_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->vbsrv.is_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Type") == 0) {
    obj->vbsrv.is_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Pri") == 0) {
    obj->vbsrv.is_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Name") == 0) {
    obj->vbsrv.is_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->vbsrv.is_Node = *val;
    return 0;
  }
  if (strcmp(key, "vbsrv.is_Data") == 0) {
    obj->vbsrv.is_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type vbsrv.is_Code void ()()
  if (strcmp(key, "vbsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field vbsrv.is_Code");
  }
  if (strcmp(key, "vbsrv") == 0) {
    // finder 0
    struct Interrupt *val = *(struct Interrupt **)luaL_checkudata(L, 3, "Interrupt");
    obj->vbsrv = *val;
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Succ") == 0) {
    // finder 1
    //obj->timsrv.is_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->timsrv.is_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Pred") == 0) {
    // finder 1
    //obj->timsrv.is_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->timsrv.is_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Type") == 0) {
    obj->timsrv.is_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Pri") == 0) {
    obj->timsrv.is_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Name") == 0) {
    obj->timsrv.is_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "timsrv.is_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->timsrv.is_Node = *val;
    return 0;
  }
  if (strcmp(key, "timsrv.is_Data") == 0) {
    obj->timsrv.is_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type timsrv.is_Code void ()()
  if (strcmp(key, "timsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field timsrv.is_Code");
  }
  if (strcmp(key, "timsrv") == 0) {
    // finder 0
    struct Interrupt *val = *(struct Interrupt **)luaL_checkudata(L, 3, "Interrupt");
    obj->timsrv = *val;
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Succ") == 0) {
    // finder 1
    //obj->bltsrv.is_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->bltsrv.is_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Pred") == 0) {
    // finder 1
    //obj->bltsrv.is_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->bltsrv.is_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Type") == 0) {
    obj->bltsrv.is_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Pri") == 0) {
    obj->bltsrv.is_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Name") == 0) {
    obj->bltsrv.is_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->bltsrv.is_Node = *val;
    return 0;
  }
  if (strcmp(key, "bltsrv.is_Data") == 0) {
    obj->bltsrv.is_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type bltsrv.is_Code void ()()
  if (strcmp(key, "bltsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field bltsrv.is_Code");
  }
  if (strcmp(key, "bltsrv") == 0) {
    // finder 0
    struct Interrupt *val = *(struct Interrupt **)luaL_checkudata(L, 3, "Interrupt");
    obj->bltsrv = *val;
    return 0;
  }
  if (strcmp(key, "TextFonts.lh_Head") == 0) {
    // finder 1
    //obj->TextFonts.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TextFonts.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TextFonts.lh_Tail") == 0) {
    // finder 1
    //obj->TextFonts.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TextFonts.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TextFonts.lh_TailPred") == 0) {
    // finder 1
    //obj->TextFonts.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TextFonts.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TextFonts.lh_Type") == 0) {
    obj->TextFonts.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TextFonts.l_pad") == 0) {
    obj->TextFonts.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TextFonts") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->TextFonts = *val;
    return 0;
  }
  if (strcmp(key, "DefaultFont") == 0) {
    // finder 1
    //obj->DefaultFont = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
    obj->DefaultFont = (struct TextFont *)_lua_gen_checkTextFont(L, 3);
    return 0;
  }
  if (strcmp(key, "Modes") == 0) {
    obj->Modes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "VBlank") == 0) {
    obj->VBlank = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Debug") == 0) {
    obj->Debug = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BeamSync") == 0) {
    obj->BeamSync = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "system_bplcon0") == 0) {
    obj->system_bplcon0 = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteReserved") == 0) {
    obj->SpriteReserved = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bytereserved") == 0) {
    obj->bytereserved = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitLock") == 0) {
    obj->BlitLock = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitNest") == 0) {
    obj->BlitNest = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ.lh_Head") == 0) {
    // finder 1
    //obj->BlitWaitQ.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->BlitWaitQ.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ.lh_Tail") == 0) {
    // finder 1
    //obj->BlitWaitQ.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->BlitWaitQ.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ.lh_TailPred") == 0) {
    // finder 1
    //obj->BlitWaitQ.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->BlitWaitQ.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ.lh_Type") == 0) {
    obj->BlitWaitQ.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ.l_pad") == 0) {
    obj->BlitWaitQ.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlitWaitQ") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->BlitWaitQ = *val;
    return 0;
  }
  if (strcmp(key, "BlitOwner") == 0) {
    // finder 1
    //obj->BlitOwner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->BlitOwner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Head") == 0) {
    // finder 1
    //obj->TOF_WaitQ.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TOF_WaitQ.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Tail") == 0) {
    // finder 1
    //obj->TOF_WaitQ.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TOF_WaitQ.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ.lh_TailPred") == 0) {
    // finder 1
    //obj->TOF_WaitQ.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->TOF_WaitQ.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Type") == 0) {
    obj->TOF_WaitQ.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ.l_pad") == 0) {
    obj->TOF_WaitQ.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TOF_WaitQ") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->TOF_WaitQ = *val;
    return 0;
  }
  if (strcmp(key, "DisplayFlags") == 0) {
    obj->DisplayFlags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SimpleSprites") == 0) {
    // finder 2
    struct SimpleSprite *val = *(struct SimpleSprite **)luaL_checkudata(L, 3, "SimpleSprite");
    *obj->SimpleSprites = val;
    return 0;
  }
  if (strcmp(key, "MaxDisplayRow") == 0) {
    obj->MaxDisplayRow = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxDisplayColumn") == 0) {
    obj->MaxDisplayColumn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NormalDisplayRows") == 0) {
    obj->NormalDisplayRows = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NormalDisplayColumns") == 0) {
    obj->NormalDisplayColumns = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NormalDPMX") == 0) {
    obj->NormalDPMX = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NormalDPMY") == 0) {
    obj->NormalDPMY = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LastChanceMemory") == 0) {
    // finder 1
    //obj->LastChanceMemory = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->LastChanceMemory = (struct SignalSemaphore *)_lua_gen_checkSignalSemaphore(L, 3);
    return 0;
  }
  if (strcmp(key, "LCMptr") == 0) {
    obj->LCMptr = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "MicrosPerLine") == 0) {
    obj->MicrosPerLine = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MinDisplayColumn") == 0) {
    obj->MinDisplayColumn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ChipRevBits0") == 0) {
    obj->ChipRevBits0 = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MemType") == 0) {
    obj->MemType = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // crb_reserved[4] proxied via the index
  if (strcmp(key, "monitor_id") == 0) {
    obj->monitor_id = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // hedley[8] proxied via the index
  // hedley_sprites[8] proxied via the index
  // hedley_sprites1[8] proxied via the index
  if (strcmp(key, "hedley_count") == 0) {
    obj->hedley_count = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hedley_flags") == 0) {
    obj->hedley_flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hedley_tmp") == 0) {
    obj->hedley_tmp = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hash_table") == 0) {
    obj->hash_table = (LONG *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "current_tot_rows") == 0) {
    obj->current_tot_rows = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "current_tot_cclks") == 0) {
    obj->current_tot_cclks = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hedley_hint") == 0) {
    obj->hedley_hint = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hedley_hint2") == 0) {
    obj->hedley_hint2 = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // nreserved[4] proxied via the index
  if (strcmp(key, "a2024_sync_raster") == 0) {
    obj->a2024_sync_raster = (LONG *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "control_delta_pal") == 0) {
    obj->control_delta_pal = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "control_delta_ntsc") == 0) {
    obj->control_delta_ntsc = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "current_monitor") == 0) {
    // finder 1
    //obj->current_monitor = *(struct MonitorSpec **)luaL_checkudata(L, 3, "MonitorSpec");
    obj->current_monitor = (struct MonitorSpec *)_lua_gen_checkMonitorSpec(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList.lh_Head") == 0) {
    // finder 1
    //obj->MonitorList.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->MonitorList.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList.lh_Tail") == 0) {
    // finder 1
    //obj->MonitorList.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->MonitorList.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList.lh_TailPred") == 0) {
    // finder 1
    //obj->MonitorList.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->MonitorList.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList.lh_Type") == 0) {
    obj->MonitorList.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList.l_pad") == 0) {
    obj->MonitorList.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorList") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->MonitorList = *val;
    return 0;
  }
  if (strcmp(key, "default_monitor") == 0) {
    // finder 1
    //obj->default_monitor = *(struct MonitorSpec **)luaL_checkudata(L, 3, "MonitorSpec");
    obj->default_monitor = (struct MonitorSpec *)_lua_gen_checkMonitorSpec(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorListSemaphore") == 0) {
    // finder 1
    //obj->MonitorListSemaphore = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->MonitorListSemaphore = (struct SignalSemaphore *)_lua_gen_checkSignalSemaphore(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    obj->DisplayInfoDataBase = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "TopLine") == 0) {
    obj->TopLine = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ActiViewCprSemaphore") == 0) {
    // finder 1
    //obj->ActiViewCprSemaphore = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->ActiViewCprSemaphore = (struct SignalSemaphore *)_lua_gen_checkSignalSemaphore(L, 3);
    return 0;
  }
  if (strcmp(key, "UtilBase") == 0) {
    // finder 1
    //obj->UtilBase = *(struct Library **)luaL_checkudata(L, 3, "Library");
    obj->UtilBase = (struct Library *)_lua_gen_checkLibrary(L, 3);
    return 0;
  }
  if (strcmp(key, "ExecBase") == 0) {
    // finder 1
    //obj->ExecBase = *(struct Library **)luaL_checkudata(L, 3, "Library");
    obj->ExecBase = (struct Library *)_lua_gen_checkLibrary(L, 3);
    return 0;
  }
  if (strcmp(key, "bwshifts") == 0) {
    obj->bwshifts = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "StrtFetchMasks") == 0) {
    obj->StrtFetchMasks = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "StopFetchMasks") == 0) {
    obj->StopFetchMasks = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Overrun") == 0) {
    obj->Overrun = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "RealStops") == 0) {
    obj->RealStops = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteWidth") == 0) {
    obj->SpriteWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteFMode") == 0) {
    obj->SpriteFMode = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SoftSprites") == 0) {
    obj->SoftSprites = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "arraywidth") == 0) {
    obj->arraywidth = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DefaultSpriteWidth") == 0) {
    obj->DefaultSpriteWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SprMoveDisable") == 0) {
    obj->SprMoveDisable = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WantChips") == 0) {
    obj->WantChips = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BoardMemType") == 0) {
    obj->BoardMemType = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Bugs") == 0) {
    obj->Bugs = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "gb_LayersBase") == 0) {
    obj->gb_LayersBase = (ULONG *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ColorMask") == 0) {
    obj->ColorMask = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "IVector") == 0) {
    obj->IVector = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "IData") == 0) {
    obj->IData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SpecialCounter") == 0) {
    obj->SpecialCounter = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DBList") == 0) {
    obj->DBList = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorFlags") == 0) {
    obj->MonitorFlags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ScanDoubledSprites") == 0) {
    obj->ScanDoubledSprites = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BP3Bits") == 0) {
    obj->BP3Bits = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorVBlank.asi_Start") == 0) {
    obj->MonitorVBlank.asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorVBlank.asi_Stop") == 0) {
    obj->MonitorVBlank.asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MonitorVBlank") == 0) {
    // finder 0
    struct AnalogSignalInterval *val = *(struct AnalogSignalInterval **)luaL_checkudata(L, 3, "AnalogSignalInterval");
    obj->MonitorVBlank = *val;
    return 0;
  }
  if (strcmp(key, "natural_monitor") == 0) {
    // finder 1
    //obj->natural_monitor = *(struct MonitorSpec **)luaL_checkudata(L, 3, "MonitorSpec");
    obj->natural_monitor = (struct MonitorSpec *)_lua_gen_checkMonitorSpec(L, 3);
    return 0;
  }
  if (strcmp(key, "ProgData") == 0) {
    obj->ProgData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ExtSprites") == 0) {
    obj->ExtSprites = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pad3") == 0) {
    obj->pad3 = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "GfxFlags") == 0) {
    obj->GfxFlags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "VBCounter") == 0) {
    obj->VBCounter = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "HashTableSemaphore") == 0) {
    // finder 1
    //obj->HashTableSemaphore = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->HashTableSemaphore = (struct SignalSemaphore *)_lua_gen_checkSignalSemaphore(L, 3);
    return 0;
  }
  // HWEmul[9] proxied via the index
  if (strcmp(key, "Scratch") == 0) {
    // finder 1
    //obj->Scratch = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
    obj->Scratch = (struct RegionRectangle *)_lua_gen_checkRegionRectangle(L, 3);
    return 0;
  }
  if (strcmp(key, "ScratchSize") == 0) {
    obj->ScratchSize = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_GfxBase_constructor(lua_State *L)
{
  // Allocate pointer-to-struct GfxBase in userdata
  struct GfxBase **objp = lua_newuserdata(L, sizeof(struct GfxBase *));
  *objp = malloc(sizeof(struct GfxBase));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct GfxBase));

  // Set metatable
  luaL_getmetatable(L, "GfxBase");
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
_lua_gen_GfxBase_index(lua_State *L)
{
  struct GfxBase *obj = *(struct GfxBase **)luaL_checkudata(L, 1, "GfxBase");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "LibNode.lib_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->LibNode.lib_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->LibNode.lib_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->LibNode.lib_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->LibNode.lib_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Flags") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Flags);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_pad") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_pad);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_NegSize") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_NegSize);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_PosSize") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_PosSize);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Version") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Version);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Revision") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Revision);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_IdString") == 0) {
    lua_pushlightuserdata(L, obj->LibNode.lib_IdString);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_Sum") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_Sum);
    return 1;
  }
  if (strcmp(key, "LibNode.lib_OpenCnt") == 0) {
    lua_pushinteger(L, obj->LibNode.lib_OpenCnt);
    return 1;
  }
  if (strcmp(key, "LibNode") == 0) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = (struct Library*)&obj->LibNode;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ActiView") == 0) {
    struct View **ud = (struct View **)lua_newuserdata(L, sizeof(struct View *));
    *ud = (struct View*)obj->ActiView;
    luaL_getmetatable(L, "View");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "copinit") == 0) {
    struct copinit **ud = (struct copinit **)lua_newuserdata(L, sizeof(struct copinit *));
    *ud = (struct copinit*)obj->copinit;
    luaL_getmetatable(L, "copinit");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "cia") == 0) {
    lua_pushlightuserdata(L, obj->cia);
    return 1;
  }
  if (strcmp(key, "blitter") == 0) {
    lua_pushlightuserdata(L, obj->blitter);
    return 1;
  }
  if (strcmp(key, "LOFlist") == 0) {
    lua_pushlightuserdata(L, obj->LOFlist);
    return 1;
  }
  if (strcmp(key, "SHFlist") == 0) {
    lua_pushlightuserdata(L, obj->SHFlist);
    return 1;
  }
  if (strcmp(key, "blthd") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->blthd;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "blttl") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->blttl;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bsblthd") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->bsblthd;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bsblttl") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->bsblttl;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->vbsrv.is_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->vbsrv.is_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->vbsrv.is_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->vbsrv.is_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->vbsrv.is_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->vbsrv.is_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vbsrv.is_Data") == 0) {
    lua_pushlightuserdata(L, obj->vbsrv.is_Data);
    return 1;
  }
  // Unsupported vbsrv.is_Code void (*)()
  if (strcmp(key, "vbsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field vbsrv.is_Code");
  }
  if (strcmp(key, "vbsrv") == 0) {
    struct Interrupt **ud = (struct Interrupt **)lua_newuserdata(L, sizeof(struct Interrupt *));
    *ud = (struct Interrupt*)&obj->vbsrv;
    luaL_getmetatable(L, "Interrupt");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->timsrv.is_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->timsrv.is_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->timsrv.is_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->timsrv.is_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->timsrv.is_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->timsrv.is_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "timsrv.is_Data") == 0) {
    lua_pushlightuserdata(L, obj->timsrv.is_Data);
    return 1;
  }
  // Unsupported timsrv.is_Code void (*)()
  if (strcmp(key, "timsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field timsrv.is_Code");
  }
  if (strcmp(key, "timsrv") == 0) {
    struct Interrupt **ud = (struct Interrupt **)lua_newuserdata(L, sizeof(struct Interrupt *));
    *ud = (struct Interrupt*)&obj->timsrv;
    luaL_getmetatable(L, "Interrupt");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->bltsrv.is_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->bltsrv.is_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->bltsrv.is_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->bltsrv.is_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->bltsrv.is_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->bltsrv.is_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bltsrv.is_Data") == 0) {
    lua_pushlightuserdata(L, obj->bltsrv.is_Data);
    return 1;
  }
  // Unsupported bltsrv.is_Code void (*)()
  if (strcmp(key, "bltsrv.is_Code") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field bltsrv.is_Code");
  }
  if (strcmp(key, "bltsrv") == 0) {
    struct Interrupt **ud = (struct Interrupt **)lua_newuserdata(L, sizeof(struct Interrupt *));
    *ud = (struct Interrupt*)&obj->bltsrv;
    luaL_getmetatable(L, "Interrupt");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TextFonts.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TextFonts.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TextFonts.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TextFonts.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TextFonts.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TextFonts.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TextFonts.lh_Type") == 0) {
    lua_pushinteger(L, obj->TextFonts.lh_Type);
    return 1;
  }
  if (strcmp(key, "TextFonts.l_pad") == 0) {
    lua_pushinteger(L, obj->TextFonts.l_pad);
    return 1;
  }
  if (strcmp(key, "TextFonts") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->TextFonts;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DefaultFont") == 0) {
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = (struct TextFont*)obj->DefaultFont;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Modes") == 0) {
    lua_pushinteger(L, obj->Modes);
    return 1;
  }
  if (strcmp(key, "VBlank") == 0) {
    lua_pushinteger(L, obj->VBlank);
    return 1;
  }
  if (strcmp(key, "Debug") == 0) {
    lua_pushinteger(L, obj->Debug);
    return 1;
  }
  if (strcmp(key, "BeamSync") == 0) {
    lua_pushinteger(L, obj->BeamSync);
    return 1;
  }
  if (strcmp(key, "system_bplcon0") == 0) {
    lua_pushinteger(L, obj->system_bplcon0);
    return 1;
  }
  if (strcmp(key, "SpriteReserved") == 0) {
    lua_pushinteger(L, obj->SpriteReserved);
    return 1;
  }
  if (strcmp(key, "bytereserved") == 0) {
    lua_pushinteger(L, obj->bytereserved);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "BlitLock") == 0) {
    lua_pushinteger(L, obj->BlitLock);
    return 1;
  }
  if (strcmp(key, "BlitNest") == 0) {
    lua_pushinteger(L, obj->BlitNest);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->BlitWaitQ.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->BlitWaitQ.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->BlitWaitQ.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ.lh_Type") == 0) {
    lua_pushinteger(L, obj->BlitWaitQ.lh_Type);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ.l_pad") == 0) {
    lua_pushinteger(L, obj->BlitWaitQ.l_pad);
    return 1;
  }
  if (strcmp(key, "BlitWaitQ") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->BlitWaitQ;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BlitOwner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->BlitOwner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TOF_WaitQ.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TOF_WaitQ.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->TOF_WaitQ.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ.lh_Type") == 0) {
    lua_pushinteger(L, obj->TOF_WaitQ.lh_Type);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ.l_pad") == 0) {
    lua_pushinteger(L, obj->TOF_WaitQ.l_pad);
    return 1;
  }
  if (strcmp(key, "TOF_WaitQ") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->TOF_WaitQ;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayFlags") == 0) {
    lua_pushinteger(L, obj->DisplayFlags);
    return 1;
  }
  if (strcmp(key, "SimpleSprites") == 0 && obj->SimpleSprites) {
    struct SimpleSprite **ud = (struct SimpleSprite **)lua_newuserdata(L, sizeof(struct SimpleSprite *));
    *ud = (struct SimpleSprite*)*obj->SimpleSprites;
    luaL_getmetatable(L, "struct SimpleSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MaxDisplayRow") == 0) {
    lua_pushinteger(L, obj->MaxDisplayRow);
    return 1;
  }
  if (strcmp(key, "MaxDisplayColumn") == 0) {
    lua_pushinteger(L, obj->MaxDisplayColumn);
    return 1;
  }
  if (strcmp(key, "NormalDisplayRows") == 0) {
    lua_pushinteger(L, obj->NormalDisplayRows);
    return 1;
  }
  if (strcmp(key, "NormalDisplayColumns") == 0) {
    lua_pushinteger(L, obj->NormalDisplayColumns);
    return 1;
  }
  if (strcmp(key, "NormalDPMX") == 0) {
    lua_pushinteger(L, obj->NormalDPMX);
    return 1;
  }
  if (strcmp(key, "NormalDPMY") == 0) {
    lua_pushinteger(L, obj->NormalDPMY);
    return 1;
  }
  if (strcmp(key, "LastChanceMemory") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)obj->LastChanceMemory;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LCMptr") == 0) {
    lua_pushlightuserdata(L, obj->LCMptr);
    return 1;
  }
  if (strcmp(key, "MicrosPerLine") == 0) {
    lua_pushinteger(L, obj->MicrosPerLine);
    return 1;
  }
  if (strcmp(key, "MinDisplayColumn") == 0) {
    lua_pushinteger(L, obj->MinDisplayColumn);
    return 1;
  }
  if (strcmp(key, "ChipRevBits0") == 0) {
    lua_pushinteger(L, obj->ChipRevBits0);
    return 1;
  }
  if (strcmp(key, "MemType") == 0) {
    lua_pushinteger(L, obj->MemType);
    return 1;
  }
  if (strcmp(key, "crb_reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->crb_reserved, 4);
    return 1;
  }
  if (strcmp(key, "monitor_id") == 0) {
    lua_pushinteger(L, obj->monitor_id);
    return 1;
  }
  if (strcmp(key, "hedley") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->hedley, 8);
    return 1;
  }
  if (strcmp(key, "hedley_sprites") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->hedley_sprites, 8);
    return 1;
  }
  if (strcmp(key, "hedley_sprites1") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->hedley_sprites1, 8);
    return 1;
  }
  if (strcmp(key, "hedley_count") == 0) {
    lua_pushinteger(L, obj->hedley_count);
    return 1;
  }
  if (strcmp(key, "hedley_flags") == 0) {
    lua_pushinteger(L, obj->hedley_flags);
    return 1;
  }
  if (strcmp(key, "hedley_tmp") == 0) {
    lua_pushinteger(L, obj->hedley_tmp);
    return 1;
  }
  if (strcmp(key, "hash_table") == 0) {
    lua_pushlightuserdata(L, obj->hash_table);
    return 1;
  }
  if (strcmp(key, "current_tot_rows") == 0) {
    lua_pushinteger(L, obj->current_tot_rows);
    return 1;
  }
  if (strcmp(key, "current_tot_cclks") == 0) {
    lua_pushinteger(L, obj->current_tot_cclks);
    return 1;
  }
  if (strcmp(key, "hedley_hint") == 0) {
    lua_pushinteger(L, obj->hedley_hint);
    return 1;
  }
  if (strcmp(key, "hedley_hint2") == 0) {
    lua_pushinteger(L, obj->hedley_hint2);
    return 1;
  }
  if (strcmp(key, "nreserved") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->nreserved, 4);
    return 1;
  }
  if (strcmp(key, "a2024_sync_raster") == 0) {
    lua_pushlightuserdata(L, obj->a2024_sync_raster);
    return 1;
  }
  if (strcmp(key, "control_delta_pal") == 0) {
    lua_pushinteger(L, obj->control_delta_pal);
    return 1;
  }
  if (strcmp(key, "control_delta_ntsc") == 0) {
    lua_pushinteger(L, obj->control_delta_ntsc);
    return 1;
  }
  if (strcmp(key, "current_monitor") == 0) {
    struct MonitorSpec **ud = (struct MonitorSpec **)lua_newuserdata(L, sizeof(struct MonitorSpec *));
    *ud = (struct MonitorSpec*)obj->current_monitor;
    luaL_getmetatable(L, "MonitorSpec");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MonitorList.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->MonitorList.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MonitorList.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->MonitorList.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MonitorList.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->MonitorList.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MonitorList.lh_Type") == 0) {
    lua_pushinteger(L, obj->MonitorList.lh_Type);
    return 1;
  }
  if (strcmp(key, "MonitorList.l_pad") == 0) {
    lua_pushinteger(L, obj->MonitorList.l_pad);
    return 1;
  }
  if (strcmp(key, "MonitorList") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->MonitorList;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "default_monitor") == 0) {
    struct MonitorSpec **ud = (struct MonitorSpec **)lua_newuserdata(L, sizeof(struct MonitorSpec *));
    *ud = (struct MonitorSpec*)obj->default_monitor;
    luaL_getmetatable(L, "MonitorSpec");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MonitorListSemaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)obj->MonitorListSemaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    lua_pushlightuserdata(L, obj->DisplayInfoDataBase);
    return 1;
  }
  if (strcmp(key, "TopLine") == 0) {
    lua_pushinteger(L, obj->TopLine);
    return 1;
  }
  if (strcmp(key, "ActiViewCprSemaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)obj->ActiViewCprSemaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "UtilBase") == 0) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = (struct Library*)obj->UtilBase;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ExecBase") == 0) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = (struct Library*)obj->ExecBase;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bwshifts") == 0) {
    lua_pushlightuserdata(L, obj->bwshifts);
    return 1;
  }
  if (strcmp(key, "StrtFetchMasks") == 0) {
    lua_pushlightuserdata(L, obj->StrtFetchMasks);
    return 1;
  }
  if (strcmp(key, "StopFetchMasks") == 0) {
    lua_pushlightuserdata(L, obj->StopFetchMasks);
    return 1;
  }
  if (strcmp(key, "Overrun") == 0) {
    lua_pushlightuserdata(L, obj->Overrun);
    return 1;
  }
  if (strcmp(key, "RealStops") == 0) {
    lua_pushlightuserdata(L, obj->RealStops);
    return 1;
  }
  if (strcmp(key, "SpriteWidth") == 0) {
    lua_pushinteger(L, obj->SpriteWidth);
    return 1;
  }
  if (strcmp(key, "SpriteFMode") == 0) {
    lua_pushinteger(L, obj->SpriteFMode);
    return 1;
  }
  if (strcmp(key, "SoftSprites") == 0) {
    lua_pushinteger(L, obj->SoftSprites);
    return 1;
  }
  if (strcmp(key, "arraywidth") == 0) {
    lua_pushinteger(L, obj->arraywidth);
    return 1;
  }
  if (strcmp(key, "DefaultSpriteWidth") == 0) {
    lua_pushinteger(L, obj->DefaultSpriteWidth);
    return 1;
  }
  if (strcmp(key, "SprMoveDisable") == 0) {
    lua_pushinteger(L, obj->SprMoveDisable);
    return 1;
  }
  if (strcmp(key, "WantChips") == 0) {
    lua_pushinteger(L, obj->WantChips);
    return 1;
  }
  if (strcmp(key, "BoardMemType") == 0) {
    lua_pushinteger(L, obj->BoardMemType);
    return 1;
  }
  if (strcmp(key, "Bugs") == 0) {
    lua_pushinteger(L, obj->Bugs);
    return 1;
  }
  if (strcmp(key, "gb_LayersBase") == 0) {
    lua_pushlightuserdata(L, obj->gb_LayersBase);
    return 1;
  }
  if (strcmp(key, "ColorMask") == 0) {
    lua_pushinteger(L, obj->ColorMask);
    return 1;
  }
  if (strcmp(key, "IVector") == 0) {
    lua_pushlightuserdata(L, obj->IVector);
    return 1;
  }
  if (strcmp(key, "IData") == 0) {
    lua_pushlightuserdata(L, obj->IData);
    return 1;
  }
  if (strcmp(key, "SpecialCounter") == 0) {
    lua_pushinteger(L, obj->SpecialCounter);
    return 1;
  }
  if (strcmp(key, "DBList") == 0) {
    lua_pushlightuserdata(L, obj->DBList);
    return 1;
  }
  if (strcmp(key, "MonitorFlags") == 0) {
    lua_pushinteger(L, obj->MonitorFlags);
    return 1;
  }
  if (strcmp(key, "ScanDoubledSprites") == 0) {
    lua_pushinteger(L, obj->ScanDoubledSprites);
    return 1;
  }
  if (strcmp(key, "BP3Bits") == 0) {
    lua_pushinteger(L, obj->BP3Bits);
    return 1;
  }
  if (strcmp(key, "MonitorVBlank.asi_Start") == 0) {
    lua_pushinteger(L, obj->MonitorVBlank.asi_Start);
    return 1;
  }
  if (strcmp(key, "MonitorVBlank.asi_Stop") == 0) {
    lua_pushinteger(L, obj->MonitorVBlank.asi_Stop);
    return 1;
  }
  if (strcmp(key, "MonitorVBlank") == 0) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = (struct AnalogSignalInterval*)&obj->MonitorVBlank;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "natural_monitor") == 0) {
    struct MonitorSpec **ud = (struct MonitorSpec **)lua_newuserdata(L, sizeof(struct MonitorSpec *));
    *ud = (struct MonitorSpec*)obj->natural_monitor;
    luaL_getmetatable(L, "MonitorSpec");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ProgData") == 0) {
    lua_pushlightuserdata(L, obj->ProgData);
    return 1;
  }
  if (strcmp(key, "ExtSprites") == 0) {
    lua_pushinteger(L, obj->ExtSprites);
    return 1;
  }
  if (strcmp(key, "pad3") == 0) {
    lua_pushinteger(L, obj->pad3);
    return 1;
  }
  if (strcmp(key, "GfxFlags") == 0) {
    lua_pushinteger(L, obj->GfxFlags);
    return 1;
  }
  if (strcmp(key, "VBCounter") == 0) {
    lua_pushinteger(L, obj->VBCounter);
    return 1;
  }
  if (strcmp(key, "HashTableSemaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)obj->HashTableSemaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "HWEmul") == 0) {
    _lua_gen_push_ULONG_p_array_proxy(L, obj->HWEmul, 9);
    return 1;
  }
  if (strcmp(key, "Scratch") == 0) {
    struct RegionRectangle **ud = (struct RegionRectangle **)lua_newuserdata(L, sizeof(struct RegionRectangle *));
    *ud = (struct RegionRectangle*)obj->Scratch;
    luaL_getmetatable(L, "RegionRectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ScratchSize") == 0) {
    lua_pushinteger(L, obj->ScratchSize);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct GfxBase));
    return 1;
}

  return 0;
}

static void
_lua_gen_GfxBase_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "LibNode.lib_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "LibNode.lib_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "LibNode.lib_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "LibNode.lib_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "LibNode.lib_pad");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "LibNode.lib_NegSize");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "LibNode.lib_PosSize");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "LibNode.lib_Version");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "LibNode.lib_Revision");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "LibNode.lib_IdString");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "LibNode.lib_Sum");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "LibNode.lib_OpenCnt");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "cia");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "blitter");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "LOFlist");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "SHFlist");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "vbsrv.is_Node.ln_Type");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "vbsrv.is_Node.ln_Pri");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "vbsrv.is_Node.ln_Name");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "vbsrv.is_Data");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "vbsrv.is_Code");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "timsrv.is_Node.ln_Type");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "timsrv.is_Node.ln_Pri");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "timsrv.is_Node.ln_Name");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "timsrv.is_Data");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "timsrv.is_Code");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "bltsrv.is_Node.ln_Type");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "bltsrv.is_Node.ln_Pri");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "bltsrv.is_Node.ln_Name");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "bltsrv.is_Data");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "bltsrv.is_Code");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "TextFonts.lh_Type");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "TextFonts.l_pad");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "Modes");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "VBlank");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "Debug");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "BeamSync");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "system_bplcon0");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "SpriteReserved");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "bytereserved");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "BlitLock");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "BlitNest");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "BlitWaitQ.lh_Type");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "BlitWaitQ.l_pad");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "TOF_WaitQ.lh_Type");
  lua_rawseti(L, -2, 46);
  lua_pushstring(L, "TOF_WaitQ.l_pad");
  lua_rawseti(L, -2, 47);
  lua_pushstring(L, "DisplayFlags");
  lua_rawseti(L, -2, 48);
  lua_pushstring(L, "MaxDisplayRow");
  lua_rawseti(L, -2, 49);
  lua_pushstring(L, "MaxDisplayColumn");
  lua_rawseti(L, -2, 50);
  lua_pushstring(L, "NormalDisplayRows");
  lua_rawseti(L, -2, 51);
  lua_pushstring(L, "NormalDisplayColumns");
  lua_rawseti(L, -2, 52);
  lua_pushstring(L, "NormalDPMX");
  lua_rawseti(L, -2, 53);
  lua_pushstring(L, "NormalDPMY");
  lua_rawseti(L, -2, 54);
  lua_pushstring(L, "LCMptr");
  lua_rawseti(L, -2, 55);
  lua_pushstring(L, "MicrosPerLine");
  lua_rawseti(L, -2, 56);
  lua_pushstring(L, "MinDisplayColumn");
  lua_rawseti(L, -2, 57);
  lua_pushstring(L, "ChipRevBits0");
  lua_rawseti(L, -2, 58);
  lua_pushstring(L, "MemType");
  lua_rawseti(L, -2, 59);
  lua_pushstring(L, "crb_reserved");
  lua_rawseti(L, -2, 60);
  lua_pushstring(L, "monitor_id");
  lua_rawseti(L, -2, 61);
  lua_pushstring(L, "hedley");
  lua_rawseti(L, -2, 62);
  lua_pushstring(L, "hedley_sprites");
  lua_rawseti(L, -2, 63);
  lua_pushstring(L, "hedley_sprites1");
  lua_rawseti(L, -2, 64);
  lua_pushstring(L, "hedley_count");
  lua_rawseti(L, -2, 65);
  lua_pushstring(L, "hedley_flags");
  lua_rawseti(L, -2, 66);
  lua_pushstring(L, "hedley_tmp");
  lua_rawseti(L, -2, 67);
  lua_pushstring(L, "hash_table");
  lua_rawseti(L, -2, 68);
  lua_pushstring(L, "current_tot_rows");
  lua_rawseti(L, -2, 69);
  lua_pushstring(L, "current_tot_cclks");
  lua_rawseti(L, -2, 70);
  lua_pushstring(L, "hedley_hint");
  lua_rawseti(L, -2, 71);
  lua_pushstring(L, "hedley_hint2");
  lua_rawseti(L, -2, 72);
  lua_pushstring(L, "nreserved");
  lua_rawseti(L, -2, 73);
  lua_pushstring(L, "a2024_sync_raster");
  lua_rawseti(L, -2, 74);
  lua_pushstring(L, "control_delta_pal");
  lua_rawseti(L, -2, 75);
  lua_pushstring(L, "control_delta_ntsc");
  lua_rawseti(L, -2, 76);
  lua_pushstring(L, "MonitorList.lh_Type");
  lua_rawseti(L, -2, 77);
  lua_pushstring(L, "MonitorList.l_pad");
  lua_rawseti(L, -2, 78);
  lua_pushstring(L, "TopLine");
  lua_rawseti(L, -2, 79);
  lua_pushstring(L, "bwshifts");
  lua_rawseti(L, -2, 80);
  lua_pushstring(L, "StrtFetchMasks");
  lua_rawseti(L, -2, 81);
  lua_pushstring(L, "StopFetchMasks");
  lua_rawseti(L, -2, 82);
  lua_pushstring(L, "Overrun");
  lua_rawseti(L, -2, 83);
  lua_pushstring(L, "RealStops");
  lua_rawseti(L, -2, 84);
  lua_pushstring(L, "SpriteWidth");
  lua_rawseti(L, -2, 85);
  lua_pushstring(L, "SpriteFMode");
  lua_rawseti(L, -2, 86);
  lua_pushstring(L, "SoftSprites");
  lua_rawseti(L, -2, 87);
  lua_pushstring(L, "arraywidth");
  lua_rawseti(L, -2, 88);
  lua_pushstring(L, "DefaultSpriteWidth");
  lua_rawseti(L, -2, 89);
  lua_pushstring(L, "SprMoveDisable");
  lua_rawseti(L, -2, 90);
  lua_pushstring(L, "WantChips");
  lua_rawseti(L, -2, 91);
  lua_pushstring(L, "BoardMemType");
  lua_rawseti(L, -2, 92);
  lua_pushstring(L, "Bugs");
  lua_rawseti(L, -2, 93);
  lua_pushstring(L, "gb_LayersBase");
  lua_rawseti(L, -2, 94);
  lua_pushstring(L, "ColorMask");
  lua_rawseti(L, -2, 95);
  lua_pushstring(L, "IVector");
  lua_rawseti(L, -2, 96);
  lua_pushstring(L, "IData");
  lua_rawseti(L, -2, 97);
  lua_pushstring(L, "SpecialCounter");
  lua_rawseti(L, -2, 98);
  lua_pushstring(L, "DBList");
  lua_rawseti(L, -2, 99);
  lua_pushstring(L, "MonitorFlags");
  lua_rawseti(L, -2, 100);
  lua_pushstring(L, "ScanDoubledSprites");
  lua_rawseti(L, -2, 101);
  lua_pushstring(L, "BP3Bits");
  lua_rawseti(L, -2, 102);
  lua_pushstring(L, "MonitorVBlank.asi_Start");
  lua_rawseti(L, -2, 103);
  lua_pushstring(L, "MonitorVBlank.asi_Stop");
  lua_rawseti(L, -2, 104);
  lua_pushstring(L, "ProgData");
  lua_rawseti(L, -2, 105);
  lua_pushstring(L, "ExtSprites");
  lua_rawseti(L, -2, 106);
  lua_pushstring(L, "pad3");
  lua_rawseti(L, -2, 107);
  lua_pushstring(L, "GfxFlags");
  lua_rawseti(L, -2, 108);
  lua_pushstring(L, "VBCounter");
  lua_rawseti(L, -2, 109);
  lua_pushstring(L, "HWEmul");
  lua_rawseti(L, -2, 110);
  lua_pushstring(L, "ScratchSize");
  lua_rawseti(L, -2, 111);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_GfxBase(lua_State *L) {
  if (luaL_newmetatable(L, "GfxBase")) {
    lua_pushcfunction(L, _lua_gen_GfxBase_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_GfxBase_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_GfxBase_constructor);
    lua_setglobal(L, "GfxBase");
    _lua_gen_GfxBase_install_keys(L);
    lua_pushstring(L, "GfxBase");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_CopIns_newindex(lua_State *L)
{
  struct CopIns *obj = *(struct CopIns **)luaL_checkudata(L, 1, "CopIns");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "OpCode") == 0) {
    obj->OpCode = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "u3.nxtlist") == 0) {
    // finder 1
    //obj->u3.nxtlist = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->u3.nxtlist = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "u3.u4.u1.VWaitPos") == 0) {
    obj->u3.u4.u1.VWaitPos = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "u3.u4.u1.DestAddr") == 0) {
    obj->u3.u4.u1.DestAddr = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "u3.u4.u2.HWaitPos") == 0) {
    obj->u3.u4.u2.HWaitPos = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "u3.u4.u2.DestData") == 0) {
    obj->u3.u4.u2.DestData = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type u3 unnamed union
  if (strcmp(key, "u3") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field u3");
  }
  return 0;
}


static int
_lua_CopIns_constructor(lua_State *L)
{
  // Allocate pointer-to-struct CopIns in userdata
  struct CopIns **objp = lua_newuserdata(L, sizeof(struct CopIns *));
  *objp = malloc(sizeof(struct CopIns));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct CopIns));

  // Set metatable
  luaL_getmetatable(L, "CopIns");
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
_lua_gen_CopIns_index(lua_State *L)
{
  struct CopIns *obj = *(struct CopIns **)luaL_checkudata(L, 1, "CopIns");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "OpCode") == 0) {
    lua_pushinteger(L, obj->OpCode);
    return 1;
  }
  if (strcmp(key, "u3.nxtlist") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->u3.nxtlist;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "u3.u4.u1.VWaitPos") == 0) {
    lua_pushinteger(L, obj->u3.u4.u1.VWaitPos);
    return 1;
  }
  if (strcmp(key, "u3.u4.u1.DestAddr") == 0) {
    lua_pushinteger(L, obj->u3.u4.u1.DestAddr);
    return 1;
  }
  if (strcmp(key, "u3.u4.u2.HWaitPos") == 0) {
    lua_pushinteger(L, obj->u3.u4.u2.HWaitPos);
    return 1;
  }
  if (strcmp(key, "u3.u4.u2.DestData") == 0) {
    lua_pushinteger(L, obj->u3.u4.u2.DestData);
    return 1;
  }
  // Unsupported u3 unnamed union
  if (strcmp(key, "u3") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field u3");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct CopIns));
    return 1;
}

  return 0;
}

static void
_lua_gen_CopIns_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "OpCode");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "u3.u4.u1.VWaitPos");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "u3.u4.u1.DestAddr");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "u3.u4.u2.HWaitPos");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "u3.u4.u2.DestData");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_CopIns(lua_State *L) {
  if (luaL_newmetatable(L, "CopIns")) {
    lua_pushcfunction(L, _lua_gen_CopIns_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_CopIns_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_CopIns_constructor);
    lua_setglobal(L, "CopIns");
    _lua_gen_CopIns_install_keys(L);
    lua_pushstring(L, "CopIns");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_CopList_newindex(lua_State *L)
{
  struct CopList *obj = *(struct CopList **)luaL_checkudata(L, 1, "CopList");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Next") == 0) {
    // finder 1
    //obj->Next = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->Next = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "_CopList") == 0) {
    // finder 1
    //obj->_CopList = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->_CopList = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "_ViewPort") == 0) {
    // finder 1
    //obj->_ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->_ViewPort = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "CopIns") == 0) {
    // finder 1
    //obj->CopIns = *(struct CopIns **)luaL_checkudata(L, 3, "CopIns");
    obj->CopIns = (struct CopIns *)_lua_gen_checkCopIns(L, 3);
    return 0;
  }
  if (strcmp(key, "CopPtr") == 0) {
    // finder 1
    //obj->CopPtr = *(struct CopIns **)luaL_checkudata(L, 3, "CopIns");
    obj->CopPtr = (struct CopIns *)_lua_gen_checkCopIns(L, 3);
    return 0;
  }
  if (strcmp(key, "CopLStart") == 0) {
    obj->CopLStart = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "CopSStart") == 0) {
    obj->CopSStart = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Count") == 0) {
    obj->Count = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxCount") == 0) {
    obj->MaxCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DyOffset") == 0) {
    obj->DyOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SLRepeat") == 0) {
    obj->SLRepeat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_CopList_constructor(lua_State *L)
{
  // Allocate pointer-to-struct CopList in userdata
  struct CopList **objp = lua_newuserdata(L, sizeof(struct CopList *));
  *objp = malloc(sizeof(struct CopList));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct CopList));

  // Set metatable
  luaL_getmetatable(L, "CopList");
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
_lua_gen_CopList_index(lua_State *L)
{
  struct CopList *obj = *(struct CopList **)luaL_checkudata(L, 1, "CopList");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->Next;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "_CopList") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->_CopList;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "_ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->_ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CopIns") == 0) {
    struct CopIns **ud = (struct CopIns **)lua_newuserdata(L, sizeof(struct CopIns *));
    *ud = (struct CopIns*)obj->CopIns;
    luaL_getmetatable(L, "CopIns");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CopPtr") == 0) {
    struct CopIns **ud = (struct CopIns **)lua_newuserdata(L, sizeof(struct CopIns *));
    *ud = (struct CopIns*)obj->CopPtr;
    luaL_getmetatable(L, "CopIns");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CopLStart") == 0) {
    lua_pushlightuserdata(L, obj->CopLStart);
    return 1;
  }
  if (strcmp(key, "CopSStart") == 0) {
    lua_pushlightuserdata(L, obj->CopSStart);
    return 1;
  }
  if (strcmp(key, "Count") == 0) {
    lua_pushinteger(L, obj->Count);
    return 1;
  }
  if (strcmp(key, "MaxCount") == 0) {
    lua_pushinteger(L, obj->MaxCount);
    return 1;
  }
  if (strcmp(key, "DyOffset") == 0) {
    lua_pushinteger(L, obj->DyOffset);
    return 1;
  }
  if (strcmp(key, "SLRepeat") == 0) {
    lua_pushinteger(L, obj->SLRepeat);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct CopList));
    return 1;
}

  return 0;
}

static void
_lua_gen_CopList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "CopLStart");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "CopSStart");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Count");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "MaxCount");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "DyOffset");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "SLRepeat");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 7);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_CopList(lua_State *L) {
  if (luaL_newmetatable(L, "CopList")) {
    lua_pushcfunction(L, _lua_gen_CopList_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_CopList_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_CopList_constructor);
    lua_setglobal(L, "CopList");
    _lua_gen_CopList_install_keys(L);
    lua_pushstring(L, "CopList");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_cprlist_newindex(lua_State *L)
{
  struct cprlist *obj = *(struct cprlist **)luaL_checkudata(L, 1, "cprlist");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Next") == 0) {
    // finder 1
    //obj->Next = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
    obj->Next = (struct cprlist *)_lua_gen_checkcprlist(L, 3);
    return 0;
  }
  if (strcmp(key, "start") == 0) {
    obj->start = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxCount") == 0) {
    obj->MaxCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_cprlist_constructor(lua_State *L)
{
  // Allocate pointer-to-struct cprlist in userdata
  struct cprlist **objp = lua_newuserdata(L, sizeof(struct cprlist *));
  *objp = malloc(sizeof(struct cprlist));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct cprlist));

  // Set metatable
  luaL_getmetatable(L, "cprlist");
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
_lua_gen_cprlist_index(lua_State *L)
{
  struct cprlist *obj = *(struct cprlist **)luaL_checkudata(L, 1, "cprlist");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct cprlist **ud = (struct cprlist **)lua_newuserdata(L, sizeof(struct cprlist *));
    *ud = (struct cprlist*)obj->Next;
    luaL_getmetatable(L, "cprlist");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "start") == 0) {
    lua_pushlightuserdata(L, obj->start);
    return 1;
  }
  if (strcmp(key, "MaxCount") == 0) {
    lua_pushinteger(L, obj->MaxCount);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct cprlist));
    return 1;
}

  return 0;
}

static void
_lua_gen_cprlist_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "start");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "MaxCount");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_cprlist(lua_State *L) {
  if (luaL_newmetatable(L, "cprlist")) {
    lua_pushcfunction(L, _lua_gen_cprlist_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_cprlist_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_cprlist_constructor);
    lua_setglobal(L, "cprlist");
    _lua_gen_cprlist_install_keys(L);
    lua_pushstring(L, "cprlist");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ViewPort_newindex(lua_State *L)
{
  struct ViewPort *obj = *(struct ViewPort **)luaL_checkudata(L, 1, "ViewPort");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Next") == 0) {
    // finder 1
    //obj->Next = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->Next = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "ColorMap") == 0) {
    // finder 1
    //obj->ColorMap = *(struct ColorMap **)luaL_checkudata(L, 3, "ColorMap");
    obj->ColorMap = (struct ColorMap *)_lua_gen_checkColorMap(L, 3);
    return 0;
  }
  if (strcmp(key, "DspIns") == 0) {
    // finder 1
    //obj->DspIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->DspIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "SprIns") == 0) {
    // finder 1
    //obj->SprIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->SprIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "ClrIns") == 0) {
    // finder 1
    //obj->ClrIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->ClrIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "UCopIns") == 0) {
    obj->UCopIns = (struct UCopList *)lua_touserdata(L, 3);
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
  // Unsupported type RasInfo struct RasInfo
  if (strcmp(key, "RasInfo") == 0) {
    return luaL_error(L, "Unsupported type struct RasInfo for field RasInfo");
  }
  return 0;
}


static int
_lua_ViewPort_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ViewPort in userdata
  struct ViewPort **objp = lua_newuserdata(L, sizeof(struct ViewPort *));
  *objp = malloc(sizeof(struct ViewPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ViewPort));

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
  struct ViewPort *obj = *(struct ViewPort **)luaL_checkudata(L, 1, "ViewPort");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->Next;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ColorMap") == 0) {
    struct ColorMap **ud = (struct ColorMap **)lua_newuserdata(L, sizeof(struct ColorMap *));
    *ud = (struct ColorMap*)obj->ColorMap;
    luaL_getmetatable(L, "ColorMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DspIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->DspIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SprIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->SprIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ClrIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->ClrIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "UCopIns") == 0) {
    lua_pushlightuserdata(L, obj->UCopIns);
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
  // Unsupported RasInfo struct RasInfo *
  if (strcmp(key, "RasInfo") == 0) {
    return luaL_error(L, "Unsupported type struct RasInfo * for field RasInfo");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ViewPort));
    return 1;
}

  return 0;
}

static void
_lua_gen_ViewPort_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "DWidth");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "DHeight");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "DxOffset");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "DyOffset");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Modes");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "SpritePriorities");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ExtendedModes");
  lua_rawseti(L, -2, 7);
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

typedef struct {
  UWORD* data;
  uint16_t count;
} lua_gen_wrapped_UWORD_array_data_t;

static int _lua_gen_wrapped_UWORD_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_UWORD_array_data_t* wrapper = luaL_checkudata(L, 1, "UWORD_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_UWORD_array_index(lua_State* L)
{
  lua_gen_wrapped_UWORD_array_data_t* wrapper = luaL_checkudata(L, 1, "UWORD_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushinteger(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_UWORD_array_newindex(lua_State* L)
{
  lua_gen_wrapped_UWORD_array_data_t* wrapper = luaL_checkudata(L, 1, "UWORD_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  UWORD value = luaL_checkinteger(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_UWORD_array_proxy(lua_State *L,  UWORD *array, int count)
{

  lua_gen_wrapped_UWORD_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_UWORD_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "UWORD_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_UWORD_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_UWORD_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_UWORD_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
static int
_lua_gen_copinit_newindex(lua_State *L)
{
  struct copinit *obj = *(struct copinit **)luaL_checkudata(L, 1, "copinit");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  // vsync_hblank[2] proxied via the index
  // diagstrt[12] proxied via the index
  // fm0[2] proxied via the index
  // diwstart[10] proxied via the index
  // bplcon2[2] proxied via the index
  // sprfix[16] proxied via the index
  // sprstrtup[32] proxied via the index
  // wait14[2] proxied via the index
  // norm_hblank[2] proxied via the index
  // jump[2] proxied via the index
  // wait_forever[6] proxied via the index
  // sprstop[8] proxied via the index
  return 0;
}


static int
_lua_copinit_constructor(lua_State *L)
{
  // Allocate pointer-to-struct copinit in userdata
  struct copinit **objp = lua_newuserdata(L, sizeof(struct copinit *));
  *objp = malloc(sizeof(struct copinit));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct copinit));

  // Set metatable
  luaL_getmetatable(L, "copinit");
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
_lua_gen_copinit_index(lua_State *L)
{
  struct copinit *obj = *(struct copinit **)luaL_checkudata(L, 1, "copinit");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "vsync_hblank") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->vsync_hblank, 2);
    return 1;
  }
  if (strcmp(key, "diagstrt") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->diagstrt, 12);
    return 1;
  }
  if (strcmp(key, "fm0") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->fm0, 2);
    return 1;
  }
  if (strcmp(key, "diwstart") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->diwstart, 10);
    return 1;
  }
  if (strcmp(key, "bplcon2") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->bplcon2, 2);
    return 1;
  }
  if (strcmp(key, "sprfix") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->sprfix, 16);
    return 1;
  }
  if (strcmp(key, "sprstrtup") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->sprstrtup, 32);
    return 1;
  }
  if (strcmp(key, "wait14") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->wait14, 2);
    return 1;
  }
  if (strcmp(key, "norm_hblank") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->norm_hblank, 2);
    return 1;
  }
  if (strcmp(key, "jump") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->jump, 2);
    return 1;
  }
  if (strcmp(key, "wait_forever") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->wait_forever, 6);
    return 1;
  }
  if (strcmp(key, "sprstop") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->sprstop, 8);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct copinit));
    return 1;
}

  return 0;
}

static void
_lua_gen_copinit_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "vsync_hblank");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "diagstrt");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "fm0");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "diwstart");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "bplcon2");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "sprfix");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "sprstrtup");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "wait14");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "norm_hblank");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "jump");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "wait_forever");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "sprstop");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_copinit(lua_State *L) {
  if (luaL_newmetatable(L, "copinit")) {
    lua_pushcfunction(L, _lua_gen_copinit_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_copinit_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_copinit_constructor);
    lua_setglobal(L, "copinit");
    _lua_gen_copinit_install_keys(L);
    lua_pushstring(L, "copinit");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_View_newindex(lua_State *L)
{
  struct View *obj = *(struct View **)luaL_checkudata(L, 1, "View");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ViewPort") == 0) {
    // finder 1
    //obj->ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "LOFCprList") == 0) {
    // finder 1
    //obj->LOFCprList = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
    obj->LOFCprList = (struct cprlist *)_lua_gen_checkcprlist(L, 3);
    return 0;
  }
  if (strcmp(key, "SHFCprList") == 0) {
    // finder 1
    //obj->SHFCprList = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
    obj->SHFCprList = (struct cprlist *)_lua_gen_checkcprlist(L, 3);
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
  // Allocate pointer-to-struct View in userdata
  struct View **objp = lua_newuserdata(L, sizeof(struct View *));
  *objp = malloc(sizeof(struct View));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct View));

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
  struct View *obj = *(struct View **)luaL_checkudata(L, 1, "View");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LOFCprList") == 0) {
    struct cprlist **ud = (struct cprlist **)lua_newuserdata(L, sizeof(struct cprlist *));
    *ud = (struct cprlist*)obj->LOFCprList;
    luaL_getmetatable(L, "cprlist");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SHFCprList") == 0) {
    struct cprlist **ud = (struct cprlist **)lua_newuserdata(L, sizeof(struct cprlist *));
    *ud = (struct cprlist*)obj->SHFCprList;
    luaL_getmetatable(L, "cprlist");
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct View));
    return 1;
}

  return 0;
}

static void
_lua_gen_View_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "DyOffset");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "DxOffset");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Modes");
  lua_rawseti(L, -2, 3);
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

typedef struct {
  APTR* data;
  uint16_t count;
} lua_gen_wrapped_APTR_array_data_t;

static int _lua_gen_wrapped_APTR_array_ptr_method(lua_State* L) {
    lua_gen_wrapped_APTR_array_data_t* wrapper = luaL_checkudata(L, 1, "APTR_array_proxy");
    int index = luaL_checkinteger(L, 2);
    void* ptr = &wrapper->data[index - 1];
    lua_pushlightuserdata(L, ptr);
    return 1;
}
static int
_lua_gen_wrapped_APTR_array_index(lua_State* L)
{
  lua_gen_wrapped_APTR_array_data_t* wrapper = luaL_checkudata(L, 1, "APTR_array_proxy");
  if (lua_isinteger(L, 2)) {
    int index = lua_tointeger(L, 2);
    if (index < 1 || index > wrapper->count)
      return luaL_error(L, "index out of range (1..%d)", wrapper->count);
    lua_pushlightuserdata(L, wrapper->data[index - 1]);
    return 1;
  }

  // Not a numeric key? Try methods
  lua_getmetatable(L, 1);
  lua_getfield(L, -1, "__methods");
  lua_pushvalue(L, 2);
  lua_gettable(L, -2);
  return 1;
}

static int
_lua_gen_wrapped_APTR_array_newindex(lua_State* L)
{
  lua_gen_wrapped_APTR_array_data_t* wrapper = luaL_checkudata(L, 1, "APTR_array_proxy");
  if (!lua_isinteger(L, 2))
    return luaL_error(L, "only integer indices allowed");
  int index = lua_tointeger(L, 2);
  if (index < 1 || index > wrapper->count)
    return luaL_error(L, "index out of range (1..%d)", wrapper->count);
  APTR value = lua_touserdata(L,  3);
  wrapper->data[index - 1] = value;
  return 0;
}

static void
_lua_gen_push_APTR_array_proxy(lua_State *L,  APTR *array, int count)
{

  lua_gen_wrapped_APTR_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_APTR_array_data_t));
  wrapper->data = array;
  wrapper->count = count;

  if (luaL_newmetatable(L, "APTR_array_proxy")) {
    // Create method table
    lua_newtable(L);
    lua_pushcfunction(L, _lua_gen_wrapped_APTR_array_ptr_method);
    lua_setfield(L, -2, "ptr");
    lua_setfield(L, -2, "__methods");

    // __index handles both numeric and method lookup
    lua_pushcfunction(L, _lua_gen_wrapped_APTR_array_index);
    lua_setfield(L, -2, "__index");

    // __newindex for writing
    lua_pushcfunction(L, _lua_gen_wrapped_APTR_array_newindex);
    lua_setfield(L, -2, "__newindex");
  }

  lua_setmetatable(L, -2);  // assign to userdata

}
static int
_lua_gen_Custom_newindex(lua_State *L)
{
  struct Custom *obj = *(struct Custom **)luaL_checkudata(L, 1, "Custom");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "bltddat") == 0) {
    obj->bltddat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dmaconr") == 0) {
    obj->dmaconr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vposr") == 0) {
    obj->vposr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vhposr") == 0) {
    obj->vhposr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dskdatr") == 0) {
    obj->dskdatr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "joy0dat") == 0) {
    obj->joy0dat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "joy1dat") == 0) {
    obj->joy1dat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "clxdat") == 0) {
    obj->clxdat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "adkconr") == 0) {
    obj->adkconr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pot0dat") == 0) {
    obj->pot0dat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pot1dat") == 0) {
    obj->pot1dat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "potinp") == 0) {
    obj->potinp = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "serdatr") == 0) {
    obj->serdatr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dskbytr") == 0) {
    obj->dskbytr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "intenar") == 0) {
    obj->intenar = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "intreqr") == 0) {
    obj->intreqr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dskpt") == 0) {
    obj->dskpt = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dsklen") == 0) {
    obj->dsklen = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dskdat") == 0) {
    obj->dskdat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "refptr") == 0) {
    obj->refptr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vposw") == 0) {
    obj->vposw = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vhposw") == 0) {
    obj->vhposw = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "copcon") == 0) {
    obj->copcon = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "serdat") == 0) {
    obj->serdat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "serper") == 0) {
    obj->serper = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "potgo") == 0) {
    obj->potgo = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "joytest") == 0) {
    obj->joytest = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "strequ") == 0) {
    obj->strequ = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "strvbl") == 0) {
    obj->strvbl = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "strhor") == 0) {
    obj->strhor = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "strlong") == 0) {
    obj->strlong = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltcon0") == 0) {
    obj->bltcon0 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltcon1") == 0) {
    obj->bltcon1 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltafwm") == 0) {
    obj->bltafwm = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltalwm") == 0) {
    obj->bltalwm = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltcpt") == 0) {
    obj->bltcpt = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "bltbpt") == 0) {
    obj->bltbpt = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "bltapt") == 0) {
    obj->bltapt = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "bltdpt") == 0) {
    obj->bltdpt = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsize") == 0) {
    obj->bltsize = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pad2d") == 0) {
    obj->pad2d = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltcon0l") == 0) {
    obj->bltcon0l = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsizv") == 0) {
    obj->bltsizv = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltsizh") == 0) {
    obj->bltsizh = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltcmod") == 0) {
    obj->bltcmod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltbmod") == 0) {
    obj->bltbmod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltamod") == 0) {
    obj->bltamod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltdmod") == 0) {
    obj->bltdmod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // pad34[4] proxied via the index
  if (strcmp(key, "bltcdat") == 0) {
    obj->bltcdat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltbdat") == 0) {
    obj->bltbdat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bltadat") == 0) {
    obj->bltadat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // pad3b[3] proxied via the index
  if (strcmp(key, "deniseid") == 0) {
    obj->deniseid = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dsksync") == 0) {
    obj->dsksync = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cop1lc") == 0) {
    obj->cop1lc = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cop2lc") == 0) {
    obj->cop2lc = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "copjmp1") == 0) {
    obj->copjmp1 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "copjmp2") == 0) {
    obj->copjmp2 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "copins") == 0) {
    obj->copins = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "diwstrt") == 0) {
    obj->diwstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "diwstop") == 0) {
    obj->diwstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ddfstrt") == 0) {
    obj->ddfstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ddfstop") == 0) {
    obj->ddfstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dmacon") == 0) {
    obj->dmacon = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "clxcon") == 0) {
    obj->clxcon = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "intena") == 0) {
    obj->intena = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "intreq") == 0) {
    obj->intreq = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "adkcon") == 0) {
    obj->adkcon = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // aud[4] proxied via the index
  // bplpt[8] proxied via the index
  if (strcmp(key, "bplcon0") == 0) {
    obj->bplcon0 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplcon1") == 0) {
    obj->bplcon1 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplcon2") == 0) {
    obj->bplcon2 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplcon3") == 0) {
    obj->bplcon3 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bpl1mod") == 0) {
    obj->bpl1mod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bpl2mod") == 0) {
    obj->bpl2mod = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplcon4") == 0) {
    obj->bplcon4 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "clxcon2") == 0) {
    obj->clxcon2 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // bpldat[8] proxied via the index
  // sprpt[8] proxied via the index
  // spr[8] proxied via the index
  // color[32] proxied via the index
  if (strcmp(key, "htotal") == 0) {
    obj->htotal = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hsstop") == 0) {
    obj->hsstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hbstrt") == 0) {
    obj->hbstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hbstop") == 0) {
    obj->hbstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vtotal") == 0) {
    obj->vtotal = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vsstop") == 0) {
    obj->vsstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vbstrt") == 0) {
    obj->vbstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vbstop") == 0) {
    obj->vbstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "sprhstrt") == 0) {
    obj->sprhstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "sprhstop") == 0) {
    obj->sprhstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplhstrt") == 0) {
    obj->bplhstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bplhstop") == 0) {
    obj->bplhstop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hhposw") == 0) {
    obj->hhposw = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hhposr") == 0) {
    obj->hhposr = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "beamcon0") == 0) {
    obj->beamcon0 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hsstrt") == 0) {
    obj->hsstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vsstrt") == 0) {
    obj->vsstrt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hcenter") == 0) {
    obj->hcenter = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "diwhigh") == 0) {
    obj->diwhigh = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // padf3[11] proxied via the index
  if (strcmp(key, "fmode") == 0) {
    obj->fmode = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Custom_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Custom in userdata
  struct Custom **objp = lua_newuserdata(L, sizeof(struct Custom *));
  *objp = malloc(sizeof(struct Custom));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Custom));

  // Set metatable
  luaL_getmetatable(L, "Custom");
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
_lua_gen_Custom_index(lua_State *L)
{
  struct Custom *obj = *(struct Custom **)luaL_checkudata(L, 1, "Custom");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "bltddat") == 0) {
    lua_pushinteger(L, obj->bltddat);
    return 1;
  }
  if (strcmp(key, "dmaconr") == 0) {
    lua_pushinteger(L, obj->dmaconr);
    return 1;
  }
  if (strcmp(key, "vposr") == 0) {
    lua_pushinteger(L, obj->vposr);
    return 1;
  }
  if (strcmp(key, "vhposr") == 0) {
    lua_pushinteger(L, obj->vhposr);
    return 1;
  }
  if (strcmp(key, "dskdatr") == 0) {
    lua_pushinteger(L, obj->dskdatr);
    return 1;
  }
  if (strcmp(key, "joy0dat") == 0) {
    lua_pushinteger(L, obj->joy0dat);
    return 1;
  }
  if (strcmp(key, "joy1dat") == 0) {
    lua_pushinteger(L, obj->joy1dat);
    return 1;
  }
  if (strcmp(key, "clxdat") == 0) {
    lua_pushinteger(L, obj->clxdat);
    return 1;
  }
  if (strcmp(key, "adkconr") == 0) {
    lua_pushinteger(L, obj->adkconr);
    return 1;
  }
  if (strcmp(key, "pot0dat") == 0) {
    lua_pushinteger(L, obj->pot0dat);
    return 1;
  }
  if (strcmp(key, "pot1dat") == 0) {
    lua_pushinteger(L, obj->pot1dat);
    return 1;
  }
  if (strcmp(key, "potinp") == 0) {
    lua_pushinteger(L, obj->potinp);
    return 1;
  }
  if (strcmp(key, "serdatr") == 0) {
    lua_pushinteger(L, obj->serdatr);
    return 1;
  }
  if (strcmp(key, "dskbytr") == 0) {
    lua_pushinteger(L, obj->dskbytr);
    return 1;
  }
  if (strcmp(key, "intenar") == 0) {
    lua_pushinteger(L, obj->intenar);
    return 1;
  }
  if (strcmp(key, "intreqr") == 0) {
    lua_pushinteger(L, obj->intreqr);
    return 1;
  }
  if (strcmp(key, "dskpt") == 0) {
    lua_pushlightuserdata(L, obj->dskpt);
    return 1;
  }
  if (strcmp(key, "dsklen") == 0) {
    lua_pushinteger(L, obj->dsklen);
    return 1;
  }
  if (strcmp(key, "dskdat") == 0) {
    lua_pushinteger(L, obj->dskdat);
    return 1;
  }
  if (strcmp(key, "refptr") == 0) {
    lua_pushinteger(L, obj->refptr);
    return 1;
  }
  if (strcmp(key, "vposw") == 0) {
    lua_pushinteger(L, obj->vposw);
    return 1;
  }
  if (strcmp(key, "vhposw") == 0) {
    lua_pushinteger(L, obj->vhposw);
    return 1;
  }
  if (strcmp(key, "copcon") == 0) {
    lua_pushinteger(L, obj->copcon);
    return 1;
  }
  if (strcmp(key, "serdat") == 0) {
    lua_pushinteger(L, obj->serdat);
    return 1;
  }
  if (strcmp(key, "serper") == 0) {
    lua_pushinteger(L, obj->serper);
    return 1;
  }
  if (strcmp(key, "potgo") == 0) {
    lua_pushinteger(L, obj->potgo);
    return 1;
  }
  if (strcmp(key, "joytest") == 0) {
    lua_pushinteger(L, obj->joytest);
    return 1;
  }
  if (strcmp(key, "strequ") == 0) {
    lua_pushinteger(L, obj->strequ);
    return 1;
  }
  if (strcmp(key, "strvbl") == 0) {
    lua_pushinteger(L, obj->strvbl);
    return 1;
  }
  if (strcmp(key, "strhor") == 0) {
    lua_pushinteger(L, obj->strhor);
    return 1;
  }
  if (strcmp(key, "strlong") == 0) {
    lua_pushinteger(L, obj->strlong);
    return 1;
  }
  if (strcmp(key, "bltcon0") == 0) {
    lua_pushinteger(L, obj->bltcon0);
    return 1;
  }
  if (strcmp(key, "bltcon1") == 0) {
    lua_pushinteger(L, obj->bltcon1);
    return 1;
  }
  if (strcmp(key, "bltafwm") == 0) {
    lua_pushinteger(L, obj->bltafwm);
    return 1;
  }
  if (strcmp(key, "bltalwm") == 0) {
    lua_pushinteger(L, obj->bltalwm);
    return 1;
  }
  if (strcmp(key, "bltcpt") == 0) {
    lua_pushlightuserdata(L, obj->bltcpt);
    return 1;
  }
  if (strcmp(key, "bltbpt") == 0) {
    lua_pushlightuserdata(L, obj->bltbpt);
    return 1;
  }
  if (strcmp(key, "bltapt") == 0) {
    lua_pushlightuserdata(L, obj->bltapt);
    return 1;
  }
  if (strcmp(key, "bltdpt") == 0) {
    lua_pushlightuserdata(L, obj->bltdpt);
    return 1;
  }
  if (strcmp(key, "bltsize") == 0) {
    lua_pushinteger(L, obj->bltsize);
    return 1;
  }
  if (strcmp(key, "pad2d") == 0) {
    lua_pushinteger(L, obj->pad2d);
    return 1;
  }
  if (strcmp(key, "bltcon0l") == 0) {
    lua_pushinteger(L, obj->bltcon0l);
    return 1;
  }
  if (strcmp(key, "bltsizv") == 0) {
    lua_pushinteger(L, obj->bltsizv);
    return 1;
  }
  if (strcmp(key, "bltsizh") == 0) {
    lua_pushinteger(L, obj->bltsizh);
    return 1;
  }
  if (strcmp(key, "bltcmod") == 0) {
    lua_pushinteger(L, obj->bltcmod);
    return 1;
  }
  if (strcmp(key, "bltbmod") == 0) {
    lua_pushinteger(L, obj->bltbmod);
    return 1;
  }
  if (strcmp(key, "bltamod") == 0) {
    lua_pushinteger(L, obj->bltamod);
    return 1;
  }
  if (strcmp(key, "bltdmod") == 0) {
    lua_pushinteger(L, obj->bltdmod);
    return 1;
  }
  if (strcmp(key, "pad34") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->pad34, 4);
    return 1;
  }
  if (strcmp(key, "bltcdat") == 0) {
    lua_pushinteger(L, obj->bltcdat);
    return 1;
  }
  if (strcmp(key, "bltbdat") == 0) {
    lua_pushinteger(L, obj->bltbdat);
    return 1;
  }
  if (strcmp(key, "bltadat") == 0) {
    lua_pushinteger(L, obj->bltadat);
    return 1;
  }
  if (strcmp(key, "pad3b") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->pad3b, 3);
    return 1;
  }
  if (strcmp(key, "deniseid") == 0) {
    lua_pushinteger(L, obj->deniseid);
    return 1;
  }
  if (strcmp(key, "dsksync") == 0) {
    lua_pushinteger(L, obj->dsksync);
    return 1;
  }
  if (strcmp(key, "cop1lc") == 0) {
    lua_pushinteger(L, obj->cop1lc);
    return 1;
  }
  if (strcmp(key, "cop2lc") == 0) {
    lua_pushinteger(L, obj->cop2lc);
    return 1;
  }
  if (strcmp(key, "copjmp1") == 0) {
    lua_pushinteger(L, obj->copjmp1);
    return 1;
  }
  if (strcmp(key, "copjmp2") == 0) {
    lua_pushinteger(L, obj->copjmp2);
    return 1;
  }
  if (strcmp(key, "copins") == 0) {
    lua_pushinteger(L, obj->copins);
    return 1;
  }
  if (strcmp(key, "diwstrt") == 0) {
    lua_pushinteger(L, obj->diwstrt);
    return 1;
  }
  if (strcmp(key, "diwstop") == 0) {
    lua_pushinteger(L, obj->diwstop);
    return 1;
  }
  if (strcmp(key, "ddfstrt") == 0) {
    lua_pushinteger(L, obj->ddfstrt);
    return 1;
  }
  if (strcmp(key, "ddfstop") == 0) {
    lua_pushinteger(L, obj->ddfstop);
    return 1;
  }
  if (strcmp(key, "dmacon") == 0) {
    lua_pushinteger(L, obj->dmacon);
    return 1;
  }
  if (strcmp(key, "clxcon") == 0) {
    lua_pushinteger(L, obj->clxcon);
    return 1;
  }
  if (strcmp(key, "intena") == 0) {
    lua_pushinteger(L, obj->intena);
    return 1;
  }
  if (strcmp(key, "intreq") == 0) {
    lua_pushinteger(L, obj->intreq);
    return 1;
  }
  if (strcmp(key, "adkcon") == 0) {
    lua_pushinteger(L, obj->adkcon);
    return 1;
  }
  if (strcmp(key, "aud") == 0) {
     return luaL_error(L, "Unsupported array type struct AudChannel");
  }
  if (strcmp(key, "bplpt") == 0) {
    _lua_gen_push_APTR_array_proxy(L, obj->bplpt, 8);
    return 1;
  }
  if (strcmp(key, "bplcon0") == 0) {
    lua_pushinteger(L, obj->bplcon0);
    return 1;
  }
  if (strcmp(key, "bplcon1") == 0) {
    lua_pushinteger(L, obj->bplcon1);
    return 1;
  }
  if (strcmp(key, "bplcon2") == 0) {
    lua_pushinteger(L, obj->bplcon2);
    return 1;
  }
  if (strcmp(key, "bplcon3") == 0) {
    lua_pushinteger(L, obj->bplcon3);
    return 1;
  }
  if (strcmp(key, "bpl1mod") == 0) {
    lua_pushinteger(L, obj->bpl1mod);
    return 1;
  }
  if (strcmp(key, "bpl2mod") == 0) {
    lua_pushinteger(L, obj->bpl2mod);
    return 1;
  }
  if (strcmp(key, "bplcon4") == 0) {
    lua_pushinteger(L, obj->bplcon4);
    return 1;
  }
  if (strcmp(key, "clxcon2") == 0) {
    lua_pushinteger(L, obj->clxcon2);
    return 1;
  }
  if (strcmp(key, "bpldat") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->bpldat, 8);
    return 1;
  }
  if (strcmp(key, "sprpt") == 0) {
    _lua_gen_push_APTR_array_proxy(L, obj->sprpt, 8);
    return 1;
  }
  if (strcmp(key, "spr") == 0) {
     return luaL_error(L, "Unsupported array type struct SpriteDef");
  }
  if (strcmp(key, "color") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->color, 32);
    return 1;
  }
  if (strcmp(key, "htotal") == 0) {
    lua_pushinteger(L, obj->htotal);
    return 1;
  }
  if (strcmp(key, "hsstop") == 0) {
    lua_pushinteger(L, obj->hsstop);
    return 1;
  }
  if (strcmp(key, "hbstrt") == 0) {
    lua_pushinteger(L, obj->hbstrt);
    return 1;
  }
  if (strcmp(key, "hbstop") == 0) {
    lua_pushinteger(L, obj->hbstop);
    return 1;
  }
  if (strcmp(key, "vtotal") == 0) {
    lua_pushinteger(L, obj->vtotal);
    return 1;
  }
  if (strcmp(key, "vsstop") == 0) {
    lua_pushinteger(L, obj->vsstop);
    return 1;
  }
  if (strcmp(key, "vbstrt") == 0) {
    lua_pushinteger(L, obj->vbstrt);
    return 1;
  }
  if (strcmp(key, "vbstop") == 0) {
    lua_pushinteger(L, obj->vbstop);
    return 1;
  }
  if (strcmp(key, "sprhstrt") == 0) {
    lua_pushinteger(L, obj->sprhstrt);
    return 1;
  }
  if (strcmp(key, "sprhstop") == 0) {
    lua_pushinteger(L, obj->sprhstop);
    return 1;
  }
  if (strcmp(key, "bplhstrt") == 0) {
    lua_pushinteger(L, obj->bplhstrt);
    return 1;
  }
  if (strcmp(key, "bplhstop") == 0) {
    lua_pushinteger(L, obj->bplhstop);
    return 1;
  }
  if (strcmp(key, "hhposw") == 0) {
    lua_pushinteger(L, obj->hhposw);
    return 1;
  }
  if (strcmp(key, "hhposr") == 0) {
    lua_pushinteger(L, obj->hhposr);
    return 1;
  }
  if (strcmp(key, "beamcon0") == 0) {
    lua_pushinteger(L, obj->beamcon0);
    return 1;
  }
  if (strcmp(key, "hsstrt") == 0) {
    lua_pushinteger(L, obj->hsstrt);
    return 1;
  }
  if (strcmp(key, "vsstrt") == 0) {
    lua_pushinteger(L, obj->vsstrt);
    return 1;
  }
  if (strcmp(key, "hcenter") == 0) {
    lua_pushinteger(L, obj->hcenter);
    return 1;
  }
  if (strcmp(key, "diwhigh") == 0) {
    lua_pushinteger(L, obj->diwhigh);
    return 1;
  }
  if (strcmp(key, "padf3") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->padf3, 11);
    return 1;
  }
  if (strcmp(key, "fmode") == 0) {
    lua_pushinteger(L, obj->fmode);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Custom));
    return 1;
}

  return 0;
}

static void
_lua_gen_Custom_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bltddat");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dmaconr");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "vposr");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "vhposr");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dskdatr");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "joy0dat");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "joy1dat");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "clxdat");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "adkconr");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "pot0dat");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "pot1dat");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "potinp");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "serdatr");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "dskbytr");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "intenar");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "intreqr");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "dskpt");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "dsklen");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "dskdat");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "refptr");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "vposw");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "vhposw");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "copcon");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "serdat");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "serper");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "potgo");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "joytest");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "strequ");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "strvbl");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "strhor");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "strlong");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "bltcon0");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "bltcon1");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "bltafwm");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "bltalwm");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "bltcpt");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "bltbpt");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "bltapt");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "bltdpt");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "bltsize");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "pad2d");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "bltcon0l");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "bltsizv");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "bltsizh");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "bltcmod");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "bltbmod");
  lua_rawseti(L, -2, 46);
  lua_pushstring(L, "bltamod");
  lua_rawseti(L, -2, 47);
  lua_pushstring(L, "bltdmod");
  lua_rawseti(L, -2, 48);
  lua_pushstring(L, "pad34");
  lua_rawseti(L, -2, 49);
  lua_pushstring(L, "bltcdat");
  lua_rawseti(L, -2, 50);
  lua_pushstring(L, "bltbdat");
  lua_rawseti(L, -2, 51);
  lua_pushstring(L, "bltadat");
  lua_rawseti(L, -2, 52);
  lua_pushstring(L, "pad3b");
  lua_rawseti(L, -2, 53);
  lua_pushstring(L, "deniseid");
  lua_rawseti(L, -2, 54);
  lua_pushstring(L, "dsksync");
  lua_rawseti(L, -2, 55);
  lua_pushstring(L, "cop1lc");
  lua_rawseti(L, -2, 56);
  lua_pushstring(L, "cop2lc");
  lua_rawseti(L, -2, 57);
  lua_pushstring(L, "copjmp1");
  lua_rawseti(L, -2, 58);
  lua_pushstring(L, "copjmp2");
  lua_rawseti(L, -2, 59);
  lua_pushstring(L, "copins");
  lua_rawseti(L, -2, 60);
  lua_pushstring(L, "diwstrt");
  lua_rawseti(L, -2, 61);
  lua_pushstring(L, "diwstop");
  lua_rawseti(L, -2, 62);
  lua_pushstring(L, "ddfstrt");
  lua_rawseti(L, -2, 63);
  lua_pushstring(L, "ddfstop");
  lua_rawseti(L, -2, 64);
  lua_pushstring(L, "dmacon");
  lua_rawseti(L, -2, 65);
  lua_pushstring(L, "clxcon");
  lua_rawseti(L, -2, 66);
  lua_pushstring(L, "intena");
  lua_rawseti(L, -2, 67);
  lua_pushstring(L, "intreq");
  lua_rawseti(L, -2, 68);
  lua_pushstring(L, "adkcon");
  lua_rawseti(L, -2, 69);
  lua_pushstring(L, "bplpt");
  lua_rawseti(L, -2, 70);
  lua_pushstring(L, "bplcon0");
  lua_rawseti(L, -2, 71);
  lua_pushstring(L, "bplcon1");
  lua_rawseti(L, -2, 72);
  lua_pushstring(L, "bplcon2");
  lua_rawseti(L, -2, 73);
  lua_pushstring(L, "bplcon3");
  lua_rawseti(L, -2, 74);
  lua_pushstring(L, "bpl1mod");
  lua_rawseti(L, -2, 75);
  lua_pushstring(L, "bpl2mod");
  lua_rawseti(L, -2, 76);
  lua_pushstring(L, "bplcon4");
  lua_rawseti(L, -2, 77);
  lua_pushstring(L, "clxcon2");
  lua_rawseti(L, -2, 78);
  lua_pushstring(L, "bpldat");
  lua_rawseti(L, -2, 79);
  lua_pushstring(L, "sprpt");
  lua_rawseti(L, -2, 80);
  lua_pushstring(L, "color");
  lua_rawseti(L, -2, 81);
  lua_pushstring(L, "htotal");
  lua_rawseti(L, -2, 82);
  lua_pushstring(L, "hsstop");
  lua_rawseti(L, -2, 83);
  lua_pushstring(L, "hbstrt");
  lua_rawseti(L, -2, 84);
  lua_pushstring(L, "hbstop");
  lua_rawseti(L, -2, 85);
  lua_pushstring(L, "vtotal");
  lua_rawseti(L, -2, 86);
  lua_pushstring(L, "vsstop");
  lua_rawseti(L, -2, 87);
  lua_pushstring(L, "vbstrt");
  lua_rawseti(L, -2, 88);
  lua_pushstring(L, "vbstop");
  lua_rawseti(L, -2, 89);
  lua_pushstring(L, "sprhstrt");
  lua_rawseti(L, -2, 90);
  lua_pushstring(L, "sprhstop");
  lua_rawseti(L, -2, 91);
  lua_pushstring(L, "bplhstrt");
  lua_rawseti(L, -2, 92);
  lua_pushstring(L, "bplhstop");
  lua_rawseti(L, -2, 93);
  lua_pushstring(L, "hhposw");
  lua_rawseti(L, -2, 94);
  lua_pushstring(L, "hhposr");
  lua_rawseti(L, -2, 95);
  lua_pushstring(L, "beamcon0");
  lua_rawseti(L, -2, 96);
  lua_pushstring(L, "hsstrt");
  lua_rawseti(L, -2, 97);
  lua_pushstring(L, "vsstrt");
  lua_rawseti(L, -2, 98);
  lua_pushstring(L, "hcenter");
  lua_rawseti(L, -2, 99);
  lua_pushstring(L, "diwhigh");
  lua_rawseti(L, -2, 100);
  lua_pushstring(L, "padf3");
  lua_rawseti(L, -2, 101);
  lua_pushstring(L, "fmode");
  lua_rawseti(L, -2, 102);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Custom(lua_State *L) {
  if (luaL_newmetatable(L, "Custom")) {
    lua_pushcfunction(L, _lua_gen_Custom_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Custom_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Custom_constructor);
    lua_setglobal(L, "Custom");
    _lua_gen_Custom_install_keys(L);
    lua_pushstring(L, "Custom");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AudChannel_newindex(lua_State *L)
{
  struct AudChannel *obj = *(struct AudChannel **)luaL_checkudata(L, 1, "AudChannel");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ac_ptr") == 0) {
    obj->ac_ptr = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ac_len") == 0) {
    obj->ac_len = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ac_per") == 0) {
    obj->ac_per = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ac_vol") == 0) {
    obj->ac_vol = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ac_dat") == 0) {
    obj->ac_dat = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // ac_pad[2] proxied via the index
  return 0;
}


static int
_lua_AudChannel_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AudChannel in userdata
  struct AudChannel **objp = lua_newuserdata(L, sizeof(struct AudChannel *));
  *objp = malloc(sizeof(struct AudChannel));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AudChannel));

  // Set metatable
  luaL_getmetatable(L, "AudChannel");
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
_lua_gen_AudChannel_index(lua_State *L)
{
  struct AudChannel *obj = *(struct AudChannel **)luaL_checkudata(L, 1, "AudChannel");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ac_ptr") == 0) {
    lua_pushlightuserdata(L, obj->ac_ptr);
    return 1;
  }
  if (strcmp(key, "ac_len") == 0) {
    lua_pushinteger(L, obj->ac_len);
    return 1;
  }
  if (strcmp(key, "ac_per") == 0) {
    lua_pushinteger(L, obj->ac_per);
    return 1;
  }
  if (strcmp(key, "ac_vol") == 0) {
    lua_pushinteger(L, obj->ac_vol);
    return 1;
  }
  if (strcmp(key, "ac_dat") == 0) {
    lua_pushinteger(L, obj->ac_dat);
    return 1;
  }
  if (strcmp(key, "ac_pad") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->ac_pad, 2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AudChannel));
    return 1;
}

  return 0;
}

static void
_lua_gen_AudChannel_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ac_ptr");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ac_len");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ac_per");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ac_vol");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ac_dat");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ac_pad");
  lua_rawseti(L, -2, 6);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AudChannel(lua_State *L) {
  if (luaL_newmetatable(L, "AudChannel")) {
    lua_pushcfunction(L, _lua_gen_AudChannel_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AudChannel_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AudChannel_constructor);
    lua_setglobal(L, "AudChannel");
    _lua_gen_AudChannel_install_keys(L);
    lua_pushstring(L, "AudChannel");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ColorMap_newindex(lua_State *L)
{
  struct ColorMap *obj = *(struct ColorMap **)luaL_checkudata(L, 1, "ColorMap");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Type") == 0) {
    obj->Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Count") == 0) {
    obj->Count = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ColorTable") == 0) {
    obj->ColorTable = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "cm_vpe") == 0) {
    // finder 1
    //obj->cm_vpe = *(struct ViewPortExtra **)luaL_checkudata(L, 3, "ViewPortExtra");
    obj->cm_vpe = (struct ViewPortExtra *)_lua_gen_checkViewPortExtra(L, 3);
    return 0;
  }
  if (strcmp(key, "LowColorBits") == 0) {
    obj->LowColorBits = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "TransparencyPlane") == 0) {
    obj->TransparencyPlane = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteResolution") == 0) {
    obj->SpriteResolution = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteResDefault") == 0) {
    obj->SpriteResDefault = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AuxFlags") == 0) {
    obj->AuxFlags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cm_vp") == 0) {
    // finder 1
    //obj->cm_vp = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->cm_vp = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "NormalDisplayInfo") == 0) {
    obj->NormalDisplayInfo = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "CoerceDisplayInfo") == 0) {
    obj->CoerceDisplayInfo = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "cm_batch_items") == 0) {
    // finder 1
    //obj->cm_batch_items = *(struct TagItem **)luaL_checkudata(L, 3, "TagItem");
    obj->cm_batch_items = (struct TagItem *)_lua_gen_checkTagItem(L, 3);
    return 0;
  }
  if (strcmp(key, "VPModeID") == 0) {
    obj->VPModeID = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PalExtra") == 0) {
    // finder 1
    //obj->PalExtra = *(struct PaletteExtra **)luaL_checkudata(L, 3, "PaletteExtra");
    obj->PalExtra = (struct PaletteExtra *)_lua_gen_checkPaletteExtra(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteBase_Even") == 0) {
    obj->SpriteBase_Even = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SpriteBase_Odd") == 0) {
    obj->SpriteBase_Odd = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Bp_0_base") == 0) {
    obj->Bp_0_base = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Bp_1_base") == 0) {
    obj->Bp_1_base = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_ColorMap_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ColorMap in userdata
  struct ColorMap **objp = lua_newuserdata(L, sizeof(struct ColorMap *));
  *objp = malloc(sizeof(struct ColorMap));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ColorMap));

  // Set metatable
  luaL_getmetatable(L, "ColorMap");
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
_lua_gen_ColorMap_index(lua_State *L)
{
  struct ColorMap *obj = *(struct ColorMap **)luaL_checkudata(L, 1, "ColorMap");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Type") == 0) {
    lua_pushinteger(L, obj->Type);
    return 1;
  }
  if (strcmp(key, "Count") == 0) {
    lua_pushinteger(L, obj->Count);
    return 1;
  }
  if (strcmp(key, "ColorTable") == 0) {
    lua_pushlightuserdata(L, obj->ColorTable);
    return 1;
  }
  if (strcmp(key, "cm_vpe") == 0) {
    struct ViewPortExtra **ud = (struct ViewPortExtra **)lua_newuserdata(L, sizeof(struct ViewPortExtra *));
    *ud = (struct ViewPortExtra*)obj->cm_vpe;
    luaL_getmetatable(L, "ViewPortExtra");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LowColorBits") == 0) {
    lua_pushlightuserdata(L, obj->LowColorBits);
    return 1;
  }
  if (strcmp(key, "TransparencyPlane") == 0) {
    lua_pushinteger(L, obj->TransparencyPlane);
    return 1;
  }
  if (strcmp(key, "SpriteResolution") == 0) {
    lua_pushinteger(L, obj->SpriteResolution);
    return 1;
  }
  if (strcmp(key, "SpriteResDefault") == 0) {
    lua_pushinteger(L, obj->SpriteResDefault);
    return 1;
  }
  if (strcmp(key, "AuxFlags") == 0) {
    lua_pushinteger(L, obj->AuxFlags);
    return 1;
  }
  if (strcmp(key, "cm_vp") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->cm_vp;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "NormalDisplayInfo") == 0) {
    lua_pushlightuserdata(L, obj->NormalDisplayInfo);
    return 1;
  }
  if (strcmp(key, "CoerceDisplayInfo") == 0) {
    lua_pushlightuserdata(L, obj->CoerceDisplayInfo);
    return 1;
  }
  if (strcmp(key, "cm_batch_items") == 0) {
    struct TagItem **ud = (struct TagItem **)lua_newuserdata(L, sizeof(struct TagItem *));
    *ud = (struct TagItem*)obj->cm_batch_items;
    luaL_getmetatable(L, "TagItem");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "VPModeID") == 0) {
    lua_pushinteger(L, obj->VPModeID);
    return 1;
  }
  if (strcmp(key, "PalExtra") == 0) {
    struct PaletteExtra **ud = (struct PaletteExtra **)lua_newuserdata(L, sizeof(struct PaletteExtra *));
    *ud = (struct PaletteExtra*)obj->PalExtra;
    luaL_getmetatable(L, "PaletteExtra");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SpriteBase_Even") == 0) {
    lua_pushinteger(L, obj->SpriteBase_Even);
    return 1;
  }
  if (strcmp(key, "SpriteBase_Odd") == 0) {
    lua_pushinteger(L, obj->SpriteBase_Odd);
    return 1;
  }
  if (strcmp(key, "Bp_0_base") == 0) {
    lua_pushinteger(L, obj->Bp_0_base);
    return 1;
  }
  if (strcmp(key, "Bp_1_base") == 0) {
    lua_pushinteger(L, obj->Bp_1_base);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ColorMap));
    return 1;
}

  return 0;
}

static void
_lua_gen_ColorMap_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Type");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Count");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ColorTable");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "LowColorBits");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "TransparencyPlane");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "SpriteResolution");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "SpriteResDefault");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "AuxFlags");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "NormalDisplayInfo");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "CoerceDisplayInfo");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "VPModeID");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "SpriteBase_Even");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "SpriteBase_Odd");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "Bp_0_base");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "Bp_1_base");
  lua_rawseti(L, -2, 16);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ColorMap(lua_State *L) {
  if (luaL_newmetatable(L, "ColorMap")) {
    lua_pushcfunction(L, _lua_gen_ColorMap_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ColorMap_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ColorMap_constructor);
    lua_setglobal(L, "ColorMap");
    _lua_gen_ColorMap_install_keys(L);
    lua_pushstring(L, "ColorMap");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MonitorSpec_newindex(lua_State *L)
{
  struct MonitorSpec *obj = *(struct MonitorSpec **)luaL_checkudata(L, 1, "MonitorSpec");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ms_Node.xln_Succ") == 0) {
    // finder 1
    //obj->ms_Node.xln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ms_Node.xln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Pred") == 0) {
    // finder 1
    //obj->ms_Node.xln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ms_Node.xln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Type") == 0) {
    obj->ms_Node.xln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Pri") == 0) {
    obj->ms_Node.xln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Name") == 0) {
    obj->ms_Node.xln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Subsystem") == 0) {
    obj->ms_Node.xln_Subsystem = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Subtype") == 0) {
    obj->ms_Node.xln_Subtype = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Node.xln_Library") == 0) {
    // finder 1
    //obj->ms_Node.xln_Library = *(struct GfxBase **)luaL_checkudata(L, 3, "GfxBase");
    obj->ms_Node.xln_Library = (struct GfxBase *)_lua_gen_checkGfxBase(L, 3);
    return 0;
  }
  // Unsupported type ms_Node.xln_Init LONG ()(struct ExtendedNode , UWORD)
  if (strcmp(key, "ms_Node.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct ExtendedNode , UWORD) for field ms_Node.xln_Init");
  }
  if (strcmp(key, "ms_Node") == 0) {
    // finder 0
    struct ExtendedNode *val = *(struct ExtendedNode **)luaL_checkudata(L, 3, "ExtendedNode");
    obj->ms_Node = *val;
    return 0;
  }
  if (strcmp(key, "ms_Flags") == 0) {
    obj->ms_Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ratioh") == 0) {
    obj->ratioh = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ratiov") == 0) {
    obj->ratiov = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "total_rows") == 0) {
    obj->total_rows = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "total_colorclocks") == 0) {
    obj->total_colorclocks = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DeniseMaxDisplayColumn") == 0) {
    obj->DeniseMaxDisplayColumn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BeamCon0") == 0) {
    obj->BeamCon0 = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "min_row") == 0) {
    obj->min_row = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_Special") == 0) {
    // finder 1
    //obj->ms_Special = *(struct SpecialMonitor **)luaL_checkudata(L, 3, "SpecialMonitor");
    obj->ms_Special = (struct SpecialMonitor *)_lua_gen_checkSpecialMonitor(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_OpenCount") == 0) {
    obj->ms_OpenCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type ms_transform LONG ()(struct MonitorSpec , Point , UWORD, Point )
  if (strcmp(key, "ms_transform") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec , Point , UWORD, Point ) for field ms_transform");
  }
  // Unsupported type ms_translate LONG ()(struct MonitorSpec , Point , UWORD, Point )
  if (strcmp(key, "ms_translate") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec , Point , UWORD, Point ) for field ms_translate");
  }
  // Unsupported type ms_scale LONG ()(struct MonitorSpec , Point , UWORD, Point )
  if (strcmp(key, "ms_scale") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec , Point , UWORD, Point ) for field ms_scale");
  }
  if (strcmp(key, "ms_xoffset") == 0) {
    obj->ms_xoffset = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_yoffset") == 0) {
    obj->ms_yoffset = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView.MinX") == 0) {
    obj->ms_LegalView.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView.MinY") == 0) {
    obj->ms_LegalView.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView.MaxX") == 0) {
    obj->ms_LegalView.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView.MaxY") == 0) {
    obj->ms_LegalView.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->ms_LegalView = *val;
    return 0;
  }
  // Unsupported type ms_maxoscan LONG ()(struct MonitorSpec , struct Rectangle , ULONG)
  if (strcmp(key, "ms_maxoscan") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec , struct Rectangle , ULONG) for field ms_maxoscan");
  }
  // Unsupported type ms_videoscan LONG ()(struct MonitorSpec , struct Rectangle , ULONG)
  if (strcmp(key, "ms_videoscan") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec , struct Rectangle , ULONG) for field ms_videoscan");
  }
  if (strcmp(key, "DeniseMinDisplayColumn") == 0) {
    obj->DeniseMinDisplayColumn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayCompatible") == 0) {
    obj->DisplayCompatible = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Head") == 0) {
    // finder 1
    //obj->DisplayInfoDataBase.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBase.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Tail") == 0) {
    // finder 1
    //obj->DisplayInfoDataBase.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBase.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_TailPred") == 0) {
    // finder 1
    //obj->DisplayInfoDataBase.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBase.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Type") == 0) {
    obj->DisplayInfoDataBase.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase.l_pad") == 0) {
    obj->DisplayInfoDataBase.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->DisplayInfoDataBase = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Type") == 0) {
    obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Pri") == 0) {
    obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Name") == 0) {
    obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->DisplayInfoDataBaseSemaphore.ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_NestCount") == 0) {
    obj->DisplayInfoDataBaseSemaphore.ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Owner") == 0) {
    // finder 1
    //obj->DisplayInfoDataBaseSemaphore.ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->DisplayInfoDataBaseSemaphore.ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_QueueCount") == 0) {
    obj->DisplayInfoDataBaseSemaphore.ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->DisplayInfoDataBaseSemaphore = *val;
    return 0;
  }
  // Unsupported type ms_MrgCop LONG ()(struct View )
  if (strcmp(key, "ms_MrgCop") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct View ) for field ms_MrgCop");
  }
  // Unsupported type ms_LoadView LONG ()(struct View )
  if (strcmp(key, "ms_LoadView") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct View ) for field ms_LoadView");
  }
  // Unsupported type ms_KillView LONG ()(struct MonitorSpec )
  if (strcmp(key, "ms_KillView") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec ) for field ms_KillView");
  }
  return 0;
}


static int
_lua_MonitorSpec_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MonitorSpec in userdata
  struct MonitorSpec **objp = lua_newuserdata(L, sizeof(struct MonitorSpec *));
  *objp = malloc(sizeof(struct MonitorSpec));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MonitorSpec));

  // Set metatable
  luaL_getmetatable(L, "MonitorSpec");
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
_lua_gen_MonitorSpec_index(lua_State *L)
{
  struct MonitorSpec *obj = *(struct MonitorSpec **)luaL_checkudata(L, 1, "MonitorSpec");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ms_Node.xln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ms_Node.xln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ms_Node.xln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Type") == 0) {
    lua_pushinteger(L, obj->ms_Node.xln_Type);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Pri") == 0) {
    lua_pushinteger(L, obj->ms_Node.xln_Pri);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Name") == 0) {
    lua_pushstring(L, obj->ms_Node.xln_Name);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Subsystem") == 0) {
    lua_pushinteger(L, obj->ms_Node.xln_Subsystem);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Subtype") == 0) {
    lua_pushinteger(L, obj->ms_Node.xln_Subtype);
    return 1;
  }
  if (strcmp(key, "ms_Node.xln_Library") == 0) {
    struct GfxBase **ud = (struct GfxBase **)lua_newuserdata(L, sizeof(struct GfxBase *));
    *ud = (struct GfxBase*)obj->ms_Node.xln_Library;
    luaL_getmetatable(L, "GfxBase");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported ms_Node.xln_Init LONG (*)(struct ExtendedNode *, UWORD)
  if (strcmp(key, "ms_Node.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct ExtendedNode *, UWORD) for field ms_Node.xln_Init");
  }
  if (strcmp(key, "ms_Node") == 0) {
    struct ExtendedNode **ud = (struct ExtendedNode **)lua_newuserdata(L, sizeof(struct ExtendedNode *));
    *ud = (struct ExtendedNode*)&obj->ms_Node;
    luaL_getmetatable(L, "ExtendedNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ms_Flags") == 0) {
    lua_pushinteger(L, obj->ms_Flags);
    return 1;
  }
  if (strcmp(key, "ratioh") == 0) {
    lua_pushinteger(L, obj->ratioh);
    return 1;
  }
  if (strcmp(key, "ratiov") == 0) {
    lua_pushinteger(L, obj->ratiov);
    return 1;
  }
  if (strcmp(key, "total_rows") == 0) {
    lua_pushinteger(L, obj->total_rows);
    return 1;
  }
  if (strcmp(key, "total_colorclocks") == 0) {
    lua_pushinteger(L, obj->total_colorclocks);
    return 1;
  }
  if (strcmp(key, "DeniseMaxDisplayColumn") == 0) {
    lua_pushinteger(L, obj->DeniseMaxDisplayColumn);
    return 1;
  }
  if (strcmp(key, "BeamCon0") == 0) {
    lua_pushinteger(L, obj->BeamCon0);
    return 1;
  }
  if (strcmp(key, "min_row") == 0) {
    lua_pushinteger(L, obj->min_row);
    return 1;
  }
  if (strcmp(key, "ms_Special") == 0) {
    struct SpecialMonitor **ud = (struct SpecialMonitor **)lua_newuserdata(L, sizeof(struct SpecialMonitor *));
    *ud = (struct SpecialMonitor*)obj->ms_Special;
    luaL_getmetatable(L, "SpecialMonitor");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ms_OpenCount") == 0) {
    lua_pushinteger(L, obj->ms_OpenCount);
    return 1;
  }
  // Unsupported ms_transform LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
  if (strcmp(key, "ms_transform") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *) for field ms_transform");
  }
  // Unsupported ms_translate LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
  if (strcmp(key, "ms_translate") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *) for field ms_translate");
  }
  // Unsupported ms_scale LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
  if (strcmp(key, "ms_scale") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *) for field ms_scale");
  }
  if (strcmp(key, "ms_xoffset") == 0) {
    lua_pushinteger(L, obj->ms_xoffset);
    return 1;
  }
  if (strcmp(key, "ms_yoffset") == 0) {
    lua_pushinteger(L, obj->ms_yoffset);
    return 1;
  }
  if (strcmp(key, "ms_LegalView.MinX") == 0) {
    lua_pushinteger(L, obj->ms_LegalView.MinX);
    return 1;
  }
  if (strcmp(key, "ms_LegalView.MinY") == 0) {
    lua_pushinteger(L, obj->ms_LegalView.MinY);
    return 1;
  }
  if (strcmp(key, "ms_LegalView.MaxX") == 0) {
    lua_pushinteger(L, obj->ms_LegalView.MaxX);
    return 1;
  }
  if (strcmp(key, "ms_LegalView.MaxY") == 0) {
    lua_pushinteger(L, obj->ms_LegalView.MaxY);
    return 1;
  }
  if (strcmp(key, "ms_LegalView") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->ms_LegalView;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported ms_maxoscan LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG)
  if (strcmp(key, "ms_maxoscan") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG) for field ms_maxoscan");
  }
  // Unsupported ms_videoscan LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG)
  if (strcmp(key, "ms_videoscan") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG) for field ms_videoscan");
  }
  if (strcmp(key, "DeniseMinDisplayColumn") == 0) {
    lua_pushinteger(L, obj->DeniseMinDisplayColumn);
    return 1;
  }
  if (strcmp(key, "DisplayCompatible") == 0) {
    lua_pushinteger(L, obj->DisplayCompatible);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->DisplayInfoDataBase.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->DisplayInfoDataBase.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->DisplayInfoDataBase.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase.lh_Type") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBase.lh_Type);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase.l_pad") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBase.l_pad);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->DisplayInfoDataBase;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->DisplayInfoDataBaseSemaphore.ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->DisplayInfoDataBaseSemaphore.ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_NestCount") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBaseSemaphore.ss_NestCount);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->DisplayInfoDataBaseSemaphore.ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->DisplayInfoDataBaseSemaphore.ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->DisplayInfoDataBaseSemaphore.ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore.ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->DisplayInfoDataBaseSemaphore.ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->DisplayInfoDataBaseSemaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported ms_MrgCop LONG (*)(struct View *)
  if (strcmp(key, "ms_MrgCop") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct View *) for field ms_MrgCop");
  }
  // Unsupported ms_LoadView LONG (*)(struct View *)
  if (strcmp(key, "ms_LoadView") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct View *) for field ms_LoadView");
  }
  // Unsupported ms_KillView LONG (*)(struct MonitorSpec *)
  if (strcmp(key, "ms_KillView") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *) for field ms_KillView");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MonitorSpec));
    return 1;
}

  return 0;
}

static void
_lua_gen_MonitorSpec_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ms_Node.xln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ms_Node.xln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ms_Node.xln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ms_Node.xln_Subsystem");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ms_Node.xln_Subtype");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ms_Node.xln_Init");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ms_Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ratioh");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ratiov");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "total_rows");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "total_colorclocks");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "DeniseMaxDisplayColumn");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "BeamCon0");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "min_row");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "ms_OpenCount");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "ms_transform");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "ms_translate");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "ms_scale");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "ms_xoffset");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "ms_yoffset");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "ms_LegalView.MinX");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "ms_LegalView.MinY");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "ms_LegalView.MaxX");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "ms_LegalView.MaxY");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "ms_maxoscan");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "ms_videoscan");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "DeniseMinDisplayColumn");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "DisplayCompatible");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "DisplayInfoDataBase.lh_Type");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "DisplayInfoDataBase.l_pad");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Type");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Pri");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "DisplayInfoDataBaseSemaphore.ss_Link.ln_Name");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "DisplayInfoDataBaseSemaphore.ss_NestCount");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "DisplayInfoDataBaseSemaphore.ss_QueueCount");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "ms_MrgCop");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "ms_LoadView");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "ms_KillView");
  lua_rawseti(L, -2, 38);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MonitorSpec(lua_State *L) {
  if (luaL_newmetatable(L, "MonitorSpec")) {
    lua_pushcfunction(L, _lua_gen_MonitorSpec_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MonitorSpec_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MonitorSpec_constructor);
    lua_setglobal(L, "MonitorSpec");
    _lua_gen_MonitorSpec_install_keys(L);
    lua_pushstring(L, "MonitorSpec");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ViewPortExtra_newindex(lua_State *L)
{
  struct ViewPortExtra *obj = *(struct ViewPortExtra **)luaL_checkudata(L, 1, "ViewPortExtra");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "n.xln_Succ") == 0) {
    // finder 1
    //obj->n.xln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->n.xln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Pred") == 0) {
    // finder 1
    //obj->n.xln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->n.xln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Type") == 0) {
    obj->n.xln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Pri") == 0) {
    obj->n.xln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Name") == 0) {
    obj->n.xln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Subsystem") == 0) {
    obj->n.xln_Subsystem = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Subtype") == 0) {
    obj->n.xln_Subtype = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "n.xln_Library") == 0) {
    // finder 1
    //obj->n.xln_Library = *(struct GfxBase **)luaL_checkudata(L, 3, "GfxBase");
    obj->n.xln_Library = (struct GfxBase *)_lua_gen_checkGfxBase(L, 3);
    return 0;
  }
  // Unsupported type n.xln_Init LONG ()(struct ExtendedNode , UWORD)
  if (strcmp(key, "n.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct ExtendedNode , UWORD) for field n.xln_Init");
  }
  if (strcmp(key, "n") == 0) {
    // finder 0
    struct ExtendedNode *val = *(struct ExtendedNode **)luaL_checkudata(L, 3, "ExtendedNode");
    obj->n = *val;
    return 0;
  }
  if (strcmp(key, "ViewPort") == 0) {
    // finder 1
    //obj->ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayClip.MinX") == 0) {
    obj->DisplayClip.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayClip.MinY") == 0) {
    obj->DisplayClip.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayClip.MaxX") == 0) {
    obj->DisplayClip.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayClip.MaxY") == 0) {
    obj->DisplayClip.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayClip") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->DisplayClip = *val;
    return 0;
  }
  if (strcmp(key, "VecTable") == 0) {
    obj->VecTable = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // DriverData[2] proxied via the index
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // Origin[2] proxied via the index
  if (strcmp(key, "cop1ptr") == 0) {
    obj->cop1ptr = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cop2ptr") == 0) {
    obj->cop2ptr = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_ViewPortExtra_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ViewPortExtra in userdata
  struct ViewPortExtra **objp = lua_newuserdata(L, sizeof(struct ViewPortExtra *));
  *objp = malloc(sizeof(struct ViewPortExtra));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ViewPortExtra));

  // Set metatable
  luaL_getmetatable(L, "ViewPortExtra");
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
_lua_gen_ViewPortExtra_index(lua_State *L)
{
  struct ViewPortExtra *obj = *(struct ViewPortExtra **)luaL_checkudata(L, 1, "ViewPortExtra");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "n.xln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->n.xln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "n.xln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->n.xln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "n.xln_Type") == 0) {
    lua_pushinteger(L, obj->n.xln_Type);
    return 1;
  }
  if (strcmp(key, "n.xln_Pri") == 0) {
    lua_pushinteger(L, obj->n.xln_Pri);
    return 1;
  }
  if (strcmp(key, "n.xln_Name") == 0) {
    lua_pushstring(L, obj->n.xln_Name);
    return 1;
  }
  if (strcmp(key, "n.xln_Subsystem") == 0) {
    lua_pushinteger(L, obj->n.xln_Subsystem);
    return 1;
  }
  if (strcmp(key, "n.xln_Subtype") == 0) {
    lua_pushinteger(L, obj->n.xln_Subtype);
    return 1;
  }
  if (strcmp(key, "n.xln_Library") == 0) {
    struct GfxBase **ud = (struct GfxBase **)lua_newuserdata(L, sizeof(struct GfxBase *));
    *ud = (struct GfxBase*)obj->n.xln_Library;
    luaL_getmetatable(L, "GfxBase");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported n.xln_Init LONG (*)(struct ExtendedNode *, UWORD)
  if (strcmp(key, "n.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct ExtendedNode *, UWORD) for field n.xln_Init");
  }
  if (strcmp(key, "n") == 0) {
    struct ExtendedNode **ud = (struct ExtendedNode **)lua_newuserdata(L, sizeof(struct ExtendedNode *));
    *ud = (struct ExtendedNode*)&obj->n;
    luaL_getmetatable(L, "ExtendedNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayClip.MinX") == 0) {
    lua_pushinteger(L, obj->DisplayClip.MinX);
    return 1;
  }
  if (strcmp(key, "DisplayClip.MinY") == 0) {
    lua_pushinteger(L, obj->DisplayClip.MinY);
    return 1;
  }
  if (strcmp(key, "DisplayClip.MaxX") == 0) {
    lua_pushinteger(L, obj->DisplayClip.MaxX);
    return 1;
  }
  if (strcmp(key, "DisplayClip.MaxY") == 0) {
    lua_pushinteger(L, obj->DisplayClip.MaxY);
    return 1;
  }
  if (strcmp(key, "DisplayClip") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->DisplayClip;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "VecTable") == 0) {
    lua_pushlightuserdata(L, obj->VecTable);
    return 1;
  }
  if (strcmp(key, "DriverData") == 0) {
    _lua_gen_push_APTR_array_proxy(L, obj->DriverData, 2);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Origin") == 0) {
     return luaL_error(L, "Unsupported array type Point");
  }
  if (strcmp(key, "cop1ptr") == 0) {
    lua_pushinteger(L, obj->cop1ptr);
    return 1;
  }
  if (strcmp(key, "cop2ptr") == 0) {
    lua_pushinteger(L, obj->cop2ptr);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ViewPortExtra));
    return 1;
}

  return 0;
}

static void
_lua_gen_ViewPortExtra_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "n.xln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "n.xln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "n.xln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "n.xln_Subsystem");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "n.xln_Subtype");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "n.xln_Init");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "DisplayClip.MinX");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "DisplayClip.MinY");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "DisplayClip.MaxX");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "DisplayClip.MaxY");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "VecTable");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "DriverData");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "Origin");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "cop1ptr");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "cop2ptr");
  lua_rawseti(L, -2, 16);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ViewPortExtra(lua_State *L) {
  if (luaL_newmetatable(L, "ViewPortExtra")) {
    lua_pushcfunction(L, _lua_gen_ViewPortExtra_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ViewPortExtra_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ViewPortExtra_constructor);
    lua_setglobal(L, "ViewPortExtra");
    _lua_gen_ViewPortExtra_install_keys(L);
    lua_pushstring(L, "ViewPortExtra");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_PaletteExtra_newindex(lua_State *L)
{
  struct PaletteExtra *obj = *(struct PaletteExtra **)luaL_checkudata(L, 1, "PaletteExtra");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->pe_Semaphore.ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->pe_Semaphore.ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Type") == 0) {
    obj->pe_Semaphore.ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Pri") == 0) {
    obj->pe_Semaphore.ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Name") == 0) {
    obj->pe_Semaphore.ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->pe_Semaphore.ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_NestCount") == 0) {
    obj->pe_Semaphore.ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->pe_Semaphore.ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->pe_Semaphore.ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->pe_Semaphore.ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->pe_Semaphore.ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_Owner") == 0) {
    // finder 1
    //obj->pe_Semaphore.ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->pe_Semaphore.ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore.ss_QueueCount") == 0) {
    obj->pe_Semaphore.ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_Semaphore") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->pe_Semaphore = *val;
    return 0;
  }
  if (strcmp(key, "pe_FirstFree") == 0) {
    obj->pe_FirstFree = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_NFree") == 0) {
    obj->pe_NFree = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_FirstShared") == 0) {
    obj->pe_FirstShared = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_NShared") == 0) {
    obj->pe_NShared = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_RefCnt") == 0) {
    obj->pe_RefCnt = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_AllocList") == 0) {
    obj->pe_AllocList = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_ViewPort") == 0) {
    // finder 1
    //obj->pe_ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->pe_ViewPort = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "pe_SharableColors") == 0) {
    obj->pe_SharableColors = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_PaletteExtra_constructor(lua_State *L)
{
  // Allocate pointer-to-struct PaletteExtra in userdata
  struct PaletteExtra **objp = lua_newuserdata(L, sizeof(struct PaletteExtra *));
  *objp = malloc(sizeof(struct PaletteExtra));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct PaletteExtra));

  // Set metatable
  luaL_getmetatable(L, "PaletteExtra");
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
_lua_gen_PaletteExtra_index(lua_State *L)
{
  struct PaletteExtra *obj = *(struct PaletteExtra **)luaL_checkudata(L, 1, "PaletteExtra");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->pe_Semaphore.ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->pe_Semaphore.ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->pe_Semaphore.ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->pe_Semaphore.ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->pe_Semaphore.ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->pe_Semaphore.ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_NestCount") == 0) {
    lua_pushinteger(L, obj->pe_Semaphore.ss_NestCount);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->pe_Semaphore.ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->pe_Semaphore.ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->pe_Semaphore.ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->pe_Semaphore.ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->pe_Semaphore.ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->pe_Semaphore.ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->pe_Semaphore.ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->pe_Semaphore.ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->pe_Semaphore.ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore.ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->pe_Semaphore.ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "pe_Semaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->pe_Semaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_FirstFree") == 0) {
    lua_pushinteger(L, obj->pe_FirstFree);
    return 1;
  }
  if (strcmp(key, "pe_NFree") == 0) {
    lua_pushinteger(L, obj->pe_NFree);
    return 1;
  }
  if (strcmp(key, "pe_FirstShared") == 0) {
    lua_pushinteger(L, obj->pe_FirstShared);
    return 1;
  }
  if (strcmp(key, "pe_NShared") == 0) {
    lua_pushinteger(L, obj->pe_NShared);
    return 1;
  }
  if (strcmp(key, "pe_RefCnt") == 0) {
    lua_pushlightuserdata(L, obj->pe_RefCnt);
    return 1;
  }
  if (strcmp(key, "pe_AllocList") == 0) {
    lua_pushlightuserdata(L, obj->pe_AllocList);
    return 1;
  }
  if (strcmp(key, "pe_ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->pe_ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pe_SharableColors") == 0) {
    lua_pushinteger(L, obj->pe_SharableColors);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct PaletteExtra));
    return 1;
}

  return 0;
}

static void
_lua_gen_PaletteExtra_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "pe_Semaphore.ss_Link.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "pe_Semaphore.ss_Link.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "pe_Semaphore.ss_Link.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "pe_Semaphore.ss_NestCount");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "pe_Semaphore.ss_QueueCount");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "pe_FirstFree");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "pe_NFree");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "pe_FirstShared");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "pe_NShared");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "pe_RefCnt");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "pe_AllocList");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "pe_SharableColors");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_PaletteExtra(lua_State *L) {
  if (luaL_newmetatable(L, "PaletteExtra")) {
    lua_pushcfunction(L, _lua_gen_PaletteExtra_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_PaletteExtra_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_PaletteExtra_constructor);
    lua_setglobal(L, "PaletteExtra");
    _lua_gen_PaletteExtra_install_keys(L);
    lua_pushstring(L, "PaletteExtra");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DBufInfo_newindex(lua_State *L)
{
  struct DBufInfo *obj = *(struct DBufInfo **)luaL_checkudata(L, 1, "DBufInfo");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "dbi_Link1") == 0) {
    obj->dbi_Link1 = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_Count1") == 0) {
    obj->dbi_Count1 = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->dbi_SafeMessage.mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_SafeMessage.mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->dbi_SafeMessage.mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_SafeMessage.mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Type") == 0) {
    obj->dbi_SafeMessage.mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Pri") == 0) {
    obj->dbi_SafeMessage.mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Name") == 0) {
    obj->dbi_SafeMessage.mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_SafeMessage.mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_ReplyPort") == 0) {
    // finder 1
    //obj->dbi_SafeMessage.mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->dbi_SafeMessage.mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Length") == 0) {
    obj->dbi_SafeMessage.mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_SafeMessage") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
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
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->dbi_DispMessage.mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_DispMessage.mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->dbi_DispMessage.mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_DispMessage.mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Type") == 0) {
    obj->dbi_DispMessage.mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Pri") == 0) {
    obj->dbi_DispMessage.mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Name") == 0) {
    obj->dbi_DispMessage.mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->dbi_DispMessage.mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_ReplyPort") == 0) {
    // finder 1
    //obj->dbi_DispMessage.mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->dbi_DispMessage.mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Length") == 0) {
    obj->dbi_DispMessage.mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dbi_DispMessage") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
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
  // Allocate pointer-to-struct DBufInfo in userdata
  struct DBufInfo **objp = lua_newuserdata(L, sizeof(struct DBufInfo *));
  *objp = malloc(sizeof(struct DBufInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DBufInfo));

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
  struct DBufInfo *obj = *(struct DBufInfo **)luaL_checkudata(L, 1, "DBufInfo");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dbi_Link1") == 0) {
    lua_pushlightuserdata(L, obj->dbi_Link1);
    return 1;
  }
  if (strcmp(key, "dbi_Count1") == 0) {
    lua_pushinteger(L, obj->dbi_Count1);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dbi_SafeMessage.mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dbi_SafeMessage.mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->dbi_SafeMessage.mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->dbi_SafeMessage.mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->dbi_SafeMessage.mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->dbi_SafeMessage.mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->dbi_SafeMessage.mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage.mn_Length") == 0) {
    lua_pushinteger(L, obj->dbi_SafeMessage.mn_Length);
    return 1;
  }
  if (strcmp(key, "dbi_SafeMessage") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->dbi_SafeMessage;
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
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dbi_DispMessage.mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->dbi_DispMessage.mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->dbi_DispMessage.mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->dbi_DispMessage.mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->dbi_DispMessage.mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->dbi_DispMessage.mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->dbi_DispMessage.mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage.mn_Length") == 0) {
    lua_pushinteger(L, obj->dbi_DispMessage.mn_Length);
    return 1;
  }
  if (strcmp(key, "dbi_DispMessage") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->dbi_DispMessage;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DBufInfo));
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
  lua_pushstring(L, "dbi_SafeMessage.mn_Node.ln_Type");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dbi_SafeMessage.mn_Node.ln_Pri");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dbi_SafeMessage.mn_Node.ln_Name");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dbi_SafeMessage.mn_Length");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dbi_UserData1");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dbi_Link2");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dbi_Count2");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dbi_DispMessage.mn_Node.ln_Type");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "dbi_DispMessage.mn_Node.ln_Pri");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "dbi_DispMessage.mn_Node.ln_Name");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "dbi_DispMessage.mn_Length");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "dbi_UserData2");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "dbi_MatchLong");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "dbi_CopPtr1");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "dbi_CopPtr2");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "dbi_CopPtr3");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "dbi_BeamPos1");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "dbi_BeamPos2");
  lua_rawseti(L, -2, 20);
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
_lua_gen_SpecialMonitor_newindex(lua_State *L)
{
  struct SpecialMonitor *obj = *(struct SpecialMonitor **)luaL_checkudata(L, 1, "SpecialMonitor");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "spm_Node.xln_Succ") == 0) {
    // finder 1
    //obj->spm_Node.xln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->spm_Node.xln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Pred") == 0) {
    // finder 1
    //obj->spm_Node.xln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->spm_Node.xln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Type") == 0) {
    obj->spm_Node.xln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Pri") == 0) {
    obj->spm_Node.xln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Name") == 0) {
    obj->spm_Node.xln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Subsystem") == 0) {
    obj->spm_Node.xln_Subsystem = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Subtype") == 0) {
    obj->spm_Node.xln_Subtype = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "spm_Node.xln_Library") == 0) {
    // finder 1
    //obj->spm_Node.xln_Library = *(struct GfxBase **)luaL_checkudata(L, 3, "GfxBase");
    obj->spm_Node.xln_Library = (struct GfxBase *)_lua_gen_checkGfxBase(L, 3);
    return 0;
  }
  // Unsupported type spm_Node.xln_Init LONG ()(struct ExtendedNode , UWORD)
  if (strcmp(key, "spm_Node.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct ExtendedNode , UWORD) for field spm_Node.xln_Init");
  }
  if (strcmp(key, "spm_Node") == 0) {
    // finder 0
    struct ExtendedNode *val = *(struct ExtendedNode **)luaL_checkudata(L, 3, "ExtendedNode");
    obj->spm_Node = *val;
    return 0;
  }
  if (strcmp(key, "spm_Flags") == 0) {
    obj->spm_Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type do_monitor LONG ()(struct MonitorSpec )
  if (strcmp(key, "do_monitor") == 0) {
    return luaL_error(L, "Unsupported type LONG ()(struct MonitorSpec ) for field do_monitor");
  }
  // Unsupported type reserved1 LONG ()()
  if (strcmp(key, "reserved1") == 0) {
    return luaL_error(L, "Unsupported type LONG ()() for field reserved1");
  }
  // Unsupported type reserved2 LONG ()()
  if (strcmp(key, "reserved2") == 0) {
    return luaL_error(L, "Unsupported type LONG ()() for field reserved2");
  }
  // Unsupported type reserved3 LONG ()()
  if (strcmp(key, "reserved3") == 0) {
    return luaL_error(L, "Unsupported type LONG ()() for field reserved3");
  }
  if (strcmp(key, "hblank.asi_Start") == 0) {
    obj->hblank.asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hblank.asi_Stop") == 0) {
    obj->hblank.asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hblank") == 0) {
    // finder 0
    struct AnalogSignalInterval *val = *(struct AnalogSignalInterval **)luaL_checkudata(L, 3, "AnalogSignalInterval");
    obj->hblank = *val;
    return 0;
  }
  if (strcmp(key, "vblank.asi_Start") == 0) {
    obj->vblank.asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vblank.asi_Stop") == 0) {
    obj->vblank.asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vblank") == 0) {
    // finder 0
    struct AnalogSignalInterval *val = *(struct AnalogSignalInterval **)luaL_checkudata(L, 3, "AnalogSignalInterval");
    obj->vblank = *val;
    return 0;
  }
  if (strcmp(key, "hsync.asi_Start") == 0) {
    obj->hsync.asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hsync.asi_Stop") == 0) {
    obj->hsync.asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "hsync") == 0) {
    // finder 0
    struct AnalogSignalInterval *val = *(struct AnalogSignalInterval **)luaL_checkudata(L, 3, "AnalogSignalInterval");
    obj->hsync = *val;
    return 0;
  }
  if (strcmp(key, "vsync.asi_Start") == 0) {
    obj->vsync.asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vsync.asi_Stop") == 0) {
    obj->vsync.asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "vsync") == 0) {
    // finder 0
    struct AnalogSignalInterval *val = *(struct AnalogSignalInterval **)luaL_checkudata(L, 3, "AnalogSignalInterval");
    obj->vsync = *val;
    return 0;
  }
  return 0;
}


static int
_lua_SpecialMonitor_constructor(lua_State *L)
{
  // Allocate pointer-to-struct SpecialMonitor in userdata
  struct SpecialMonitor **objp = lua_newuserdata(L, sizeof(struct SpecialMonitor *));
  *objp = malloc(sizeof(struct SpecialMonitor));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct SpecialMonitor));

  // Set metatable
  luaL_getmetatable(L, "SpecialMonitor");
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
_lua_gen_SpecialMonitor_index(lua_State *L)
{
  struct SpecialMonitor *obj = *(struct SpecialMonitor **)luaL_checkudata(L, 1, "SpecialMonitor");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "spm_Node.xln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->spm_Node.xln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->spm_Node.xln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Type") == 0) {
    lua_pushinteger(L, obj->spm_Node.xln_Type);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Pri") == 0) {
    lua_pushinteger(L, obj->spm_Node.xln_Pri);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Name") == 0) {
    lua_pushstring(L, obj->spm_Node.xln_Name);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Subsystem") == 0) {
    lua_pushinteger(L, obj->spm_Node.xln_Subsystem);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Subtype") == 0) {
    lua_pushinteger(L, obj->spm_Node.xln_Subtype);
    return 1;
  }
  if (strcmp(key, "spm_Node.xln_Library") == 0) {
    struct GfxBase **ud = (struct GfxBase **)lua_newuserdata(L, sizeof(struct GfxBase *));
    *ud = (struct GfxBase*)obj->spm_Node.xln_Library;
    luaL_getmetatable(L, "GfxBase");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported spm_Node.xln_Init LONG (*)(struct ExtendedNode *, UWORD)
  if (strcmp(key, "spm_Node.xln_Init") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct ExtendedNode *, UWORD) for field spm_Node.xln_Init");
  }
  if (strcmp(key, "spm_Node") == 0) {
    struct ExtendedNode **ud = (struct ExtendedNode **)lua_newuserdata(L, sizeof(struct ExtendedNode *));
    *ud = (struct ExtendedNode*)&obj->spm_Node;
    luaL_getmetatable(L, "ExtendedNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "spm_Flags") == 0) {
    lua_pushinteger(L, obj->spm_Flags);
    return 1;
  }
  // Unsupported do_monitor LONG (*)(struct MonitorSpec *)
  if (strcmp(key, "do_monitor") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)(struct MonitorSpec *) for field do_monitor");
  }
  // Unsupported reserved1 LONG (*)()
  if (strcmp(key, "reserved1") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)() for field reserved1");
  }
  // Unsupported reserved2 LONG (*)()
  if (strcmp(key, "reserved2") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)() for field reserved2");
  }
  // Unsupported reserved3 LONG (*)()
  if (strcmp(key, "reserved3") == 0) {
    return luaL_error(L, "Unsupported type LONG (*)() for field reserved3");
  }
  if (strcmp(key, "hblank.asi_Start") == 0) {
    lua_pushinteger(L, obj->hblank.asi_Start);
    return 1;
  }
  if (strcmp(key, "hblank.asi_Stop") == 0) {
    lua_pushinteger(L, obj->hblank.asi_Stop);
    return 1;
  }
  if (strcmp(key, "hblank") == 0) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = (struct AnalogSignalInterval*)&obj->hblank;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vblank.asi_Start") == 0) {
    lua_pushinteger(L, obj->vblank.asi_Start);
    return 1;
  }
  if (strcmp(key, "vblank.asi_Stop") == 0) {
    lua_pushinteger(L, obj->vblank.asi_Stop);
    return 1;
  }
  if (strcmp(key, "vblank") == 0) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = (struct AnalogSignalInterval*)&obj->vblank;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "hsync.asi_Start") == 0) {
    lua_pushinteger(L, obj->hsync.asi_Start);
    return 1;
  }
  if (strcmp(key, "hsync.asi_Stop") == 0) {
    lua_pushinteger(L, obj->hsync.asi_Stop);
    return 1;
  }
  if (strcmp(key, "hsync") == 0) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = (struct AnalogSignalInterval*)&obj->hsync;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vsync.asi_Start") == 0) {
    lua_pushinteger(L, obj->vsync.asi_Start);
    return 1;
  }
  if (strcmp(key, "vsync.asi_Stop") == 0) {
    lua_pushinteger(L, obj->vsync.asi_Stop);
    return 1;
  }
  if (strcmp(key, "vsync") == 0) {
    struct AnalogSignalInterval **ud = (struct AnalogSignalInterval **)lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
    *ud = (struct AnalogSignalInterval*)&obj->vsync;
    luaL_getmetatable(L, "AnalogSignalInterval");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct SpecialMonitor));
    return 1;
}

  return 0;
}

static void
_lua_gen_SpecialMonitor_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "spm_Node.xln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "spm_Node.xln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "spm_Node.xln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "spm_Node.xln_Subsystem");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "spm_Node.xln_Subtype");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "spm_Node.xln_Init");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "spm_Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "do_monitor");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "reserved1");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "reserved2");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "reserved3");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "hblank.asi_Start");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "hblank.asi_Stop");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "vblank.asi_Start");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "vblank.asi_Stop");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "hsync.asi_Start");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "hsync.asi_Stop");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "vsync.asi_Start");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "vsync.asi_Stop");
  lua_rawseti(L, -2, 19);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_SpecialMonitor(lua_State *L) {
  if (luaL_newmetatable(L, "SpecialMonitor")) {
    lua_pushcfunction(L, _lua_gen_SpecialMonitor_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_SpecialMonitor_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_SpecialMonitor_constructor);
    lua_setglobal(L, "SpecialMonitor");
    _lua_gen_SpecialMonitor_install_keys(L);
    lua_pushstring(L, "SpecialMonitor");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AnalogSignalInterval_newindex(lua_State *L)
{
  struct AnalogSignalInterval *obj = *(struct AnalogSignalInterval **)luaL_checkudata(L, 1, "AnalogSignalInterval");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "asi_Start") == 0) {
    obj->asi_Start = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "asi_Stop") == 0) {
    obj->asi_Stop = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_AnalogSignalInterval_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AnalogSignalInterval in userdata
  struct AnalogSignalInterval **objp = lua_newuserdata(L, sizeof(struct AnalogSignalInterval *));
  *objp = malloc(sizeof(struct AnalogSignalInterval));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AnalogSignalInterval));

  // Set metatable
  luaL_getmetatable(L, "AnalogSignalInterval");
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
_lua_gen_AnalogSignalInterval_index(lua_State *L)
{
  struct AnalogSignalInterval *obj = *(struct AnalogSignalInterval **)luaL_checkudata(L, 1, "AnalogSignalInterval");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "asi_Start") == 0) {
    lua_pushinteger(L, obj->asi_Start);
    return 1;
  }
  if (strcmp(key, "asi_Stop") == 0) {
    lua_pushinteger(L, obj->asi_Stop);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AnalogSignalInterval));
    return 1;
}

  return 0;
}

static void
_lua_gen_AnalogSignalInterval_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "asi_Start");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "asi_Stop");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AnalogSignalInterval(lua_State *L) {
  if (luaL_newmetatable(L, "AnalogSignalInterval")) {
    lua_pushcfunction(L, _lua_gen_AnalogSignalInterval_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AnalogSignalInterval_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AnalogSignalInterval_constructor);
    lua_setglobal(L, "AnalogSignalInterval");
    _lua_gen_AnalogSignalInterval_install_keys(L);
    lua_pushstring(L, "AnalogSignalInterval");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AnimOb_newindex(lua_State *L)
{
  struct AnimOb *obj = *(struct AnimOb **)luaL_checkudata(L, 1, "AnimOb");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "NextOb") == 0) {
    // finder 1
    //obj->NextOb = *(struct AnimOb **)luaL_checkudata(L, 3, "AnimOb");
    obj->NextOb = (struct AnimOb *)_lua_gen_checkAnimOb(L, 3);
    return 0;
  }
  if (strcmp(key, "PrevOb") == 0) {
    // finder 1
    //obj->PrevOb = *(struct AnimOb **)luaL_checkudata(L, 3, "AnimOb");
    obj->PrevOb = (struct AnimOb *)_lua_gen_checkAnimOb(L, 3);
    return 0;
  }
  if (strcmp(key, "Clock") == 0) {
    obj->Clock = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AnOldY") == 0) {
    obj->AnOldY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AnOldX") == 0) {
    obj->AnOldX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AnY") == 0) {
    obj->AnY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "AnX") == 0) {
    obj->AnX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "YVel") == 0) {
    obj->YVel = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "XVel") == 0) {
    obj->XVel = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "YAccel") == 0) {
    obj->YAccel = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "XAccel") == 0) {
    obj->XAccel = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RingYTrans") == 0) {
    obj->RingYTrans = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RingXTrans") == 0) {
    obj->RingXTrans = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type AnimORoutine WORD ()(struct AnimOb )
  if (strcmp(key, "AnimORoutine") == 0) {
    return luaL_error(L, "Unsupported type WORD ()(struct AnimOb ) for field AnimORoutine");
  }
  if (strcmp(key, "HeadComp") == 0) {
    // finder 1
    //obj->HeadComp = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->HeadComp = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  if (strcmp(key, "AUserExt") == 0) {
    obj->AUserExt = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_AnimOb_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AnimOb in userdata
  struct AnimOb **objp = lua_newuserdata(L, sizeof(struct AnimOb *));
  *objp = malloc(sizeof(struct AnimOb));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AnimOb));

  // Set metatable
  luaL_getmetatable(L, "AnimOb");
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
_lua_gen_AnimOb_index(lua_State *L)
{
  struct AnimOb *obj = *(struct AnimOb **)luaL_checkudata(L, 1, "AnimOb");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextOb") == 0) {
    struct AnimOb **ud = (struct AnimOb **)lua_newuserdata(L, sizeof(struct AnimOb *));
    *ud = (struct AnimOb*)obj->NextOb;
    luaL_getmetatable(L, "AnimOb");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PrevOb") == 0) {
    struct AnimOb **ud = (struct AnimOb **)lua_newuserdata(L, sizeof(struct AnimOb *));
    *ud = (struct AnimOb*)obj->PrevOb;
    luaL_getmetatable(L, "AnimOb");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Clock") == 0) {
    lua_pushinteger(L, obj->Clock);
    return 1;
  }
  if (strcmp(key, "AnOldY") == 0) {
    lua_pushinteger(L, obj->AnOldY);
    return 1;
  }
  if (strcmp(key, "AnOldX") == 0) {
    lua_pushinteger(L, obj->AnOldX);
    return 1;
  }
  if (strcmp(key, "AnY") == 0) {
    lua_pushinteger(L, obj->AnY);
    return 1;
  }
  if (strcmp(key, "AnX") == 0) {
    lua_pushinteger(L, obj->AnX);
    return 1;
  }
  if (strcmp(key, "YVel") == 0) {
    lua_pushinteger(L, obj->YVel);
    return 1;
  }
  if (strcmp(key, "XVel") == 0) {
    lua_pushinteger(L, obj->XVel);
    return 1;
  }
  if (strcmp(key, "YAccel") == 0) {
    lua_pushinteger(L, obj->YAccel);
    return 1;
  }
  if (strcmp(key, "XAccel") == 0) {
    lua_pushinteger(L, obj->XAccel);
    return 1;
  }
  if (strcmp(key, "RingYTrans") == 0) {
    lua_pushinteger(L, obj->RingYTrans);
    return 1;
  }
  if (strcmp(key, "RingXTrans") == 0) {
    lua_pushinteger(L, obj->RingXTrans);
    return 1;
  }
  // Unsupported AnimORoutine WORD (*)(struct AnimOb *)
  if (strcmp(key, "AnimORoutine") == 0) {
    return luaL_error(L, "Unsupported type WORD (*)(struct AnimOb *) for field AnimORoutine");
  }
  if (strcmp(key, "HeadComp") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->HeadComp;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "AUserExt") == 0) {
    lua_pushinteger(L, obj->AUserExt);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AnimOb));
    return 1;
}

  return 0;
}

static void
_lua_gen_AnimOb_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Clock");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "AnOldY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "AnOldX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "AnY");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "AnX");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "YVel");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "XVel");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "YAccel");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "XAccel");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "RingYTrans");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "RingXTrans");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "AnimORoutine");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "AUserExt");
  lua_rawseti(L, -2, 13);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AnimOb(lua_State *L) {
  if (luaL_newmetatable(L, "AnimOb")) {
    lua_pushcfunction(L, _lua_gen_AnimOb_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AnimOb_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AnimOb_constructor);
    lua_setglobal(L, "AnimOb");
    _lua_gen_AnimOb_install_keys(L);
    lua_pushstring(L, "AnimOb");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AreaInfo_newindex(lua_State *L)
{
  struct AreaInfo *obj = *(struct AreaInfo **)luaL_checkudata(L, 1, "AreaInfo");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "VctrTbl") == 0) {
    obj->VctrTbl = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "VctrPtr") == 0) {
    obj->VctrPtr = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "FlagTbl") == 0) {
    obj->FlagTbl = (BYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "FlagPtr") == 0) {
    obj->FlagPtr = (BYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Count") == 0) {
    obj->Count = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MaxCount") == 0) {
    obj->MaxCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstX") == 0) {
    obj->FirstX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstY") == 0) {
    obj->FirstY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_AreaInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AreaInfo in userdata
  struct AreaInfo **objp = lua_newuserdata(L, sizeof(struct AreaInfo *));
  *objp = malloc(sizeof(struct AreaInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AreaInfo));

  // Set metatable
  luaL_getmetatable(L, "AreaInfo");
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
_lua_gen_AreaInfo_index(lua_State *L)
{
  struct AreaInfo *obj = *(struct AreaInfo **)luaL_checkudata(L, 1, "AreaInfo");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "VctrTbl") == 0) {
    lua_pushlightuserdata(L, obj->VctrTbl);
    return 1;
  }
  if (strcmp(key, "VctrPtr") == 0) {
    lua_pushlightuserdata(L, obj->VctrPtr);
    return 1;
  }
  if (strcmp(key, "FlagTbl") == 0) {
    lua_pushlightuserdata(L, obj->FlagTbl);
    return 1;
  }
  if (strcmp(key, "FlagPtr") == 0) {
    lua_pushlightuserdata(L, obj->FlagPtr);
    return 1;
  }
  if (strcmp(key, "Count") == 0) {
    lua_pushinteger(L, obj->Count);
    return 1;
  }
  if (strcmp(key, "MaxCount") == 0) {
    lua_pushinteger(L, obj->MaxCount);
    return 1;
  }
  if (strcmp(key, "FirstX") == 0) {
    lua_pushinteger(L, obj->FirstX);
    return 1;
  }
  if (strcmp(key, "FirstY") == 0) {
    lua_pushinteger(L, obj->FirstY);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AreaInfo));
    return 1;
}

  return 0;
}

static void
_lua_gen_AreaInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "VctrTbl");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "VctrPtr");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "FlagTbl");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "FlagPtr");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Count");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MaxCount");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "FirstX");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "FirstY");
  lua_rawseti(L, -2, 8);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AreaInfo(lua_State *L) {
  if (luaL_newmetatable(L, "AreaInfo")) {
    lua_pushcfunction(L, _lua_gen_AreaInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AreaInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AreaInfo_constructor);
    lua_setglobal(L, "AreaInfo");
    _lua_gen_AreaInfo_install_keys(L);
    lua_pushstring(L, "AreaInfo");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_BitScaleArgs_newindex(lua_State *L)
{
  struct BitScaleArgs *obj = *(struct BitScaleArgs **)luaL_checkudata(L, 1, "BitScaleArgs");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "bsa_SrcX") == 0) {
    obj->bsa_SrcX = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_SrcY") == 0) {
    obj->bsa_SrcY = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_SrcWidth") == 0) {
    obj->bsa_SrcWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_SrcHeight") == 0) {
    obj->bsa_SrcHeight = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_XSrcFactor") == 0) {
    obj->bsa_XSrcFactor = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_YSrcFactor") == 0) {
    obj->bsa_YSrcFactor = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_DestX") == 0) {
    obj->bsa_DestX = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_DestY") == 0) {
    obj->bsa_DestY = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_DestWidth") == 0) {
    obj->bsa_DestWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_DestHeight") == 0) {
    obj->bsa_DestHeight = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_XDestFactor") == 0) {
    obj->bsa_XDestFactor = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_YDestFactor") == 0) {
    obj->bsa_YDestFactor = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_SrcBitMap") == 0) {
    // finder 1
    //obj->bsa_SrcBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->bsa_SrcBitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_DestBitMap") == 0) {
    // finder 1
    //obj->bsa_DestBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->bsa_DestBitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_Flags") == 0) {
    obj->bsa_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_XDDA") == 0) {
    obj->bsa_XDDA = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_YDDA") == 0) {
    obj->bsa_YDDA = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_Reserved1") == 0) {
    obj->bsa_Reserved1 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bsa_Reserved2") == 0) {
    obj->bsa_Reserved2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_BitScaleArgs_constructor(lua_State *L)
{
  // Allocate pointer-to-struct BitScaleArgs in userdata
  struct BitScaleArgs **objp = lua_newuserdata(L, sizeof(struct BitScaleArgs *));
  *objp = malloc(sizeof(struct BitScaleArgs));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct BitScaleArgs));

  // Set metatable
  luaL_getmetatable(L, "BitScaleArgs");
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
_lua_gen_BitScaleArgs_index(lua_State *L)
{
  struct BitScaleArgs *obj = *(struct BitScaleArgs **)luaL_checkudata(L, 1, "BitScaleArgs");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "bsa_SrcX") == 0) {
    lua_pushinteger(L, obj->bsa_SrcX);
    return 1;
  }
  if (strcmp(key, "bsa_SrcY") == 0) {
    lua_pushinteger(L, obj->bsa_SrcY);
    return 1;
  }
  if (strcmp(key, "bsa_SrcWidth") == 0) {
    lua_pushinteger(L, obj->bsa_SrcWidth);
    return 1;
  }
  if (strcmp(key, "bsa_SrcHeight") == 0) {
    lua_pushinteger(L, obj->bsa_SrcHeight);
    return 1;
  }
  if (strcmp(key, "bsa_XSrcFactor") == 0) {
    lua_pushinteger(L, obj->bsa_XSrcFactor);
    return 1;
  }
  if (strcmp(key, "bsa_YSrcFactor") == 0) {
    lua_pushinteger(L, obj->bsa_YSrcFactor);
    return 1;
  }
  if (strcmp(key, "bsa_DestX") == 0) {
    lua_pushinteger(L, obj->bsa_DestX);
    return 1;
  }
  if (strcmp(key, "bsa_DestY") == 0) {
    lua_pushinteger(L, obj->bsa_DestY);
    return 1;
  }
  if (strcmp(key, "bsa_DestWidth") == 0) {
    lua_pushinteger(L, obj->bsa_DestWidth);
    return 1;
  }
  if (strcmp(key, "bsa_DestHeight") == 0) {
    lua_pushinteger(L, obj->bsa_DestHeight);
    return 1;
  }
  if (strcmp(key, "bsa_XDestFactor") == 0) {
    lua_pushinteger(L, obj->bsa_XDestFactor);
    return 1;
  }
  if (strcmp(key, "bsa_YDestFactor") == 0) {
    lua_pushinteger(L, obj->bsa_YDestFactor);
    return 1;
  }
  if (strcmp(key, "bsa_SrcBitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->bsa_SrcBitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bsa_DestBitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->bsa_DestBitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bsa_Flags") == 0) {
    lua_pushinteger(L, obj->bsa_Flags);
    return 1;
  }
  if (strcmp(key, "bsa_XDDA") == 0) {
    lua_pushinteger(L, obj->bsa_XDDA);
    return 1;
  }
  if (strcmp(key, "bsa_YDDA") == 0) {
    lua_pushinteger(L, obj->bsa_YDDA);
    return 1;
  }
  if (strcmp(key, "bsa_Reserved1") == 0) {
    lua_pushinteger(L, obj->bsa_Reserved1);
    return 1;
  }
  if (strcmp(key, "bsa_Reserved2") == 0) {
    lua_pushinteger(L, obj->bsa_Reserved2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct BitScaleArgs));
    return 1;
}

  return 0;
}

static void
_lua_gen_BitScaleArgs_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bsa_SrcX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bsa_SrcY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bsa_SrcWidth");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bsa_SrcHeight");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "bsa_XSrcFactor");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "bsa_YSrcFactor");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "bsa_DestX");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "bsa_DestY");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "bsa_DestWidth");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "bsa_DestHeight");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "bsa_XDestFactor");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "bsa_YDestFactor");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "bsa_Flags");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "bsa_XDDA");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "bsa_YDDA");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "bsa_Reserved1");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "bsa_Reserved2");
  lua_rawseti(L, -2, 17);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_BitScaleArgs(lua_State *L) {
  if (luaL_newmetatable(L, "BitScaleArgs")) {
    lua_pushcfunction(L, _lua_gen_BitScaleArgs_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_BitScaleArgs_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_BitScaleArgs_constructor);
    lua_setglobal(L, "BitScaleArgs");
    _lua_gen_BitScaleArgs_install_keys(L);
    lua_pushstring(L, "BitScaleArgs");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Bob_newindex(lua_State *L)
{
  struct Bob *obj = *(struct Bob **)luaL_checkudata(L, 1, "Bob");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SaveBuffer") == 0) {
    obj->SaveBuffer = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ImageShadow") == 0) {
    obj->ImageShadow = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Before") == 0) {
    // finder 1
    //obj->Before = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    obj->Before = (struct Bob *)_lua_gen_checkBob(L, 3);
    return 0;
  }
  if (strcmp(key, "After") == 0) {
    // finder 1
    //obj->After = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    obj->After = (struct Bob *)_lua_gen_checkBob(L, 3);
    return 0;
  }
  if (strcmp(key, "BobVSprite") == 0) {
    // finder 1
    //obj->BobVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->BobVSprite = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "BobComp") == 0) {
    // finder 1
    //obj->BobComp = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->BobComp = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  if (strcmp(key, "DBuffer") == 0) {
    // finder 1
    //obj->DBuffer = *(struct DBufPacket **)luaL_checkudata(L, 3, "DBufPacket");
    obj->DBuffer = (struct DBufPacket *)_lua_gen_checkDBufPacket(L, 3);
    return 0;
  }
  if (strcmp(key, "BUserExt") == 0) {
    obj->BUserExt = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Bob_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Bob in userdata
  struct Bob **objp = lua_newuserdata(L, sizeof(struct Bob *));
  *objp = malloc(sizeof(struct Bob));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Bob));

  // Set metatable
  luaL_getmetatable(L, "Bob");
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
_lua_gen_Bob_index(lua_State *L)
{
  struct Bob *obj = *(struct Bob **)luaL_checkudata(L, 1, "Bob");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "SaveBuffer") == 0) {
    lua_pushlightuserdata(L, obj->SaveBuffer);
    return 1;
  }
  if (strcmp(key, "ImageShadow") == 0) {
    lua_pushlightuserdata(L, obj->ImageShadow);
    return 1;
  }
  if (strcmp(key, "Before") == 0) {
    struct Bob **ud = (struct Bob **)lua_newuserdata(L, sizeof(struct Bob *));
    *ud = (struct Bob*)obj->Before;
    luaL_getmetatable(L, "Bob");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "After") == 0) {
    struct Bob **ud = (struct Bob **)lua_newuserdata(L, sizeof(struct Bob *));
    *ud = (struct Bob*)obj->After;
    luaL_getmetatable(L, "Bob");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BobVSprite") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->BobVSprite;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BobComp") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->BobComp;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DBuffer") == 0) {
    struct DBufPacket **ud = (struct DBufPacket **)lua_newuserdata(L, sizeof(struct DBufPacket *));
    *ud = (struct DBufPacket*)obj->DBuffer;
    luaL_getmetatable(L, "DBufPacket");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BUserExt") == 0) {
    lua_pushinteger(L, obj->BUserExt);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Bob));
    return 1;
}

  return 0;
}

static void
_lua_gen_Bob_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "SaveBuffer");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ImageShadow");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "BUserExt");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Bob(lua_State *L) {
  if (luaL_newmetatable(L, "Bob")) {
    lua_pushcfunction(L, _lua_gen_Bob_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Bob_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Bob_constructor);
    lua_setglobal(L, "Bob");
    _lua_gen_Bob_install_keys(L);
    lua_pushstring(L, "Bob");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ClipRect_newindex(lua_State *L)
{
  struct ClipRect *obj = *(struct ClipRect **)luaL_checkudata(L, 1, "ClipRect");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Next") == 0) {
    // finder 1
    //obj->Next = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->Next = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "reservedlink") == 0) {
    // finder 1
    //obj->reservedlink = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->reservedlink = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "obscured") == 0) {
    obj->obscured = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    //obj->BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->BitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    obj->bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    obj->bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    obj->bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    obj->bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  if (strcmp(key, "vlink") == 0) {
    // finder 1
    //obj->vlink = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->vlink = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "home") == 0) {
    // finder 1
    //obj->home = *(struct Layer_Info **)luaL_checkudata(L, 3, "Layer_Info");
    obj->home = (struct Layer_Info *)_lua_gen_checkLayer_Info(L, 3);
    return 0;
  }
  if (strcmp(key, "reserved") == 0) {
    obj->reserved = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_ClipRect_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ClipRect in userdata
  struct ClipRect **objp = lua_newuserdata(L, sizeof(struct ClipRect *));
  *objp = malloc(sizeof(struct ClipRect));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ClipRect));

  // Set metatable
  luaL_getmetatable(L, "ClipRect");
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
_lua_gen_ClipRect_index(lua_State *L)
{
  struct ClipRect *obj = *(struct ClipRect **)luaL_checkudata(L, 1, "ClipRect");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->Next;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "reservedlink") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->reservedlink;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "obscured") == 0) {
    lua_pushinteger(L, obj->obscured);
    return 1;
  }
  if (strcmp(key, "BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    lua_pushinteger(L, obj->bounds.MinX);
    return 1;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    lua_pushinteger(L, obj->bounds.MinY);
    return 1;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "vlink") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->vlink;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "home") == 0) {
    struct Layer_Info **ud = (struct Layer_Info **)lua_newuserdata(L, sizeof(struct Layer_Info *));
    *ud = (struct Layer_Info*)obj->home;
    luaL_getmetatable(L, "Layer_Info");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "reserved") == 0) {
    lua_pushlightuserdata(L, obj->reserved);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ClipRect));
    return 1;
}

  return 0;
}

static void
_lua_gen_ClipRect_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "obscured");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bounds.MinX");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bounds.MinY");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bounds.MaxX");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "bounds.MaxY");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "reserved");
  lua_rawseti(L, -2, 6);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ClipRect(lua_State *L) {
  if (luaL_newmetatable(L, "ClipRect")) {
    lua_pushcfunction(L, _lua_gen_ClipRect_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ClipRect_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ClipRect_constructor);
    lua_setglobal(L, "ClipRect");
    _lua_gen_ClipRect_install_keys(L);
    lua_pushstring(L, "ClipRect");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_GelsInfo_newindex(lua_State *L)
{
  struct GelsInfo *obj = *(struct GelsInfo **)luaL_checkudata(L, 1, "GelsInfo");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "sprRsrvd") == 0) {
    obj->sprRsrvd = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "gelHead") == 0) {
    // finder 1
    //obj->gelHead = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->gelHead = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "gelTail") == 0) {
    // finder 1
    //obj->gelTail = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->gelTail = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "nextLine") == 0) {
    obj->nextLine = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "lastColor") == 0) {
    obj->lastColor = (WORD **)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "collHandler") == 0) {
    // finder 1
    //obj->collHandler = *(struct collTable **)luaL_checkudata(L, 3, "collTable");
    obj->collHandler = (struct collTable *)_lua_gen_checkcollTable(L, 3);
    return 0;
  }
  if (strcmp(key, "leftmost") == 0) {
    obj->leftmost = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rightmost") == 0) {
    obj->rightmost = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "topmost") == 0) {
    obj->topmost = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bottommost") == 0) {
    obj->bottommost = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "firstBlissObj") == 0) {
    obj->firstBlissObj = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "lastBlissObj") == 0) {
    obj->lastBlissObj = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_GelsInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-struct GelsInfo in userdata
  struct GelsInfo **objp = lua_newuserdata(L, sizeof(struct GelsInfo *));
  *objp = malloc(sizeof(struct GelsInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct GelsInfo));

  // Set metatable
  luaL_getmetatable(L, "GelsInfo");
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
_lua_gen_GelsInfo_index(lua_State *L)
{
  struct GelsInfo *obj = *(struct GelsInfo **)luaL_checkudata(L, 1, "GelsInfo");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sprRsrvd") == 0) {
    lua_pushinteger(L, obj->sprRsrvd);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "gelHead") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->gelHead;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gelTail") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->gelTail;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "nextLine") == 0) {
    lua_pushlightuserdata(L, obj->nextLine);
    return 1;
  }
  if (strcmp(key, "lastColor") == 0) {
    lua_pushlightuserdata(L, obj->lastColor);
    return 1;
  }
  if (strcmp(key, "collHandler") == 0) {
    struct collTable **ud = (struct collTable **)lua_newuserdata(L, sizeof(struct collTable *));
    *ud = (struct collTable*)obj->collHandler;
    luaL_getmetatable(L, "collTable");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "leftmost") == 0) {
    lua_pushinteger(L, obj->leftmost);
    return 1;
  }
  if (strcmp(key, "rightmost") == 0) {
    lua_pushinteger(L, obj->rightmost);
    return 1;
  }
  if (strcmp(key, "topmost") == 0) {
    lua_pushinteger(L, obj->topmost);
    return 1;
  }
  if (strcmp(key, "bottommost") == 0) {
    lua_pushinteger(L, obj->bottommost);
    return 1;
  }
  if (strcmp(key, "firstBlissObj") == 0) {
    lua_pushlightuserdata(L, obj->firstBlissObj);
    return 1;
  }
  if (strcmp(key, "lastBlissObj") == 0) {
    lua_pushlightuserdata(L, obj->lastBlissObj);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct GelsInfo));
    return 1;
}

  return 0;
}

static void
_lua_gen_GelsInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "sprRsrvd");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "nextLine");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "lastColor");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "leftmost");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "rightmost");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "topmost");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "bottommost");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "firstBlissObj");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "lastBlissObj");
  lua_rawseti(L, -2, 10);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_GelsInfo(lua_State *L) {
  if (luaL_newmetatable(L, "GelsInfo")) {
    lua_pushcfunction(L, _lua_gen_GelsInfo_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_GelsInfo_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_GelsInfo_constructor);
    lua_setglobal(L, "GelsInfo");
    _lua_gen_GelsInfo_install_keys(L);
    lua_pushstring(L, "GelsInfo");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_InputEvent_newindex(lua_State *L)
{
  struct InputEvent *obj = *(struct InputEvent **)luaL_checkudata(L, 1, "InputEvent");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ie_NextEvent") == 0) {
    // finder 1
    //obj->ie_NextEvent = *(struct InputEvent **)luaL_checkudata(L, 3, "InputEvent");
    obj->ie_NextEvent = (struct InputEvent *)_lua_gen_checkInputEvent(L, 3);
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
  if (strcmp(key, "ie_position.ie_xy.ie_x") == 0) {
    obj->ie_position.ie_xy.ie_x = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_xy.ie_y") == 0) {
    obj->ie_position.ie_xy.ie_y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_addr") == 0) {
    obj->ie_position.ie_addr = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev1DownCode") == 0) {
    obj->ie_position.ie_dead.ie_prev1DownCode = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev1DownQual") == 0) {
    obj->ie_position.ie_dead.ie_prev1DownQual = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev2DownCode") == 0) {
    obj->ie_position.ie_dead.ie_prev2DownCode = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev2DownQual") == 0) {
    obj->ie_position.ie_dead.ie_prev2DownQual = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type ie_position unnamed union
  if (strcmp(key, "ie_position") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field ie_position");
  }
  if (strcmp(key, "ie_TimeStamp") == 0) {
    // finder 0
    TimeVal_Type *val = *(TimeVal_Type **)luaL_checkudata(L, 3, "TimeVal_Type");
    obj->ie_TimeStamp = *val;
    return 0;
  }
  return 0;
}


static int
_lua_InputEvent_constructor(lua_State *L)
{
  // Allocate pointer-to-struct InputEvent in userdata
  struct InputEvent **objp = lua_newuserdata(L, sizeof(struct InputEvent *));
  *objp = malloc(sizeof(struct InputEvent));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct InputEvent));

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
  struct InputEvent *obj = *(struct InputEvent **)luaL_checkudata(L, 1, "InputEvent");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ie_NextEvent") == 0) {
    struct InputEvent **ud = (struct InputEvent **)lua_newuserdata(L, sizeof(struct InputEvent *));
    *ud = (struct InputEvent*)obj->ie_NextEvent;
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
  if (strcmp(key, "ie_position.ie_xy.ie_x") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_xy.ie_x);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_xy.ie_y") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_xy.ie_y);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_addr") == 0) {
    lua_pushlightuserdata(L, obj->ie_position.ie_addr);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev1DownCode") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_dead.ie_prev1DownCode);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev1DownQual") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_dead.ie_prev1DownQual);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev2DownCode") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_dead.ie_prev2DownCode);
    return 1;
  }
  if (strcmp(key, "ie_position.ie_dead.ie_prev2DownQual") == 0) {
    lua_pushinteger(L, obj->ie_position.ie_dead.ie_prev2DownQual);
    return 1;
  }
  // Unsupported ie_position unnamed union
  if (strcmp(key, "ie_position") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field ie_position");
  }
  if (strcmp(key, "ie_TimeStamp") == 0) {
    TimeVal_Type **ud = (TimeVal_Type **)lua_newuserdata(L, sizeof(TimeVal_Type *));
    *ud = (TimeVal_Type*)&obj->ie_TimeStamp;
    luaL_getmetatable(L, "TimeVal_Type");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct InputEvent));
    return 1;
}

  return 0;
}

static void
_lua_gen_InputEvent_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ie_Class");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ie_SubClass");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ie_Code");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ie_Qualifier");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ie_position.ie_xy.ie_x");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "ie_position.ie_xy.ie_y");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ie_position.ie_addr");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ie_position.ie_dead.ie_prev1DownCode");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ie_position.ie_dead.ie_prev1DownQual");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "ie_position.ie_dead.ie_prev2DownCode");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "ie_position.ie_dead.ie_prev2DownQual");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "ie_TimeStamp");
  lua_rawseti(L, -2, 12);
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
_lua_gen_Interrupt_newindex(lua_State *L)
{
  struct Interrupt *obj = *(struct Interrupt **)luaL_checkudata(L, 1, "Interrupt");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "is_Node.ln_Succ") == 0) {
    // finder 1
    //obj->is_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->is_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "is_Node.ln_Pred") == 0) {
    // finder 1
    //obj->is_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->is_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "is_Node.ln_Type") == 0) {
    obj->is_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "is_Node.ln_Pri") == 0) {
    obj->is_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "is_Node.ln_Name") == 0) {
    obj->is_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "is_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->is_Node = *val;
    return 0;
  }
  if (strcmp(key, "is_Data") == 0) {
    obj->is_Data = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type is_Code void ()()
  if (strcmp(key, "is_Code") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field is_Code");
  }
  return 0;
}


static int
_lua_Interrupt_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Interrupt in userdata
  struct Interrupt **objp = lua_newuserdata(L, sizeof(struct Interrupt *));
  *objp = malloc(sizeof(struct Interrupt));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Interrupt));

  // Set metatable
  luaL_getmetatable(L, "Interrupt");
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
_lua_gen_Interrupt_index(lua_State *L)
{
  struct Interrupt *obj = *(struct Interrupt **)luaL_checkudata(L, 1, "Interrupt");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "is_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->is_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "is_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->is_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "is_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->is_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "is_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->is_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "is_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->is_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "is_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->is_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "is_Data") == 0) {
    lua_pushlightuserdata(L, obj->is_Data);
    return 1;
  }
  // Unsupported is_Code void (*)()
  if (strcmp(key, "is_Code") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field is_Code");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Interrupt));
    return 1;
}

  return 0;
}

static void
_lua_gen_Interrupt_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "is_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "is_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "is_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "is_Data");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "is_Code");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Interrupt(lua_State *L) {
  if (luaL_newmetatable(L, "Interrupt")) {
    lua_pushcfunction(L, _lua_gen_Interrupt_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Interrupt_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Interrupt_constructor);
    lua_setglobal(L, "Interrupt");
    _lua_gen_Interrupt_install_keys(L);
    lua_pushstring(L, "Interrupt");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Layer_newindex(lua_State *L)
{
  struct Layer *obj = *(struct Layer **)luaL_checkudata(L, 1, "Layer");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "front") == 0) {
    // finder 1
    //obj->front = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->front = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "back") == 0) {
    // finder 1
    //obj->back = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->back = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "ClipRect") == 0) {
    // finder 1
    //obj->ClipRect = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->ClipRect = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "rp") == 0) {
    // finder 1
    //obj->rp = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->rp = (struct RastPort *)_lua_gen_checkRastPort(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    obj->bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    obj->bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    obj->bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    obj->bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  if (strcmp(key, "nlink") == 0) {
    // finder 1
    //obj->nlink = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->nlink = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "priority") == 0) {
    obj->priority = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "SuperBitMap") == 0) {
    // finder 1
    //obj->SuperBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->SuperBitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "SuperClipRect") == 0) {
    // finder 1
    //obj->SuperClipRect = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->SuperClipRect = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "Window") == 0) {
    obj->Window = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Scroll_X") == 0) {
    obj->Scroll_X = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Scroll_Y") == 0) {
    obj->Scroll_Y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "OnScreen") == 0) {
    // finder 1
    //obj->OnScreen = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->OnScreen = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "OffScreen") == 0) {
    // finder 1
    //obj->OffScreen = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->OffScreen = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "Backup") == 0) {
    // finder 1
    //obj->Backup = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->Backup = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "SuperSaveClipRects") == 0) {
    // finder 1
    //obj->SuperSaveClipRects = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->SuperSaveClipRects = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "Undamaged") == 0) {
    // finder 1
    //obj->Undamaged = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->Undamaged = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo") == 0) {
    // finder 1
    //obj->LayerInfo = *(struct Layer_Info **)luaL_checkudata(L, 3, "Layer_Info");
    obj->LayerInfo = (struct Layer_Info *)_lua_gen_checkLayer_Info(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->Lock.ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->Lock.ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Type") == 0) {
    obj->Lock.ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pri") == 0) {
    obj->Lock.ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Name") == 0) {
    obj->Lock.ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_NestCount") == 0) {
    obj->Lock.ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->Lock.ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->Lock.ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->Lock.ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_Owner") == 0) {
    // finder 1
    //obj->Lock.ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->Lock.ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_QueueCount") == 0) {
    obj->Lock.ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->Lock = *val;
    return 0;
  }
  if (strcmp(key, "BackFill") == 0) {
    // finder 1
    //obj->BackFill = *(struct Hook **)luaL_checkudata(L, 3, "Hook");
    obj->BackFill = (struct Hook *)_lua_gen_checkHook(L, 3);
    return 0;
  }
  if (strcmp(key, "reserved1") == 0) {
    obj->reserved1 = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ClipRegion") == 0) {
    // finder 1
    //obj->ClipRegion = *(struct Region **)luaL_checkudata(L, 3, "Region");
    obj->ClipRegion = (struct Region *)_lua_gen_checkRegion(L, 3);
    return 0;
  }
  if (strcmp(key, "clipped") == 0) {
    // finder 1
    //obj->clipped = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->clipped = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
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
  // reserved2[18] proxied via the index
  if (strcmp(key, "DamageList") == 0) {
    // finder 1
    //obj->DamageList = *(struct Region **)luaL_checkudata(L, 3, "Region");
    obj->DamageList = (struct Region *)_lua_gen_checkRegion(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Layer_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Layer in userdata
  struct Layer **objp = lua_newuserdata(L, sizeof(struct Layer *));
  *objp = malloc(sizeof(struct Layer));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Layer));

  // Set metatable
  luaL_getmetatable(L, "Layer");
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
_lua_gen_Layer_index(lua_State *L)
{
  struct Layer *obj = *(struct Layer **)luaL_checkudata(L, 1, "Layer");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "front") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->front;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "back") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->back;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ClipRect") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->ClipRect;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "rp") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)obj->rp;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    lua_pushinteger(L, obj->bounds.MinX);
    return 1;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    lua_pushinteger(L, obj->bounds.MinY);
    return 1;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "nlink") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->nlink;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "priority") == 0) {
    lua_pushinteger(L, obj->priority);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "SuperBitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->SuperBitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SuperClipRect") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->SuperClipRect;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Window") == 0) {
    lua_pushlightuserdata(L, obj->Window);
    return 1;
  }
  if (strcmp(key, "Scroll_X") == 0) {
    lua_pushinteger(L, obj->Scroll_X);
    return 1;
  }
  if (strcmp(key, "Scroll_Y") == 0) {
    lua_pushinteger(L, obj->Scroll_Y);
    return 1;
  }
  if (strcmp(key, "OnScreen") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->OnScreen;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "OffScreen") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->OffScreen;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Backup") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->Backup;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SuperSaveClipRects") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->SuperSaveClipRects;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Undamaged") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->Undamaged;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo") == 0) {
    struct Layer_Info **ud = (struct Layer_Info **)lua_newuserdata(L, sizeof(struct Layer_Info *));
    *ud = (struct Layer_Info*)obj->LayerInfo;
    luaL_getmetatable(L, "Layer_Info");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->Lock.ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->Lock.ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->Lock.ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->Lock.ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->Lock.ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->Lock.ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_NestCount") == 0) {
    lua_pushinteger(L, obj->Lock.ss_NestCount);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->Lock.ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->Lock.ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->Lock.ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->Lock.ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->Lock.ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->Lock.ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "Lock") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->Lock;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BackFill") == 0) {
    struct Hook **ud = (struct Hook **)lua_newuserdata(L, sizeof(struct Hook *));
    *ud = (struct Hook*)obj->BackFill;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "reserved1") == 0) {
    lua_pushinteger(L, obj->reserved1);
    return 1;
  }
  if (strcmp(key, "ClipRegion") == 0) {
    struct Region **ud = (struct Region **)lua_newuserdata(L, sizeof(struct Region *));
    *ud = (struct Region*)obj->ClipRegion;
    luaL_getmetatable(L, "Region");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "clipped") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->clipped;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
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
  if (strcmp(key, "reserved2") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->reserved2, 18);
    return 1;
  }
  if (strcmp(key, "DamageList") == 0) {
    struct Region **ud = (struct Region **)lua_newuserdata(L, sizeof(struct Region *));
    *ud = (struct Region*)obj->DamageList;
    luaL_getmetatable(L, "Region");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Layer));
    return 1;
}

  return 0;
}

static void
_lua_gen_Layer_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bounds.MinX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bounds.MinY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bounds.MaxX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bounds.MaxY");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "priority");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Window");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Scroll_X");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Scroll_Y");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "Lock.ss_Link.ln_Type");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Lock.ss_Link.ln_Pri");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "Lock.ss_Link.ln_Name");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "Lock.ss_NestCount");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "Lock.ss_QueueCount");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "reserved1");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "reserved2");
  lua_rawseti(L, -2, 18);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Layer(lua_State *L) {
  if (luaL_newmetatable(L, "Layer")) {
    lua_pushcfunction(L, _lua_gen_Layer_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Layer_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Layer_constructor);
    lua_setglobal(L, "Layer");
    _lua_gen_Layer_install_keys(L);
    lua_pushstring(L, "Layer");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Layer_Info_newindex(lua_State *L)
{
  struct Layer_Info *obj = *(struct Layer_Info **)luaL_checkudata(L, 1, "Layer_Info");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "top_layer") == 0) {
    // finder 1
    //obj->top_layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->top_layer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "resPtr1") == 0) {
    obj->resPtr1 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "resPtr2") == 0) {
    obj->resPtr2 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "FreeClipRects") == 0) {
    // finder 1
    //obj->FreeClipRects = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->FreeClipRects = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    obj->bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    obj->bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    obj->bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    obj->bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->Lock.ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->Lock.ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Type") == 0) {
    obj->Lock.ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pri") == 0) {
    obj->Lock.ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Name") == 0) {
    obj->Lock.ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->Lock.ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_NestCount") == 0) {
    obj->Lock.ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->Lock.ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->Lock.ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->Lock.ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->Lock.ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->Lock.ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->Lock.ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "Lock.ss_Owner") == 0) {
    // finder 1
    //obj->Lock.ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->Lock.ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock.ss_QueueCount") == 0) {
    obj->Lock.ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Lock") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->Lock = *val;
    return 0;
  }
  if (strcmp(key, "gs_Head.mlh_Head") == 0) {
    // finder 1
    //obj->gs_Head.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->gs_Head.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "gs_Head.mlh_Tail") == 0) {
    // finder 1
    //obj->gs_Head.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->gs_Head.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "gs_Head.mlh_TailPred") == 0) {
    // finder 1
    //obj->gs_Head.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->gs_Head.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "gs_Head") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->gs_Head = *val;
    return 0;
  }
  if (strcmp(key, "PrivateReserve3") == 0) {
    obj->PrivateReserve3 = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PrivateReserve4") == 0) {
    obj->PrivateReserve4 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "res_count") == 0) {
    obj->res_count = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LockLayersCount") == 0) {
    obj->LockLayersCount = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PrivateReserve5") == 0) {
    obj->PrivateReserve5 = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "UserClipRectsCount") == 0) {
    obj->UserClipRectsCount = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlankHook") == 0) {
    // finder 1
    //obj->BlankHook = *(struct Hook **)luaL_checkudata(L, 3, "Hook");
    obj->BlankHook = (struct Hook *)_lua_gen_checkHook(L, 3);
    return 0;
  }
  if (strcmp(key, "resPtr5") == 0) {
    obj->resPtr5 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Layer_Info_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Layer_Info in userdata
  struct Layer_Info **objp = lua_newuserdata(L, sizeof(struct Layer_Info *));
  *objp = malloc(sizeof(struct Layer_Info));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Layer_Info));

  // Set metatable
  luaL_getmetatable(L, "Layer_Info");
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
_lua_gen_Layer_Info_index(lua_State *L)
{
  struct Layer_Info *obj = *(struct Layer_Info **)luaL_checkudata(L, 1, "Layer_Info");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "top_layer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->top_layer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "resPtr1") == 0) {
    lua_pushlightuserdata(L, obj->resPtr1);
    return 1;
  }
  if (strcmp(key, "resPtr2") == 0) {
    lua_pushlightuserdata(L, obj->resPtr2);
    return 1;
  }
  if (strcmp(key, "FreeClipRects") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->FreeClipRects;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    lua_pushinteger(L, obj->bounds.MinX);
    return 1;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    lua_pushinteger(L, obj->bounds.MinY);
    return 1;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->Lock.ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->Lock.ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->Lock.ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->Lock.ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->Lock.ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->Lock.ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_NestCount") == 0) {
    lua_pushinteger(L, obj->Lock.ss_NestCount);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->Lock.ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->Lock.ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->Lock.ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->Lock.ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->Lock.ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->Lock.ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Lock.ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->Lock.ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "Lock") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->Lock;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gs_Head.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->gs_Head.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gs_Head.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->gs_Head.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gs_Head.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->gs_Head.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gs_Head") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->gs_Head;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PrivateReserve3") == 0) {
    lua_pushinteger(L, obj->PrivateReserve3);
    return 1;
  }
  if (strcmp(key, "PrivateReserve4") == 0) {
    lua_pushlightuserdata(L, obj->PrivateReserve4);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "res_count") == 0) {
    lua_pushinteger(L, obj->res_count);
    return 1;
  }
  if (strcmp(key, "LockLayersCount") == 0) {
    lua_pushinteger(L, obj->LockLayersCount);
    return 1;
  }
  if (strcmp(key, "PrivateReserve5") == 0) {
    lua_pushinteger(L, obj->PrivateReserve5);
    return 1;
  }
  if (strcmp(key, "UserClipRectsCount") == 0) {
    lua_pushinteger(L, obj->UserClipRectsCount);
    return 1;
  }
  if (strcmp(key, "BlankHook") == 0) {
    struct Hook **ud = (struct Hook **)lua_newuserdata(L, sizeof(struct Hook *));
    *ud = (struct Hook*)obj->BlankHook;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "resPtr5") == 0) {
    lua_pushlightuserdata(L, obj->resPtr5);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Layer_Info));
    return 1;
}

  return 0;
}

static void
_lua_gen_Layer_Info_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bounds.MinX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bounds.MinY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bounds.MaxX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bounds.MaxY");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Lock.ss_Link.ln_Type");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Lock.ss_Link.ln_Pri");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Lock.ss_Link.ln_Name");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Lock.ss_NestCount");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Lock.ss_QueueCount");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "PrivateReserve3");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "res_count");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "LockLayersCount");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "PrivateReserve5");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "UserClipRectsCount");
  lua_rawseti(L, -2, 15);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Layer_Info(lua_State *L) {
  if (luaL_newmetatable(L, "Layer_Info")) {
    lua_pushcfunction(L, _lua_gen_Layer_Info_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Layer_Info_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Layer_Info_constructor);
    lua_setglobal(L, "Layer_Info");
    _lua_gen_Layer_Info_install_keys(L);
    lua_pushstring(L, "Layer_Info");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MemHeader_newindex(lua_State *L)
{
  struct MemHeader *obj = *(struct MemHeader **)luaL_checkudata(L, 1, "MemHeader");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mh_Node.ln_Succ") == 0) {
    // finder 1
    //obj->mh_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mh_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Node.ln_Pred") == 0) {
    // finder 1
    //obj->mh_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mh_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Node.ln_Type") == 0) {
    obj->mh_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Node.ln_Pri") == 0) {
    obj->mh_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Node.ln_Name") == 0) {
    obj->mh_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mh_Node = *val;
    return 0;
  }
  if (strcmp(key, "mh_Attributes") == 0) {
    obj->mh_Attributes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_First") == 0) {
    // finder 1
    //obj->mh_First = *(struct MemChunk **)luaL_checkudata(L, 3, "MemChunk");
    obj->mh_First = (struct MemChunk *)_lua_gen_checkMemChunk(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Lower") == 0) {
    obj->mh_Lower = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Upper") == 0) {
    obj->mh_Upper = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "mh_Free") == 0) {
    obj->mh_Free = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_MemHeader_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MemHeader in userdata
  struct MemHeader **objp = lua_newuserdata(L, sizeof(struct MemHeader *));
  *objp = malloc(sizeof(struct MemHeader));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MemHeader));

  // Set metatable
  luaL_getmetatable(L, "MemHeader");
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
_lua_gen_MemHeader_index(lua_State *L)
{
  struct MemHeader *obj = *(struct MemHeader **)luaL_checkudata(L, 1, "MemHeader");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mh_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mh_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mh_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->mh_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mh_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->mh_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "mh_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->mh_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "mh_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->mh_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "mh_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->mh_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mh_Attributes") == 0) {
    lua_pushinteger(L, obj->mh_Attributes);
    return 1;
  }
  if (strcmp(key, "mh_First") == 0) {
    struct MemChunk **ud = (struct MemChunk **)lua_newuserdata(L, sizeof(struct MemChunk *));
    *ud = (struct MemChunk*)obj->mh_First;
    luaL_getmetatable(L, "MemChunk");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mh_Lower") == 0) {
    lua_pushlightuserdata(L, obj->mh_Lower);
    return 1;
  }
  if (strcmp(key, "mh_Upper") == 0) {
    lua_pushlightuserdata(L, obj->mh_Upper);
    return 1;
  }
  if (strcmp(key, "mh_Free") == 0) {
    lua_pushinteger(L, obj->mh_Free);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MemHeader));
    return 1;
}

  return 0;
}

static void
_lua_gen_MemHeader_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mh_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mh_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "mh_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "mh_Attributes");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "mh_Lower");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "mh_Upper");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "mh_Free");
  lua_rawseti(L, -2, 7);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MemHeader(lua_State *L) {
  if (luaL_newmetatable(L, "MemHeader")) {
    lua_pushcfunction(L, _lua_gen_MemHeader_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MemHeader_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MemHeader_constructor);
    lua_setglobal(L, "MemHeader");
    _lua_gen_MemHeader_install_keys(L);
    lua_pushstring(L, "MemHeader");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MemList_newindex(lua_State *L)
{
  struct MemList *obj = *(struct MemList **)luaL_checkudata(L, 1, "MemList");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "ml_Node.ln_Succ") == 0) {
    // finder 1
    //obj->ml_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ml_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ml_Node.ln_Pred") == 0) {
    // finder 1
    //obj->ml_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ml_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "ml_Node.ln_Type") == 0) {
    obj->ml_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ml_Node.ln_Pri") == 0) {
    obj->ml_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ml_Node.ln_Name") == 0) {
    obj->ml_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "ml_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->ml_Node = *val;
    return 0;
  }
  if (strcmp(key, "ml_NumEntries") == 0) {
    obj->ml_NumEntries = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // ml_ME[1] proxied via the index
  return 0;
}


static int
_lua_MemList_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MemList in userdata
  struct MemList **objp = lua_newuserdata(L, sizeof(struct MemList *));
  *objp = malloc(sizeof(struct MemList));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MemList));

  // Set metatable
  luaL_getmetatable(L, "MemList");
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
_lua_gen_MemList_index(lua_State *L)
{
  struct MemList *obj = *(struct MemList **)luaL_checkudata(L, 1, "MemList");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ml_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ml_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ml_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->ml_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ml_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->ml_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "ml_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->ml_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "ml_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->ml_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "ml_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->ml_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ml_NumEntries") == 0) {
    lua_pushinteger(L, obj->ml_NumEntries);
    return 1;
  }
  if (strcmp(key, "ml_ME") == 0) {
     return luaL_error(L, "Unsupported array type struct MemEntry");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MemList));
    return 1;
}

  return 0;
}

static void
_lua_gen_MemList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ml_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ml_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ml_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ml_NumEntries");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MemList(lua_State *L) {
  if (luaL_newmetatable(L, "MemList")) {
    lua_pushcfunction(L, _lua_gen_MemList_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MemList_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MemList_constructor);
    lua_setglobal(L, "MemList");
    _lua_gen_MemList_install_keys(L);
    lua_pushstring(L, "MemList");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_RastPort_newindex(lua_State *L)
{
  struct RastPort *obj = *(struct RastPort **)luaL_checkudata(L, 1, "RastPort");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Layer") == 0) {
    // finder 1
    //obj->Layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->Layer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    //obj->BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->BitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "AreaPtrn") == 0) {
    obj->AreaPtrn = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "TmpRas") == 0) {
    // finder 1
    //obj->TmpRas = *(struct TmpRas **)luaL_checkudata(L, 3, "TmpRas");
    obj->TmpRas = (struct TmpRas *)_lua_gen_checkTmpRas(L, 3);
    return 0;
  }
  if (strcmp(key, "AreaInfo") == 0) {
    // finder 1
    //obj->AreaInfo = *(struct AreaInfo **)luaL_checkudata(L, 3, "AreaInfo");
    obj->AreaInfo = (struct AreaInfo *)_lua_gen_checkAreaInfo(L, 3);
    return 0;
  }
  if (strcmp(key, "GelsInfo") == 0) {
    // finder 1
    //obj->GelsInfo = *(struct GelsInfo **)luaL_checkudata(L, 3, "GelsInfo");
    obj->GelsInfo = (struct GelsInfo *)_lua_gen_checkGelsInfo(L, 3);
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
  // minterms[8] proxied via the index
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
    //obj->Font = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
    obj->Font = (struct TextFont *)_lua_gen_checkTextFont(L, 3);
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
  if (strcmp(key, "RP_User") == 0) {
    obj->RP_User = (APTR *)lua_touserdata(L, 3);
    return 0;
  }
  // longreserved[2] proxied via the index
  // wordreserved[7] proxied via the index
  // reserved[8] proxied via the index
  return 0;
}


static int
_lua_RastPort_constructor(lua_State *L)
{
  // Allocate pointer-to-struct RastPort in userdata
  struct RastPort **objp = lua_newuserdata(L, sizeof(struct RastPort *));
  *objp = malloc(sizeof(struct RastPort));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct RastPort));

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
  struct RastPort *obj = *(struct RastPort **)luaL_checkudata(L, 1, "RastPort");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Layer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->Layer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "AreaPtrn") == 0) {
    lua_pushlightuserdata(L, obj->AreaPtrn);
    return 1;
  }
  if (strcmp(key, "TmpRas") == 0) {
    struct TmpRas **ud = (struct TmpRas **)lua_newuserdata(L, sizeof(struct TmpRas *));
    *ud = (struct TmpRas*)obj->TmpRas;
    luaL_getmetatable(L, "TmpRas");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "AreaInfo") == 0) {
    struct AreaInfo **ud = (struct AreaInfo **)lua_newuserdata(L, sizeof(struct AreaInfo *));
    *ud = (struct AreaInfo*)obj->AreaInfo;
    luaL_getmetatable(L, "AreaInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "GelsInfo") == 0) {
    struct GelsInfo **ud = (struct GelsInfo **)lua_newuserdata(L, sizeof(struct GelsInfo *));
    *ud = (struct GelsInfo*)obj->GelsInfo;
    luaL_getmetatable(L, "GelsInfo");
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
  if (strcmp(key, "minterms") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->minterms, 8);
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
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = (struct TextFont*)obj->Font;
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
  if (strcmp(key, "RP_User") == 0) {
    lua_pushlightuserdata(L, obj->RP_User);
    return 1;
  }
  if (strcmp(key, "longreserved") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->longreserved, 2);
    return 1;
  }
  if (strcmp(key, "wordreserved") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->wordreserved, 7);
    return 1;
  }
  if (strcmp(key, "reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->reserved, 8);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct RastPort));
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
  lua_pushstring(L, "minterms");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "PenWidth");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "PenHeight");
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
  lua_pushstring(L, "longreserved");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "wordreserved");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "reserved");
  lua_rawseti(L, -2, 26);
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
_lua_gen_Region_newindex(lua_State *L)
{
  struct Region *obj = *(struct Region **)luaL_checkudata(L, 1, "Region");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "bounds.MinX") == 0) {
    obj->bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    obj->bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    obj->bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    obj->bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  if (strcmp(key, "RegionRectangle") == 0) {
    // finder 1
    //obj->RegionRectangle = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
    obj->RegionRectangle = (struct RegionRectangle *)_lua_gen_checkRegionRectangle(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Region_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Region in userdata
  struct Region **objp = lua_newuserdata(L, sizeof(struct Region *));
  *objp = malloc(sizeof(struct Region));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Region));

  // Set metatable
  luaL_getmetatable(L, "Region");
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
_lua_gen_Region_index(lua_State *L)
{
  struct Region *obj = *(struct Region **)luaL_checkudata(L, 1, "Region");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "bounds.MinX") == 0) {
    lua_pushinteger(L, obj->bounds.MinX);
    return 1;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    lua_pushinteger(L, obj->bounds.MinY);
    return 1;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RegionRectangle") == 0) {
    struct RegionRectangle **ud = (struct RegionRectangle **)lua_newuserdata(L, sizeof(struct RegionRectangle *));
    *ud = (struct RegionRectangle*)obj->RegionRectangle;
    luaL_getmetatable(L, "RegionRectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Region));
    return 1;
}

  return 0;
}

static void
_lua_gen_Region_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bounds.MinX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bounds.MinY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bounds.MaxX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bounds.MaxY");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Region(lua_State *L) {
  if (luaL_newmetatable(L, "Region")) {
    lua_pushcfunction(L, _lua_gen_Region_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Region_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Region_constructor);
    lua_setglobal(L, "Region");
    _lua_gen_Region_install_keys(L);
    lua_pushstring(L, "Region");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Resident_newindex(lua_State *L)
{
  struct Resident *obj = *(struct Resident **)luaL_checkudata(L, 1, "Resident");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "rt_MatchWord") == 0) {
    obj->rt_MatchWord = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_MatchTag") == 0) {
    // finder 1
    //obj->rt_MatchTag = *(struct Resident **)luaL_checkudata(L, 3, "Resident");
    obj->rt_MatchTag = (struct Resident *)_lua_gen_checkResident(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_EndSkip") == 0) {
    obj->rt_EndSkip = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Flags") == 0) {
    obj->rt_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Version") == 0) {
    obj->rt_Version = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Type") == 0) {
    obj->rt_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Pri") == 0) {
    obj->rt_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Name") == 0) {
    obj->rt_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_IdString") == 0) {
    obj->rt_IdString = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_Init") == 0) {
    obj->rt_Init = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Resident_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Resident in userdata
  struct Resident **objp = lua_newuserdata(L, sizeof(struct Resident *));
  *objp = malloc(sizeof(struct Resident));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Resident));

  // Set metatable
  luaL_getmetatable(L, "Resident");
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
_lua_gen_Resident_index(lua_State *L)
{
  struct Resident *obj = *(struct Resident **)luaL_checkudata(L, 1, "Resident");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "rt_MatchWord") == 0) {
    lua_pushinteger(L, obj->rt_MatchWord);
    return 1;
  }
  if (strcmp(key, "rt_MatchTag") == 0) {
    struct Resident **ud = (struct Resident **)lua_newuserdata(L, sizeof(struct Resident *));
    *ud = (struct Resident*)obj->rt_MatchTag;
    luaL_getmetatable(L, "Resident");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "rt_EndSkip") == 0) {
    lua_pushlightuserdata(L, obj->rt_EndSkip);
    return 1;
  }
  if (strcmp(key, "rt_Flags") == 0) {
    lua_pushinteger(L, obj->rt_Flags);
    return 1;
  }
  if (strcmp(key, "rt_Version") == 0) {
    lua_pushinteger(L, obj->rt_Version);
    return 1;
  }
  if (strcmp(key, "rt_Type") == 0) {
    lua_pushinteger(L, obj->rt_Type);
    return 1;
  }
  if (strcmp(key, "rt_Pri") == 0) {
    lua_pushinteger(L, obj->rt_Pri);
    return 1;
  }
  if (strcmp(key, "rt_Name") == 0) {
    lua_pushstring(L, obj->rt_Name);
    return 1;
  }
  if (strcmp(key, "rt_IdString") == 0) {
    lua_pushstring(L, obj->rt_IdString);
    return 1;
  }
  if (strcmp(key, "rt_Init") == 0) {
    lua_pushlightuserdata(L, obj->rt_Init);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Resident));
    return 1;
}

  return 0;
}

static void
_lua_gen_Resident_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "rt_MatchWord");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "rt_EndSkip");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "rt_Flags");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "rt_Version");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "rt_Type");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "rt_Pri");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "rt_Name");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "rt_IdString");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "rt_Init");
  lua_rawseti(L, -2, 9);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Resident(lua_State *L) {
  if (luaL_newmetatable(L, "Resident")) {
    lua_pushcfunction(L, _lua_gen_Resident_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Resident_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Resident_constructor);
    lua_setglobal(L, "Resident");
    _lua_gen_Resident_install_keys(L);
    lua_pushstring(L, "Resident");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Screen_newindex(lua_State *L)
{
  struct Screen *obj = *(struct Screen **)luaL_checkudata(L, 1, "Screen");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "NextScreen") == 0) {
    // finder 1
    //obj->NextScreen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    obj->NextScreen = (struct Screen *)_lua_gen_checkScreen(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstWindow") == 0) {
    // finder 1
    //obj->FirstWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
    obj->FirstWindow = (struct Window *)_lua_gen_checkWindow(L, 3);
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
    //obj->Font = *(struct TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    obj->Font = (struct TextAttr *)_lua_gen_checkTextAttr(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.Next") == 0) {
    // finder 1
    //obj->ViewPort.Next = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort.Next = (struct ViewPort *)_lua_gen_checkViewPort(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.ColorMap") == 0) {
    // finder 1
    //obj->ViewPort.ColorMap = *(struct ColorMap **)luaL_checkudata(L, 3, "ColorMap");
    obj->ViewPort.ColorMap = (struct ColorMap *)_lua_gen_checkColorMap(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.DspIns") == 0) {
    // finder 1
    //obj->ViewPort.DspIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->ViewPort.DspIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.SprIns") == 0) {
    // finder 1
    //obj->ViewPort.SprIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->ViewPort.SprIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.ClrIns") == 0) {
    // finder 1
    //obj->ViewPort.ClrIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    obj->ViewPort.ClrIns = (struct CopList *)_lua_gen_checkCopList(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.UCopIns") == 0) {
    obj->ViewPort.UCopIns = (struct UCopList *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.DWidth") == 0) {
    obj->ViewPort.DWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.DHeight") == 0) {
    obj->ViewPort.DHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.DxOffset") == 0) {
    obj->ViewPort.DxOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.DyOffset") == 0) {
    obj->ViewPort.DyOffset = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.Modes") == 0) {
    obj->ViewPort.Modes = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.SpritePriorities") == 0) {
    obj->ViewPort.SpritePriorities = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ViewPort.ExtendedModes") == 0) {
    obj->ViewPort.ExtendedModes = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type ViewPort.RasInfo struct RasInfo
  if (strcmp(key, "ViewPort.RasInfo") == 0) {
    return luaL_error(L, "Unsupported type struct RasInfo for field ViewPort.RasInfo");
  }
  if (strcmp(key, "ViewPort") == 0) {
    // finder 0
    struct ViewPort *val = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort = *val;
    return 0;
  }
  if (strcmp(key, "RastPort.Layer") == 0) {
    // finder 1
    //obj->RastPort.Layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->RastPort.Layer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.BitMap") == 0) {
    // finder 1
    //obj->RastPort.BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->RastPort.BitMap = (struct BitMap *)_lua_gen_checkBitMap(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.AreaPtrn") == 0) {
    obj->RastPort.AreaPtrn = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TmpRas") == 0) {
    // finder 1
    //obj->RastPort.TmpRas = *(struct TmpRas **)luaL_checkudata(L, 3, "TmpRas");
    obj->RastPort.TmpRas = (struct TmpRas *)_lua_gen_checkTmpRas(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.AreaInfo") == 0) {
    // finder 1
    //obj->RastPort.AreaInfo = *(struct AreaInfo **)luaL_checkudata(L, 3, "AreaInfo");
    obj->RastPort.AreaInfo = (struct AreaInfo *)_lua_gen_checkAreaInfo(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.GelsInfo") == 0) {
    // finder 1
    //obj->RastPort.GelsInfo = *(struct GelsInfo **)luaL_checkudata(L, 3, "GelsInfo");
    obj->RastPort.GelsInfo = (struct GelsInfo *)_lua_gen_checkGelsInfo(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.Mask") == 0) {
    obj->RastPort.Mask = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.FgPen") == 0) {
    obj->RastPort.FgPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.BgPen") == 0) {
    obj->RastPort.BgPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.AOlPen") == 0) {
    obj->RastPort.AOlPen = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.DrawMode") == 0) {
    obj->RastPort.DrawMode = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.AreaPtSz") == 0) {
    obj->RastPort.AreaPtSz = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.linpatcnt") == 0) {
    obj->RastPort.linpatcnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.dummy") == 0) {
    obj->RastPort.dummy = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.Flags") == 0) {
    obj->RastPort.Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.LinePtrn") == 0) {
    obj->RastPort.LinePtrn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.cp_x") == 0) {
    obj->RastPort.cp_x = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.cp_y") == 0) {
    obj->RastPort.cp_y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // RastPort.minterms[8] proxied via the index
  if (strcmp(key, "RastPort.PenWidth") == 0) {
    obj->RastPort.PenWidth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.PenHeight") == 0) {
    obj->RastPort.PenHeight = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.Font") == 0) {
    // finder 1
    //obj->RastPort.Font = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
    obj->RastPort.Font = (struct TextFont *)_lua_gen_checkTextFont(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.AlgoStyle") == 0) {
    obj->RastPort.AlgoStyle = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TxFlags") == 0) {
    obj->RastPort.TxFlags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TxHeight") == 0) {
    obj->RastPort.TxHeight = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TxWidth") == 0) {
    obj->RastPort.TxWidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TxBaseline") == 0) {
    obj->RastPort.TxBaseline = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.TxSpacing") == 0) {
    obj->RastPort.TxSpacing = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RastPort.RP_User") == 0) {
    obj->RastPort.RP_User = (APTR *)lua_touserdata(L, 3);
    return 0;
  }
  // RastPort.longreserved[2] proxied via the index
  // RastPort.wordreserved[7] proxied via the index
  // RastPort.reserved[8] proxied via the index
  if (strcmp(key, "RastPort") == 0) {
    // finder 0
    struct RastPort *val = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->RastPort = *val;
    return 0;
  }
  if (strcmp(key, "BitMap.BytesPerRow") == 0) {
    obj->BitMap.BytesPerRow = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap.Rows") == 0) {
    obj->BitMap.Rows = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap.Flags") == 0) {
    obj->BitMap.Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap.Depth") == 0) {
    obj->BitMap.Depth = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BitMap.pad") == 0) {
    obj->BitMap.pad = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // BitMap.Planes[8] proxied via the index
  if (strcmp(key, "BitMap") == 0) {
    // finder 0
    struct BitMap *val = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->BitMap = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.top_layer") == 0) {
    // finder 1
    //obj->LayerInfo.top_layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->LayerInfo.top_layer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.resPtr1") == 0) {
    obj->LayerInfo.resPtr1 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.resPtr2") == 0) {
    obj->LayerInfo.resPtr2 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.FreeClipRects") == 0) {
    // finder 1
    //obj->LayerInfo.FreeClipRects = *(struct ClipRect **)luaL_checkudata(L, 3, "ClipRect");
    obj->LayerInfo.FreeClipRects = (struct ClipRect *)_lua_gen_checkClipRect(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.bounds.MinX") == 0) {
    obj->LayerInfo.bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.bounds.MinY") == 0) {
    obj->LayerInfo.bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.bounds.MaxX") == 0) {
    obj->LayerInfo.bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.bounds.MaxY") == 0) {
    obj->LayerInfo.bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->LayerInfo.bounds = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Succ") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_Link.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LayerInfo.Lock.ss_Link.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Pred") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_Link.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LayerInfo.Lock.ss_Link.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Type") == 0) {
    obj->LayerInfo.Lock.ss_Link.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Pri") == 0) {
    obj->LayerInfo.Lock.ss_Link.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Name") == 0) {
    obj->LayerInfo.Lock.ss_Link.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->LayerInfo.Lock.ss_Link = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_NestCount") == 0) {
    obj->LayerInfo.Lock.ss_NestCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_Head") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_WaitQueue.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_WaitQueue.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_Tail") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_WaitQueue.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_WaitQueue.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_WaitQueue.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_WaitQueue.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->LayerInfo.Lock.ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Succ = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Pred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.Lock.ss_MultipleLink.sr_Link = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Waiter") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_MultipleLink.sr_Waiter = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->LayerInfo.Lock.ss_MultipleLink.sr_Waiter = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink") == 0) {
    // finder 0
    struct SemaphoreRequest *val = *(struct SemaphoreRequest **)luaL_checkudata(L, 3, "SemaphoreRequest");
    obj->LayerInfo.Lock.ss_MultipleLink = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Owner") == 0) {
    // finder 1
    //obj->LayerInfo.Lock.ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->LayerInfo.Lock.ss_Owner = (struct Task *)_lua_gen_checkTask(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_QueueCount") == 0) {
    obj->LayerInfo.Lock.ss_QueueCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Lock") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->LayerInfo.Lock = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_Head") == 0) {
    // finder 1
    //obj->LayerInfo.gs_Head.mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.gs_Head.mlh_Head = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_Tail") == 0) {
    // finder 1
    //obj->LayerInfo.gs_Head.mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.gs_Head.mlh_Tail = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_TailPred") == 0) {
    // finder 1
    //obj->LayerInfo.gs_Head.mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->LayerInfo.gs_Head.mlh_TailPred = (struct MinNode *)_lua_gen_checkMinNode(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.gs_Head") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->LayerInfo.gs_Head = *val;
    return 0;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve3") == 0) {
    obj->LayerInfo.PrivateReserve3 = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve4") == 0) {
    obj->LayerInfo.PrivateReserve4 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.Flags") == 0) {
    obj->LayerInfo.Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.res_count") == 0) {
    obj->LayerInfo.res_count = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.LockLayersCount") == 0) {
    obj->LayerInfo.LockLayersCount = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve5") == 0) {
    obj->LayerInfo.PrivateReserve5 = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.UserClipRectsCount") == 0) {
    obj->LayerInfo.UserClipRectsCount = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.BlankHook") == 0) {
    // finder 1
    //obj->LayerInfo.BlankHook = *(struct Hook **)luaL_checkudata(L, 3, "Hook");
    obj->LayerInfo.BlankHook = (struct Hook *)_lua_gen_checkHook(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo.resPtr5") == 0) {
    obj->LayerInfo.resPtr5 = (void *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "LayerInfo") == 0) {
    // finder 0
    struct Layer_Info *val = *(struct Layer_Info **)luaL_checkudata(L, 3, "Layer_Info");
    obj->LayerInfo = *val;
    return 0;
  }
  // Unsupported type FirstGadget struct Gadget
  if (strcmp(key, "FirstGadget") == 0) {
    return luaL_error(L, "Unsupported type struct Gadget for field FirstGadget");
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
  if (strcmp(key, "BarLayer") == 0) {
    // finder 1
    //obj->BarLayer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->BarLayer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "ExtData") == 0) {
    obj->ExtData = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "UserData") == 0) {
    obj->UserData = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Screen_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Screen in userdata
  struct Screen **objp = lua_newuserdata(L, sizeof(struct Screen *));
  *objp = malloc(sizeof(struct Screen));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Screen));

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
  struct Screen *obj = *(struct Screen **)luaL_checkudata(L, 1, "Screen");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextScreen") == 0) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = (struct Screen*)obj->NextScreen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "FirstWindow") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->FirstWindow;
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
    struct TextAttr **ud = (struct TextAttr **)lua_newuserdata(L, sizeof(struct TextAttr *));
    *ud = (struct TextAttr*)obj->Font;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.Next") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)obj->ViewPort.Next;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.ColorMap") == 0) {
    struct ColorMap **ud = (struct ColorMap **)lua_newuserdata(L, sizeof(struct ColorMap *));
    *ud = (struct ColorMap*)obj->ViewPort.ColorMap;
    luaL_getmetatable(L, "ColorMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.DspIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->ViewPort.DspIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.SprIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->ViewPort.SprIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.ClrIns") == 0) {
    struct CopList **ud = (struct CopList **)lua_newuserdata(L, sizeof(struct CopList *));
    *ud = (struct CopList*)obj->ViewPort.ClrIns;
    luaL_getmetatable(L, "CopList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ViewPort.UCopIns") == 0) {
    lua_pushlightuserdata(L, obj->ViewPort.UCopIns);
    return 1;
  }
  if (strcmp(key, "ViewPort.DWidth") == 0) {
    lua_pushinteger(L, obj->ViewPort.DWidth);
    return 1;
  }
  if (strcmp(key, "ViewPort.DHeight") == 0) {
    lua_pushinteger(L, obj->ViewPort.DHeight);
    return 1;
  }
  if (strcmp(key, "ViewPort.DxOffset") == 0) {
    lua_pushinteger(L, obj->ViewPort.DxOffset);
    return 1;
  }
  if (strcmp(key, "ViewPort.DyOffset") == 0) {
    lua_pushinteger(L, obj->ViewPort.DyOffset);
    return 1;
  }
  if (strcmp(key, "ViewPort.Modes") == 0) {
    lua_pushinteger(L, obj->ViewPort.Modes);
    return 1;
  }
  if (strcmp(key, "ViewPort.SpritePriorities") == 0) {
    lua_pushinteger(L, obj->ViewPort.SpritePriorities);
    return 1;
  }
  if (strcmp(key, "ViewPort.ExtendedModes") == 0) {
    lua_pushinteger(L, obj->ViewPort.ExtendedModes);
    return 1;
  }
  // Unsupported ViewPort.RasInfo struct RasInfo *
  if (strcmp(key, "ViewPort.RasInfo") == 0) {
    return luaL_error(L, "Unsupported type struct RasInfo * for field ViewPort.RasInfo");
  }
  if (strcmp(key, "ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)&obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.Layer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->RastPort.Layer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->RastPort.BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.AreaPtrn") == 0) {
    lua_pushlightuserdata(L, obj->RastPort.AreaPtrn);
    return 1;
  }
  if (strcmp(key, "RastPort.TmpRas") == 0) {
    struct TmpRas **ud = (struct TmpRas **)lua_newuserdata(L, sizeof(struct TmpRas *));
    *ud = (struct TmpRas*)obj->RastPort.TmpRas;
    luaL_getmetatable(L, "TmpRas");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.AreaInfo") == 0) {
    struct AreaInfo **ud = (struct AreaInfo **)lua_newuserdata(L, sizeof(struct AreaInfo *));
    *ud = (struct AreaInfo*)obj->RastPort.AreaInfo;
    luaL_getmetatable(L, "AreaInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.GelsInfo") == 0) {
    struct GelsInfo **ud = (struct GelsInfo **)lua_newuserdata(L, sizeof(struct GelsInfo *));
    *ud = (struct GelsInfo*)obj->RastPort.GelsInfo;
    luaL_getmetatable(L, "GelsInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.Mask") == 0) {
    lua_pushinteger(L, obj->RastPort.Mask);
    return 1;
  }
  if (strcmp(key, "RastPort.FgPen") == 0) {
    lua_pushinteger(L, obj->RastPort.FgPen);
    return 1;
  }
  if (strcmp(key, "RastPort.BgPen") == 0) {
    lua_pushinteger(L, obj->RastPort.BgPen);
    return 1;
  }
  if (strcmp(key, "RastPort.AOlPen") == 0) {
    lua_pushinteger(L, obj->RastPort.AOlPen);
    return 1;
  }
  if (strcmp(key, "RastPort.DrawMode") == 0) {
    lua_pushinteger(L, obj->RastPort.DrawMode);
    return 1;
  }
  if (strcmp(key, "RastPort.AreaPtSz") == 0) {
    lua_pushinteger(L, obj->RastPort.AreaPtSz);
    return 1;
  }
  if (strcmp(key, "RastPort.linpatcnt") == 0) {
    lua_pushinteger(L, obj->RastPort.linpatcnt);
    return 1;
  }
  if (strcmp(key, "RastPort.dummy") == 0) {
    lua_pushinteger(L, obj->RastPort.dummy);
    return 1;
  }
  if (strcmp(key, "RastPort.Flags") == 0) {
    lua_pushinteger(L, obj->RastPort.Flags);
    return 1;
  }
  if (strcmp(key, "RastPort.LinePtrn") == 0) {
    lua_pushinteger(L, obj->RastPort.LinePtrn);
    return 1;
  }
  if (strcmp(key, "RastPort.cp_x") == 0) {
    lua_pushinteger(L, obj->RastPort.cp_x);
    return 1;
  }
  if (strcmp(key, "RastPort.cp_y") == 0) {
    lua_pushinteger(L, obj->RastPort.cp_y);
    return 1;
  }
  if (strcmp(key, "RastPort.minterms") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->RastPort.minterms, 8);
    return 1;
  }
  if (strcmp(key, "RastPort.PenWidth") == 0) {
    lua_pushinteger(L, obj->RastPort.PenWidth);
    return 1;
  }
  if (strcmp(key, "RastPort.PenHeight") == 0) {
    lua_pushinteger(L, obj->RastPort.PenHeight);
    return 1;
  }
  if (strcmp(key, "RastPort.Font") == 0) {
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = (struct TextFont*)obj->RastPort.Font;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort.AlgoStyle") == 0) {
    lua_pushinteger(L, obj->RastPort.AlgoStyle);
    return 1;
  }
  if (strcmp(key, "RastPort.TxFlags") == 0) {
    lua_pushinteger(L, obj->RastPort.TxFlags);
    return 1;
  }
  if (strcmp(key, "RastPort.TxHeight") == 0) {
    lua_pushinteger(L, obj->RastPort.TxHeight);
    return 1;
  }
  if (strcmp(key, "RastPort.TxWidth") == 0) {
    lua_pushinteger(L, obj->RastPort.TxWidth);
    return 1;
  }
  if (strcmp(key, "RastPort.TxBaseline") == 0) {
    lua_pushinteger(L, obj->RastPort.TxBaseline);
    return 1;
  }
  if (strcmp(key, "RastPort.TxSpacing") == 0) {
    lua_pushinteger(L, obj->RastPort.TxSpacing);
    return 1;
  }
  if (strcmp(key, "RastPort.RP_User") == 0) {
    lua_pushlightuserdata(L, obj->RastPort.RP_User);
    return 1;
  }
  if (strcmp(key, "RastPort.longreserved") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->RastPort.longreserved, 2);
    return 1;
  }
  if (strcmp(key, "RastPort.wordreserved") == 0) {
    _lua_gen_push_UWORD_array_proxy(L, obj->RastPort.wordreserved, 7);
    return 1;
  }
  if (strcmp(key, "RastPort.reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->RastPort.reserved, 8);
    return 1;
  }
  if (strcmp(key, "RastPort") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)&obj->RastPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BitMap.BytesPerRow") == 0) {
    lua_pushinteger(L, obj->BitMap.BytesPerRow);
    return 1;
  }
  if (strcmp(key, "BitMap.Rows") == 0) {
    lua_pushinteger(L, obj->BitMap.Rows);
    return 1;
  }
  if (strcmp(key, "BitMap.Flags") == 0) {
    lua_pushinteger(L, obj->BitMap.Flags);
    return 1;
  }
  if (strcmp(key, "BitMap.Depth") == 0) {
    lua_pushinteger(L, obj->BitMap.Depth);
    return 1;
  }
  if (strcmp(key, "BitMap.pad") == 0) {
    lua_pushinteger(L, obj->BitMap.pad);
    return 1;
  }
  if (strcmp(key, "BitMap.Planes") == 0) {
    _lua_gen_push_PLANEPTR_array_proxy(L, obj->BitMap.Planes, 8);
    return 1;
  }
  if (strcmp(key, "BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)&obj->BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.top_layer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->LayerInfo.top_layer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.resPtr1") == 0) {
    lua_pushlightuserdata(L, obj->LayerInfo.resPtr1);
    return 1;
  }
  if (strcmp(key, "LayerInfo.resPtr2") == 0) {
    lua_pushlightuserdata(L, obj->LayerInfo.resPtr2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.FreeClipRects") == 0) {
    struct ClipRect **ud = (struct ClipRect **)lua_newuserdata(L, sizeof(struct ClipRect *));
    *ud = (struct ClipRect*)obj->LayerInfo.FreeClipRects;
    luaL_getmetatable(L, "ClipRect");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.bounds.MinX") == 0) {
    lua_pushinteger(L, obj->LayerInfo.bounds.MinX);
    return 1;
  }
  if (strcmp(key, "LayerInfo.bounds.MinY") == 0) {
    lua_pushinteger(L, obj->LayerInfo.bounds.MinY);
    return 1;
  }
  if (strcmp(key, "LayerInfo.bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->LayerInfo.bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "LayerInfo.bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->LayerInfo.bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "LayerInfo.bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->LayerInfo.bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->LayerInfo.Lock.ss_Link.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->LayerInfo.Lock.ss_Link.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Type") == 0) {
    lua_pushinteger(L, obj->LayerInfo.Lock.ss_Link.ln_Type);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Pri") == 0) {
    lua_pushinteger(L, obj->LayerInfo.Lock.ss_Link.ln_Pri);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link.ln_Name") == 0) {
    lua_pushstring(L, obj->LayerInfo.Lock.ss_Link.ln_Name);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Link") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->LayerInfo.Lock.ss_Link;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_NestCount") == 0) {
    lua_pushinteger(L, obj->LayerInfo.Lock.ss_NestCount);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.Lock.ss_WaitQueue.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.Lock.ss_WaitQueue.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.Lock.ss_WaitQueue.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->LayerInfo.Lock.ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Succ") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Succ;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Pred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.Lock.ss_MultipleLink.sr_Link.mln_Pred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Link") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->LayerInfo.Lock.ss_MultipleLink.sr_Link;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink.sr_Waiter") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->LayerInfo.Lock.ss_MultipleLink.sr_Waiter;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_MultipleLink") == 0) {
    struct SemaphoreRequest **ud = (struct SemaphoreRequest **)lua_newuserdata(L, sizeof(struct SemaphoreRequest *));
    *ud = (struct SemaphoreRequest*)&obj->LayerInfo.Lock.ss_MultipleLink;
    luaL_getmetatable(L, "SemaphoreRequest");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_Owner") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)obj->LayerInfo.Lock.ss_Owner;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock.ss_QueueCount") == 0) {
    lua_pushinteger(L, obj->LayerInfo.Lock.ss_QueueCount);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Lock") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->LayerInfo.Lock;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_Head") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.gs_Head.mlh_Head;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_Tail") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.gs_Head.mlh_Tail;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.gs_Head.mlh_TailPred") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)obj->LayerInfo.gs_Head.mlh_TailPred;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.gs_Head") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->LayerInfo.gs_Head;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve3") == 0) {
    lua_pushinteger(L, obj->LayerInfo.PrivateReserve3);
    return 1;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve4") == 0) {
    lua_pushlightuserdata(L, obj->LayerInfo.PrivateReserve4);
    return 1;
  }
  if (strcmp(key, "LayerInfo.Flags") == 0) {
    lua_pushinteger(L, obj->LayerInfo.Flags);
    return 1;
  }
  if (strcmp(key, "LayerInfo.res_count") == 0) {
    lua_pushinteger(L, obj->LayerInfo.res_count);
    return 1;
  }
  if (strcmp(key, "LayerInfo.LockLayersCount") == 0) {
    lua_pushinteger(L, obj->LayerInfo.LockLayersCount);
    return 1;
  }
  if (strcmp(key, "LayerInfo.PrivateReserve5") == 0) {
    lua_pushinteger(L, obj->LayerInfo.PrivateReserve5);
    return 1;
  }
  if (strcmp(key, "LayerInfo.UserClipRectsCount") == 0) {
    lua_pushinteger(L, obj->LayerInfo.UserClipRectsCount);
    return 1;
  }
  if (strcmp(key, "LayerInfo.BlankHook") == 0) {
    struct Hook **ud = (struct Hook **)lua_newuserdata(L, sizeof(struct Hook *));
    *ud = (struct Hook*)obj->LayerInfo.BlankHook;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "LayerInfo.resPtr5") == 0) {
    lua_pushlightuserdata(L, obj->LayerInfo.resPtr5);
    return 1;
  }
  if (strcmp(key, "LayerInfo") == 0) {
    struct Layer_Info **ud = (struct Layer_Info **)lua_newuserdata(L, sizeof(struct Layer_Info *));
    *ud = (struct Layer_Info*)&obj->LayerInfo;
    luaL_getmetatable(L, "Layer_Info");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported FirstGadget struct Gadget *
  if (strcmp(key, "FirstGadget") == 0) {
    return luaL_error(L, "Unsupported type struct Gadget * for field FirstGadget");
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
  if (strcmp(key, "BarLayer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->BarLayer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ExtData") == 0) {
    lua_pushlightuserdata(L, obj->ExtData);
    return 1;
  }
  if (strcmp(key, "UserData") == 0) {
    lua_pushlightuserdata(L, obj->UserData);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Screen));
    return 1;
}

  return 0;
}

static void
_lua_gen_Screen_install_keys(lua_State *L)
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
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "DefaultTitle");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "BarHeight");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "BarVBorder");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "BarHBorder");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "MenuVBorder");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "MenuHBorder");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "WBorTop");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "WBorLeft");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "WBorRight");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "WBorBottom");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "ViewPort.DWidth");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "ViewPort.DHeight");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "ViewPort.DxOffset");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "ViewPort.DyOffset");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "ViewPort.Modes");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "ViewPort.SpritePriorities");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "ViewPort.ExtendedModes");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "RastPort.AreaPtrn");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "RastPort.Mask");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "RastPort.FgPen");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "RastPort.BgPen");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "RastPort.AOlPen");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "RastPort.DrawMode");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "RastPort.AreaPtSz");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "RastPort.linpatcnt");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "RastPort.dummy");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "RastPort.Flags");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "RastPort.LinePtrn");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "RastPort.cp_x");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "RastPort.cp_y");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "RastPort.minterms");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "RastPort.PenWidth");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "RastPort.PenHeight");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "RastPort.AlgoStyle");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "RastPort.TxFlags");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "RastPort.TxHeight");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "RastPort.TxWidth");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "RastPort.TxBaseline");
  lua_rawseti(L, -2, 46);
  lua_pushstring(L, "RastPort.TxSpacing");
  lua_rawseti(L, -2, 47);
  lua_pushstring(L, "RastPort.RP_User");
  lua_rawseti(L, -2, 48);
  lua_pushstring(L, "RastPort.longreserved");
  lua_rawseti(L, -2, 49);
  lua_pushstring(L, "RastPort.wordreserved");
  lua_rawseti(L, -2, 50);
  lua_pushstring(L, "RastPort.reserved");
  lua_rawseti(L, -2, 51);
  lua_pushstring(L, "BitMap.BytesPerRow");
  lua_rawseti(L, -2, 52);
  lua_pushstring(L, "BitMap.Rows");
  lua_rawseti(L, -2, 53);
  lua_pushstring(L, "BitMap.Flags");
  lua_rawseti(L, -2, 54);
  lua_pushstring(L, "BitMap.Depth");
  lua_rawseti(L, -2, 55);
  lua_pushstring(L, "BitMap.pad");
  lua_rawseti(L, -2, 56);
  lua_pushstring(L, "BitMap.Planes");
  lua_rawseti(L, -2, 57);
  lua_pushstring(L, "LayerInfo.bounds.MinX");
  lua_rawseti(L, -2, 58);
  lua_pushstring(L, "LayerInfo.bounds.MinY");
  lua_rawseti(L, -2, 59);
  lua_pushstring(L, "LayerInfo.bounds.MaxX");
  lua_rawseti(L, -2, 60);
  lua_pushstring(L, "LayerInfo.bounds.MaxY");
  lua_rawseti(L, -2, 61);
  lua_pushstring(L, "LayerInfo.Lock.ss_Link.ln_Type");
  lua_rawseti(L, -2, 62);
  lua_pushstring(L, "LayerInfo.Lock.ss_Link.ln_Pri");
  lua_rawseti(L, -2, 63);
  lua_pushstring(L, "LayerInfo.Lock.ss_Link.ln_Name");
  lua_rawseti(L, -2, 64);
  lua_pushstring(L, "LayerInfo.Lock.ss_NestCount");
  lua_rawseti(L, -2, 65);
  lua_pushstring(L, "LayerInfo.Lock.ss_QueueCount");
  lua_rawseti(L, -2, 66);
  lua_pushstring(L, "LayerInfo.PrivateReserve3");
  lua_rawseti(L, -2, 67);
  lua_pushstring(L, "LayerInfo.Flags");
  lua_rawseti(L, -2, 68);
  lua_pushstring(L, "LayerInfo.res_count");
  lua_rawseti(L, -2, 69);
  lua_pushstring(L, "LayerInfo.LockLayersCount");
  lua_rawseti(L, -2, 70);
  lua_pushstring(L, "LayerInfo.PrivateReserve5");
  lua_rawseti(L, -2, 71);
  lua_pushstring(L, "LayerInfo.UserClipRectsCount");
  lua_rawseti(L, -2, 72);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 73);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 74);
  lua_pushstring(L, "SaveColor0");
  lua_rawseti(L, -2, 75);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 76);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 77);
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
_lua_gen_SimpleSprite_newindex(lua_State *L)
{
  struct SimpleSprite *obj = *(struct SimpleSprite **)luaL_checkudata(L, 1, "SimpleSprite");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "posctldata") == 0) {
    obj->posctldata = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "height") == 0) {
    obj->height = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "x") == 0) {
    obj->x = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "y") == 0) {
    obj->y = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "num") == 0) {
    obj->num = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_SimpleSprite_constructor(lua_State *L)
{
  // Allocate pointer-to-struct SimpleSprite in userdata
  struct SimpleSprite **objp = lua_newuserdata(L, sizeof(struct SimpleSprite *));
  *objp = malloc(sizeof(struct SimpleSprite));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct SimpleSprite));

  // Set metatable
  luaL_getmetatable(L, "SimpleSprite");
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
_lua_gen_SimpleSprite_index(lua_State *L)
{
  struct SimpleSprite *obj = *(struct SimpleSprite **)luaL_checkudata(L, 1, "SimpleSprite");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "posctldata") == 0) {
    lua_pushlightuserdata(L, obj->posctldata);
    return 1;
  }
  if (strcmp(key, "height") == 0) {
    lua_pushinteger(L, obj->height);
    return 1;
  }
  if (strcmp(key, "x") == 0) {
    lua_pushinteger(L, obj->x);
    return 1;
  }
  if (strcmp(key, "y") == 0) {
    lua_pushinteger(L, obj->y);
    return 1;
  }
  if (strcmp(key, "num") == 0) {
    lua_pushinteger(L, obj->num);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct SimpleSprite));
    return 1;
}

  return 0;
}

static void
_lua_gen_SimpleSprite_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "posctldata");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "height");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "x");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "y");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "num");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_SimpleSprite(lua_State *L) {
  if (luaL_newmetatable(L, "SimpleSprite")) {
    lua_pushcfunction(L, _lua_gen_SimpleSprite_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_SimpleSprite_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_SimpleSprite_constructor);
    lua_setglobal(L, "SimpleSprite");
    _lua_gen_SimpleSprite_install_keys(L);
    lua_pushstring(L, "SimpleSprite");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TextAttr_newindex(lua_State *L)
{
  struct TextAttr *obj = *(struct TextAttr **)luaL_checkudata(L, 1, "TextAttr");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
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
  // Allocate pointer-to-struct TextAttr in userdata
  struct TextAttr **objp = lua_newuserdata(L, sizeof(struct TextAttr *));
  *objp = malloc(sizeof(struct TextAttr));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct TextAttr));

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
  struct TextAttr *obj = *(struct TextAttr **)luaL_checkudata(L, 1, "TextAttr");
  (void)obj;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct TextAttr));
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
_lua_gen_TextFont_newindex(lua_State *L)
{
  struct TextFont *obj = *(struct TextFont **)luaL_checkudata(L, 1, "TextFont");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "tf_Message.mn_Node.ln_Succ") == 0) {
    // finder 1
    //obj->tf_Message.mn_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tf_Message.mn_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Pred") == 0) {
    // finder 1
    //obj->tf_Message.mn_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tf_Message.mn_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Type") == 0) {
    obj->tf_Message.mn_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Pri") == 0) {
    obj->tf_Message.mn_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Name") == 0) {
    obj->tf_Message.mn_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->tf_Message.mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_ReplyPort") == 0) {
    // finder 1
    //obj->tf_Message.mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->tf_Message.mn_ReplyPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message.mn_Length") == 0) {
    obj->tf_Message.mn_Length = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "tf_Message") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
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
  // Allocate pointer-to-struct TextFont in userdata
  struct TextFont **objp = lua_newuserdata(L, sizeof(struct TextFont *));
  *objp = malloc(sizeof(struct TextFont));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct TextFont));

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
  struct TextFont *obj = *(struct TextFont **)luaL_checkudata(L, 1, "TextFont");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "tf_Message.mn_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tf_Message.mn_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->tf_Message.mn_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->tf_Message.mn_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->tf_Message.mn_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->tf_Message.mn_Node.ln_Name);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->tf_Message.mn_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_ReplyPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->tf_Message.mn_ReplyPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "tf_Message.mn_Length") == 0) {
    lua_pushinteger(L, obj->tf_Message.mn_Length);
    return 1;
  }
  if (strcmp(key, "tf_Message") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->tf_Message;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct TextFont));
    return 1;
}

  return 0;
}

static void
_lua_gen_TextFont_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tf_Message.mn_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tf_Message.mn_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tf_Message.mn_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tf_Message.mn_Length");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tf_YSize");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tf_Style");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tf_Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tf_XSize");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "tf_Baseline");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "tf_BoldSmear");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "tf_Accessors");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "tf_LoChar");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "tf_HiChar");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "tf_CharData");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "tf_Modulo");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "tf_CharLoc");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "tf_CharSpace");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "tf_CharKern");
  lua_rawseti(L, -2, 18);
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
_lua_gen_VSprite_newindex(lua_State *L)
{
  struct VSprite *obj = *(struct VSprite **)luaL_checkudata(L, 1, "VSprite");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "NextVSprite") == 0) {
    // finder 1
    //obj->NextVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->NextVSprite = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "PrevVSprite") == 0) {
    // finder 1
    //obj->PrevVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->PrevVSprite = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "DrawPath") == 0) {
    // finder 1
    //obj->DrawPath = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->DrawPath = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "ClearPath") == 0) {
    // finder 1
    //obj->ClearPath = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->ClearPath = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "OldY") == 0) {
    obj->OldY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "OldX") == 0) {
    obj->OldX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Y") == 0) {
    obj->Y = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "X") == 0) {
    obj->X = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Height") == 0) {
    obj->Height = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Width") == 0) {
    obj->Width = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Depth") == 0) {
    obj->Depth = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "MeMask") == 0) {
    obj->MeMask = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "HitMask") == 0) {
    obj->HitMask = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ImageData") == 0) {
    obj->ImageData = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "BorderLine") == 0) {
    obj->BorderLine = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "CollMask") == 0) {
    obj->CollMask = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "SprColors") == 0) {
    obj->SprColors = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "VSBob") == 0) {
    // finder 1
    //obj->VSBob = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    obj->VSBob = (struct Bob *)_lua_gen_checkBob(L, 3);
    return 0;
  }
  if (strcmp(key, "PlanePick") == 0) {
    obj->PlanePick = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "PlaneOnOff") == 0) {
    obj->PlaneOnOff = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "VUserExt") == 0) {
    obj->VUserExt = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_VSprite_constructor(lua_State *L)
{
  // Allocate pointer-to-struct VSprite in userdata
  struct VSprite **objp = lua_newuserdata(L, sizeof(struct VSprite *));
  *objp = malloc(sizeof(struct VSprite));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct VSprite));

  // Set metatable
  luaL_getmetatable(L, "VSprite");
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
_lua_gen_VSprite_index(lua_State *L)
{
  struct VSprite *obj = *(struct VSprite **)luaL_checkudata(L, 1, "VSprite");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextVSprite") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->NextVSprite;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PrevVSprite") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->PrevVSprite;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DrawPath") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->DrawPath;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ClearPath") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->ClearPath;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "OldY") == 0) {
    lua_pushinteger(L, obj->OldY);
    return 1;
  }
  if (strcmp(key, "OldX") == 0) {
    lua_pushinteger(L, obj->OldX);
    return 1;
  }
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Y") == 0) {
    lua_pushinteger(L, obj->Y);
    return 1;
  }
  if (strcmp(key, "X") == 0) {
    lua_pushinteger(L, obj->X);
    return 1;
  }
  if (strcmp(key, "Height") == 0) {
    lua_pushinteger(L, obj->Height);
    return 1;
  }
  if (strcmp(key, "Width") == 0) {
    lua_pushinteger(L, obj->Width);
    return 1;
  }
  if (strcmp(key, "Depth") == 0) {
    lua_pushinteger(L, obj->Depth);
    return 1;
  }
  if (strcmp(key, "MeMask") == 0) {
    lua_pushinteger(L, obj->MeMask);
    return 1;
  }
  if (strcmp(key, "HitMask") == 0) {
    lua_pushinteger(L, obj->HitMask);
    return 1;
  }
  if (strcmp(key, "ImageData") == 0) {
    lua_pushlightuserdata(L, obj->ImageData);
    return 1;
  }
  if (strcmp(key, "BorderLine") == 0) {
    lua_pushlightuserdata(L, obj->BorderLine);
    return 1;
  }
  if (strcmp(key, "CollMask") == 0) {
    lua_pushlightuserdata(L, obj->CollMask);
    return 1;
  }
  if (strcmp(key, "SprColors") == 0) {
    lua_pushlightuserdata(L, obj->SprColors);
    return 1;
  }
  if (strcmp(key, "VSBob") == 0) {
    struct Bob **ud = (struct Bob **)lua_newuserdata(L, sizeof(struct Bob *));
    *ud = (struct Bob*)obj->VSBob;
    luaL_getmetatable(L, "Bob");
    lua_setmetatable(L, -2);
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
  if (strcmp(key, "VUserExt") == 0) {
    lua_pushinteger(L, obj->VUserExt);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct VSprite));
    return 1;
}

  return 0;
}

static void
_lua_gen_VSprite_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "OldY");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "OldX");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Y");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "X");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Depth");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "MeMask");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "HitMask");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "ImageData");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "BorderLine");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "CollMask");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "SprColors");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "PlanePick");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "PlaneOnOff");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "VUserExt");
  lua_rawseti(L, -2, 17);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_VSprite(lua_State *L) {
  if (luaL_newmetatable(L, "VSprite")) {
    lua_pushcfunction(L, _lua_gen_VSprite_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_VSprite_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_VSprite_constructor);
    lua_setglobal(L, "VSprite");
    _lua_gen_VSprite_install_keys(L);
    lua_pushstring(L, "VSprite");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Window_newindex(lua_State *L)
{
  struct Window *obj = *(struct Window **)luaL_checkudata(L, 1, "Window");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "NextWindow") == 0) {
    // finder 1
    //obj->NextWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
    obj->NextWindow = (struct Window *)_lua_gen_checkWindow(L, 3);
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
  // Unsupported type MenuStrip struct Menu
  if (strcmp(key, "MenuStrip") == 0) {
    return luaL_error(L, "Unsupported type struct Menu for field MenuStrip");
  }
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  // Unsupported type FirstRequest struct Requester
  if (strcmp(key, "FirstRequest") == 0) {
    return luaL_error(L, "Unsupported type struct Requester for field FirstRequest");
  }
  // Unsupported type DMRequest struct Requester
  if (strcmp(key, "DMRequest") == 0) {
    return luaL_error(L, "Unsupported type struct Requester for field DMRequest");
  }
  if (strcmp(key, "ReqCount") == 0) {
    obj->ReqCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WScreen") == 0) {
    // finder 1
    //obj->WScreen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    obj->WScreen = (struct Screen *)_lua_gen_checkScreen(L, 3);
    return 0;
  }
  if (strcmp(key, "RPort") == 0) {
    // finder 1
    //obj->RPort = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->RPort = (struct RastPort *)_lua_gen_checkRastPort(L, 3);
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
    //obj->BorderRPort = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->BorderRPort = (struct RastPort *)_lua_gen_checkRastPort(L, 3);
    return 0;
  }
  // Unsupported type FirstGadget struct Gadget
  if (strcmp(key, "FirstGadget") == 0) {
    return luaL_error(L, "Unsupported type struct Gadget for field FirstGadget");
  }
  if (strcmp(key, "Parent") == 0) {
    // finder 1
    //obj->Parent = *(struct Window **)luaL_checkudata(L, 3, "Window");
    obj->Parent = (struct Window *)_lua_gen_checkWindow(L, 3);
    return 0;
  }
  if (strcmp(key, "Descendant") == 0) {
    // finder 1
    //obj->Descendant = *(struct Window **)luaL_checkudata(L, 3, "Window");
    obj->Descendant = (struct Window *)_lua_gen_checkWindow(L, 3);
    return 0;
  }
  if (strcmp(key, "Pointer") == 0) {
    obj->Pointer = (UWORD *)lua_touserdata(L, 3);
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
    //obj->UserPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->UserPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "WindowPort") == 0) {
    // finder 1
    //obj->WindowPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->WindowPort = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  // Unsupported type MessageKey struct IntuiMessage
  if (strcmp(key, "MessageKey") == 0) {
    return luaL_error(L, "Unsupported type struct IntuiMessage for field MessageKey");
  }
  if (strcmp(key, "DetailPen") == 0) {
    obj->DetailPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BlockPen") == 0) {
    obj->BlockPen = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type CheckMark struct Image
  if (strcmp(key, "CheckMark") == 0) {
    return luaL_error(L, "Unsupported type struct Image for field CheckMark");
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
  if (strcmp(key, "ExtData") == 0) {
    obj->ExtData = (UBYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "UserData") == 0) {
    obj->UserData = (BYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "WLayer") == 0) {
    // finder 1
    //obj->WLayer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    obj->WLayer = (struct Layer *)_lua_gen_checkLayer(L, 3);
    return 0;
  }
  if (strcmp(key, "IFont") == 0) {
    // finder 1
    //obj->IFont = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
    obj->IFont = (struct TextFont *)_lua_gen_checkTextFont(L, 3);
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
  // Allocate pointer-to-struct Window in userdata
  struct Window **objp = lua_newuserdata(L, sizeof(struct Window *));
  *objp = malloc(sizeof(struct Window));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Window));

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
  struct Window *obj = *(struct Window **)luaL_checkudata(L, 1, "Window");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextWindow") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->NextWindow;
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
  // Unsupported MenuStrip struct Menu *
  if (strcmp(key, "MenuStrip") == 0) {
    return luaL_error(L, "Unsupported type struct Menu * for field MenuStrip");
  }
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  // Unsupported FirstRequest struct Requester *
  if (strcmp(key, "FirstRequest") == 0) {
    return luaL_error(L, "Unsupported type struct Requester * for field FirstRequest");
  }
  // Unsupported DMRequest struct Requester *
  if (strcmp(key, "DMRequest") == 0) {
    return luaL_error(L, "Unsupported type struct Requester * for field DMRequest");
  }
  if (strcmp(key, "ReqCount") == 0) {
    lua_pushinteger(L, obj->ReqCount);
    return 1;
  }
  if (strcmp(key, "WScreen") == 0) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = (struct Screen*)obj->WScreen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RPort") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)obj->RPort;
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
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)obj->BorderRPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported FirstGadget struct Gadget *
  if (strcmp(key, "FirstGadget") == 0) {
    return luaL_error(L, "Unsupported type struct Gadget * for field FirstGadget");
  }
  if (strcmp(key, "Parent") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->Parent;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Descendant") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->Descendant;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Pointer") == 0) {
    lua_pushlightuserdata(L, obj->Pointer);
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
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->UserPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "WindowPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->WindowPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported MessageKey struct IntuiMessage *
  if (strcmp(key, "MessageKey") == 0) {
    return luaL_error(L, "Unsupported type struct IntuiMessage * for field MessageKey");
  }
  if (strcmp(key, "DetailPen") == 0) {
    lua_pushinteger(L, obj->DetailPen);
    return 1;
  }
  if (strcmp(key, "BlockPen") == 0) {
    lua_pushinteger(L, obj->BlockPen);
    return 1;
  }
  // Unsupported CheckMark struct Image *
  if (strcmp(key, "CheckMark") == 0) {
    return luaL_error(L, "Unsupported type struct Image * for field CheckMark");
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
  if (strcmp(key, "ExtData") == 0) {
    lua_pushlightuserdata(L, obj->ExtData);
    return 1;
  }
  if (strcmp(key, "UserData") == 0) {
    lua_pushlightuserdata(L, obj->UserData);
    return 1;
  }
  if (strcmp(key, "WLayer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->WLayer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "IFont") == 0) {
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = (struct TextFont*)obj->IFont;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "MoreFlags") == 0) {
    lua_pushinteger(L, obj->MoreFlags);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Window));
    return 1;
}

  return 0;
}

static void
_lua_gen_Window_install_keys(lua_State *L)
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
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "MinWidth");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "MinHeight");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "MaxWidth");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "MaxHeight");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "ReqCount");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "BorderLeft");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "BorderTop");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "BorderRight");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "BorderBottom");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "Pointer");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "PtrHeight");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "PtrWidth");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "XOffset");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "YOffset");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "IDCMPFlags");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "ScreenTitle");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "GZZMouseX");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "GZZMouseY");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "GZZWidth");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "GZZHeight");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "MoreFlags");
  lua_rawseti(L, -2, 33);
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
_lua_gen_bltnode_newindex(lua_State *L)
{
  struct bltnode *obj = *(struct bltnode **)luaL_checkudata(L, 1, "bltnode");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "n") == 0) {
    // finder 1
    //obj->n = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
    obj->n = (struct bltnode *)_lua_gen_checkbltnode(L, 3);
    return 0;
  }
  // Unsupported type function int ()()
  if (strcmp(key, "function") == 0) {
    return luaL_error(L, "Unsupported type int ()() for field function");
  }
  if (strcmp(key, "stat") == 0) {
    obj->stat = (char)luaL_checknumber(L, 3);
    return 0;
  }
  if (strcmp(key, "blitsize") == 0) {
    obj->blitsize = (short)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "beamsync") == 0) {
    obj->beamsync = (short)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type cleanup int ()()
  if (strcmp(key, "cleanup") == 0) {
    return luaL_error(L, "Unsupported type int ()() for field cleanup");
  }
  return 0;
}


static int
_lua_bltnode_constructor(lua_State *L)
{
  // Allocate pointer-to-struct bltnode in userdata
  struct bltnode **objp = lua_newuserdata(L, sizeof(struct bltnode *));
  *objp = malloc(sizeof(struct bltnode));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct bltnode));

  // Set metatable
  luaL_getmetatable(L, "bltnode");
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
_lua_gen_bltnode_index(lua_State *L)
{
  struct bltnode *obj = *(struct bltnode **)luaL_checkudata(L, 1, "bltnode");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "n") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->n;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported function int (*)()
  if (strcmp(key, "function") == 0) {
    return luaL_error(L, "Unsupported type int (*)() for field function");
  }
  if (strcmp(key, "stat") == 0) {
    lua_pushnumber(L, obj->stat);
    return 1;
  }
  if (strcmp(key, "blitsize") == 0) {
    lua_pushinteger(L, obj->blitsize);
    return 1;
  }
  if (strcmp(key, "beamsync") == 0) {
    lua_pushinteger(L, obj->beamsync);
    return 1;
  }
  // Unsupported cleanup int (*)()
  if (strcmp(key, "cleanup") == 0) {
    return luaL_error(L, "Unsupported type int (*)() for field cleanup");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct bltnode));
    return 1;
}

  return 0;
}

static void
_lua_gen_bltnode_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "function");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "stat");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "blitsize");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "beamsync");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "cleanup");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_bltnode(lua_State *L) {
  if (luaL_newmetatable(L, "bltnode")) {
    lua_pushcfunction(L, _lua_gen_bltnode_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_bltnode_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_bltnode_constructor);
    lua_setglobal(L, "bltnode");
    _lua_gen_bltnode_install_keys(L);
    lua_pushstring(L, "bltnode");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_MemChunk_newindex(lua_State *L)
{
  struct MemChunk *obj = *(struct MemChunk **)luaL_checkudata(L, 1, "MemChunk");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "mc_Next") == 0) {
    // finder 1
    //obj->mc_Next = *(struct MemChunk **)luaL_checkudata(L, 3, "MemChunk");
    obj->mc_Next = (struct MemChunk *)_lua_gen_checkMemChunk(L, 3);
    return 0;
  }
  if (strcmp(key, "mc_Bytes") == 0) {
    obj->mc_Bytes = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_MemChunk_constructor(lua_State *L)
{
  // Allocate pointer-to-struct MemChunk in userdata
  struct MemChunk **objp = lua_newuserdata(L, sizeof(struct MemChunk *));
  *objp = malloc(sizeof(struct MemChunk));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MemChunk));

  // Set metatable
  luaL_getmetatable(L, "MemChunk");
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
_lua_gen_MemChunk_index(lua_State *L)
{
  struct MemChunk *obj = *(struct MemChunk **)luaL_checkudata(L, 1, "MemChunk");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "mc_Next") == 0) {
    struct MemChunk **ud = (struct MemChunk **)lua_newuserdata(L, sizeof(struct MemChunk *));
    *ud = (struct MemChunk*)obj->mc_Next;
    luaL_getmetatable(L, "MemChunk");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "mc_Bytes") == 0) {
    lua_pushinteger(L, obj->mc_Bytes);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct MemChunk));
    return 1;
}

  return 0;
}

static void
_lua_gen_MemChunk_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mc_Bytes");
  lua_rawseti(L, -2, 1);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_MemChunk(lua_State *L) {
  if (luaL_newmetatable(L, "MemChunk")) {
    lua_pushcfunction(L, _lua_gen_MemChunk_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_MemChunk_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_MemChunk_constructor);
    lua_setglobal(L, "MemChunk");
    _lua_gen_MemChunk_install_keys(L);
    lua_pushstring(L, "MemChunk");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_InitCode(lua_State* L)
{
  (void)L;
  ULONG startClass = luaL_checkinteger(L, 1);
  ULONG version = luaL_checkinteger(L, 2);
  InitCode(startClass, version);
  return 0;
}

static int
_lua_InitStruct(lua_State* L)
{
  (void)L;
  CONST_APTR initTable = lua_touserdata(L, 1);
  APTR memory = lua_touserdata(L, 2);
  ULONG size = luaL_checkinteger(L, 3);
  InitStruct(initTable, memory, size);
  return 0;
}

static int
_lua_FindResident(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct Resident * _result = FindResident(name);
  _lua_gen_pushResident(L, _result);
  return 1;
}

static int
_lua_InitResident(lua_State* L)
{
  (void)L;
  const struct Resident * resident = _lua_gen_checkResident(L, 1);
  ULONG segList = luaL_checkinteger(L, 2);
  APTR _result = InitResident(resident, segList);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_Alert(lua_State* L)
{
  (void)L;
  ULONG alertNum = luaL_checkinteger(L, 1);
  Alert(alertNum);
  return 0;
}

static int
_lua_Debug(lua_State* L)
{
  (void)L;
  ULONG flags = luaL_checkinteger(L, 1);
  Debug(flags);
  return 0;
}

static int
_lua_Disable(lua_State* L)
{
  (void)L;
  Disable();
  return 0;
}

static int
_lua_Enable(lua_State* L)
{
  (void)L;
  Enable();
  return 0;
}

static int
_lua_Forbid(lua_State* L)
{
  (void)L;
  Forbid();
  return 0;
}

static int
_lua_Permit(lua_State* L)
{
  (void)L;
  Permit();
  return 0;
}

static int
_lua_SetSR(lua_State* L)
{
  (void)L;
  ULONG newSR = luaL_checkinteger(L, 1);
  ULONG mask = luaL_checkinteger(L, 2);
  ULONG _result = SetSR(newSR, mask);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SuperState(lua_State* L)
{
  (void)L;
  APTR _result = SuperState();
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_UserState(lua_State* L)
{
  (void)L;
  APTR sysStack = lua_touserdata(L, 1);
  UserState(sysStack);
  return 0;
}

static int
_lua_AddIntServer(lua_State* L)
{
  (void)L;
  LONG intNumber = luaL_checkinteger(L, 1);
  struct Interrupt * interrupt = _lua_gen_checkInterrupt(L, 2);
  AddIntServer(intNumber, interrupt);
  return 0;
}

static int
_lua_RemIntServer(lua_State* L)
{
  (void)L;
  LONG intNumber = luaL_checkinteger(L, 1);
  struct Interrupt * interrupt = _lua_gen_checkInterrupt(L, 2);
  RemIntServer(intNumber, interrupt);
  return 0;
}

static int
_lua_Cause(lua_State* L)
{
  (void)L;
  const struct Interrupt * interrupt = _lua_gen_checkInterrupt(L, 1);
  Cause(interrupt);
  return 0;
}

static int
_lua_Allocate(lua_State* L)
{
  (void)L;
  struct MemHeader * freeList = _lua_gen_checkMemHeader(L, 1);
  ULONG byteSize = luaL_checkinteger(L, 2);
  APTR _result = Allocate(freeList, byteSize);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_AllocMem(lua_State* L)
{
  (void)L;
  ULONG byteSize = luaL_checkinteger(L, 1);
  ULONG requirements = luaL_checkinteger(L, 2);
  APTR _result = AllocMem(byteSize, requirements);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_AllocAbs(lua_State* L)
{
  (void)L;
  ULONG byteSize = luaL_checkinteger(L, 1);
  APTR location = lua_touserdata(L, 2);
  APTR _result = AllocAbs(byteSize, location);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_FreeMem(lua_State* L)
{
  (void)L;
  APTR memoryBlock = lua_touserdata(L, 1);
  ULONG byteSize = luaL_checkinteger(L, 2);
  FreeMem(memoryBlock, byteSize);
  return 0;
}

static int
_lua_AvailMem(lua_State* L)
{
  (void)L;
  ULONG requirements = luaL_checkinteger(L, 1);
  ULONG _result = AvailMem(requirements);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AllocEntry(lua_State* L)
{
  (void)L;
  const struct MemList * entry = _lua_gen_checkMemList(L, 1);
  struct MemList * _result = AllocEntry(entry);
  _lua_gen_pushMemList(L, _result);
  return 1;
}

static int
_lua_FreeEntry(lua_State* L)
{
  (void)L;
  struct MemList * entry = _lua_gen_checkMemList(L, 1);
  FreeEntry(entry);
  return 0;
}

static int
_lua_AddHead(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  struct Node * node = _lua_gen_checkNode(L, 2);
  AddHead(list, node);
  return 0;
}

static int
_lua_AddHeadMinList(lua_State* L)
{
  (void)L;
  struct MinList * minlist = _lua_gen_checkMinList(L, 1);
  struct MinNode * minnode = _lua_gen_checkMinNode(L, 2);
  AddHeadMinList(minlist, minnode);
  return 0;
}

static int
_lua_AddTail(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  struct Node * node = _lua_gen_checkNode(L, 2);
  AddTail(list, node);
  return 0;
}

static int
_lua_AddTailMinList(lua_State* L)
{
  (void)L;
  struct MinList * minlist = _lua_gen_checkMinList(L, 1);
  struct MinNode * minnode = _lua_gen_checkMinNode(L, 2);
  AddTailMinList(minlist, minnode);
  return 0;
}

static int
_lua_Remove(lua_State* L)
{
  (void)L;
  struct Node * node = _lua_gen_checkNode(L, 1);
  Remove(node);
  return 0;
}

static int
_lua_RemoveMinNode(lua_State* L)
{
  (void)L;
  struct MinNode * minnode = _lua_gen_checkMinNode(L, 1);
  RemoveMinNode(minnode);
  return 0;
}

static int
_lua_RemHead(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  struct Node * _result = RemHead(list);
  _lua_gen_pushNode(L, _result);
  return 1;
}

static int
_lua_RemHeadMinList(lua_State* L)
{
  (void)L;
  struct MinList * minlist = _lua_gen_checkMinList(L, 1);
  struct MinNode * _result = RemHeadMinList(minlist);
  _lua_gen_pushMinNode(L, _result);
  return 1;
}

static int
_lua_RemTail(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  struct Node * _result = RemTail(list);
  _lua_gen_pushNode(L, _result);
  return 1;
}

static int
_lua_RemTailMinList(lua_State* L)
{
  (void)L;
  struct MinList * minlist = _lua_gen_checkMinList(L, 1);
  struct MinNode * _result = RemTailMinList(minlist);
  _lua_gen_pushMinNode(L, _result);
  return 1;
}

static int
_lua_Enqueue(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  struct Node * node = _lua_gen_checkNode(L, 2);
  Enqueue(list, node);
  return 0;
}

static int
_lua_FindName(lua_State* L)
{
  (void)L;
  struct List * list = _lua_gen_checkList(L, 1);
  CONST_STRPTR name = amiga_checkConstNullableString(L, 2);
  struct Node * _result = FindName(list, name);
  _lua_gen_pushNode(L, _result);
  return 1;
}

static int
_lua_AddTask(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  APTR initPC = lua_touserdata(L, 2);
  APTR finalPC = lua_touserdata(L, 3);
  APTR _result = AddTask(task, initPC, finalPC);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_RemTask(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  RemTask(task);
  return 0;
}

static int
_lua_FindTask(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct Task * _result = FindTask(name);
  _lua_gen_pushTask(L, _result);
  return 1;
}

static int
_lua_SetTaskPri(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  LONG priority = luaL_checkinteger(L, 2);
  BYTE _result = SetTaskPri(task, priority);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetSignal(lua_State* L)
{
  (void)L;
  ULONG newSignals = luaL_checkinteger(L, 1);
  ULONG signalSet = luaL_checkinteger(L, 2);
  ULONG _result = SetSignal(newSignals, signalSet);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetExcept(lua_State* L)
{
  (void)L;
  ULONG newSignals = luaL_checkinteger(L, 1);
  ULONG signalSet = luaL_checkinteger(L, 2);
  ULONG _result = SetExcept(newSignals, signalSet);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Wait(lua_State* L)
{
  (void)L;
  ULONG signalSet = luaL_checkinteger(L, 1);
  ULONG _result = Wait(signalSet);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Signal(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  ULONG signalSet = luaL_checkinteger(L, 2);
  Signal(task, signalSet);
  return 0;
}

static int
_lua_AllocSignal(lua_State* L)
{
  (void)L;
  LONG signalNum = luaL_checkinteger(L, 1);
  BYTE _result = AllocSignal(signalNum);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FreeSignal(lua_State* L)
{
  (void)L;
  LONG signalNum = luaL_checkinteger(L, 1);
  FreeSignal(signalNum);
  return 0;
}

static int
_lua_AllocTrap(lua_State* L)
{
  (void)L;
  LONG trapNum = luaL_checkinteger(L, 1);
  LONG _result = AllocTrap(trapNum);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FreeTrap(lua_State* L)
{
  (void)L;
  LONG trapNum = luaL_checkinteger(L, 1);
  FreeTrap(trapNum);
  return 0;
}

static int
_lua_AddPort(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  AddPort(port);
  return 0;
}

static int
_lua_RemPort(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  RemPort(port);
  return 0;
}

static int
_lua_PutMsg(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * message = _lua_gen_checkMessage(L, 2);
  PutMsg(port, message);
  return 0;
}

static int
_lua_GetMsg(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct Message * _result = GetMsg(port);
  _lua_gen_pushMessage(L, _result);
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
  struct Message * _result = WaitPort(port);
  _lua_gen_pushMessage(L, _result);
  return 1;
}

static int
_lua_FindPort(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct MsgPort * _result = FindPort(name);
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_AddLibrary(lua_State* L)
{
  (void)L;
  struct Library * library = _lua_gen_checkLibrary(L, 1);
  AddLibrary(library);
  return 0;
}

static int
_lua_RemLibrary(lua_State* L)
{
  (void)L;
  struct Library * library = _lua_gen_checkLibrary(L, 1);
  RemLibrary(library);
  return 0;
}

static int
_lua_OldOpenLibrary(lua_State* L)
{
  (void)L;
  CONST_STRPTR libName = amiga_checkConstNullableString(L, 1);
  struct Library * _result = OldOpenLibrary(libName);
  _lua_gen_pushLibrary(L, _result);
  return 1;
}

static int
_lua_CloseLibrary(lua_State* L)
{
  (void)L;
  struct Library * library = _lua_gen_checkLibrary(L, 1);
  CloseLibrary(library);
  return 0;
}

static int
_lua_SumLibrary(lua_State* L)
{
  (void)L;
  struct Library * library = _lua_gen_checkLibrary(L, 1);
  SumLibrary(library);
  return 0;
}

static int
_lua_AddDevice(lua_State* L)
{
  (void)L;
  struct Device * device = _lua_gen_checkDevice(L, 1);
  AddDevice(device);
  return 0;
}

static int
_lua_RemDevice(lua_State* L)
{
  (void)L;
  struct Device * device = _lua_gen_checkDevice(L, 1);
  RemDevice(device);
  return 0;
}

static int
_lua_CloseDevice(lua_State* L)
{
  (void)L;
  struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  CloseDevice(ioRequest);
  return 0;
}

static int
_lua_DoIO(lua_State* L)
{
  (void)L;
  struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  BYTE _result = DoIO(ioRequest);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SendIO(lua_State* L)
{
  (void)L;
  struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  SendIO(ioRequest);
  return 0;
}

static int
_lua_CheckIO(lua_State* L)
{
  (void)L;
  const struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  struct IORequest * _result = CheckIO(ioRequest);
  _lua_gen_pushIORequest(L, _result);
  return 1;
}

static int
_lua_WaitIO(lua_State* L)
{
  (void)L;
  struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  BYTE _result = WaitIO(ioRequest);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AbortIO(lua_State* L)
{
  (void)L;
  struct IORequest * ioRequest = _lua_gen_checkIORequest(L, 1);
  AbortIO(ioRequest);
  return 0;
}

static int
_lua_AddResource(lua_State* L)
{
  (void)L;
  APTR resource = lua_touserdata(L, 1);
  AddResource(resource);
  return 0;
}

static int
_lua_RemResource(lua_State* L)
{
  (void)L;
  APTR resource = lua_touserdata(L, 1);
  RemResource(resource);
  return 0;
}

static int
_lua_OpenResource(lua_State* L)
{
  (void)L;
  CONST_STRPTR resName = amiga_checkConstNullableString(L, 1);
  APTR _result = OpenResource(resName);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_GetCC(lua_State* L)
{
  (void)L;
  ULONG _result = GetCC();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_TypeOfMem(lua_State* L)
{
  (void)L;
  CONST_APTR address = lua_touserdata(L, 1);
  ULONG _result = TypeOfMem(address);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Procure(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  struct SemaphoreMessage * bidMsg = _lua_gen_checkSemaphoreMessage(L, 2);
  ULONG _result = Procure(sigSem, bidMsg);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Vacate(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  struct SemaphoreMessage * bidMsg = _lua_gen_checkSemaphoreMessage(L, 2);
  Vacate(sigSem, bidMsg);
  return 0;
}

static int
_lua_OpenLibrary(lua_State* L)
{
  (void)L;
  CONST_STRPTR libName = amiga_checkConstNullableString(L, 1);
  ULONG version = luaL_checkinteger(L, 2);
  struct Library * _result = OpenLibrary(libName, version);
  _lua_gen_pushLibrary(L, _result);
  return 1;
}

static int
_lua_InitSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  InitSemaphore(sigSem);
  return 0;
}

static int
_lua_ObtainSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  ObtainSemaphore(sigSem);
  return 0;
}

static int
_lua_ReleaseSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  ReleaseSemaphore(sigSem);
  return 0;
}

static int
_lua_AttemptSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  ULONG _result = AttemptSemaphore(sigSem);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ObtainSemaphoreList(lua_State* L)
{
  (void)L;
  struct List * sigSem = _lua_gen_checkList(L, 1);
  ObtainSemaphoreList(sigSem);
  return 0;
}

static int
_lua_ReleaseSemaphoreList(lua_State* L)
{
  (void)L;
  struct List * sigSem = _lua_gen_checkList(L, 1);
  ReleaseSemaphoreList(sigSem);
  return 0;
}

static int
_lua_FindSemaphore(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct SignalSemaphore * _result = FindSemaphore(name);
  _lua_gen_pushSignalSemaphore(L, _result);
  return 1;
}

static int
_lua_AddSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  AddSemaphore(sigSem);
  return 0;
}

static int
_lua_RemSemaphore(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  RemSemaphore(sigSem);
  return 0;
}

static int
_lua_SumKickData(lua_State* L)
{
  (void)L;
  ULONG _result = SumKickData();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CopyMem(lua_State* L)
{
  (void)L;
  CONST_APTR source = lua_touserdata(L, 1);
  APTR dest = lua_touserdata(L, 2);
  ULONG size = luaL_checkinteger(L, 3);
  CopyMem(source, dest, size);
  return 0;
}

static int
_lua_CopyMemQuick(lua_State* L)
{
  (void)L;
  CONST_APTR source = lua_touserdata(L, 1);
  APTR dest = lua_touserdata(L, 2);
  ULONG size = luaL_checkinteger(L, 3);
  CopyMemQuick(source, dest, size);
  return 0;
}

static int
_lua_CacheClearU(lua_State* L)
{
  (void)L;
  CacheClearU();
  return 0;
}

static int
_lua_CacheClearE(lua_State* L)
{
  (void)L;
  APTR address = lua_touserdata(L, 1);
  ULONG length = luaL_checkinteger(L, 2);
  ULONG caches = luaL_checkinteger(L, 3);
  CacheClearE(address, length, caches);
  return 0;
}

static int
_lua_CacheControl(lua_State* L)
{
  (void)L;
  ULONG cacheBits = luaL_checkinteger(L, 1);
  ULONG cacheMask = luaL_checkinteger(L, 2);
  ULONG _result = CacheControl(cacheBits, cacheMask);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CreateIORequest(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  ULONG size = luaL_checkinteger(L, 2);
  APTR _result = CreateIORequest(port, size);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_DeleteIORequest(lua_State* L)
{
  (void)L;
  APTR iorequest = lua_touserdata(L, 1);
  DeleteIORequest(iorequest);
  return 0;
}

static int
_lua_CreateMsgPort(lua_State* L)
{
  (void)L;
  struct MsgPort * _result = CreateMsgPort();
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_DeleteMsgPort(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  DeleteMsgPort(port);
  return 0;
}

static int
_lua_ObtainSemaphoreShared(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  ObtainSemaphoreShared(sigSem);
  return 0;
}

static int
_lua_AllocVec(lua_State* L)
{
  (void)L;
  ULONG byteSize = luaL_checkinteger(L, 1);
  ULONG requirements = luaL_checkinteger(L, 2);
  APTR _result = AllocVec(byteSize, requirements);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_FreeVec(lua_State* L)
{
  (void)L;
  APTR memoryBlock = lua_touserdata(L, 1);
  FreeVec(memoryBlock);
  return 0;
}

static int
_lua_CreatePool(lua_State* L)
{
  (void)L;
  ULONG requirements = luaL_checkinteger(L, 1);
  ULONG puddleSize = luaL_checkinteger(L, 2);
  ULONG threshSize = luaL_checkinteger(L, 3);
  APTR _result = CreatePool(requirements, puddleSize, threshSize);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_DeletePool(lua_State* L)
{
  (void)L;
  APTR poolHeader = lua_touserdata(L, 1);
  DeletePool(poolHeader);
  return 0;
}

static int
_lua_AllocPooled(lua_State* L)
{
  (void)L;
  APTR poolHeader = lua_touserdata(L, 1);
  ULONG memSize = luaL_checkinteger(L, 2);
  APTR _result = AllocPooled(poolHeader, memSize);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_FreePooled(lua_State* L)
{
  (void)L;
  APTR poolHeader = lua_touserdata(L, 1);
  APTR memory = lua_touserdata(L, 2);
  ULONG memSize = luaL_checkinteger(L, 3);
  FreePooled(poolHeader, memory, memSize);
  return 0;
}

static int
_lua_AttemptSemaphoreShared(lua_State* L)
{
  (void)L;
  struct SignalSemaphore * sigSem = _lua_gen_checkSignalSemaphore(L, 1);
  ULONG _result = AttemptSemaphoreShared(sigSem);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ColdReboot(lua_State* L)
{
  (void)L;
  ColdReboot();
  return 0;
}

static int
_lua_StackSwap(lua_State* L)
{
  (void)L;
  struct StackSwapStruct * newStack = _lua_gen_checkStackSwapStruct(L, 1);
  StackSwap(newStack);
  return 0;
}

static int
_lua_CachePreDMA(lua_State* L)
{
  (void)L;
  CONST_APTR address = lua_touserdata(L, 1);
  ULONG * length = lua_touserdata(L, 2);
  ULONG flags = luaL_checkinteger(L, 3);
  APTR _result = CachePreDMA(address, length, flags);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_CachePostDMA(lua_State* L)
{
  (void)L;
  CONST_APTR address = lua_touserdata(L, 1);
  ULONG * length = lua_touserdata(L, 2);
  ULONG flags = luaL_checkinteger(L, 3);
  CachePostDMA(address, length, flags);
  return 0;
}

static int
_lua_AddMemHandler(lua_State* L)
{
  (void)L;
  struct Interrupt * memhand = _lua_gen_checkInterrupt(L, 1);
  AddMemHandler(memhand);
  return 0;
}

static int
_lua_RemMemHandler(lua_State* L)
{
  (void)L;
  struct Interrupt * memhand = _lua_gen_checkInterrupt(L, 1);
  RemMemHandler(memhand);
  return 0;
}

static int
_lua_ObtainQuickVector(lua_State* L)
{
  (void)L;
  APTR interruptCode = lua_touserdata(L, 1);
  ULONG _result = ObtainQuickVector(interruptCode);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NewMinList(lua_State* L)
{
  (void)L;
  struct MinList * minlist = _lua_gen_checkMinList(L, 1);
  NewMinList(minlist);
  return 0;
}

static int
_lua_gen_RegionRectangle_newindex(lua_State *L)
{
  struct RegionRectangle *obj = *(struct RegionRectangle **)luaL_checkudata(L, 1, "RegionRectangle");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Next") == 0) {
    // finder 1
    //obj->Next = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
    obj->Next = (struct RegionRectangle *)_lua_gen_checkRegionRectangle(L, 3);
    return 0;
  }
  if (strcmp(key, "Prev") == 0) {
    // finder 1
    //obj->Prev = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
    obj->Prev = (struct RegionRectangle *)_lua_gen_checkRegionRectangle(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    obj->bounds.MinX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    obj->bounds.MinY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    obj->bounds.MaxX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    obj->bounds.MaxY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  return 0;
}


static int
_lua_RegionRectangle_constructor(lua_State *L)
{
  // Allocate pointer-to-struct RegionRectangle in userdata
  struct RegionRectangle **objp = lua_newuserdata(L, sizeof(struct RegionRectangle *));
  *objp = malloc(sizeof(struct RegionRectangle));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct RegionRectangle));

  // Set metatable
  luaL_getmetatable(L, "RegionRectangle");
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
_lua_gen_RegionRectangle_index(lua_State *L)
{
  struct RegionRectangle *obj = *(struct RegionRectangle **)luaL_checkudata(L, 1, "RegionRectangle");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct RegionRectangle **ud = (struct RegionRectangle **)lua_newuserdata(L, sizeof(struct RegionRectangle *));
    *ud = (struct RegionRectangle*)obj->Next;
    luaL_getmetatable(L, "RegionRectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Prev") == 0) {
    struct RegionRectangle **ud = (struct RegionRectangle **)lua_newuserdata(L, sizeof(struct RegionRectangle *));
    *ud = (struct RegionRectangle*)obj->Prev;
    luaL_getmetatable(L, "RegionRectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "bounds.MinX") == 0) {
    lua_pushinteger(L, obj->bounds.MinX);
    return 1;
  }
  if (strcmp(key, "bounds.MinY") == 0) {
    lua_pushinteger(L, obj->bounds.MinY);
    return 1;
  }
  if (strcmp(key, "bounds.MaxX") == 0) {
    lua_pushinteger(L, obj->bounds.MaxX);
    return 1;
  }
  if (strcmp(key, "bounds.MaxY") == 0) {
    lua_pushinteger(L, obj->bounds.MaxY);
    return 1;
  }
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct RegionRectangle));
    return 1;
}

  return 0;
}

static void
_lua_gen_RegionRectangle_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "bounds.MinX");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "bounds.MinY");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "bounds.MaxX");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "bounds.MaxY");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_RegionRectangle(lua_State *L) {
  if (luaL_newmetatable(L, "RegionRectangle")) {
    lua_pushcfunction(L, _lua_gen_RegionRectangle_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_RegionRectangle_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_RegionRectangle_constructor);
    lua_setglobal(L, "RegionRectangle");
    _lua_gen_RegionRectangle_install_keys(L);
    lua_pushstring(L, "RegionRectangle");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AnimComp_newindex(lua_State *L)
{
  struct AnimComp *obj = *(struct AnimComp **)luaL_checkudata(L, 1, "AnimComp");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Timer") == 0) {
    obj->Timer = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "TimeSet") == 0) {
    obj->TimeSet = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "NextComp") == 0) {
    // finder 1
    //obj->NextComp = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->NextComp = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  if (strcmp(key, "PrevComp") == 0) {
    // finder 1
    //obj->PrevComp = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->PrevComp = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  if (strcmp(key, "NextSeq") == 0) {
    // finder 1
    //obj->NextSeq = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->NextSeq = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  if (strcmp(key, "PrevSeq") == 0) {
    // finder 1
    //obj->PrevSeq = *(struct AnimComp **)luaL_checkudata(L, 3, "AnimComp");
    obj->PrevSeq = (struct AnimComp *)_lua_gen_checkAnimComp(L, 3);
    return 0;
  }
  // Unsupported type AnimCRoutine WORD ()(struct AnimComp )
  if (strcmp(key, "AnimCRoutine") == 0) {
    return luaL_error(L, "Unsupported type WORD ()(struct AnimComp ) for field AnimCRoutine");
  }
  if (strcmp(key, "YTrans") == 0) {
    obj->YTrans = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "XTrans") == 0) {
    obj->XTrans = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "HeadOb") == 0) {
    // finder 1
    //obj->HeadOb = *(struct AnimOb **)luaL_checkudata(L, 3, "AnimOb");
    obj->HeadOb = (struct AnimOb *)_lua_gen_checkAnimOb(L, 3);
    return 0;
  }
  if (strcmp(key, "AnimBob") == 0) {
    // finder 1
    //obj->AnimBob = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    obj->AnimBob = (struct Bob *)_lua_gen_checkBob(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_AnimComp_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AnimComp in userdata
  struct AnimComp **objp = lua_newuserdata(L, sizeof(struct AnimComp *));
  *objp = malloc(sizeof(struct AnimComp));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AnimComp));

  // Set metatable
  luaL_getmetatable(L, "AnimComp");
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
_lua_gen_AnimComp_index(lua_State *L)
{
  struct AnimComp *obj = *(struct AnimComp **)luaL_checkudata(L, 1, "AnimComp");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
  if (strcmp(key, "Timer") == 0) {
    lua_pushinteger(L, obj->Timer);
    return 1;
  }
  if (strcmp(key, "TimeSet") == 0) {
    lua_pushinteger(L, obj->TimeSet);
    return 1;
  }
  if (strcmp(key, "NextComp") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->NextComp;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PrevComp") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->PrevComp;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "NextSeq") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->NextSeq;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "PrevSeq") == 0) {
    struct AnimComp **ud = (struct AnimComp **)lua_newuserdata(L, sizeof(struct AnimComp *));
    *ud = (struct AnimComp*)obj->PrevSeq;
    luaL_getmetatable(L, "AnimComp");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported AnimCRoutine WORD (*)(struct AnimComp *)
  if (strcmp(key, "AnimCRoutine") == 0) {
    return luaL_error(L, "Unsupported type WORD (*)(struct AnimComp *) for field AnimCRoutine");
  }
  if (strcmp(key, "YTrans") == 0) {
    lua_pushinteger(L, obj->YTrans);
    return 1;
  }
  if (strcmp(key, "XTrans") == 0) {
    lua_pushinteger(L, obj->XTrans);
    return 1;
  }
  if (strcmp(key, "HeadOb") == 0) {
    struct AnimOb **ud = (struct AnimOb **)lua_newuserdata(L, sizeof(struct AnimOb *));
    *ud = (struct AnimOb*)obj->HeadOb;
    luaL_getmetatable(L, "AnimOb");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "AnimBob") == 0) {
    struct Bob **ud = (struct Bob **)lua_newuserdata(L, sizeof(struct Bob *));
    *ud = (struct Bob*)obj->AnimBob;
    luaL_getmetatable(L, "Bob");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AnimComp));
    return 1;
}

  return 0;
}

static void
_lua_gen_AnimComp_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Timer");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "TimeSet");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "AnimCRoutine");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "YTrans");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "XTrans");
  lua_rawseti(L, -2, 6);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AnimComp(lua_State *L) {
  if (luaL_newmetatable(L, "AnimComp")) {
    lua_pushcfunction(L, _lua_gen_AnimComp_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AnimComp_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AnimComp_constructor);
    lua_setglobal(L, "AnimComp");
    _lua_gen_AnimComp_install_keys(L);
    lua_pushstring(L, "AnimComp");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DBufPacket_newindex(lua_State *L)
{
  struct DBufPacket *obj = *(struct DBufPacket **)luaL_checkudata(L, 1, "DBufPacket");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "BufY") == 0) {
    obj->BufY = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BufX") == 0) {
    obj->BufX = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "BufPath") == 0) {
    // finder 1
    //obj->BufPath = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    obj->BufPath = (struct VSprite *)_lua_gen_checkVSprite(L, 3);
    return 0;
  }
  if (strcmp(key, "BufBuffer") == 0) {
    obj->BufBuffer = (WORD *)lua_touserdata(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DBufPacket_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DBufPacket in userdata
  struct DBufPacket **objp = lua_newuserdata(L, sizeof(struct DBufPacket *));
  *objp = malloc(sizeof(struct DBufPacket));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DBufPacket));

  // Set metatable
  luaL_getmetatable(L, "DBufPacket");
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
_lua_gen_DBufPacket_index(lua_State *L)
{
  struct DBufPacket *obj = *(struct DBufPacket **)luaL_checkudata(L, 1, "DBufPacket");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "BufY") == 0) {
    lua_pushinteger(L, obj->BufY);
    return 1;
  }
  if (strcmp(key, "BufX") == 0) {
    lua_pushinteger(L, obj->BufX);
    return 1;
  }
  if (strcmp(key, "BufPath") == 0) {
    struct VSprite **ud = (struct VSprite **)lua_newuserdata(L, sizeof(struct VSprite *));
    *ud = (struct VSprite*)obj->BufPath;
    luaL_getmetatable(L, "VSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BufBuffer") == 0) {
    lua_pushlightuserdata(L, obj->BufBuffer);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DBufPacket));
    return 1;
}

  return 0;
}

static void
_lua_gen_DBufPacket_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "BufY");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "BufX");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "BufBuffer");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DBufPacket(lua_State *L) {
  if (luaL_newmetatable(L, "DBufPacket")) {
    lua_pushcfunction(L, _lua_gen_DBufPacket_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DBufPacket_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DBufPacket_constructor);
    lua_setglobal(L, "DBufPacket");
    _lua_gen_DBufPacket_install_keys(L);
    lua_pushstring(L, "DBufPacket");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_collTable_newindex(lua_State *L)
{
  struct collTable *obj = *(struct collTable **)luaL_checkudata(L, 1, "collTable");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  // collPtrs[16] proxied via the index
  return 0;
}


static int
_lua_collTable_constructor(lua_State *L)
{
  // Allocate pointer-to-struct collTable in userdata
  struct collTable **objp = lua_newuserdata(L, sizeof(struct collTable *));
  *objp = malloc(sizeof(struct collTable));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct collTable));

  // Set metatable
  luaL_getmetatable(L, "collTable");
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
_lua_gen_collTable_index(lua_State *L)
{
  struct collTable *obj = *(struct collTable **)luaL_checkudata(L, 1, "collTable");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "collPtrs") == 0) {
     return luaL_error(L, "Unsupported array type LONG (*)(struct VSprite *, struct VSprite *)");
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct collTable));
    return 1;
}

  return 0;
}

static void
_lua_gen_collTable_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "collPtrs");
  lua_rawseti(L, -2, 1);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_collTable(lua_State *L) {
  if (luaL_newmetatable(L, "collTable")) {
    lua_pushcfunction(L, _lua_gen_collTable_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_collTable_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_collTable_constructor);
    lua_setglobal(L, "collTable");
    _lua_gen_collTable_install_keys(L);
    lua_pushstring(L, "collTable");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_TmpRas_newindex(lua_State *L)
{
  struct TmpRas *obj = *(struct TmpRas **)luaL_checkudata(L, 1, "TmpRas");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "RasPtr") == 0) {
    obj->RasPtr = (BYTE *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "Size") == 0) {
    obj->Size = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_TmpRas_constructor(lua_State *L)
{
  // Allocate pointer-to-struct TmpRas in userdata
  struct TmpRas **objp = lua_newuserdata(L, sizeof(struct TmpRas *));
  *objp = malloc(sizeof(struct TmpRas));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct TmpRas));

  // Set metatable
  luaL_getmetatable(L, "TmpRas");
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
_lua_gen_TmpRas_index(lua_State *L)
{
  struct TmpRas *obj = *(struct TmpRas **)luaL_checkudata(L, 1, "TmpRas");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "RasPtr") == 0) {
    lua_pushlightuserdata(L, obj->RasPtr);
    return 1;
  }
  if (strcmp(key, "Size") == 0) {
    lua_pushinteger(L, obj->Size);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct TmpRas));
    return 1;
}

  return 0;
}

static void
_lua_gen_TmpRas_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "RasPtr");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Size");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_TmpRas(lua_State *L) {
  if (luaL_newmetatable(L, "TmpRas")) {
    lua_pushcfunction(L, _lua_gen_TmpRas_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_TmpRas_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_TmpRas_constructor);
    lua_setglobal(L, "TmpRas");
    _lua_gen_TmpRas_install_keys(L);
    lua_pushstring(L, "TmpRas");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_ExtSprite_newindex(lua_State *L)
{
  struct ExtSprite *obj = *(struct ExtSprite **)luaL_checkudata(L, 1, "ExtSprite");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "es_SimpleSprite.posctldata") == 0) {
    obj->es_SimpleSprite.posctldata = (UWORD *)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "es_SimpleSprite.height") == 0) {
    obj->es_SimpleSprite.height = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "es_SimpleSprite.x") == 0) {
    obj->es_SimpleSprite.x = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "es_SimpleSprite.y") == 0) {
    obj->es_SimpleSprite.y = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "es_SimpleSprite.num") == 0) {
    obj->es_SimpleSprite.num = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "es_SimpleSprite") == 0) {
    // finder 0
    struct SimpleSprite *val = *(struct SimpleSprite **)luaL_checkudata(L, 3, "SimpleSprite");
    obj->es_SimpleSprite = *val;
    return 0;
  }
  if (strcmp(key, "es_wordwidth") == 0) {
    obj->es_wordwidth = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "es_flags") == 0) {
    obj->es_flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_ExtSprite_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ExtSprite in userdata
  struct ExtSprite **objp = lua_newuserdata(L, sizeof(struct ExtSprite *));
  *objp = malloc(sizeof(struct ExtSprite));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ExtSprite));

  // Set metatable
  luaL_getmetatable(L, "ExtSprite");
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
_lua_gen_ExtSprite_index(lua_State *L)
{
  struct ExtSprite *obj = *(struct ExtSprite **)luaL_checkudata(L, 1, "ExtSprite");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "es_SimpleSprite.posctldata") == 0) {
    lua_pushlightuserdata(L, obj->es_SimpleSprite.posctldata);
    return 1;
  }
  if (strcmp(key, "es_SimpleSprite.height") == 0) {
    lua_pushinteger(L, obj->es_SimpleSprite.height);
    return 1;
  }
  if (strcmp(key, "es_SimpleSprite.x") == 0) {
    lua_pushinteger(L, obj->es_SimpleSprite.x);
    return 1;
  }
  if (strcmp(key, "es_SimpleSprite.y") == 0) {
    lua_pushinteger(L, obj->es_SimpleSprite.y);
    return 1;
  }
  if (strcmp(key, "es_SimpleSprite.num") == 0) {
    lua_pushinteger(L, obj->es_SimpleSprite.num);
    return 1;
  }
  if (strcmp(key, "es_SimpleSprite") == 0) {
    struct SimpleSprite **ud = (struct SimpleSprite **)lua_newuserdata(L, sizeof(struct SimpleSprite *));
    *ud = (struct SimpleSprite*)&obj->es_SimpleSprite;
    luaL_getmetatable(L, "SimpleSprite");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "es_wordwidth") == 0) {
    lua_pushinteger(L, obj->es_wordwidth);
    return 1;
  }
  if (strcmp(key, "es_flags") == 0) {
    lua_pushinteger(L, obj->es_flags);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct ExtSprite));
    return 1;
}

  return 0;
}

static void
_lua_gen_ExtSprite_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "es_SimpleSprite.posctldata");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "es_SimpleSprite.height");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "es_SimpleSprite.x");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "es_SimpleSprite.y");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "es_SimpleSprite.num");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "es_wordwidth");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "es_flags");
  lua_rawseti(L, -2, 7);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_ExtSprite(lua_State *L) {
  if (luaL_newmetatable(L, "ExtSprite")) {
    lua_pushcfunction(L, _lua_gen_ExtSprite_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_ExtSprite_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_ExtSprite_constructor);
    lua_setglobal(L, "ExtSprite");
    _lua_gen_ExtSprite_install_keys(L);
    lua_pushstring(L, "ExtSprite");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_ClearEOL(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ClearEOL(rp);
  return 0;
}

static int
_lua_ClearScreen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ClearScreen(rp);
  return 0;
}

static int
_lua_Text(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  CONST_STRPTR string = amiga_checkConstNullableString(L, 2);
  ULONG count = luaL_checkinteger(L, 3);
  LONG _result = Text(rp, string, count);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetFont(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TextFont * textFont = _lua_gen_checkTextFont(L, 2);
  LONG _result = SetFont(rp, textFont);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_OpenFont(lua_State* L)
{
  (void)L;
  const struct TextAttr * textAttr = _lua_gen_checkTextAttr(L, 1);
  struct TextFont * _result = OpenFont(textAttr);
  _lua_gen_pushTextFont(L, _result);
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
_lua_AskSoftStyle(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG _result = AskSoftStyle(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AddBob(lua_State* L)
{
  (void)L;
  struct Bob * bob = _lua_gen_checkBob(L, 1);
  struct RastPort * rp = _lua_gen_checkRastPort(L, 2);
  AddBob(bob, rp);
  return 0;
}

static int
_lua_AddVSprite(lua_State* L)
{
  (void)L;
  struct VSprite * vSprite = _lua_gen_checkVSprite(L, 1);
  struct RastPort * rp = _lua_gen_checkRastPort(L, 2);
  AddVSprite(vSprite, rp);
  return 0;
}

static int
_lua_DoCollision(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  DoCollision(rp);
  return 0;
}

static int
_lua_DrawGList(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 2);
  DrawGList(rp, vp);
  return 0;
}

static int
_lua_InitGels(lua_State* L)
{
  (void)L;
  struct VSprite * head = _lua_gen_checkVSprite(L, 1);
  struct VSprite * tail = _lua_gen_checkVSprite(L, 2);
  struct GelsInfo * gelsInfo = _lua_gen_checkGelsInfo(L, 3);
  InitGels(head, tail, gelsInfo);
  return 0;
}

static int
_lua_InitMasks(lua_State* L)
{
  (void)L;
  struct VSprite * vSprite = _lua_gen_checkVSprite(L, 1);
  InitMasks(vSprite);
  return 0;
}

static int
_lua_RemVSprite(lua_State* L)
{
  (void)L;
  struct VSprite * vSprite = _lua_gen_checkVSprite(L, 1);
  RemVSprite(vSprite);
  return 0;
}

static int
_lua_SortGList(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  SortGList(rp);
  return 0;
}

static int
_lua_InitGMasks(lua_State* L)
{
  (void)L;
  struct AnimOb * anOb = _lua_gen_checkAnimOb(L, 1);
  InitGMasks(anOb);
  return 0;
}

static int
_lua_LoadRGB4(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  const UWORD * colors = lua_touserdata(L, 2);
  LONG count = luaL_checkinteger(L, 3);
  LoadRGB4(vp, colors, count);
  return 0;
}

static int
_lua_InitRastPort(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  InitRastPort(rp);
  return 0;
}

static int
_lua_InitVPort(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  InitVPort(vp);
  return 0;
}

static int
_lua_MrgCop(lua_State* L)
{
  (void)L;
  struct View * view = _lua_gen_checkView(L, 1);
  ULONG _result = MrgCop(view);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MakeVPort(lua_State* L)
{
  (void)L;
  struct View * view = _lua_gen_checkView(L, 1);
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 2);
  ULONG _result = MakeVPort(view, vp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_LoadView(lua_State* L)
{
  (void)L;
  struct View * view = _lua_gen_checkView(L, 1);
  LoadView(view);
  return 0;
}

static int
_lua_WaitBlit(lua_State* L)
{
  (void)L;
  WaitBlit();
  return 0;
}

static int
_lua_SetRast(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG pen = luaL_checkinteger(L, 2);
  SetRast(rp, pen);
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
_lua_Draw(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  Draw(rp, x, y);
  return 0;
}

static int
_lua_AreaMove(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  LONG _result = AreaMove(rp, x, y);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AreaDraw(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  LONG _result = AreaDraw(rp, x, y);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AreaEnd(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG _result = AreaEnd(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WaitTOF(lua_State* L)
{
  (void)L;
  WaitTOF();
  return 0;
}

static int
_lua_QBlit(lua_State* L)
{
  (void)L;
  struct bltnode * blit = _lua_gen_checkbltnode(L, 1);
  QBlit(blit);
  return 0;
}

static int
_lua_QBSBlit(lua_State* L)
{
  (void)L;
  struct bltnode * blit = _lua_gen_checkbltnode(L, 1);
  QBSBlit(blit);
  return 0;
}

static int
_lua_BltClear(lua_State* L)
{
  (void)L;
  PLANEPTR memBlock = lua_touserdata(L, 1);
  ULONG byteCount = luaL_checkinteger(L, 2);
  ULONG flags = luaL_checkinteger(L, 3);
  BltClear(memBlock, byteCount, flags);
  return 0;
}

static int
_lua_ReadPixel(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  ULONG _result = ReadPixel(rp, x, y);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WritePixel(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG x = luaL_checkinteger(L, 2);
  LONG y = luaL_checkinteger(L, 3);
  LONG _result = WritePixel(rp, x, y);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Flood(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG mode = luaL_checkinteger(L, 2);
  LONG x = luaL_checkinteger(L, 3);
  LONG y = luaL_checkinteger(L, 4);
  BOOL _result = Flood(rp, mode, x, y);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_PolyDraw(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  LONG count = luaL_checkinteger(L, 2);
  const WORD * polyTable = lua_touserdata(L, 3);
  PolyDraw(rp, count, polyTable);
  return 0;
}

static int
_lua_SetAPen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG pen = luaL_checkinteger(L, 2);
  SetAPen(rp, pen);
  return 0;
}

static int
_lua_SetBPen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG pen = luaL_checkinteger(L, 2);
  SetBPen(rp, pen);
  return 0;
}

static int
_lua_SetDrMd(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG drawMode = luaL_checkinteger(L, 2);
  SetDrMd(rp, drawMode);
  return 0;
}

static int
_lua_InitView(lua_State* L)
{
  (void)L;
  struct View * view = _lua_gen_checkView(L, 1);
  InitView(view);
  return 0;
}

static int
_lua_CBump(lua_State* L)
{
  (void)L;
  struct UCopList * copList = lua_touserdata(L, 1);
  CBump(copList);
  return 0;
}

static int
_lua_CMove(lua_State* L)
{
  (void)L;
  struct UCopList * copList = lua_touserdata(L, 1);
  APTR destination = lua_touserdata(L, 2);
  LONG data = luaL_checkinteger(L, 3);
  LONG _result = CMove(copList, destination, data);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CWait(lua_State* L)
{
  (void)L;
  struct UCopList * copList = lua_touserdata(L, 1);
  LONG v = luaL_checkinteger(L, 2);
  LONG h = luaL_checkinteger(L, 3);
  LONG _result = CWait(copList, v, h);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_VBeamPos(lua_State* L)
{
  (void)L;
  LONG _result = VBeamPos();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WaitBOVP(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  WaitBOVP(vp);
  return 0;
}

static int
_lua_GetSprite(lua_State* L)
{
  (void)L;
  struct SimpleSprite * sprite = _lua_gen_checkSimpleSprite(L, 1);
  LONG num = luaL_checkinteger(L, 2);
  WORD _result = GetSprite(sprite, num);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FreeSprite(lua_State* L)
{
  (void)L;
  LONG num = luaL_checkinteger(L, 1);
  FreeSprite(num);
  return 0;
}

static int
_lua_LockLayerRom(lua_State* L)
{
  (void)L;
  struct Layer * layer = _lua_gen_checkLayer(L, 1);
  LockLayerRom(layer);
  return 0;
}

static int
_lua_UnlockLayerRom(lua_State* L)
{
  (void)L;
  struct Layer * layer = _lua_gen_checkLayer(L, 1);
  UnlockLayerRom(layer);
  return 0;
}

static int
_lua_SyncSBitMap(lua_State* L)
{
  (void)L;
  struct Layer * layer = _lua_gen_checkLayer(L, 1);
  SyncSBitMap(layer);
  return 0;
}

static int
_lua_CopySBitMap(lua_State* L)
{
  (void)L;
  struct Layer * layer = _lua_gen_checkLayer(L, 1);
  CopySBitMap(layer);
  return 0;
}

static int
_lua_OwnBlitter(lua_State* L)
{
  (void)L;
  OwnBlitter();
  return 0;
}

static int
_lua_DisownBlitter(lua_State* L)
{
  (void)L;
  DisownBlitter();
  return 0;
}

static int
_lua_InitTmpRas(lua_State* L)
{
  (void)L;
  struct TmpRas * tmpRas = _lua_gen_checkTmpRas(L, 1);
  PLANEPTR buffer = lua_touserdata(L, 2);
  LONG size = luaL_checkinteger(L, 3);
  struct TmpRas * _result = InitTmpRas(tmpRas, buffer, size);
  _lua_gen_pushTmpRas(L, _result);
  return 1;
}

static int
_lua_AskFont(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TextAttr * textAttr = _lua_gen_checkTextAttr(L, 2);
  AskFont(rp, textAttr);
  return 0;
}

static int
_lua_AddFont(lua_State* L)
{
  (void)L;
  struct TextFont * textFont = _lua_gen_checkTextFont(L, 1);
  AddFont(textFont);
  return 0;
}

static int
_lua_RemFont(lua_State* L)
{
  (void)L;
  struct TextFont * textFont = _lua_gen_checkTextFont(L, 1);
  RemFont(textFont);
  return 0;
}

static int
_lua_AllocRaster(lua_State* L)
{
  (void)L;
  ULONG width = luaL_checkinteger(L, 1);
  ULONG height = luaL_checkinteger(L, 2);
  PLANEPTR _result = AllocRaster(width, height);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_FreeRaster(lua_State* L)
{
  (void)L;
  PLANEPTR p = lua_touserdata(L, 1);
  ULONG width = luaL_checkinteger(L, 2);
  ULONG height = luaL_checkinteger(L, 3);
  FreeRaster(p, width, height);
  return 0;
}

static int
_lua_NewRegion(lua_State* L)
{
  (void)L;
  struct Region * _result = NewRegion();
  _lua_gen_pushRegion(L, _result);
  return 1;
}

static int
_lua_ClearRegion(lua_State* L)
{
  (void)L;
  struct Region * region = _lua_gen_checkRegion(L, 1);
  ClearRegion(region);
  return 0;
}

static int
_lua_DisposeRegion(lua_State* L)
{
  (void)L;
  struct Region * region = _lua_gen_checkRegion(L, 1);
  DisposeRegion(region);
  return 0;
}

static int
_lua_FreeVPortCopLists(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  FreeVPortCopLists(vp);
  return 0;
}

static int
_lua_FreeCopList(lua_State* L)
{
  (void)L;
  struct CopList * copList = _lua_gen_checkCopList(L, 1);
  FreeCopList(copList);
  return 0;
}

static int
_lua_FreeCprList(lua_State* L)
{
  (void)L;
  struct cprlist * cprList = _lua_gen_checkcprlist(L, 1);
  FreeCprList(cprList);
  return 0;
}

static int
_lua_GetColorMap(lua_State* L)
{
  (void)L;
  LONG entries = luaL_checkinteger(L, 1);
  struct ColorMap * _result = GetColorMap(entries);
  _lua_gen_pushColorMap(L, _result);
  return 1;
}

static int
_lua_FreeColorMap(lua_State* L)
{
  (void)L;
  struct ColorMap * colorMap = _lua_gen_checkColorMap(L, 1);
  FreeColorMap(colorMap);
  return 0;
}

static int
_lua_GetRGB4(lua_State* L)
{
  (void)L;
  struct ColorMap * colorMap = _lua_gen_checkColorMap(L, 1);
  LONG entry = luaL_checkinteger(L, 2);
  ULONG _result = GetRGB4(colorMap, entry);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ScrollVPort(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  ScrollVPort(vp);
  return 0;
}

static int
_lua_UCopperListInit(lua_State* L)
{
  (void)L;
  struct UCopList * uCopList = lua_touserdata(L, 1);
  LONG n = luaL_checkinteger(L, 2);
  struct CopList * _result = UCopperListInit(uCopList, n);
  _lua_gen_pushCopList(L, _result);
  return 1;
}

static int
_lua_AttemptLockLayerRom(lua_State* L)
{
  (void)L;
  struct Layer * layer = _lua_gen_checkLayer(L, 1);
  BOOL _result = AttemptLockLayerRom(layer);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GfxNew(lua_State* L)
{
  (void)L;
  ULONG gfxNodeType = luaL_checkinteger(L, 1);
  APTR _result = GfxNew(gfxNodeType);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_GfxFree(lua_State* L)
{
  (void)L;
  APTR gfxNodePtr = lua_touserdata(L, 1);
  GfxFree(gfxNodePtr);
  return 0;
}

static int
_lua_GfxAssociate(lua_State* L)
{
  (void)L;
  APTR associateNode = lua_touserdata(L, 1);
  APTR gfxNodePtr = lua_touserdata(L, 2);
  GfxAssociate(associateNode, gfxNodePtr);
  return 0;
}

static int
_lua_BitMapScale(lua_State* L)
{
  (void)L;
  struct BitScaleArgs * bitScaleArgs = _lua_gen_checkBitScaleArgs(L, 1);
  BitMapScale(bitScaleArgs);
  return 0;
}

static int
_lua_ScalerDiv(lua_State* L)
{
  (void)L;
  ULONG factor = luaL_checkinteger(L, 1);
  ULONG numerator = luaL_checkinteger(L, 2);
  ULONG denominator = luaL_checkinteger(L, 3);
  UWORD _result = ScalerDiv(factor, numerator, denominator);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GfxLookUp(lua_State* L)
{
  (void)L;
  CONST_APTR associateNode = lua_touserdata(L, 1);
  APTR _result = GfxLookUp(associateNode);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_VideoControl(lua_State* L)
{
  struct ColorMap * colorMap = _lua_gen_checkColorMap(L, 1);
  struct TagItem* tagarray = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 2);
    tagarray = _tags;
  }
  BOOL _result = VideoControl(colorMap, tagarray);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_VideoControlTags(lua_State* L)
{
  struct ColorMap * colorMap = _lua_gen_checkColorMap(L, 1);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 2);
  BOOL _result = VideoControl(colorMap,  taglist);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_OpenMonitor(lua_State* L)
{
  (void)L;
  CONST_STRPTR monitorName = amiga_checkConstNullableString(L, 1);
  ULONG displayID = luaL_checkinteger(L, 2);
  struct MonitorSpec * _result = OpenMonitor(monitorName, displayID);
  _lua_gen_pushMonitorSpec(L, _result);
  return 1;
}

static int
_lua_CloseMonitor(lua_State* L)
{
  (void)L;
  struct MonitorSpec * monitorSpec = _lua_gen_checkMonitorSpec(L, 1);
  BOOL _result = CloseMonitor(monitorSpec);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_FindDisplayInfo(lua_State* L)
{
  (void)L;
  ULONG displayID = luaL_checkinteger(L, 1);
  DisplayInfoHandle _result = FindDisplayInfo(displayID);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_NextDisplayInfo(lua_State* L)
{
  (void)L;
  ULONG displayID = luaL_checkinteger(L, 1);
  ULONG _result = NextDisplayInfo(displayID);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetVPModeID(lua_State* L)
{
  (void)L;
  const struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  LONG _result = GetVPModeID(vp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ModeNotAvailable(lua_State* L)
{
  (void)L;
  ULONG modeID = luaL_checkinteger(L, 1);
  LONG _result = ModeNotAvailable(modeID);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ExtendFont(lua_State* L)
{
  (void)L;
  struct TextFont * font = _lua_gen_checkTextFont(L, 1);
  const struct TagItem * fontTags = _lua_gen_checkTagItem(L, 2);
  ULONG _result = ExtendFont(font, fontTags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ExtendFontTags(lua_State* L)
{
  (void)L;
  struct TextFont * font = _lua_gen_checkTextFont(L, 1);
  ULONG tag1Type = luaL_checkinteger(L, 2);
  ULONG _result = ExtendFontTags(font, tag1Type);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_StripFont(lua_State* L)
{
  (void)L;
  struct TextFont * font = _lua_gen_checkTextFont(L, 1);
  StripFont(font);
  return 0;
}

static int
_lua_CalcIVG(lua_State* L)
{
  (void)L;
  struct View * v = _lua_gen_checkView(L, 1);
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 2);
  UWORD _result = CalcIVG(v, vp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AttachPalExtra(lua_State* L)
{
  (void)L;
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 2);
  LONG _result = AttachPalExtra(cm, vp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ObtainBestPenA(lua_State* L)
{
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG r = luaL_checkinteger(L, 2);
  ULONG g = luaL_checkinteger(L, 3);
  ULONG b = luaL_checkinteger(L, 4);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 5)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 5);
    tags = _tags;
  }
  LONG _result = ObtainBestPenA(cm, r, g, b, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ObtainBestPen(lua_State* L)
{
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG r = luaL_checkinteger(L, 2);
  ULONG g = luaL_checkinteger(L, 3);
  ULONG b = luaL_checkinteger(L, 4);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 5);
  LONG _result = ObtainBestPenA(cm, r, g, b,  taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetRGB32(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  ULONG n = luaL_checkinteger(L, 2);
  ULONG r = luaL_checkinteger(L, 3);
  ULONG g = luaL_checkinteger(L, 4);
  ULONG b = luaL_checkinteger(L, 5);
  SetRGB32(vp, n, r, g, b);
  return 0;
}

static int
_lua_GetAPen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG _result = GetAPen(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetBPen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG _result = GetBPen(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetDrMd(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG _result = GetDrMd(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetOutlinePen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG _result = GetOutlinePen(rp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_LoadRGB32(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  const ULONG * table = lua_touserdata(L, 2);
  LoadRGB32(vp, table);
  return 0;
}

static int
_lua_SetChipRev(lua_State* L)
{
  (void)L;
  ULONG want = luaL_checkinteger(L, 1);
  ULONG _result = SetChipRev(want);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetABPenDrMd(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG apen = luaL_checkinteger(L, 2);
  ULONG bpen = luaL_checkinteger(L, 3);
  ULONG drawmode = luaL_checkinteger(L, 4);
  SetABPenDrMd(rp, apen, bpen, drawmode);
  return 0;
}

static int
_lua_GetRGB32(lua_State* L)
{
  (void)L;
  const struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG firstcolor = luaL_checkinteger(L, 2);
  ULONG ncolors = luaL_checkinteger(L, 3);
  ULONG * table = lua_touserdata(L, 4);
  GetRGB32(cm, firstcolor, ncolors, table);
  return 0;
}

static int
_lua_AllocBitMap(lua_State* L)
{
  (void)L;
  ULONG sizex = luaL_checkinteger(L, 1);
  ULONG sizey = luaL_checkinteger(L, 2);
  ULONG depth = luaL_checkinteger(L, 3);
  ULONG flags = luaL_checkinteger(L, 4);
  const struct BitMap * friend_bitmap = _lua_gen_checkBitMap(L, 5);
  struct BitMap * _result = AllocBitMap(sizex, sizey, depth, flags, friend_bitmap);
  _lua_gen_pushBitMap(L, _result);
  return 1;
}

static int
_lua_FreeBitMap(lua_State* L)
{
  (void)L;
  struct BitMap * bm = _lua_gen_checkBitMap(L, 1);
  FreeBitMap(bm);
  return 0;
}

static int
_lua_GetExtSpriteA(lua_State* L)
{
  struct ExtSprite * ss = _lua_gen_checkExtSprite(L, 1);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  LONG _result = GetExtSpriteA(ss, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetExtSprite(lua_State* L)
{
  struct ExtSprite * ss = _lua_gen_checkExtSprite(L, 1);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 2);
  LONG _result = GetExtSpriteA(ss,  taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CoerceMode(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  ULONG monitorid = luaL_checkinteger(L, 2);
  ULONG flags = luaL_checkinteger(L, 3);
  ULONG _result = CoerceMode(vp, monitorid, flags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ChangeVPBitMap(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  struct BitMap * bm = _lua_gen_checkBitMap(L, 2);
  struct DBufInfo * db = _lua_gen_checkDBufInfo(L, 3);
  ChangeVPBitMap(vp, bm, db);
  return 0;
}

static int
_lua_ReleasePen(lua_State* L)
{
  (void)L;
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG n = luaL_checkinteger(L, 2);
  ReleasePen(cm, n);
  return 0;
}

static int
_lua_ObtainPen(lua_State* L)
{
  (void)L;
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG n = luaL_checkinteger(L, 2);
  ULONG r = luaL_checkinteger(L, 3);
  ULONG g = luaL_checkinteger(L, 4);
  ULONG b = luaL_checkinteger(L, 5);
  LONG f = luaL_checkinteger(L, 6);
  ULONG _result = ObtainPen(cm, n, r, g, b, f);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetBitMapAttr(lua_State* L)
{
  (void)L;
  const struct BitMap * bm = _lua_gen_checkBitMap(L, 1);
  ULONG attrnum = luaL_checkinteger(L, 2);
  ULONG _result = GetBitMapAttr(bm, attrnum);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AllocDBufInfo(lua_State* L)
{
  (void)L;
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  struct DBufInfo * _result = AllocDBufInfo(vp);
  _lua_gen_pushDBufInfo(L, _result);
  return 1;
}

static int
_lua_FreeDBufInfo(lua_State* L)
{
  (void)L;
  struct DBufInfo * dbi = _lua_gen_checkDBufInfo(L, 1);
  FreeDBufInfo(dbi);
  return 0;
}

static int
_lua_SetOutlinePen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG pen = luaL_checkinteger(L, 2);
  ULONG _result = SetOutlinePen(rp, pen);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetWriteMask(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG msk = luaL_checkinteger(L, 2);
  ULONG _result = SetWriteMask(rp, msk);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetMaxPen(lua_State* L)
{
  (void)L;
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  ULONG maxpen = luaL_checkinteger(L, 2);
  SetMaxPen(rp, maxpen);
  return 0;
}

static int
_lua_SetRGB32CM(lua_State* L)
{
  (void)L;
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG n = luaL_checkinteger(L, 2);
  ULONG r = luaL_checkinteger(L, 3);
  ULONG g = luaL_checkinteger(L, 4);
  ULONG b = luaL_checkinteger(L, 5);
  SetRGB32CM(cm, n, r, g, b);
  return 0;
}

static int
_lua_FindColor(lua_State* L)
{
  (void)L;
  struct ColorMap * cm = _lua_gen_checkColorMap(L, 1);
  ULONG r = luaL_checkinteger(L, 2);
  ULONG g = luaL_checkinteger(L, 3);
  ULONG b = luaL_checkinteger(L, 4);
  LONG maxcolor = luaL_checkinteger(L, 5);
  LONG _result = FindColor(cm, r, g, b, maxcolor);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AllocSpriteDataA(lua_State* L)
{
  const struct BitMap * bm = _lua_gen_checkBitMap(L, 1);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  struct ExtSprite * _result = AllocSpriteDataA(bm, tags);
  _lua_gen_pushExtSprite(L, _result);
  return 1;
}

static int
_lua_AllocSpriteData(lua_State* L)
{
  const struct BitMap * bm = _lua_gen_checkBitMap(L, 1);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct ExtSprite * _result = AllocSpriteDataA(bm,  taglist);
  _lua_gen_pushExtSprite(L, _result);
  return 1;
}

static int
_lua_ChangeExtSpriteA(lua_State* L)
{
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  struct ExtSprite * oldsprite = _lua_gen_checkExtSprite(L, 2);
  struct ExtSprite * newsprite = _lua_gen_checkExtSprite(L, 3);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 4)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 4);
    tags = _tags;
  }
  LONG _result = ChangeExtSpriteA(vp, oldsprite, newsprite, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ChangeExtSprite(lua_State* L)
{
  struct ViewPort * vp = _lua_gen_checkViewPort(L, 1);
  struct ExtSprite * oldsprite = _lua_gen_checkExtSprite(L, 2);
  struct ExtSprite * newsprite = _lua_gen_checkExtSprite(L, 3);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 4);
  LONG _result = ChangeExtSpriteA(vp, oldsprite, newsprite,  taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FreeSpriteData(lua_State* L)
{
  (void)L;
  struct ExtSprite * sp = _lua_gen_checkExtSprite(L, 1);
  FreeSpriteData(sp);
  return 0;
}

static int
_lua_SetRPAttrsA(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  SetRPAttrsA(rp, tags);
  return 0;
}

static int
_lua_SetRPAttrs(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 2);
  SetRPAttrsA(rp,  taglist);
  return 0;
}

static int
_lua_GetRPAttrsA(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 2);
    tags = _tags;
  }
  GetRPAttrsA(rp, tags);
  return 0;
}

static int
_lua_GetRPAttrs(lua_State* L)
{
  struct RastPort * rp = _lua_gen_checkRastPort(L, 1);
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 2);
  GetRPAttrsA(rp,  taglist);
  return 0;
}

static int
_lua_BestModeIDA(lua_State* L)
{
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 1)) {
    struct TagItem _tags[32];
    amiga_doTagList(L, _tags, countof(_tags), 1);
    tags = _tags;
  }
  ULONG _result = BestModeIDA(tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_BestModeID(lua_State* L)
{
  struct TagItem taglist[64];
  amiga_readVarTags(L, taglist, countof(taglist), 1);
  ULONG _result = BestModeIDA( taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DeleteTask(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  DeleteTask(task);
  return 0;
}

static int
_lua_RemBob(lua_State* L)
{
  (void)L;
  struct Bob * b = _lua_gen_checkBob(L, 1);
  RemBob(b);
  return 0;
}

static void
_lua_gen_install_defines(lua_State *L)
{
  lua_pushinteger(L, TRUE);
  lua_setglobal(L, "TRUE");
  lua_pushinteger(L, ERROR_NO_FREE_STORE);
  lua_setglobal(L, "ERROR_NO_FREE_STORE");
  lua_pushinteger(L, RETURN_OK);
  lua_setglobal(L, "RETURN_OK");
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
  lua_pushinteger(L, SUSERFLAGS);
  lua_setglobal(L, "SUSERFLAGS");
  lua_pushinteger(L, VSPRITE);
  lua_setglobal(L, "VSPRITE");
  lua_pushinteger(L, SAVEBACK);
  lua_setglobal(L, "SAVEBACK");
  lua_pushinteger(L, OVERLAY);
  lua_setglobal(L, "OVERLAY");
  lua_pushinteger(L, MUSTDRAW);
  lua_setglobal(L, "MUSTDRAW");
  lua_pushinteger(L, BACKSAVED);
  lua_setglobal(L, "BACKSAVED");
  lua_pushinteger(L, BOBUPDATE);
  lua_setglobal(L, "BOBUPDATE");
  lua_pushinteger(L, GELGONE);
  lua_setglobal(L, "GELGONE");
  lua_pushinteger(L, VSOVERFLOW);
  lua_setglobal(L, "VSOVERFLOW");
  lua_pushinteger(L, BUSERFLAGS);
  lua_setglobal(L, "BUSERFLAGS");
  lua_pushinteger(L, SAVEBOB);
  lua_setglobal(L, "SAVEBOB");
  lua_pushinteger(L, BOBISCOMP);
  lua_setglobal(L, "BOBISCOMP");
  lua_pushinteger(L, BWAITING);
  lua_setglobal(L, "BWAITING");
  lua_pushinteger(L, BDRAWN);
  lua_setglobal(L, "BDRAWN");
  lua_pushinteger(L, BOBSAWAY);
  lua_setglobal(L, "BOBSAWAY");
  lua_pushinteger(L, BOBNIX);
  lua_setglobal(L, "BOBNIX");
  lua_pushinteger(L, SAVEPRESERVE);
  lua_setglobal(L, "SAVEPRESERVE");
  lua_pushinteger(L, OUTSTEP);
  lua_setglobal(L, "OUTSTEP");
  lua_pushinteger(L, ANFRACSIZE);
  lua_setglobal(L, "ANFRACSIZE");
  lua_pushinteger(L, ANIMHALF);
  lua_setglobal(L, "ANIMHALF");
  lua_pushinteger(L, RINGTRIGGER);
  lua_setglobal(L, "RINGTRIGGER");
  lua_pushinteger(L, B2NORM);
  lua_setglobal(L, "B2NORM");
  lua_pushinteger(L, B2SWAP);
  lua_setglobal(L, "B2SWAP");
  lua_pushinteger(L, B2BOBBER);
  lua_setglobal(L, "B2BOBBER");
  lua_pushinteger(L, CUSTOMIMAGEDEPTH);
  lua_setglobal(L, "CUSTOMIMAGEDEPTH");
  lua_pushinteger(L, IA_Dummy);
  lua_setglobal(L, "IA_Dummy");
  lua_pushinteger(L, IA_Left);
  lua_setglobal(L, "IA_Left");
  lua_pushinteger(L, IA_Top);
  lua_setglobal(L, "IA_Top");
  lua_pushinteger(L, IA_Width);
  lua_setglobal(L, "IA_Width");
  lua_pushinteger(L, IA_Height);
  lua_setglobal(L, "IA_Height");
  lua_pushinteger(L, IA_FGPen);
  lua_setglobal(L, "IA_FGPen");
  lua_pushinteger(L, IA_BGPen);
  lua_setglobal(L, "IA_BGPen");
  lua_pushinteger(L, IA_Data);
  lua_setglobal(L, "IA_Data");
  lua_pushinteger(L, IA_LineWidth);
  lua_setglobal(L, "IA_LineWidth");
  lua_pushinteger(L, IA_Pens);
  lua_setglobal(L, "IA_Pens");
  lua_pushinteger(L, IA_Resolution);
  lua_setglobal(L, "IA_Resolution");
  lua_pushinteger(L, IA_APattern);
  lua_setglobal(L, "IA_APattern");
  lua_pushinteger(L, IA_APatSize);
  lua_setglobal(L, "IA_APatSize");
  lua_pushinteger(L, IA_Mode);
  lua_setglobal(L, "IA_Mode");
  lua_pushinteger(L, IA_Font);
  lua_setglobal(L, "IA_Font");
  lua_pushinteger(L, IA_Outline);
  lua_setglobal(L, "IA_Outline");
  lua_pushinteger(L, IA_Recessed);
  lua_setglobal(L, "IA_Recessed");
  lua_pushinteger(L, IA_DoubleEmboss);
  lua_setglobal(L, "IA_DoubleEmboss");
  lua_pushinteger(L, IA_EdgesOnly);
  lua_setglobal(L, "IA_EdgesOnly");
  lua_pushinteger(L, SYSIA_Size);
  lua_setglobal(L, "SYSIA_Size");
  lua_pushinteger(L, SYSIA_Depth);
  lua_setglobal(L, "SYSIA_Depth");
  lua_pushinteger(L, SYSIA_Which);
  lua_setglobal(L, "SYSIA_Which");
  lua_pushinteger(L, SYSIA_DrawInfo);
  lua_setglobal(L, "SYSIA_DrawInfo");
  lua_pushinteger(L, SYSIA_Pens);
  lua_setglobal(L, "SYSIA_Pens");
  lua_pushinteger(L, IA_ShadowPen);
  lua_setglobal(L, "IA_ShadowPen");
  lua_pushinteger(L, IA_HighlightPen);
  lua_setglobal(L, "IA_HighlightPen");
  lua_pushinteger(L, SYSIA_ReferenceFont);
  lua_setglobal(L, "SYSIA_ReferenceFont");
  lua_pushinteger(L, IA_SupportsDisable);
  lua_setglobal(L, "IA_SupportsDisable");
  lua_pushinteger(L, IA_FrameType);
  lua_setglobal(L, "IA_FrameType");
  lua_pushinteger(L, IA_Underscore);
  lua_setglobal(L, "IA_Underscore");
  lua_pushinteger(L, IA_Scalable);
  lua_setglobal(L, "IA_Scalable");
  lua_pushinteger(L, IA_ActivateKey);
  lua_setglobal(L, "IA_ActivateKey");
  lua_pushinteger(L, IA_Screen);
  lua_setglobal(L, "IA_Screen");
  lua_pushinteger(L, IA_Precision);
  lua_setglobal(L, "IA_Precision");
  lua_pushinteger(L, IA_Orientation);
  lua_setglobal(L, "IA_Orientation");
  lua_pushinteger(L, IA_Label);
  lua_setglobal(L, "IA_Label");
  lua_pushinteger(L, IA_EraseBackground);
  lua_setglobal(L, "IA_EraseBackground");
  lua_pushinteger(L, IA_LabelPen);
  lua_setglobal(L, "IA_LabelPen");
  lua_pushinteger(L, SYSISIZE_MEDRES);
  lua_setglobal(L, "SYSISIZE_MEDRES");
  lua_pushinteger(L, SYSISIZE_LOWRES);
  lua_setglobal(L, "SYSISIZE_LOWRES");
  lua_pushinteger(L, SYSISIZE_HIRES);
  lua_setglobal(L, "SYSISIZE_HIRES");
  lua_pushinteger(L, DEPTHIMAGE);
  lua_setglobal(L, "DEPTHIMAGE");
  lua_pushinteger(L, ZOOMIMAGE);
  lua_setglobal(L, "ZOOMIMAGE");
  lua_pushinteger(L, SIZEIMAGE);
  lua_setglobal(L, "SIZEIMAGE");
  lua_pushinteger(L, CLOSEIMAGE);
  lua_setglobal(L, "CLOSEIMAGE");
  lua_pushinteger(L, SDEPTHIMAGE);
  lua_setglobal(L, "SDEPTHIMAGE");
  lua_pushinteger(L, SDOWNBACKMAGE);
  lua_setglobal(L, "SDOWNBACKMAGE");
  lua_pushinteger(L, LEFTIMAGE);
  lua_setglobal(L, "LEFTIMAGE");
  lua_pushinteger(L, UPIMAGE);
  lua_setglobal(L, "UPIMAGE");
  lua_pushinteger(L, RIGHTIMAGE);
  lua_setglobal(L, "RIGHTIMAGE");
  lua_pushinteger(L, DOWNIMAGE);
  lua_setglobal(L, "DOWNIMAGE");
  lua_pushinteger(L, CHECKIMAGE);
  lua_setglobal(L, "CHECKIMAGE");
  lua_pushinteger(L, MXIMAGE);
  lua_setglobal(L, "MXIMAGE");
  lua_pushinteger(L, MENUCHECK);
  lua_setglobal(L, "MENUCHECK");
  lua_pushinteger(L, AMIGAKEY);
  lua_setglobal(L, "AMIGAKEY");
  lua_pushinteger(L, ICONIFYIMAGE);
  lua_setglobal(L, "ICONIFYIMAGE");
  lua_pushinteger(L, MENUMX);
  lua_setglobal(L, "MENUMX");
  lua_pushinteger(L, MENUSUB);
  lua_setglobal(L, "MENUSUB");
  lua_pushinteger(L, SHIFTKEYIMAGE);
  lua_setglobal(L, "SHIFTKEYIMAGE");
  lua_pushinteger(L, FRAME_DEFAULT);
  lua_setglobal(L, "FRAME_DEFAULT");
  lua_pushinteger(L, FRAME_BUTTON);
  lua_setglobal(L, "FRAME_BUTTON");
  lua_pushinteger(L, FRAME_RIDGE);
  lua_setglobal(L, "FRAME_RIDGE");
  lua_pushinteger(L, FRAME_ICONDROPBOX);
  lua_setglobal(L, "FRAME_ICONDROPBOX");
  lua_pushinteger(L, FRAME_PROPBORDER);
  lua_setglobal(L, "FRAME_PROPBORDER");
  lua_pushinteger(L, FRAME_PROPKNOB);
  lua_setglobal(L, "FRAME_PROPKNOB");
  lua_pushinteger(L, FRAME_DISPLAY);
  lua_setglobal(L, "FRAME_DISPLAY");
  lua_pushinteger(L, FRAME_CONTEXT);
  lua_setglobal(L, "FRAME_CONTEXT");
  lua_pushinteger(L, IM_DRAW);
  lua_setglobal(L, "IM_DRAW");
  lua_pushinteger(L, IM_HITTEST);
  lua_setglobal(L, "IM_HITTEST");
  lua_pushinteger(L, IM_ERASE);
  lua_setglobal(L, "IM_ERASE");
  lua_pushinteger(L, IM_MOVE);
  lua_setglobal(L, "IM_MOVE");
  lua_pushinteger(L, IM_DRAWFRAME);
  lua_setglobal(L, "IM_DRAWFRAME");
  lua_pushinteger(L, IM_FRAMEBOX);
  lua_setglobal(L, "IM_FRAMEBOX");
  lua_pushinteger(L, IM_HITFRAME);
  lua_setglobal(L, "IM_HITFRAME");
  lua_pushinteger(L, IM_ERASEFRAME);
  lua_setglobal(L, "IM_ERASEFRAME");
  lua_pushinteger(L, IM_DOMAINFRAME);
  lua_setglobal(L, "IM_DOMAINFRAME");
  lua_pushinteger(L, IDS_NORMAL);
  lua_setglobal(L, "IDS_NORMAL");
  lua_pushinteger(L, IDS_SELECTED);
  lua_setglobal(L, "IDS_SELECTED");
  lua_pushinteger(L, IDS_DISABLED);
  lua_setglobal(L, "IDS_DISABLED");
  lua_pushinteger(L, IDS_BUSY);
  lua_setglobal(L, "IDS_BUSY");
  lua_pushinteger(L, IDS_INDETERMINATE);
  lua_setglobal(L, "IDS_INDETERMINATE");
  lua_pushinteger(L, IDS_INACTIVENORMAL);
  lua_setglobal(L, "IDS_INACTIVENORMAL");
  lua_pushinteger(L, IDS_INACTIVESELECTED);
  lua_setglobal(L, "IDS_INACTIVESELECTED");
  lua_pushinteger(L, IDS_INACTIVEDISABLED);
  lua_setglobal(L, "IDS_INACTIVEDISABLED");
  lua_pushinteger(L, IDS_SELECTEDDISABLED);
  lua_setglobal(L, "IDS_SELECTEDDISABLED");
  lua_pushinteger(L, IDS_INDETERMINANT);
  lua_setglobal(L, "IDS_INDETERMINANT");
  lua_pushinteger(L, FRAMEF_SPECIFY);
  lua_setglobal(L, "FRAMEF_SPECIFY");
  lua_pushinteger(L, FRAMEF_MINIMAL);
  lua_setglobal(L, "FRAMEF_MINIMAL");
  lua_pushinteger(L, IDOMAIN_MINIMUM);
  lua_setglobal(L, "IDOMAIN_MINIMUM");
  lua_pushinteger(L, IDOMAIN_NOMINAL);
  lua_setglobal(L, "IDOMAIN_NOMINAL");
  lua_pushinteger(L, IDOMAIN_MAXIMUM);
  lua_setglobal(L, "IDOMAIN_MAXIMUM");
  lua_pushinteger(L, DRI_VERSION);
  lua_setglobal(L, "DRI_VERSION");
  lua_pushinteger(L, DRIF_NEWLOOK);
  lua_setglobal(L, "DRIF_NEWLOOK");
  lua_pushinteger(L, DETAILPEN);
  lua_setglobal(L, "DETAILPEN");
  lua_pushinteger(L, BLOCKPEN);
  lua_setglobal(L, "BLOCKPEN");
  lua_pushinteger(L, TEXTPEN);
  lua_setglobal(L, "TEXTPEN");
  lua_pushinteger(L, SHINEPEN);
  lua_setglobal(L, "SHINEPEN");
  lua_pushinteger(L, SHADOWPEN);
  lua_setglobal(L, "SHADOWPEN");
  lua_pushinteger(L, FILLPEN);
  lua_setglobal(L, "FILLPEN");
  lua_pushinteger(L, FILLTEXTPEN);
  lua_setglobal(L, "FILLTEXTPEN");
  lua_pushinteger(L, BACKGROUNDPEN);
  lua_setglobal(L, "BACKGROUNDPEN");
  lua_pushinteger(L, HIGHLIGHTTEXTPEN);
  lua_setglobal(L, "HIGHLIGHTTEXTPEN");
  lua_pushinteger(L, BARDETAILPEN);
  lua_setglobal(L, "BARDETAILPEN");
  lua_pushinteger(L, BARBLOCKPEN);
  lua_setglobal(L, "BARBLOCKPEN");
  lua_pushinteger(L, BARTRIMPEN);
  lua_setglobal(L, "BARTRIMPEN");
  lua_pushinteger(L, BARCONTOURPEN);
  lua_setglobal(L, "BARCONTOURPEN");
  lua_pushinteger(L, NUMDRIPENS);
  lua_setglobal(L, "NUMDRIPENS");
  lua_pushinteger(L, PEN_C3);
  lua_setglobal(L, "PEN_C3");
  lua_pushinteger(L, PEN_C2);
  lua_setglobal(L, "PEN_C2");
  lua_pushinteger(L, PEN_C1);
  lua_setglobal(L, "PEN_C1");
  lua_pushinteger(L, PEN_C0);
  lua_setglobal(L, "PEN_C0");
  lua_pushinteger(L, SCREENTYPE);
  lua_setglobal(L, "SCREENTYPE");
  lua_pushinteger(L, WBENCHSCREEN);
  lua_setglobal(L, "WBENCHSCREEN");
  lua_pushinteger(L, PUBLICSCREEN);
  lua_setglobal(L, "PUBLICSCREEN");
  lua_pushinteger(L, CUSTOMSCREEN);
  lua_setglobal(L, "CUSTOMSCREEN");
  lua_pushinteger(L, SHOWTITLE);
  lua_setglobal(L, "SHOWTITLE");
  lua_pushinteger(L, BEEPING);
  lua_setglobal(L, "BEEPING");
  lua_pushinteger(L, CUSTOMBITMAP);
  lua_setglobal(L, "CUSTOMBITMAP");
  lua_pushinteger(L, SCREENBEHIND);
  lua_setglobal(L, "SCREENBEHIND");
  lua_pushinteger(L, SCREENQUIET);
  lua_setglobal(L, "SCREENQUIET");
  lua_pushinteger(L, SCREENHIRES);
  lua_setglobal(L, "SCREENHIRES");
  lua_pushinteger(L, NS_EXTENDED);
  lua_setglobal(L, "NS_EXTENDED");
  lua_pushinteger(L, AUTOSCROLL);
  lua_setglobal(L, "AUTOSCROLL");
  lua_pushinteger(L, PENSHARED);
  lua_setglobal(L, "PENSHARED");
  lua_pushinteger(L, STDSCREENHEIGHT);
  lua_setglobal(L, "STDSCREENHEIGHT");
  lua_pushinteger(L, STDSCREENWIDTH);
  lua_setglobal(L, "STDSCREENWIDTH");
  lua_pushinteger(L, SA_Dummy);
  lua_setglobal(L, "SA_Dummy");
  lua_pushinteger(L, SA_Left);
  lua_setglobal(L, "SA_Left");
  lua_pushinteger(L, SA_Top);
  lua_setglobal(L, "SA_Top");
  lua_pushinteger(L, SA_Width);
  lua_setglobal(L, "SA_Width");
  lua_pushinteger(L, SA_Height);
  lua_setglobal(L, "SA_Height");
  lua_pushinteger(L, SA_Depth);
  lua_setglobal(L, "SA_Depth");
  lua_pushinteger(L, SA_DetailPen);
  lua_setglobal(L, "SA_DetailPen");
  lua_pushinteger(L, SA_BlockPen);
  lua_setglobal(L, "SA_BlockPen");
  lua_pushinteger(L, SA_Title);
  lua_setglobal(L, "SA_Title");
  lua_pushinteger(L, SA_Colors);
  lua_setglobal(L, "SA_Colors");
  lua_pushinteger(L, SA_ErrorCode);
  lua_setglobal(L, "SA_ErrorCode");
  lua_pushinteger(L, SA_Font);
  lua_setglobal(L, "SA_Font");
  lua_pushinteger(L, SA_SysFont);
  lua_setglobal(L, "SA_SysFont");
  lua_pushinteger(L, SA_Type);
  lua_setglobal(L, "SA_Type");
  lua_pushinteger(L, SA_BitMap);
  lua_setglobal(L, "SA_BitMap");
  lua_pushinteger(L, SA_PubName);
  lua_setglobal(L, "SA_PubName");
  lua_pushinteger(L, SA_PubSig);
  lua_setglobal(L, "SA_PubSig");
  lua_pushinteger(L, SA_PubTask);
  lua_setglobal(L, "SA_PubTask");
  lua_pushinteger(L, SA_DisplayID);
  lua_setglobal(L, "SA_DisplayID");
  lua_pushinteger(L, SA_DClip);
  lua_setglobal(L, "SA_DClip");
  lua_pushinteger(L, SA_Overscan);
  lua_setglobal(L, "SA_Overscan");
  lua_pushinteger(L, SA_Obsolete1);
  lua_setglobal(L, "SA_Obsolete1");
  lua_pushinteger(L, SA_ShowTitle);
  lua_setglobal(L, "SA_ShowTitle");
  lua_pushinteger(L, SA_Behind);
  lua_setglobal(L, "SA_Behind");
  lua_pushinteger(L, SA_Quiet);
  lua_setglobal(L, "SA_Quiet");
  lua_pushinteger(L, SA_AutoScroll);
  lua_setglobal(L, "SA_AutoScroll");
  lua_pushinteger(L, SA_Pens);
  lua_setglobal(L, "SA_Pens");
  lua_pushinteger(L, SA_FullPalette);
  lua_setglobal(L, "SA_FullPalette");
  lua_pushinteger(L, SA_ColorMapEntries);
  lua_setglobal(L, "SA_ColorMapEntries");
  lua_pushinteger(L, SA_Parent);
  lua_setglobal(L, "SA_Parent");
  lua_pushinteger(L, SA_Draggable);
  lua_setglobal(L, "SA_Draggable");
  lua_pushinteger(L, SA_Exclusive);
  lua_setglobal(L, "SA_Exclusive");
  lua_pushinteger(L, SA_SharePens);
  lua_setglobal(L, "SA_SharePens");
  lua_pushinteger(L, SA_BackFill);
  lua_setglobal(L, "SA_BackFill");
  lua_pushinteger(L, SA_Interleaved);
  lua_setglobal(L, "SA_Interleaved");
  lua_pushinteger(L, SA_Colors32);
  lua_setglobal(L, "SA_Colors32");
  lua_pushinteger(L, SA_VideoControl);
  lua_setglobal(L, "SA_VideoControl");
  lua_pushinteger(L, SA_FrontChild);
  lua_setglobal(L, "SA_FrontChild");
  lua_pushinteger(L, SA_BackChild);
  lua_setglobal(L, "SA_BackChild");
  lua_pushinteger(L, SA_LikeWorkbench);
  lua_setglobal(L, "SA_LikeWorkbench");
  lua_pushinteger(L, SA_Reserved);
  lua_setglobal(L, "SA_Reserved");
  lua_pushinteger(L, SA_MinimizeISG);
  lua_setglobal(L, "SA_MinimizeISG");
  lua_pushinteger(L, SA_OffScreenDragging);
  lua_setglobal(L, "SA_OffScreenDragging");
  lua_pushinteger(L, NSTAG_EXT_VPMODE);
  lua_setglobal(L, "NSTAG_EXT_VPMODE");
  lua_pushinteger(L, OSERR_NOMONITOR);
  lua_setglobal(L, "OSERR_NOMONITOR");
  lua_pushinteger(L, OSERR_NOCHIPS);
  lua_setglobal(L, "OSERR_NOCHIPS");
  lua_pushinteger(L, OSERR_NOMEM);
  lua_setglobal(L, "OSERR_NOMEM");
  lua_pushinteger(L, OSERR_NOCHIPMEM);
  lua_setglobal(L, "OSERR_NOCHIPMEM");
  lua_pushinteger(L, OSERR_PUBNOTUNIQUE);
  lua_setglobal(L, "OSERR_PUBNOTUNIQUE");
  lua_pushinteger(L, OSERR_UNKNOWNMODE);
  lua_setglobal(L, "OSERR_UNKNOWNMODE");
  lua_pushinteger(L, OSERR_TOODEEP);
  lua_setglobal(L, "OSERR_TOODEEP");
  lua_pushinteger(L, OSERR_ATTACHFAIL);
  lua_setglobal(L, "OSERR_ATTACHFAIL");
  lua_pushinteger(L, OSERR_NOTAVAILABLE);
  lua_setglobal(L, "OSERR_NOTAVAILABLE");
  lua_pushinteger(L, OSERR_NORTGBITMAP);
  lua_setglobal(L, "OSERR_NORTGBITMAP");
  lua_pushinteger(L, OSCAN_TEXT);
  lua_setglobal(L, "OSCAN_TEXT");
  lua_pushinteger(L, OSCAN_STANDARD);
  lua_setglobal(L, "OSCAN_STANDARD");
  lua_pushinteger(L, OSCAN_MAX);
  lua_setglobal(L, "OSCAN_MAX");
  lua_pushinteger(L, OSCAN_VIDEO);
  lua_setglobal(L, "OSCAN_VIDEO");
  lua_pushinteger(L, PSNF_PRIVATE);
  lua_setglobal(L, "PSNF_PRIVATE");
  lua_pushinteger(L, MAXPUBSCREENNAME);
  lua_setglobal(L, "MAXPUBSCREENNAME");
  lua_pushinteger(L, SHANGHAI);
  lua_setglobal(L, "SHANGHAI");
  lua_pushinteger(L, POPPUBSCREEN);
  lua_setglobal(L, "POPPUBSCREEN");
  lua_pushinteger(L, SDEPTH_TOFRONT);
  lua_setglobal(L, "SDEPTH_TOFRONT");
  lua_pushinteger(L, SDEPTH_TOBACK);
  lua_setglobal(L, "SDEPTH_TOBACK");
  lua_pushinteger(L, SDEPTH_INFAMILY);
  lua_setglobal(L, "SDEPTH_INFAMILY");
  lua_pushinteger(L, SDEPTH_CHILDONLY);
  lua_setglobal(L, "SDEPTH_CHILDONLY");
  lua_pushinteger(L, SPOS_RELATIVE);
  lua_setglobal(L, "SPOS_RELATIVE");
  lua_pushinteger(L, SPOS_ABSOLUTE);
  lua_setglobal(L, "SPOS_ABSOLUTE");
  lua_pushinteger(L, SPOS_MAKEVISIBLE);
  lua_setglobal(L, "SPOS_MAKEVISIBLE");
  lua_pushinteger(L, SPOS_FORCEDRAG);
  lua_setglobal(L, "SPOS_FORCEDRAG");
  lua_pushinteger(L, SB_SCREEN_BITMAP);
  lua_setglobal(L, "SB_SCREEN_BITMAP");
  lua_pushinteger(L, SB_COPY_BITMAP);
  lua_setglobal(L, "SB_COPY_BITMAP");
  lua_pushinteger(L, VTAG_END_CM);
  lua_setglobal(L, "VTAG_END_CM");
  lua_pushinteger(L, VTAG_CHROMAKEY_CLR);
  lua_setglobal(L, "VTAG_CHROMAKEY_CLR");
  lua_pushinteger(L, VTAG_CHROMAKEY_SET);
  lua_setglobal(L, "VTAG_CHROMAKEY_SET");
  lua_pushinteger(L, VTAG_BITPLANEKEY_CLR);
  lua_setglobal(L, "VTAG_BITPLANEKEY_CLR");
  lua_pushinteger(L, VTAG_BITPLANEKEY_SET);
  lua_setglobal(L, "VTAG_BITPLANEKEY_SET");
  lua_pushinteger(L, VTAG_BORDERBLANK_CLR);
  lua_setglobal(L, "VTAG_BORDERBLANK_CLR");
  lua_pushinteger(L, VTAG_BORDERBLANK_SET);
  lua_setglobal(L, "VTAG_BORDERBLANK_SET");
  lua_pushinteger(L, VTAG_BORDERNOTRANS_CLR);
  lua_setglobal(L, "VTAG_BORDERNOTRANS_CLR");
  lua_pushinteger(L, VTAG_BORDERNOTRANS_SET);
  lua_setglobal(L, "VTAG_BORDERNOTRANS_SET");
  lua_pushinteger(L, VTAG_CHROMA_PEN_CLR);
  lua_setglobal(L, "VTAG_CHROMA_PEN_CLR");
  lua_pushinteger(L, VTAG_CHROMA_PEN_SET);
  lua_setglobal(L, "VTAG_CHROMA_PEN_SET");
  lua_pushinteger(L, VTAG_CHROMA_PLANE_SET);
  lua_setglobal(L, "VTAG_CHROMA_PLANE_SET");
  lua_pushinteger(L, VTAG_ATTACH_CM_SET);
  lua_setglobal(L, "VTAG_ATTACH_CM_SET");
  lua_pushinteger(L, VTAG_NEXTBUF_CM);
  lua_setglobal(L, "VTAG_NEXTBUF_CM");
  lua_pushinteger(L, VTAG_BATCH_CM_CLR);
  lua_setglobal(L, "VTAG_BATCH_CM_CLR");
  lua_pushinteger(L, VTAG_BATCH_CM_SET);
  lua_setglobal(L, "VTAG_BATCH_CM_SET");
  lua_pushinteger(L, VTAG_NORMAL_DISP_GET);
  lua_setglobal(L, "VTAG_NORMAL_DISP_GET");
  lua_pushinteger(L, VTAG_NORMAL_DISP_SET);
  lua_setglobal(L, "VTAG_NORMAL_DISP_SET");
  lua_pushinteger(L, VTAG_COERCE_DISP_GET);
  lua_setglobal(L, "VTAG_COERCE_DISP_GET");
  lua_pushinteger(L, VTAG_COERCE_DISP_SET);
  lua_setglobal(L, "VTAG_COERCE_DISP_SET");
  lua_pushinteger(L, VTAG_VIEWPORTEXTRA_GET);
  lua_setglobal(L, "VTAG_VIEWPORTEXTRA_GET");
  lua_pushinteger(L, VTAG_VIEWPORTEXTRA_SET);
  lua_setglobal(L, "VTAG_VIEWPORTEXTRA_SET");
  lua_pushinteger(L, VTAG_CHROMAKEY_GET);
  lua_setglobal(L, "VTAG_CHROMAKEY_GET");
  lua_pushinteger(L, VTAG_BITPLANEKEY_GET);
  lua_setglobal(L, "VTAG_BITPLANEKEY_GET");
  lua_pushinteger(L, VTAG_BORDERBLANK_GET);
  lua_setglobal(L, "VTAG_BORDERBLANK_GET");
  lua_pushinteger(L, VTAG_BORDERNOTRANS_GET);
  lua_setglobal(L, "VTAG_BORDERNOTRANS_GET");
  lua_pushinteger(L, VTAG_CHROMA_PEN_GET);
  lua_setglobal(L, "VTAG_CHROMA_PEN_GET");
  lua_pushinteger(L, VTAG_CHROMA_PLANE_GET);
  lua_setglobal(L, "VTAG_CHROMA_PLANE_GET");
  lua_pushinteger(L, VTAG_ATTACH_CM_GET);
  lua_setglobal(L, "VTAG_ATTACH_CM_GET");
  lua_pushinteger(L, VTAG_BATCH_CM_GET);
  lua_setglobal(L, "VTAG_BATCH_CM_GET");
  lua_pushinteger(L, VTAG_BATCH_ITEMS_GET);
  lua_setglobal(L, "VTAG_BATCH_ITEMS_GET");
  lua_pushinteger(L, VTAG_BATCH_ITEMS_SET);
  lua_setglobal(L, "VTAG_BATCH_ITEMS_SET");
  lua_pushinteger(L, VTAG_BATCH_ITEMS_ADD);
  lua_setglobal(L, "VTAG_BATCH_ITEMS_ADD");
  lua_pushinteger(L, VTAG_VPMODEID_GET);
  lua_setglobal(L, "VTAG_VPMODEID_GET");
  lua_pushinteger(L, VTAG_VPMODEID_SET);
  lua_setglobal(L, "VTAG_VPMODEID_SET");
  lua_pushinteger(L, VTAG_VPMODEID_CLR);
  lua_setglobal(L, "VTAG_VPMODEID_CLR");
  lua_pushinteger(L, VTAG_USERCLIP_GET);
  lua_setglobal(L, "VTAG_USERCLIP_GET");
  lua_pushinteger(L, VTAG_USERCLIP_SET);
  lua_setglobal(L, "VTAG_USERCLIP_SET");
  lua_pushinteger(L, VTAG_USERCLIP_CLR);
  lua_setglobal(L, "VTAG_USERCLIP_CLR");
  lua_pushinteger(L, VTAG_PF1_BASE_GET);
  lua_setglobal(L, "VTAG_PF1_BASE_GET");
  lua_pushinteger(L, VTAG_PF2_BASE_GET);
  lua_setglobal(L, "VTAG_PF2_BASE_GET");
  lua_pushinteger(L, VTAG_SPEVEN_BASE_GET);
  lua_setglobal(L, "VTAG_SPEVEN_BASE_GET");
  lua_pushinteger(L, VTAG_SPODD_BASE_GET);
  lua_setglobal(L, "VTAG_SPODD_BASE_GET");
  lua_pushinteger(L, VTAG_PF1_BASE_SET);
  lua_setglobal(L, "VTAG_PF1_BASE_SET");
  lua_pushinteger(L, VTAG_PF2_BASE_SET);
  lua_setglobal(L, "VTAG_PF2_BASE_SET");
  lua_pushinteger(L, VTAG_SPEVEN_BASE_SET);
  lua_setglobal(L, "VTAG_SPEVEN_BASE_SET");
  lua_pushinteger(L, VTAG_SPODD_BASE_SET);
  lua_setglobal(L, "VTAG_SPODD_BASE_SET");
  lua_pushinteger(L, VTAG_BORDERSPRITE_GET);
  lua_setglobal(L, "VTAG_BORDERSPRITE_GET");
  lua_pushinteger(L, VTAG_BORDERSPRITE_SET);
  lua_setglobal(L, "VTAG_BORDERSPRITE_SET");
  lua_pushinteger(L, VTAG_BORDERSPRITE_CLR);
  lua_setglobal(L, "VTAG_BORDERSPRITE_CLR");
  lua_pushinteger(L, VTAG_SPRITERESN_SET);
  lua_setglobal(L, "VTAG_SPRITERESN_SET");
  lua_pushinteger(L, VTAG_SPRITERESN_GET);
  lua_setglobal(L, "VTAG_SPRITERESN_GET");
  lua_pushinteger(L, VTAG_PF1_TO_SPRITEPRI_SET);
  lua_setglobal(L, "VTAG_PF1_TO_SPRITEPRI_SET");
  lua_pushinteger(L, VTAG_PF1_TO_SPRITEPRI_GET);
  lua_setglobal(L, "VTAG_PF1_TO_SPRITEPRI_GET");
  lua_pushinteger(L, VTAG_PF2_TO_SPRITEPRI_SET);
  lua_setglobal(L, "VTAG_PF2_TO_SPRITEPRI_SET");
  lua_pushinteger(L, VTAG_PF2_TO_SPRITEPRI_GET);
  lua_setglobal(L, "VTAG_PF2_TO_SPRITEPRI_GET");
  lua_pushinteger(L, VTAG_IMMEDIATE);
  lua_setglobal(L, "VTAG_IMMEDIATE");
  lua_pushinteger(L, VTAG_FULLPALETTE_SET);
  lua_setglobal(L, "VTAG_FULLPALETTE_SET");
  lua_pushinteger(L, VTAG_FULLPALETTE_GET);
  lua_setglobal(L, "VTAG_FULLPALETTE_GET");
  lua_pushinteger(L, VTAG_FULLPALETTE_CLR);
  lua_setglobal(L, "VTAG_FULLPALETTE_CLR");
  lua_pushinteger(L, VTAG_DEFSPRITERESN_SET);
  lua_setglobal(L, "VTAG_DEFSPRITERESN_SET");
  lua_pushinteger(L, VTAG_DEFSPRITERESN_GET);
  lua_setglobal(L, "VTAG_DEFSPRITERESN_GET");
  lua_pushinteger(L, VC_IntermediateCLUpdate);
  lua_setglobal(L, "VC_IntermediateCLUpdate");
  lua_pushinteger(L, VC_IntermediateCLUpdate_Query);
  lua_setglobal(L, "VC_IntermediateCLUpdate_Query");
  lua_pushinteger(L, VC_NoColorPaletteLoad);
  lua_setglobal(L, "VC_NoColorPaletteLoad");
  lua_pushinteger(L, VC_NoColorPaletteLoad_Query);
  lua_setglobal(L, "VC_NoColorPaletteLoad_Query");
  lua_pushinteger(L, VC_DUALPF_Disable);
  lua_setglobal(L, "VC_DUALPF_Disable");
  lua_pushinteger(L, VC_DUALPF_Disable_Query);
  lua_setglobal(L, "VC_DUALPF_Disable_Query");
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
  _lua_gen_install_meta_TagItem(L);
  _lua_gen_install_meta_Node(L);
  _lua_gen_install_meta_MinNode(L);
  _lua_gen_install_meta_List(L);
  _lua_gen_install_meta_MinList(L);
  _lua_gen_install_meta_Task(L);
  _lua_gen_install_meta_StackSwapStruct(L);
  _lua_gen_install_meta_MsgPort(L);
  _lua_gen_install_meta_Message(L);
  _lua_gen_install_meta_Library(L);
  _lua_gen_install_meta_SemaphoreRequest(L);
  _lua_gen_install_meta_SignalSemaphore(L);
  _lua_gen_install_meta_SemaphoreMessage(L);
  _lua_gen_install_meta_IORequest(L);
  _lua_gen_install_meta_Device(L);
  _lua_gen_install_meta_TimeVal_Type(L);
  _lua_gen_install_meta_Hook(L);
  _lua_gen_install_meta_Rectangle(L);
  _lua_gen_install_meta_Point(L);
  _lua_gen_install_meta_BitMap(L);
  _lua_gen_install_meta_ExtendedNode(L);
  _lua_gen_install_meta_GfxBase(L);
  _lua_gen_install_meta_CopIns(L);
  _lua_gen_install_meta_CopList(L);
  _lua_gen_install_meta_cprlist(L);
  _lua_gen_install_meta_ViewPort(L);
  _lua_gen_install_meta_copinit(L);
  _lua_gen_install_meta_View(L);
  _lua_gen_install_meta_Custom(L);
  _lua_gen_install_meta_AudChannel(L);
  _lua_gen_install_meta_ColorMap(L);
  _lua_gen_install_meta_MonitorSpec(L);
  _lua_gen_install_meta_ViewPortExtra(L);
  _lua_gen_install_meta_PaletteExtra(L);
  _lua_gen_install_meta_DBufInfo(L);
  _lua_gen_install_meta_SpecialMonitor(L);
  _lua_gen_install_meta_AnalogSignalInterval(L);
  _lua_gen_install_meta_AnimOb(L);
  _lua_gen_install_meta_AreaInfo(L);
  _lua_gen_install_meta_BitScaleArgs(L);
  _lua_gen_install_meta_Bob(L);
  _lua_gen_install_meta_ClipRect(L);
  _lua_gen_install_meta_GelsInfo(L);
  _lua_gen_install_meta_InputEvent(L);
  _lua_gen_install_meta_Interrupt(L);
  _lua_gen_install_meta_Layer(L);
  _lua_gen_install_meta_Layer_Info(L);
  _lua_gen_install_meta_MemHeader(L);
  _lua_gen_install_meta_MemList(L);
  _lua_gen_install_meta_RastPort(L);
  _lua_gen_install_meta_Region(L);
  _lua_gen_install_meta_Resident(L);
  _lua_gen_install_meta_Screen(L);
  _lua_gen_install_meta_SimpleSprite(L);
  _lua_gen_install_meta_TextAttr(L);
  _lua_gen_install_meta_TextFont(L);
  _lua_gen_install_meta_VSprite(L);
  _lua_gen_install_meta_Window(L);
  _lua_gen_install_meta_bltnode(L);
  _lua_gen_install_meta_MemChunk(L);
  _lua_gen_install_meta_RegionRectangle(L);
  _lua_gen_install_meta_AnimComp(L);
  _lua_gen_install_meta_DBufPacket(L);
  _lua_gen_install_meta_collTable(L);
  _lua_gen_install_meta_TmpRas(L);
  _lua_gen_install_meta_ExtSprite(L);
}

static void
_lua_gen_installGeneratedEnums(lua_State *L)
{
  (void)L;
}

static void
_lua_gen_installGeneratedFunctions(lua_State *L)
{
  lua_register(L, "InitCode", _lua_InitCode);
  lua_register(L, "InitStruct", _lua_InitStruct);
  lua_register(L, "FindResident", _lua_FindResident);
  lua_register(L, "InitResident", _lua_InitResident);
  lua_register(L, "Alert", _lua_Alert);
  lua_register(L, "Debug", _lua_Debug);
  lua_register(L, "Disable", _lua_Disable);
  lua_register(L, "Enable", _lua_Enable);
  lua_register(L, "Forbid", _lua_Forbid);
  lua_register(L, "Permit", _lua_Permit);
  lua_register(L, "SetSR", _lua_SetSR);
  lua_register(L, "SuperState", _lua_SuperState);
  lua_register(L, "UserState", _lua_UserState);
  lua_register(L, "AddIntServer", _lua_AddIntServer);
  lua_register(L, "RemIntServer", _lua_RemIntServer);
  lua_register(L, "Cause", _lua_Cause);
  lua_register(L, "Allocate", _lua_Allocate);
  lua_register(L, "AllocMem", _lua_AllocMem);
  lua_register(L, "AllocAbs", _lua_AllocAbs);
  lua_register(L, "FreeMem", _lua_FreeMem);
  lua_register(L, "AvailMem", _lua_AvailMem);
  lua_register(L, "AllocEntry", _lua_AllocEntry);
  lua_register(L, "FreeEntry", _lua_FreeEntry);
  lua_register(L, "AddHead", _lua_AddHead);
  lua_register(L, "AddHeadMinList", _lua_AddHeadMinList);
  lua_register(L, "AddTail", _lua_AddTail);
  lua_register(L, "AddTailMinList", _lua_AddTailMinList);
  lua_register(L, "Remove", _lua_Remove);
  lua_register(L, "RemoveMinNode", _lua_RemoveMinNode);
  lua_register(L, "RemHead", _lua_RemHead);
  lua_register(L, "RemHeadMinList", _lua_RemHeadMinList);
  lua_register(L, "RemTail", _lua_RemTail);
  lua_register(L, "RemTailMinList", _lua_RemTailMinList);
  lua_register(L, "Enqueue", _lua_Enqueue);
  lua_register(L, "FindName", _lua_FindName);
  lua_register(L, "AddTask", _lua_AddTask);
  lua_register(L, "RemTask", _lua_RemTask);
  lua_register(L, "FindTask", _lua_FindTask);
  lua_register(L, "SetTaskPri", _lua_SetTaskPri);
  lua_register(L, "SetSignal", _lua_SetSignal);
  lua_register(L, "SetExcept", _lua_SetExcept);
  lua_register(L, "Wait", _lua_Wait);
  lua_register(L, "Signal", _lua_Signal);
  lua_register(L, "AllocSignal", _lua_AllocSignal);
  lua_register(L, "FreeSignal", _lua_FreeSignal);
  lua_register(L, "AllocTrap", _lua_AllocTrap);
  lua_register(L, "FreeTrap", _lua_FreeTrap);
  lua_register(L, "AddPort", _lua_AddPort);
  lua_register(L, "RemPort", _lua_RemPort);
  lua_register(L, "PutMsg", _lua_PutMsg);
  lua_register(L, "GetMsg", _lua_GetMsg);
  lua_register(L, "ReplyMsg", _lua_ReplyMsg);
  lua_register(L, "WaitPort", _lua_WaitPort);
  lua_register(L, "FindPort", _lua_FindPort);
  lua_register(L, "AddLibrary", _lua_AddLibrary);
  lua_register(L, "RemLibrary", _lua_RemLibrary);
  lua_register(L, "OldOpenLibrary", _lua_OldOpenLibrary);
  lua_register(L, "CloseLibrary", _lua_CloseLibrary);
  lua_register(L, "SumLibrary", _lua_SumLibrary);
  lua_register(L, "AddDevice", _lua_AddDevice);
  lua_register(L, "RemDevice", _lua_RemDevice);
  lua_register(L, "CloseDevice", _lua_CloseDevice);
  lua_register(L, "DoIO", _lua_DoIO);
  lua_register(L, "SendIO", _lua_SendIO);
  lua_register(L, "CheckIO", _lua_CheckIO);
  lua_register(L, "WaitIO", _lua_WaitIO);
  lua_register(L, "AbortIO", _lua_AbortIO);
  lua_register(L, "AddResource", _lua_AddResource);
  lua_register(L, "RemResource", _lua_RemResource);
  lua_register(L, "OpenResource", _lua_OpenResource);
  lua_register(L, "GetCC", _lua_GetCC);
  lua_register(L, "TypeOfMem", _lua_TypeOfMem);
  lua_register(L, "Procure", _lua_Procure);
  lua_register(L, "Vacate", _lua_Vacate);
  lua_register(L, "OpenLibrary", _lua_OpenLibrary);
  lua_register(L, "InitSemaphore", _lua_InitSemaphore);
  lua_register(L, "ObtainSemaphore", _lua_ObtainSemaphore);
  lua_register(L, "ReleaseSemaphore", _lua_ReleaseSemaphore);
  lua_register(L, "AttemptSemaphore", _lua_AttemptSemaphore);
  lua_register(L, "ObtainSemaphoreList", _lua_ObtainSemaphoreList);
  lua_register(L, "ReleaseSemaphoreList", _lua_ReleaseSemaphoreList);
  lua_register(L, "FindSemaphore", _lua_FindSemaphore);
  lua_register(L, "AddSemaphore", _lua_AddSemaphore);
  lua_register(L, "RemSemaphore", _lua_RemSemaphore);
  lua_register(L, "SumKickData", _lua_SumKickData);
  lua_register(L, "CopyMem", _lua_CopyMem);
  lua_register(L, "CopyMemQuick", _lua_CopyMemQuick);
  lua_register(L, "CacheClearU", _lua_CacheClearU);
  lua_register(L, "CacheClearE", _lua_CacheClearE);
  lua_register(L, "CacheControl", _lua_CacheControl);
  lua_register(L, "CreateIORequest", _lua_CreateIORequest);
  lua_register(L, "DeleteIORequest", _lua_DeleteIORequest);
  lua_register(L, "CreateMsgPort", _lua_CreateMsgPort);
  lua_register(L, "DeleteMsgPort", _lua_DeleteMsgPort);
  lua_register(L, "ObtainSemaphoreShared", _lua_ObtainSemaphoreShared);
  lua_register(L, "AllocVec", _lua_AllocVec);
  lua_register(L, "FreeVec", _lua_FreeVec);
  lua_register(L, "CreatePool", _lua_CreatePool);
  lua_register(L, "DeletePool", _lua_DeletePool);
  lua_register(L, "AllocPooled", _lua_AllocPooled);
  lua_register(L, "FreePooled", _lua_FreePooled);
  lua_register(L, "AttemptSemaphoreShared", _lua_AttemptSemaphoreShared);
  lua_register(L, "ColdReboot", _lua_ColdReboot);
  lua_register(L, "StackSwap", _lua_StackSwap);
  lua_register(L, "CachePreDMA", _lua_CachePreDMA);
  lua_register(L, "CachePostDMA", _lua_CachePostDMA);
  lua_register(L, "AddMemHandler", _lua_AddMemHandler);
  lua_register(L, "RemMemHandler", _lua_RemMemHandler);
  lua_register(L, "ObtainQuickVector", _lua_ObtainQuickVector);
  lua_register(L, "NewMinList", _lua_NewMinList);
  lua_register(L, "ClearEOL", _lua_ClearEOL);
  lua_register(L, "ClearScreen", _lua_ClearScreen);
  lua_register(L, "Text", _lua_Text);
  lua_register(L, "SetFont", _lua_SetFont);
  lua_register(L, "OpenFont", _lua_OpenFont);
  lua_register(L, "CloseFont", _lua_CloseFont);
  lua_register(L, "AskSoftStyle", _lua_AskSoftStyle);
  lua_register(L, "AddBob", _lua_AddBob);
  lua_register(L, "AddVSprite", _lua_AddVSprite);
  lua_register(L, "DoCollision", _lua_DoCollision);
  lua_register(L, "DrawGList", _lua_DrawGList);
  lua_register(L, "InitGels", _lua_InitGels);
  lua_register(L, "InitMasks", _lua_InitMasks);
  lua_register(L, "RemVSprite", _lua_RemVSprite);
  lua_register(L, "SortGList", _lua_SortGList);
  lua_register(L, "InitGMasks", _lua_InitGMasks);
  lua_register(L, "LoadRGB4", _lua_LoadRGB4);
  lua_register(L, "InitRastPort", _lua_InitRastPort);
  lua_register(L, "InitVPort", _lua_InitVPort);
  lua_register(L, "MrgCop", _lua_MrgCop);
  lua_register(L, "MakeVPort", _lua_MakeVPort);
  lua_register(L, "LoadView", _lua_LoadView);
  lua_register(L, "WaitBlit", _lua_WaitBlit);
  lua_register(L, "SetRast", _lua_SetRast);
  lua_register(L, "Move", _lua_Move);
  lua_register(L, "Draw", _lua_Draw);
  lua_register(L, "AreaMove", _lua_AreaMove);
  lua_register(L, "AreaDraw", _lua_AreaDraw);
  lua_register(L, "AreaEnd", _lua_AreaEnd);
  lua_register(L, "WaitTOF", _lua_WaitTOF);
  lua_register(L, "QBlit", _lua_QBlit);
  lua_register(L, "QBSBlit", _lua_QBSBlit);
  lua_register(L, "BltClear", _lua_BltClear);
  lua_register(L, "ReadPixel", _lua_ReadPixel);
  lua_register(L, "WritePixel", _lua_WritePixel);
  lua_register(L, "Flood", _lua_Flood);
  lua_register(L, "PolyDraw", _lua_PolyDraw);
  lua_register(L, "SetAPen", _lua_SetAPen);
  lua_register(L, "SetBPen", _lua_SetBPen);
  lua_register(L, "SetDrMd", _lua_SetDrMd);
  lua_register(L, "InitView", _lua_InitView);
  lua_register(L, "CBump", _lua_CBump);
  lua_register(L, "CMove", _lua_CMove);
  lua_register(L, "CWait", _lua_CWait);
  lua_register(L, "VBeamPos", _lua_VBeamPos);
  lua_register(L, "WaitBOVP", _lua_WaitBOVP);
  lua_register(L, "GetSprite", _lua_GetSprite);
  lua_register(L, "FreeSprite", _lua_FreeSprite);
  lua_register(L, "LockLayerRom", _lua_LockLayerRom);
  lua_register(L, "UnlockLayerRom", _lua_UnlockLayerRom);
  lua_register(L, "SyncSBitMap", _lua_SyncSBitMap);
  lua_register(L, "CopySBitMap", _lua_CopySBitMap);
  lua_register(L, "OwnBlitter", _lua_OwnBlitter);
  lua_register(L, "DisownBlitter", _lua_DisownBlitter);
  lua_register(L, "InitTmpRas", _lua_InitTmpRas);
  lua_register(L, "AskFont", _lua_AskFont);
  lua_register(L, "AddFont", _lua_AddFont);
  lua_register(L, "RemFont", _lua_RemFont);
  lua_register(L, "AllocRaster", _lua_AllocRaster);
  lua_register(L, "FreeRaster", _lua_FreeRaster);
  lua_register(L, "NewRegion", _lua_NewRegion);
  lua_register(L, "ClearRegion", _lua_ClearRegion);
  lua_register(L, "DisposeRegion", _lua_DisposeRegion);
  lua_register(L, "FreeVPortCopLists", _lua_FreeVPortCopLists);
  lua_register(L, "FreeCopList", _lua_FreeCopList);
  lua_register(L, "FreeCprList", _lua_FreeCprList);
  lua_register(L, "GetColorMap", _lua_GetColorMap);
  lua_register(L, "FreeColorMap", _lua_FreeColorMap);
  lua_register(L, "GetRGB4", _lua_GetRGB4);
  lua_register(L, "ScrollVPort", _lua_ScrollVPort);
  lua_register(L, "UCopperListInit", _lua_UCopperListInit);
  lua_register(L, "AttemptLockLayerRom", _lua_AttemptLockLayerRom);
  lua_register(L, "GfxNew", _lua_GfxNew);
  lua_register(L, "GfxFree", _lua_GfxFree);
  lua_register(L, "GfxAssociate", _lua_GfxAssociate);
  lua_register(L, "BitMapScale", _lua_BitMapScale);
  lua_register(L, "ScalerDiv", _lua_ScalerDiv);
  lua_register(L, "GfxLookUp", _lua_GfxLookUp);
  lua_register(L, "VideoControl", _lua_VideoControl);
  lua_register(L, "VideoControlTags", _lua_VideoControlTags);
  lua_register(L, "OpenMonitor", _lua_OpenMonitor);
  lua_register(L, "CloseMonitor", _lua_CloseMonitor);
  lua_register(L, "FindDisplayInfo", _lua_FindDisplayInfo);
  lua_register(L, "NextDisplayInfo", _lua_NextDisplayInfo);
  lua_register(L, "GetVPModeID", _lua_GetVPModeID);
  lua_register(L, "ModeNotAvailable", _lua_ModeNotAvailable);
  lua_register(L, "ExtendFont", _lua_ExtendFont);
  lua_register(L, "ExtendFontTags", _lua_ExtendFontTags);
  lua_register(L, "StripFont", _lua_StripFont);
  lua_register(L, "CalcIVG", _lua_CalcIVG);
  lua_register(L, "AttachPalExtra", _lua_AttachPalExtra);
  lua_register(L, "ObtainBestPenA", _lua_ObtainBestPenA);
  lua_register(L, "ObtainBestPen", _lua_ObtainBestPen);
  lua_register(L, "SetRGB32", _lua_SetRGB32);
  lua_register(L, "GetAPen", _lua_GetAPen);
  lua_register(L, "GetBPen", _lua_GetBPen);
  lua_register(L, "GetDrMd", _lua_GetDrMd);
  lua_register(L, "GetOutlinePen", _lua_GetOutlinePen);
  lua_register(L, "LoadRGB32", _lua_LoadRGB32);
  lua_register(L, "SetChipRev", _lua_SetChipRev);
  lua_register(L, "SetABPenDrMd", _lua_SetABPenDrMd);
  lua_register(L, "GetRGB32", _lua_GetRGB32);
  lua_register(L, "AllocBitMap", _lua_AllocBitMap);
  lua_register(L, "FreeBitMap", _lua_FreeBitMap);
  lua_register(L, "GetExtSpriteA", _lua_GetExtSpriteA);
  lua_register(L, "GetExtSprite", _lua_GetExtSprite);
  lua_register(L, "CoerceMode", _lua_CoerceMode);
  lua_register(L, "ChangeVPBitMap", _lua_ChangeVPBitMap);
  lua_register(L, "ReleasePen", _lua_ReleasePen);
  lua_register(L, "ObtainPen", _lua_ObtainPen);
  lua_register(L, "GetBitMapAttr", _lua_GetBitMapAttr);
  lua_register(L, "AllocDBufInfo", _lua_AllocDBufInfo);
  lua_register(L, "FreeDBufInfo", _lua_FreeDBufInfo);
  lua_register(L, "SetOutlinePen", _lua_SetOutlinePen);
  lua_register(L, "SetWriteMask", _lua_SetWriteMask);
  lua_register(L, "SetMaxPen", _lua_SetMaxPen);
  lua_register(L, "SetRGB32CM", _lua_SetRGB32CM);
  lua_register(L, "FindColor", _lua_FindColor);
  lua_register(L, "AllocSpriteDataA", _lua_AllocSpriteDataA);
  lua_register(L, "AllocSpriteData", _lua_AllocSpriteData);
  lua_register(L, "ChangeExtSpriteA", _lua_ChangeExtSpriteA);
  lua_register(L, "ChangeExtSprite", _lua_ChangeExtSprite);
  lua_register(L, "FreeSpriteData", _lua_FreeSpriteData);
  lua_register(L, "SetRPAttrsA", _lua_SetRPAttrsA);
  lua_register(L, "SetRPAttrs", _lua_SetRPAttrs);
  lua_register(L, "GetRPAttrsA", _lua_GetRPAttrsA);
  lua_register(L, "GetRPAttrs", _lua_GetRPAttrs);
  lua_register(L, "BestModeIDA", _lua_BestModeIDA);
  lua_register(L, "BestModeID", _lua_BestModeID);
  lua_register(L, "DeleteTask", _lua_DeleteTask);
  lua_register(L, "RemBob", _lua_RemBob);
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

