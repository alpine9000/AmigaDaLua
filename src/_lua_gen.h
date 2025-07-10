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
_lua_gen_pushDateStamp(lua_State *L, struct DateStamp* obj)
{
  if (obj) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = obj;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DateStamp*
_lua_gen_checkDateStamp(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DateStamp **ud = (struct DateStamp **)luaL_checkudata(L, stackIndex, "DateStamp");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushFileInfoBlock(lua_State *L, struct FileInfoBlock* obj)
{
  if (obj) {
    struct FileInfoBlock **ud = (struct FileInfoBlock **)lua_newuserdata(L, sizeof(struct FileInfoBlock *));
    *ud = obj;
    luaL_getmetatable(L, "FileInfoBlock");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct FileInfoBlock*
_lua_gen_checkFileInfoBlock(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct FileInfoBlock **ud = (struct FileInfoBlock **)luaL_checkudata(L, stackIndex, "FileInfoBlock");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushInfoData(lua_State *L, struct InfoData* obj)
{
  if (obj) {
    struct InfoData **ud = (struct InfoData **)lua_newuserdata(L, sizeof(struct InfoData *));
    *ud = obj;
    luaL_getmetatable(L, "InfoData");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct InfoData*
_lua_gen_checkInfoData(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct InfoData **ud = (struct InfoData **)luaL_checkudata(L, stackIndex, "InfoData");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushProcess(lua_State *L, struct Process* obj)
{
  if (obj) {
    struct Process **ud = (struct Process **)lua_newuserdata(L, sizeof(struct Process *));
    *ud = obj;
    luaL_getmetatable(L, "Process");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Process*
_lua_gen_checkProcess(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Process **ud = (struct Process **)luaL_checkudata(L, stackIndex, "Process");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDosPacket(lua_State *L, struct DosPacket* obj)
{
  if (obj) {
    struct DosPacket **ud = (struct DosPacket **)lua_newuserdata(L, sizeof(struct DosPacket *));
    *ud = obj;
    luaL_getmetatable(L, "DosPacket");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DosPacket*
_lua_gen_checkDosPacket(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DosPacket **ud = (struct DosPacket **)luaL_checkudata(L, stackIndex, "DosPacket");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushSegment(lua_State *L, struct Segment* obj)
{
  if (obj) {
    struct Segment **ud = (struct Segment **)lua_newuserdata(L, sizeof(struct Segment *));
    *ud = obj;
    luaL_getmetatable(L, "Segment");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Segment*
_lua_gen_checkSegment(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Segment **ud = (struct Segment **)luaL_checkudata(L, stackIndex, "Segment");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushCommandLineInterface(lua_State *L, struct CommandLineInterface* obj)
{
  if (obj) {
    struct CommandLineInterface **ud = (struct CommandLineInterface **)lua_newuserdata(L, sizeof(struct CommandLineInterface *));
    *ud = obj;
    luaL_getmetatable(L, "CommandLineInterface");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct CommandLineInterface*
_lua_gen_checkCommandLineInterface(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct CommandLineInterface **ud = (struct CommandLineInterface **)luaL_checkudata(L, stackIndex, "CommandLineInterface");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDosList(lua_State *L, struct DosList* obj)
{
  if (obj) {
    struct DosList **ud = (struct DosList **)lua_newuserdata(L, sizeof(struct DosList *));
    *ud = obj;
    luaL_getmetatable(L, "DosList");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DosList*
_lua_gen_checkDosList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DosList **ud = (struct DosList **)luaL_checkudata(L, stackIndex, "DosList");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDevProc(lua_State *L, struct DevProc* obj)
{
  if (obj) {
    struct DevProc **ud = (struct DevProc **)lua_newuserdata(L, sizeof(struct DevProc *));
    *ud = obj;
    luaL_getmetatable(L, "DevProc");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DevProc*
_lua_gen_checkDevProc(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DevProc **ud = (struct DevProc **)luaL_checkudata(L, stackIndex, "DevProc");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushRecordLock(lua_State *L, struct RecordLock* obj)
{
  if (obj) {
    struct RecordLock **ud = (struct RecordLock **)lua_newuserdata(L, sizeof(struct RecordLock *));
    *ud = obj;
    luaL_getmetatable(L, "RecordLock");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct RecordLock*
_lua_gen_checkRecordLock(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct RecordLock **ud = (struct RecordLock **)luaL_checkudata(L, stackIndex, "RecordLock");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushRDArgs(lua_State *L, struct RDArgs* obj)
{
  if (obj) {
    struct RDArgs **ud = (struct RDArgs **)lua_newuserdata(L, sizeof(struct RDArgs *));
    *ud = obj;
    luaL_getmetatable(L, "RDArgs");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct RDArgs*
_lua_gen_checkRDArgs(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct RDArgs **ud = (struct RDArgs **)luaL_checkudata(L, stackIndex, "RDArgs");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushAnchorPath(lua_State *L, struct AnchorPath* obj)
{
  if (obj) {
    struct AnchorPath **ud = (struct AnchorPath **)lua_newuserdata(L, sizeof(struct AnchorPath *));
    *ud = obj;
    luaL_getmetatable(L, "AnchorPath");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AnchorPath*
_lua_gen_checkAnchorPath(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AnchorPath **ud = (struct AnchorPath **)luaL_checkudata(L, stackIndex, "AnchorPath");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushLocalVar(lua_State *L, struct LocalVar* obj)
{
  if (obj) {
    struct LocalVar **ud = (struct LocalVar **)lua_newuserdata(L, sizeof(struct LocalVar *));
    *ud = obj;
    luaL_getmetatable(L, "LocalVar");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct LocalVar*
_lua_gen_checkLocalVar(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct LocalVar **ud = (struct LocalVar **)luaL_checkudata(L, stackIndex, "LocalVar");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushNotifyRequest(lua_State *L, struct NotifyRequest* obj)
{
  if (obj) {
    struct NotifyRequest **ud = (struct NotifyRequest **)lua_newuserdata(L, sizeof(struct NotifyRequest *));
    *ud = obj;
    luaL_getmetatable(L, "NotifyRequest");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct NotifyRequest*
_lua_gen_checkNotifyRequest(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct NotifyRequest **ud = (struct NotifyRequest **)luaL_checkudata(L, stackIndex, "NotifyRequest");
      if (!ud) {
        return 0;
      }
      return *ud;
   } else {
      return 0;
   }
}

void
_lua_gen_pushDateTime(lua_State *L, struct DateTime* obj)
{
  if (obj) {
    struct DateTime **ud = (struct DateTime **)lua_newuserdata(L, sizeof(struct DateTime *));
    *ud = obj;
    luaL_getmetatable(L, "DateTime");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct DateTime*
_lua_gen_checkDateTime(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct DateTime **ud = (struct DateTime **)luaL_checkudata(L, stackIndex, "DateTime");
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
_lua_gen_pushGadgetPtr(lua_State *L, GadgetPtr* obj)
{
  if (obj) {
    GadgetPtr **ud = (GadgetPtr **)lua_newuserdata(L, sizeof(GadgetPtr *));
    *ud = obj;
    luaL_getmetatable(L, "GadgetPtr");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

GadgetPtr*
_lua_gen_checkGadgetPtr(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      GadgetPtr **ud = (GadgetPtr **)luaL_checkudata(L, stackIndex, "GadgetPtr");
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
  const char *key = luaL_checkstring(L, 2);
// skipping ti_Tag Tag
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
_lua_gen_Node_newindex(lua_State *L)
{
  struct Node *obj = *(struct Node **)luaL_checkudata(L, 1, "Node");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ln_Succ") == 0) {
    // finder 1
    obj->ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    return 0;
  }
  if (strcmp(key, "ln_Pred") == 0) {
    // finder 1
    obj->ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
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
// skipping ln_Name char*
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
  if (strcmp(key, "mln_Succ") == 0) {
    // finder 1
    obj->mln_Succ = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    return 0;
  }
  if (strcmp(key, "mln_Pred") == 0) {
    // finder 1
    obj->mln_Pred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
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
  if (strcmp(key, "lh_Head") == 0) {
    // finder 1
    obj->lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    return 0;
  }
  if (strcmp(key, "lh_Tail") == 0) {
    // finder 1
    obj->lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    return 0;
  }
  if (strcmp(key, "lh_TailPred") == 0) {
    // finder 1
    obj->lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
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
  if (strcmp(key, "mlh_Head") == 0) {
    // finder 1
    obj->mlh_Head = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    return 0;
  }
  if (strcmp(key, "mlh_Tail") == 0) {
    // finder 1
    obj->mlh_Tail = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    return 0;
  }
  if (strcmp(key, "mlh_TailPred") == 0) {
    // finder 1
    obj->mlh_TailPred = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping tc_Switch void (*)()
// skipping tc_Launch void (*)()
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
  return 0;
}

static void
_lua_gen_Task_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tc_Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tc_State");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tc_IDNestCnt");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tc_TDNestCnt");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tc_SigAlloc");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tc_SigWait");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tc_SigRecvd");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tc_SigExcept");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "tc_TrapAlloc");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "tc_TrapAble");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "tc_ExceptData");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "tc_ExceptCode");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "tc_TrapData");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "tc_TrapCode");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "tc_SPReg");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "tc_SPLower");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "tc_SPUpper");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "tc_Switch");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "tc_Launch");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "tc_UserData");
  lua_rawseti(L, -2, 20);
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping mp_SigTask void*
  if (strcmp(key, "mp_MsgList") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->mp_MsgList;
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
  if (strcmp(key, "mn_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->mn_Node = *val;
    return 0;
  }
  if (strcmp(key, "mn_ReplyPort") == 0) {
    // finder 1
    obj->mn_ReplyPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_Message_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mn_Length");
  lua_rawseti(L, -2, 1);
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_Library_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "lib_Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "lib_pad");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "lib_NegSize");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "lib_PosSize");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "lib_Version");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "lib_Revision");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "lib_IdString");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "lib_Sum");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "lib_OpenCnt");
  lua_rawseti(L, -2, 9);
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
_lua_gen_SignalSemaphore_newindex(lua_State *L)
{
  struct SignalSemaphore *obj = *(struct SignalSemaphore **)luaL_checkudata(L, 1, "SignalSemaphore");
  const char *key = luaL_checkstring(L, 2);
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
  if (strcmp(key, "ss_WaitQueue") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->ss_WaitQueue = *val;
    return 0;
  }
  if (strcmp(key, "ss_Owner") == 0) {
    // finder 1
    obj->ss_Owner = *(struct Task **)luaL_checkudata(L, 3, "Task");
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
  const char *key = luaL_checkstring(L, 2);
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
  if (strcmp(key, "ss_WaitQueue") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->ss_WaitQueue;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ss_MultipleLink struct SemaphoreRequest
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
  return 0;
}

static void
_lua_gen_SignalSemaphore_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ss_NestCount");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ss_QueueCount");
  lua_rawseti(L, -2, 2);
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
  if (strcmp(key, "ssm_Message") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
    obj->ssm_Message = *val;
    return 0;
  }
  if (strcmp(key, "ssm_Semaphore") == 0) {
    // finder 1
    obj->ssm_Semaphore = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_SemaphoreMessage_install_keys(lua_State *L)
{
  lua_newtable(L);
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
  if (strcmp(key, "io_Message") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
    obj->io_Message = *val;
    return 0;
  }
  if (strcmp(key, "io_Device") == 0) {
    // finder 1
    obj->io_Device = *(struct Device **)luaL_checkudata(L, 3, "Device");
    return 0;
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping io_Unit struct Unit*
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
  return 0;
}

static void
_lua_gen_IORequest_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "io_Command");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "io_Flags");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "io_Error");
  lua_rawseti(L, -2, 3);
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
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dd_Library") == 0) {
    struct Library **ud = (struct Library **)lua_newuserdata(L, sizeof(struct Library *));
    *ud = (struct Library*)&obj->dd_Library;
    luaL_getmetatable(L, "Library");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Device_install_keys(lua_State *L)
{
  lua_newtable(L);
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
_lua_gen_DateStamp_newindex(lua_State *L)
{
  struct DateStamp *obj = *(struct DateStamp **)luaL_checkudata(L, 1, "DateStamp");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ds_Days") == 0) {
    obj->ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ds_Minute") == 0) {
    obj->ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ds_Tick") == 0) {
    obj->ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DateStamp_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DateStamp in userdata
  struct DateStamp **objp = lua_newuserdata(L, sizeof(struct DateStamp *));
  *objp = malloc(sizeof(struct DateStamp));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DateStamp));

  // Set metatable
  luaL_getmetatable(L, "DateStamp");
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
_lua_gen_DateStamp_index(lua_State *L)
{
  struct DateStamp *obj = *(struct DateStamp **)luaL_checkudata(L, 1, "DateStamp");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ds_Days") == 0) {
    lua_pushinteger(L, obj->ds_Days);
    return 1;
  }
  if (strcmp(key, "ds_Minute") == 0) {
    lua_pushinteger(L, obj->ds_Minute);
    return 1;
  }
  if (strcmp(key, "ds_Tick") == 0) {
    lua_pushinteger(L, obj->ds_Tick);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DateStamp_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ds_Days");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ds_Minute");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ds_Tick");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DateStamp(lua_State *L) {
  if (luaL_newmetatable(L, "DateStamp")) {
    lua_pushcfunction(L, _lua_gen_DateStamp_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DateStamp_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DateStamp_constructor);
    lua_setglobal(L, "DateStamp");
    _lua_gen_DateStamp_install_keys(L);
    lua_pushstring(L, "DateStamp");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_FileInfoBlock_newindex(lua_State *L)
{
  struct FileInfoBlock *obj = *(struct FileInfoBlock **)luaL_checkudata(L, 1, "FileInfoBlock");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "fib_DiskKey") == 0) {
    obj->fib_DiskKey = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_DirEntryType") == 0) {
    obj->fib_DirEntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Protection") == 0) {
    obj->fib_Protection = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_EntryType") == 0) {
    obj->fib_EntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Size") == 0) {
    obj->fib_Size = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_NumBlocks") == 0) {
    obj->fib_NumBlocks = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Date") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->fib_Date = *val;
    return 0;
  }
  if (strcmp(key, "fib_OwnerUID") == 0) {
    obj->fib_OwnerUID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_OwnerGID") == 0) {
    obj->fib_OwnerGID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_FileInfoBlock_constructor(lua_State *L)
{
  // Allocate pointer-to-struct FileInfoBlock in userdata
  struct FileInfoBlock **objp = lua_newuserdata(L, sizeof(struct FileInfoBlock *));
  *objp = malloc(sizeof(struct FileInfoBlock));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct FileInfoBlock));

  // Set metatable
  luaL_getmetatable(L, "FileInfoBlock");
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
_lua_gen_FileInfoBlock_index(lua_State *L)
{
  struct FileInfoBlock *obj = *(struct FileInfoBlock **)luaL_checkudata(L, 1, "FileInfoBlock");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "fib_DiskKey") == 0) {
    lua_pushinteger(L, obj->fib_DiskKey);
    return 1;
  }
  if (strcmp(key, "fib_DirEntryType") == 0) {
    lua_pushinteger(L, obj->fib_DirEntryType);
    return 1;
  }
// skipping fib_FileName TEXT[108]
  if (strcmp(key, "fib_Protection") == 0) {
    lua_pushinteger(L, obj->fib_Protection);
    return 1;
  }
  if (strcmp(key, "fib_EntryType") == 0) {
    lua_pushinteger(L, obj->fib_EntryType);
    return 1;
  }
  if (strcmp(key, "fib_Size") == 0) {
    lua_pushinteger(L, obj->fib_Size);
    return 1;
  }
  if (strcmp(key, "fib_NumBlocks") == 0) {
    lua_pushinteger(L, obj->fib_NumBlocks);
    return 1;
  }
  if (strcmp(key, "fib_Date") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->fib_Date;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping fib_Comment TEXT[80]
  if (strcmp(key, "fib_OwnerUID") == 0) {
    lua_pushinteger(L, obj->fib_OwnerUID);
    return 1;
  }
  if (strcmp(key, "fib_OwnerGID") == 0) {
    lua_pushinteger(L, obj->fib_OwnerGID);
    return 1;
  }
// skipping fib_Reserved UBYTE[32]
  return 0;
}

static void
_lua_gen_FileInfoBlock_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "fib_DiskKey");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "fib_DirEntryType");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "fib_Protection");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "fib_EntryType");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "fib_Size");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "fib_NumBlocks");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "fib_OwnerUID");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "fib_OwnerGID");
  lua_rawseti(L, -2, 8);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_FileInfoBlock(lua_State *L) {
  if (luaL_newmetatable(L, "FileInfoBlock")) {
    lua_pushcfunction(L, _lua_gen_FileInfoBlock_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_FileInfoBlock_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_FileInfoBlock_constructor);
    lua_setglobal(L, "FileInfoBlock");
    _lua_gen_FileInfoBlock_install_keys(L);
    lua_pushstring(L, "FileInfoBlock");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_InfoData_newindex(lua_State *L)
{
  struct InfoData *obj = *(struct InfoData **)luaL_checkudata(L, 1, "InfoData");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "id_NumSoftErrors") == 0) {
    obj->id_NumSoftErrors = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_UnitNumber") == 0) {
    obj->id_UnitNumber = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_DiskState") == 0) {
    obj->id_DiskState = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_NumBlocks") == 0) {
    obj->id_NumBlocks = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_NumBlocksUsed") == 0) {
    obj->id_NumBlocksUsed = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_BytesPerBlock") == 0) {
    obj->id_BytesPerBlock = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_DiskType") == 0) {
    obj->id_DiskType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_VolumeNode") == 0) {
    obj->id_VolumeNode = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "id_InUse") == 0) {
    obj->id_InUse = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_InfoData_constructor(lua_State *L)
{
  // Allocate pointer-to-struct InfoData in userdata
  struct InfoData **objp = lua_newuserdata(L, sizeof(struct InfoData *));
  *objp = malloc(sizeof(struct InfoData));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct InfoData));

  // Set metatable
  luaL_getmetatable(L, "InfoData");
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
_lua_gen_InfoData_index(lua_State *L)
{
  struct InfoData *obj = *(struct InfoData **)luaL_checkudata(L, 1, "InfoData");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "id_NumSoftErrors") == 0) {
    lua_pushinteger(L, obj->id_NumSoftErrors);
    return 1;
  }
  if (strcmp(key, "id_UnitNumber") == 0) {
    lua_pushinteger(L, obj->id_UnitNumber);
    return 1;
  }
  if (strcmp(key, "id_DiskState") == 0) {
    lua_pushinteger(L, obj->id_DiskState);
    return 1;
  }
  if (strcmp(key, "id_NumBlocks") == 0) {
    lua_pushinteger(L, obj->id_NumBlocks);
    return 1;
  }
  if (strcmp(key, "id_NumBlocksUsed") == 0) {
    lua_pushinteger(L, obj->id_NumBlocksUsed);
    return 1;
  }
  if (strcmp(key, "id_BytesPerBlock") == 0) {
    lua_pushinteger(L, obj->id_BytesPerBlock);
    return 1;
  }
  if (strcmp(key, "id_DiskType") == 0) {
    lua_pushinteger(L, obj->id_DiskType);
    return 1;
  }
  if (strcmp(key, "id_VolumeNode") == 0) {
    lua_pushinteger(L, obj->id_VolumeNode);
    return 1;
  }
  if (strcmp(key, "id_InUse") == 0) {
    lua_pushinteger(L, obj->id_InUse);
    return 1;
  }
  return 0;
}

static void
_lua_gen_InfoData_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "id_NumSoftErrors");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "id_UnitNumber");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "id_DiskState");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "id_NumBlocks");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "id_NumBlocksUsed");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "id_BytesPerBlock");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "id_DiskType");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "id_VolumeNode");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "id_InUse");
  lua_rawseti(L, -2, 9);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_InfoData(lua_State *L) {
  if (luaL_newmetatable(L, "InfoData")) {
    lua_pushcfunction(L, _lua_gen_InfoData_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_InfoData_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_InfoData_constructor);
    lua_setglobal(L, "InfoData");
    _lua_gen_InfoData_install_keys(L);
    lua_pushstring(L, "InfoData");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Process_newindex(lua_State *L)
{
  struct Process *obj = *(struct Process **)luaL_checkudata(L, 1, "Process");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "pr_Task") == 0) {
    // finder 0
    struct Task *val = *(struct Task **)luaL_checkudata(L, 3, "Task");
    obj->pr_Task = *val;
    return 0;
  }
  if (strcmp(key, "pr_MsgPort") == 0) {
    // finder 0
    struct MsgPort *val = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->pr_MsgPort = *val;
    return 0;
  }
  if (strcmp(key, "pr_Pad") == 0) {
    obj->pr_Pad = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_SegList") == 0) {
    obj->pr_SegList = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_StackSize") == 0) {
    obj->pr_StackSize = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_GlobVec") == 0) {
    obj->pr_GlobVec = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_TaskNum") == 0) {
    obj->pr_TaskNum = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_StackBase") == 0) {
    obj->pr_StackBase = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Result2") == 0) {
    obj->pr_Result2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_CurrentDir") == 0) {
    obj->pr_CurrentDir = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_CIS") == 0) {
    obj->pr_CIS = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_COS") == 0) {
    obj->pr_COS = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_ConsoleTask") == 0) {
    obj->pr_ConsoleTask = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_FileSystemTask") == 0) {
    obj->pr_FileSystemTask = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_CLI") == 0) {
    obj->pr_CLI = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_ReturnAddr") == 0) {
    obj->pr_ReturnAddr = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_PktWait") == 0) {
    obj->pr_PktWait = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_WindowPtr") == 0) {
    obj->pr_WindowPtr = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_HomeDir") == 0) {
    obj->pr_HomeDir = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Flags") == 0) {
    obj->pr_Flags = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_ExitData") == 0) {
    obj->pr_ExitData = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Arguments") == 0) {
    obj->pr_Arguments = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_LocalVars") == 0) {
    // finder 0
    struct MinList *val = *(struct MinList **)luaL_checkudata(L, 3, "MinList");
    obj->pr_LocalVars = *val;
    return 0;
  }
  if (strcmp(key, "pr_ShellPrivate") == 0) {
    obj->pr_ShellPrivate = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_CES") == 0) {
    obj->pr_CES = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Process_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Process in userdata
  struct Process **objp = lua_newuserdata(L, sizeof(struct Process *));
  *objp = malloc(sizeof(struct Process));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Process));

  // Set metatable
  luaL_getmetatable(L, "Process");
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
_lua_gen_Process_index(lua_State *L)
{
  struct Process *obj = *(struct Process **)luaL_checkudata(L, 1, "Process");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "pr_Task") == 0) {
    struct Task **ud = (struct Task **)lua_newuserdata(L, sizeof(struct Task *));
    *ud = (struct Task*)&obj->pr_Task;
    luaL_getmetatable(L, "Task");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)&obj->pr_MsgPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pr_Pad") == 0) {
    lua_pushinteger(L, obj->pr_Pad);
    return 1;
  }
  if (strcmp(key, "pr_SegList") == 0) {
    lua_pushinteger(L, obj->pr_SegList);
    return 1;
  }
  if (strcmp(key, "pr_StackSize") == 0) {
    lua_pushinteger(L, obj->pr_StackSize);
    return 1;
  }
  if (strcmp(key, "pr_GlobVec") == 0) {
    lua_pushlightuserdata(L, obj->pr_GlobVec);
    return 1;
  }
  if (strcmp(key, "pr_TaskNum") == 0) {
    lua_pushinteger(L, obj->pr_TaskNum);
    return 1;
  }
  if (strcmp(key, "pr_StackBase") == 0) {
    lua_pushinteger(L, obj->pr_StackBase);
    return 1;
  }
  if (strcmp(key, "pr_Result2") == 0) {
    lua_pushinteger(L, obj->pr_Result2);
    return 1;
  }
  if (strcmp(key, "pr_CurrentDir") == 0) {
    lua_pushinteger(L, obj->pr_CurrentDir);
    return 1;
  }
  if (strcmp(key, "pr_CIS") == 0) {
    lua_pushinteger(L, obj->pr_CIS);
    return 1;
  }
  if (strcmp(key, "pr_COS") == 0) {
    lua_pushinteger(L, obj->pr_COS);
    return 1;
  }
  if (strcmp(key, "pr_ConsoleTask") == 0) {
    lua_pushlightuserdata(L, obj->pr_ConsoleTask);
    return 1;
  }
  if (strcmp(key, "pr_FileSystemTask") == 0) {
    lua_pushlightuserdata(L, obj->pr_FileSystemTask);
    return 1;
  }
  if (strcmp(key, "pr_CLI") == 0) {
    lua_pushinteger(L, obj->pr_CLI);
    return 1;
  }
  if (strcmp(key, "pr_ReturnAddr") == 0) {
    lua_pushlightuserdata(L, obj->pr_ReturnAddr);
    return 1;
  }
  if (strcmp(key, "pr_PktWait") == 0) {
    lua_pushlightuserdata(L, obj->pr_PktWait);
    return 1;
  }
  if (strcmp(key, "pr_WindowPtr") == 0) {
    lua_pushlightuserdata(L, obj->pr_WindowPtr);
    return 1;
  }
  if (strcmp(key, "pr_HomeDir") == 0) {
    lua_pushinteger(L, obj->pr_HomeDir);
    return 1;
  }
  if (strcmp(key, "pr_Flags") == 0) {
    lua_pushinteger(L, obj->pr_Flags);
    return 1;
  }
// skipping pr_ExitCode void (*)()
  if (strcmp(key, "pr_ExitData") == 0) {
    lua_pushinteger(L, obj->pr_ExitData);
    return 1;
  }
  if (strcmp(key, "pr_Arguments") == 0) {
    lua_pushstring(L, obj->pr_Arguments);
    return 1;
  }
  if (strcmp(key, "pr_LocalVars") == 0) {
    struct MinList **ud = (struct MinList **)lua_newuserdata(L, sizeof(struct MinList *));
    *ud = (struct MinList*)&obj->pr_LocalVars;
    luaL_getmetatable(L, "MinList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "pr_ShellPrivate") == 0) {
    lua_pushinteger(L, obj->pr_ShellPrivate);
    return 1;
  }
  if (strcmp(key, "pr_CES") == 0) {
    lua_pushinteger(L, obj->pr_CES);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Process_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "pr_Pad");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "pr_SegList");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "pr_StackSize");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "pr_GlobVec");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "pr_TaskNum");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "pr_StackBase");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "pr_Result2");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "pr_CurrentDir");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "pr_CIS");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "pr_COS");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "pr_ConsoleTask");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "pr_FileSystemTask");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "pr_CLI");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "pr_ReturnAddr");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "pr_PktWait");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "pr_WindowPtr");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "pr_HomeDir");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "pr_Flags");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "pr_ExitCode");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "pr_ExitData");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "pr_Arguments");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "pr_ShellPrivate");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "pr_CES");
  lua_rawseti(L, -2, 23);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Process(lua_State *L) {
  if (luaL_newmetatable(L, "Process")) {
    lua_pushcfunction(L, _lua_gen_Process_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Process_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Process_constructor);
    lua_setglobal(L, "Process");
    _lua_gen_Process_install_keys(L);
    lua_pushstring(L, "Process");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DosPacket_newindex(lua_State *L)
{
  struct DosPacket *obj = *(struct DosPacket **)luaL_checkudata(L, 1, "DosPacket");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dp_Link") == 0) {
    // finder 1
    obj->dp_Link = *(struct Message **)luaL_checkudata(L, 3, "Message");
    return 0;
  }
  if (strcmp(key, "dp_Port") == 0) {
    // finder 1
    obj->dp_Port = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "dp_Type") == 0) {
    obj->dp_Type = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Res1") == 0) {
    obj->dp_Res1 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Res2") == 0) {
    obj->dp_Res2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg1") == 0) {
    obj->dp_Arg1 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg2") == 0) {
    obj->dp_Arg2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg3") == 0) {
    obj->dp_Arg3 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg4") == 0) {
    obj->dp_Arg4 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg5") == 0) {
    obj->dp_Arg5 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg6") == 0) {
    obj->dp_Arg6 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dp_Arg7") == 0) {
    obj->dp_Arg7 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DosPacket_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DosPacket in userdata
  struct DosPacket **objp = lua_newuserdata(L, sizeof(struct DosPacket *));
  *objp = malloc(sizeof(struct DosPacket));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DosPacket));

  // Set metatable
  luaL_getmetatable(L, "DosPacket");
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
_lua_gen_DosPacket_index(lua_State *L)
{
  struct DosPacket *obj = *(struct DosPacket **)luaL_checkudata(L, 1, "DosPacket");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dp_Link") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)obj->dp_Link;
    luaL_getmetatable(L, "Message");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dp_Port") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->dp_Port;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dp_Type") == 0) {
    lua_pushinteger(L, obj->dp_Type);
    return 1;
  }
  if (strcmp(key, "dp_Res1") == 0) {
    lua_pushinteger(L, obj->dp_Res1);
    return 1;
  }
  if (strcmp(key, "dp_Res2") == 0) {
    lua_pushinteger(L, obj->dp_Res2);
    return 1;
  }
  if (strcmp(key, "dp_Arg1") == 0) {
    lua_pushinteger(L, obj->dp_Arg1);
    return 1;
  }
  if (strcmp(key, "dp_Arg2") == 0) {
    lua_pushinteger(L, obj->dp_Arg2);
    return 1;
  }
  if (strcmp(key, "dp_Arg3") == 0) {
    lua_pushinteger(L, obj->dp_Arg3);
    return 1;
  }
  if (strcmp(key, "dp_Arg4") == 0) {
    lua_pushinteger(L, obj->dp_Arg4);
    return 1;
  }
  if (strcmp(key, "dp_Arg5") == 0) {
    lua_pushinteger(L, obj->dp_Arg5);
    return 1;
  }
  if (strcmp(key, "dp_Arg6") == 0) {
    lua_pushinteger(L, obj->dp_Arg6);
    return 1;
  }
  if (strcmp(key, "dp_Arg7") == 0) {
    lua_pushinteger(L, obj->dp_Arg7);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DosPacket_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dp_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dp_Res1");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dp_Res2");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dp_Arg1");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dp_Arg2");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dp_Arg3");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dp_Arg4");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dp_Arg5");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dp_Arg6");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dp_Arg7");
  lua_rawseti(L, -2, 10);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DosPacket(lua_State *L) {
  if (luaL_newmetatable(L, "DosPacket")) {
    lua_pushcfunction(L, _lua_gen_DosPacket_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DosPacket_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DosPacket_constructor);
    lua_setglobal(L, "DosPacket");
    _lua_gen_DosPacket_install_keys(L);
    lua_pushstring(L, "DosPacket");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Segment_newindex(lua_State *L)
{
  struct Segment *obj = *(struct Segment **)luaL_checkudata(L, 1, "Segment");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "seg_Next") == 0) {
    obj->seg_Next = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "seg_UC") == 0) {
    obj->seg_UC = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "seg_Seg") == 0) {
    obj->seg_Seg = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Segment_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Segment in userdata
  struct Segment **objp = lua_newuserdata(L, sizeof(struct Segment *));
  *objp = malloc(sizeof(struct Segment));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Segment));

  // Set metatable
  luaL_getmetatable(L, "Segment");
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
_lua_gen_Segment_index(lua_State *L)
{
  struct Segment *obj = *(struct Segment **)luaL_checkudata(L, 1, "Segment");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "seg_Next") == 0) {
    lua_pushinteger(L, obj->seg_Next);
    return 1;
  }
  if (strcmp(key, "seg_UC") == 0) {
    lua_pushinteger(L, obj->seg_UC);
    return 1;
  }
  if (strcmp(key, "seg_Seg") == 0) {
    lua_pushinteger(L, obj->seg_Seg);
    return 1;
  }
// skipping seg_Name UBYTE[4]
  return 0;
}

static void
_lua_gen_Segment_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "seg_Next");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "seg_UC");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "seg_Seg");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Segment(lua_State *L) {
  if (luaL_newmetatable(L, "Segment")) {
    lua_pushcfunction(L, _lua_gen_Segment_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Segment_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Segment_constructor);
    lua_setglobal(L, "Segment");
    _lua_gen_Segment_install_keys(L);
    lua_pushstring(L, "Segment");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_CommandLineInterface_newindex(lua_State *L)
{
  struct CommandLineInterface *obj = *(struct CommandLineInterface **)luaL_checkudata(L, 1, "CommandLineInterface");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cli_Result2") == 0) {
    obj->cli_Result2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_CommandDir") == 0) {
    obj->cli_CommandDir = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_ReturnCode") == 0) {
    obj->cli_ReturnCode = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_FailLevel") == 0) {
    obj->cli_FailLevel = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_StandardInput") == 0) {
    obj->cli_StandardInput = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_CurrentInput") == 0) {
    obj->cli_CurrentInput = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_Interactive") == 0) {
    obj->cli_Interactive = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_Background") == 0) {
    obj->cli_Background = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_CurrentOutput") == 0) {
    obj->cli_CurrentOutput = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_DefaultStack") == 0) {
    obj->cli_DefaultStack = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_StandardOutput") == 0) {
    obj->cli_StandardOutput = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_Module") == 0) {
    obj->cli_Module = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_CommandLineInterface_constructor(lua_State *L)
{
  // Allocate pointer-to-struct CommandLineInterface in userdata
  struct CommandLineInterface **objp = lua_newuserdata(L, sizeof(struct CommandLineInterface *));
  *objp = malloc(sizeof(struct CommandLineInterface));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct CommandLineInterface));

  // Set metatable
  luaL_getmetatable(L, "CommandLineInterface");
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
_lua_gen_CommandLineInterface_index(lua_State *L)
{
  struct CommandLineInterface *obj = *(struct CommandLineInterface **)luaL_checkudata(L, 1, "CommandLineInterface");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cli_Result2") == 0) {
    lua_pushinteger(L, obj->cli_Result2);
    return 1;
  }
// skipping cli_SetName BSTR
  if (strcmp(key, "cli_CommandDir") == 0) {
    lua_pushinteger(L, obj->cli_CommandDir);
    return 1;
  }
  if (strcmp(key, "cli_ReturnCode") == 0) {
    lua_pushinteger(L, obj->cli_ReturnCode);
    return 1;
  }
// skipping cli_CommandName BSTR
  if (strcmp(key, "cli_FailLevel") == 0) {
    lua_pushinteger(L, obj->cli_FailLevel);
    return 1;
  }
// skipping cli_Prompt BSTR
  if (strcmp(key, "cli_StandardInput") == 0) {
    lua_pushinteger(L, obj->cli_StandardInput);
    return 1;
  }
  if (strcmp(key, "cli_CurrentInput") == 0) {
    lua_pushinteger(L, obj->cli_CurrentInput);
    return 1;
  }
// skipping cli_CommandFile BSTR
  if (strcmp(key, "cli_Interactive") == 0) {
    lua_pushinteger(L, obj->cli_Interactive);
    return 1;
  }
  if (strcmp(key, "cli_Background") == 0) {
    lua_pushinteger(L, obj->cli_Background);
    return 1;
  }
  if (strcmp(key, "cli_CurrentOutput") == 0) {
    lua_pushinteger(L, obj->cli_CurrentOutput);
    return 1;
  }
  if (strcmp(key, "cli_DefaultStack") == 0) {
    lua_pushinteger(L, obj->cli_DefaultStack);
    return 1;
  }
  if (strcmp(key, "cli_StandardOutput") == 0) {
    lua_pushinteger(L, obj->cli_StandardOutput);
    return 1;
  }
  if (strcmp(key, "cli_Module") == 0) {
    lua_pushinteger(L, obj->cli_Module);
    return 1;
  }
  return 0;
}

static void
_lua_gen_CommandLineInterface_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "cli_Result2");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "cli_CommandDir");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "cli_ReturnCode");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "cli_FailLevel");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "cli_StandardInput");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "cli_CurrentInput");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "cli_Interactive");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "cli_Background");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "cli_CurrentOutput");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "cli_DefaultStack");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "cli_StandardOutput");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "cli_Module");
  lua_rawseti(L, -2, 12);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_CommandLineInterface(lua_State *L) {
  if (luaL_newmetatable(L, "CommandLineInterface")) {
    lua_pushcfunction(L, _lua_gen_CommandLineInterface_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_CommandLineInterface_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_CommandLineInterface_constructor);
    lua_setglobal(L, "CommandLineInterface");
    _lua_gen_CommandLineInterface_install_keys(L);
    lua_pushstring(L, "CommandLineInterface");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DosList_newindex(lua_State *L)
{
  struct DosList *obj = *(struct DosList **)luaL_checkudata(L, 1, "DosList");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dol_Next") == 0) {
    obj->dol_Next = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_Type") == 0) {
    obj->dol_Type = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_Task") == 0) {
    // finder 1
    obj->dol_Task = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "dol_Lock") == 0) {
    obj->dol_Lock = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DosList_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DosList in userdata
  struct DosList **objp = lua_newuserdata(L, sizeof(struct DosList *));
  *objp = malloc(sizeof(struct DosList));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DosList));

  // Set metatable
  luaL_getmetatable(L, "DosList");
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
_lua_gen_DosList_index(lua_State *L)
{
  struct DosList *obj = *(struct DosList **)luaL_checkudata(L, 1, "DosList");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dol_Next") == 0) {
    lua_pushinteger(L, obj->dol_Next);
    return 1;
  }
  if (strcmp(key, "dol_Type") == 0) {
    lua_pushinteger(L, obj->dol_Type);
    return 1;
  }
  if (strcmp(key, "dol_Task") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->dol_Task;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dol_Lock") == 0) {
    lua_pushinteger(L, obj->dol_Lock);
    return 1;
  }
// skipping dol_misc union (unnamed union at /usr/local/amiga/bebbo/m68k-amigaos/ndk-include/dos/dosextens.h:383:5)
// skipping dol_Name BSTR
  return 0;
}

static void
_lua_gen_DosList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dol_Next");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dol_Type");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dol_Lock");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DosList(lua_State *L) {
  if (luaL_newmetatable(L, "DosList")) {
    lua_pushcfunction(L, _lua_gen_DosList_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DosList_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DosList_constructor);
    lua_setglobal(L, "DosList");
    _lua_gen_DosList_install_keys(L);
    lua_pushstring(L, "DosList");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DevProc_newindex(lua_State *L)
{
  struct DevProc *obj = *(struct DevProc **)luaL_checkudata(L, 1, "DevProc");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dvp_Port") == 0) {
    // finder 1
    obj->dvp_Port = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "dvp_Lock") == 0) {
    obj->dvp_Lock = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dvp_Flags") == 0) {
    obj->dvp_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dvp_DevNode") == 0) {
    // finder 1
    obj->dvp_DevNode = *(struct DosList **)luaL_checkudata(L, 3, "DosList");
    return 0;
  }
  return 0;
}


static int
_lua_DevProc_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DevProc in userdata
  struct DevProc **objp = lua_newuserdata(L, sizeof(struct DevProc *));
  *objp = malloc(sizeof(struct DevProc));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DevProc));

  // Set metatable
  luaL_getmetatable(L, "DevProc");
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
_lua_gen_DevProc_index(lua_State *L)
{
  struct DevProc *obj = *(struct DevProc **)luaL_checkudata(L, 1, "DevProc");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dvp_Port") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->dvp_Port;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dvp_Lock") == 0) {
    lua_pushinteger(L, obj->dvp_Lock);
    return 1;
  }
  if (strcmp(key, "dvp_Flags") == 0) {
    lua_pushinteger(L, obj->dvp_Flags);
    return 1;
  }
  if (strcmp(key, "dvp_DevNode") == 0) {
    struct DosList **ud = (struct DosList **)lua_newuserdata(L, sizeof(struct DosList *));
    *ud = (struct DosList*)obj->dvp_DevNode;
    luaL_getmetatable(L, "DosList");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DevProc_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dvp_Lock");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dvp_Flags");
  lua_rawseti(L, -2, 2);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DevProc(lua_State *L) {
  if (luaL_newmetatable(L, "DevProc")) {
    lua_pushcfunction(L, _lua_gen_DevProc_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DevProc_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DevProc_constructor);
    lua_setglobal(L, "DevProc");
    _lua_gen_DevProc_install_keys(L);
    lua_pushstring(L, "DevProc");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_RecordLock_newindex(lua_State *L)
{
  struct RecordLock *obj = *(struct RecordLock **)luaL_checkudata(L, 1, "RecordLock");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "rec_FH") == 0) {
    obj->rec_FH = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rec_Offset") == 0) {
    obj->rec_Offset = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rec_Length") == 0) {
    obj->rec_Length = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rec_Mode") == 0) {
    obj->rec_Mode = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_RecordLock_constructor(lua_State *L)
{
  // Allocate pointer-to-struct RecordLock in userdata
  struct RecordLock **objp = lua_newuserdata(L, sizeof(struct RecordLock *));
  *objp = malloc(sizeof(struct RecordLock));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct RecordLock));

  // Set metatable
  luaL_getmetatable(L, "RecordLock");
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
_lua_gen_RecordLock_index(lua_State *L)
{
  struct RecordLock *obj = *(struct RecordLock **)luaL_checkudata(L, 1, "RecordLock");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "rec_FH") == 0) {
    lua_pushinteger(L, obj->rec_FH);
    return 1;
  }
  if (strcmp(key, "rec_Offset") == 0) {
    lua_pushinteger(L, obj->rec_Offset);
    return 1;
  }
  if (strcmp(key, "rec_Length") == 0) {
    lua_pushinteger(L, obj->rec_Length);
    return 1;
  }
  if (strcmp(key, "rec_Mode") == 0) {
    lua_pushinteger(L, obj->rec_Mode);
    return 1;
  }
  return 0;
}

static void
_lua_gen_RecordLock_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "rec_FH");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "rec_Offset");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "rec_Length");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "rec_Mode");
  lua_rawseti(L, -2, 4);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_RecordLock(lua_State *L) {
  if (luaL_newmetatable(L, "RecordLock")) {
    lua_pushcfunction(L, _lua_gen_RecordLock_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_RecordLock_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_RecordLock_constructor);
    lua_setglobal(L, "RecordLock");
    _lua_gen_RecordLock_install_keys(L);
    lua_pushstring(L, "RecordLock");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_RDArgs_newindex(lua_State *L)
{
  struct RDArgs *obj = *(struct RDArgs **)luaL_checkudata(L, 1, "RDArgs");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "RDA_DAList") == 0) {
    obj->RDA_DAList = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_Buffer") == 0) {
    obj->RDA_Buffer = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_BufSiz") == 0) {
    obj->RDA_BufSiz = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_ExtHelp") == 0) {
    obj->RDA_ExtHelp = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_Flags") == 0) {
    obj->RDA_Flags = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_RDArgs_constructor(lua_State *L)
{
  // Allocate pointer-to-struct RDArgs in userdata
  struct RDArgs **objp = lua_newuserdata(L, sizeof(struct RDArgs *));
  *objp = malloc(sizeof(struct RDArgs));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct RDArgs));

  // Set metatable
  luaL_getmetatable(L, "RDArgs");
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
_lua_gen_RDArgs_index(lua_State *L)
{
  struct RDArgs *obj = *(struct RDArgs **)luaL_checkudata(L, 1, "RDArgs");
  const char *key = luaL_checkstring(L, 2);
// skipping RDA_Source struct CSource
  if (strcmp(key, "RDA_DAList") == 0) {
    lua_pushinteger(L, obj->RDA_DAList);
    return 1;
  }
  if (strcmp(key, "RDA_Buffer") == 0) {
    lua_pushstring(L, obj->RDA_Buffer);
    return 1;
  }
  if (strcmp(key, "RDA_BufSiz") == 0) {
    lua_pushinteger(L, obj->RDA_BufSiz);
    return 1;
  }
  if (strcmp(key, "RDA_ExtHelp") == 0) {
    lua_pushstring(L, obj->RDA_ExtHelp);
    return 1;
  }
  if (strcmp(key, "RDA_Flags") == 0) {
    lua_pushinteger(L, obj->RDA_Flags);
    return 1;
  }
  return 0;
}

static void
_lua_gen_RDArgs_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "RDA_DAList");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "RDA_Buffer");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "RDA_BufSiz");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "RDA_ExtHelp");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "RDA_Flags");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_RDArgs(lua_State *L) {
  if (luaL_newmetatable(L, "RDArgs")) {
    lua_pushcfunction(L, _lua_gen_RDArgs_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_RDArgs_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_RDArgs_constructor);
    lua_setglobal(L, "RDArgs");
    _lua_gen_RDArgs_install_keys(L);
    lua_pushstring(L, "RDArgs");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_AnchorPath_newindex(lua_State *L)
{
  struct AnchorPath *obj = *(struct AnchorPath **)luaL_checkudata(L, 1, "AnchorPath");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ap_BreakBits") == 0) {
    obj->ap_BreakBits = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_FoundBreak") == 0) {
    obj->ap_FoundBreak = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Flags") == 0) {
    obj->ap_Flags = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Reserved") == 0) {
    obj->ap_Reserved = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Strlen") == 0) {
    obj->ap_Strlen = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info") == 0) {
    // finder 0
    struct FileInfoBlock *val = *(struct FileInfoBlock **)luaL_checkudata(L, 3, "FileInfoBlock");
    obj->ap_Info = *val;
    return 0;
  }
  return 0;
}


static int
_lua_AnchorPath_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AnchorPath in userdata
  struct AnchorPath **objp = lua_newuserdata(L, sizeof(struct AnchorPath *));
  *objp = malloc(sizeof(struct AnchorPath));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AnchorPath));

  // Set metatable
  luaL_getmetatable(L, "AnchorPath");
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
_lua_gen_AnchorPath_index(lua_State *L)
{
  struct AnchorPath *obj = *(struct AnchorPath **)luaL_checkudata(L, 1, "AnchorPath");
  const char *key = luaL_checkstring(L, 2);
// skipping ap_Base struct AChain*
// skipping ap_Last struct AChain*
  if (strcmp(key, "ap_BreakBits") == 0) {
    lua_pushinteger(L, obj->ap_BreakBits);
    return 1;
  }
  if (strcmp(key, "ap_FoundBreak") == 0) {
    lua_pushinteger(L, obj->ap_FoundBreak);
    return 1;
  }
  if (strcmp(key, "ap_Flags") == 0) {
    lua_pushinteger(L, obj->ap_Flags);
    return 1;
  }
  if (strcmp(key, "ap_Reserved") == 0) {
    lua_pushinteger(L, obj->ap_Reserved);
    return 1;
  }
  if (strcmp(key, "ap_Strlen") == 0) {
    lua_pushinteger(L, obj->ap_Strlen);
    return 1;
  }
  if (strcmp(key, "ap_Info") == 0) {
    struct FileInfoBlock **ud = (struct FileInfoBlock **)lua_newuserdata(L, sizeof(struct FileInfoBlock *));
    *ud = (struct FileInfoBlock*)&obj->ap_Info;
    luaL_getmetatable(L, "FileInfoBlock");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ap_Buf TEXT[1]
  return 0;
}

static void
_lua_gen_AnchorPath_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ap_BreakBits");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ap_FoundBreak");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ap_Flags");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "ap_Reserved");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "ap_Strlen");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AnchorPath(lua_State *L) {
  if (luaL_newmetatable(L, "AnchorPath")) {
    lua_pushcfunction(L, _lua_gen_AnchorPath_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AnchorPath_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AnchorPath_constructor);
    lua_setglobal(L, "AnchorPath");
    _lua_gen_AnchorPath_install_keys(L);
    lua_pushstring(L, "AnchorPath");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_LocalVar_newindex(lua_State *L)
{
  struct LocalVar *obj = *(struct LocalVar **)luaL_checkudata(L, 1, "LocalVar");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lv_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->lv_Node = *val;
    return 0;
  }
  if (strcmp(key, "lv_Flags") == 0) {
    obj->lv_Flags = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lv_Value") == 0) {
    obj->lv_Value = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "lv_Len") == 0) {
    obj->lv_Len = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_LocalVar_constructor(lua_State *L)
{
  // Allocate pointer-to-struct LocalVar in userdata
  struct LocalVar **objp = lua_newuserdata(L, sizeof(struct LocalVar *));
  *objp = malloc(sizeof(struct LocalVar));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct LocalVar));

  // Set metatable
  luaL_getmetatable(L, "LocalVar");
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
_lua_gen_LocalVar_index(lua_State *L)
{
  struct LocalVar *obj = *(struct LocalVar **)luaL_checkudata(L, 1, "LocalVar");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "lv_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->lv_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "lv_Flags") == 0) {
    lua_pushinteger(L, obj->lv_Flags);
    return 1;
  }
  if (strcmp(key, "lv_Value") == 0) {
    lua_pushstring(L, obj->lv_Value);
    return 1;
  }
  if (strcmp(key, "lv_Len") == 0) {
    lua_pushinteger(L, obj->lv_Len);
    return 1;
  }
  return 0;
}

static void
_lua_gen_LocalVar_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "lv_Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "lv_Value");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "lv_Len");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_LocalVar(lua_State *L) {
  if (luaL_newmetatable(L, "LocalVar")) {
    lua_pushcfunction(L, _lua_gen_LocalVar_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_LocalVar_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_LocalVar_constructor);
    lua_setglobal(L, "LocalVar");
    _lua_gen_LocalVar_install_keys(L);
    lua_pushstring(L, "LocalVar");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_NotifyRequest_newindex(lua_State *L)
{
  struct NotifyRequest *obj = *(struct NotifyRequest **)luaL_checkudata(L, 1, "NotifyRequest");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "nr_Name") == 0) {
    obj->nr_Name = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_FullName") == 0) {
    obj->nr_FullName = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_UserData") == 0) {
    obj->nr_UserData = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_Flags") == 0) {
    obj->nr_Flags = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_MsgCount") == 0) {
    obj->nr_MsgCount = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_Handler") == 0) {
    // finder 1
    obj->nr_Handler = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  return 0;
}


static int
_lua_NotifyRequest_constructor(lua_State *L)
{
  // Allocate pointer-to-struct NotifyRequest in userdata
  struct NotifyRequest **objp = lua_newuserdata(L, sizeof(struct NotifyRequest *));
  *objp = malloc(sizeof(struct NotifyRequest));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct NotifyRequest));

  // Set metatable
  luaL_getmetatable(L, "NotifyRequest");
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
_lua_gen_NotifyRequest_index(lua_State *L)
{
  struct NotifyRequest *obj = *(struct NotifyRequest **)luaL_checkudata(L, 1, "NotifyRequest");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "nr_Name") == 0) {
    lua_pushstring(L, obj->nr_Name);
    return 1;
  }
  if (strcmp(key, "nr_FullName") == 0) {
    lua_pushstring(L, obj->nr_FullName);
    return 1;
  }
  if (strcmp(key, "nr_UserData") == 0) {
    lua_pushinteger(L, obj->nr_UserData);
    return 1;
  }
  if (strcmp(key, "nr_Flags") == 0) {
    lua_pushinteger(L, obj->nr_Flags);
    return 1;
  }
// skipping nr_stuff union (unnamed union at /usr/local/amiga/bebbo/m68k-amigaos/ndk-include/dos/notify.h:51:2)
// skipping nr_Reserved ULONG[4]
  if (strcmp(key, "nr_MsgCount") == 0) {
    lua_pushinteger(L, obj->nr_MsgCount);
    return 1;
  }
  if (strcmp(key, "nr_Handler") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->nr_Handler;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_NotifyRequest_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "nr_Name");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "nr_FullName");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "nr_UserData");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "nr_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "nr_MsgCount");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_NotifyRequest(lua_State *L) {
  if (luaL_newmetatable(L, "NotifyRequest")) {
    lua_pushcfunction(L, _lua_gen_NotifyRequest_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_NotifyRequest_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_NotifyRequest_constructor);
    lua_setglobal(L, "NotifyRequest");
    _lua_gen_NotifyRequest_install_keys(L);
    lua_pushstring(L, "NotifyRequest");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DateTime_newindex(lua_State *L)
{
  struct DateTime *obj = *(struct DateTime **)luaL_checkudata(L, 1, "DateTime");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dat_Stamp") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->dat_Stamp = *val;
    return 0;
  }
  if (strcmp(key, "dat_Format") == 0) {
    obj->dat_Format = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_Flags") == 0) {
    obj->dat_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_StrDay") == 0) {
    obj->dat_StrDay = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_StrDate") == 0) {
    obj->dat_StrDate = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_StrTime") == 0) {
    obj->dat_StrTime = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_DateTime_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DateTime in userdata
  struct DateTime **objp = lua_newuserdata(L, sizeof(struct DateTime *));
  *objp = malloc(sizeof(struct DateTime));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DateTime));

  // Set metatable
  luaL_getmetatable(L, "DateTime");
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
_lua_gen_DateTime_index(lua_State *L)
{
  struct DateTime *obj = *(struct DateTime **)luaL_checkudata(L, 1, "DateTime");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dat_Stamp") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->dat_Stamp;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dat_Format") == 0) {
    lua_pushinteger(L, obj->dat_Format);
    return 1;
  }
  if (strcmp(key, "dat_Flags") == 0) {
    lua_pushinteger(L, obj->dat_Flags);
    return 1;
  }
  if (strcmp(key, "dat_StrDay") == 0) {
    lua_pushstring(L, obj->dat_StrDay);
    return 1;
  }
  if (strcmp(key, "dat_StrDate") == 0) {
    lua_pushstring(L, obj->dat_StrDate);
    return 1;
  }
  if (strcmp(key, "dat_StrTime") == 0) {
    lua_pushstring(L, obj->dat_StrTime);
    return 1;
  }
  return 0;
}

static void
_lua_gen_DateTime_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dat_Format");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dat_Flags");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dat_StrDay");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dat_StrDate");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dat_StrTime");
  lua_rawseti(L, -2, 5);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_DateTime(lua_State *L) {
  if (luaL_newmetatable(L, "DateTime")) {
    lua_pushcfunction(L, _lua_gen_DateTime_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_DateTime_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_DateTime_constructor);
    lua_setglobal(L, "DateTime");
    _lua_gen_DateTime_install_keys(L);
    lua_pushstring(L, "DateTime");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_Hook_newindex(lua_State *L)
{
  struct Hook *obj = *(struct Hook **)luaL_checkudata(L, 1, "Hook");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "h_MinNode") == 0) {
    // finder 0
    struct MinNode *val = *(struct MinNode **)luaL_checkudata(L, 3, "MinNode");
    obj->h_MinNode = *val;
    return 0;
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
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "h_MinNode") == 0) {
    struct MinNode **ud = (struct MinNode **)lua_newuserdata(L, sizeof(struct MinNode *));
    *ud = (struct MinNode*)&obj->h_MinNode;
    luaL_getmetatable(L, "MinNode");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping h_Entry ULONG (*)()
// skipping h_SubEntry ULONG (*)()
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
_lua_Open(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG accessMode = luaL_checkinteger(L, 2);
  BPTR _result = Open(name, accessMode);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Close(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  LONG _result = Close(file);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Read(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  APTR buffer = lua_touserdata(L, 2);
  LONG length = luaL_checkinteger(L, 3);
  LONG _result = Read(file, buffer, length);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Write(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  CONST_APTR buffer = lua_touserdata(L, 2);
  LONG length = luaL_checkinteger(L, 3);
  LONG _result = Write(file, buffer, length);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Input(lua_State* L)
{
  (void)L;
  BPTR _result = Input();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Output(lua_State* L)
{
  (void)L;
  BPTR _result = Output();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Seek(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  LONG position = luaL_checkinteger(L, 2);
  LONG offset = luaL_checkinteger(L, 3);
  LONG _result = Seek(file, position, offset);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DeleteFile(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG _result = DeleteFile(name);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Rename(lua_State* L)
{
  (void)L;
  CONST_STRPTR oldName = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR newName = amiga_checkConstNullableString(L, 2);
  LONG _result = Rename(oldName, newName);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Lock(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG type = luaL_checkinteger(L, 2);
  BPTR _result = Lock(name, type);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_UnLock(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  UnLock(lock);
  return 0;
}

static int
_lua_DupLock(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  BPTR _result = DupLock(lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Examine(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  struct FileInfoBlock * fileInfoBlock = _lua_gen_checkFileInfoBlock(L, 2);
  LONG _result = Examine(lock, fileInfoBlock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ExNext(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  struct FileInfoBlock * fileInfoBlock = _lua_gen_checkFileInfoBlock(L, 2);
  LONG _result = ExNext(lock, fileInfoBlock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Info(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  struct InfoData * parameterBlock = _lua_gen_checkInfoData(L, 2);
  LONG _result = Info(lock, parameterBlock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CreateDir(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR _result = CreateDir(name);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CurrentDir(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  BPTR _result = CurrentDir(lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_IoErr(lua_State* L)
{
  (void)L;
  LONG _result = IoErr();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Exit(lua_State* L)
{
  (void)L;
  LONG returnCode = luaL_checkinteger(L, 1);
  Exit(returnCode);
  return 0;
}

static int
_lua_LoadSeg(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR _result = LoadSeg(name);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_UnLoadSeg(lua_State* L)
{
  (void)L;
  BPTR seglist = luaL_checkinteger(L, 1);
  UnLoadSeg(seglist);
  return 0;
}

static int
_lua_DeviceProc(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct MsgPort * _result = DeviceProc(name);
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_SetComment(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR comment = amiga_checkConstNullableString(L, 2);
  LONG _result = SetComment(name, comment);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetProtection(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG protect = luaL_checkinteger(L, 2);
  LONG _result = SetProtection(name, protect);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DateStamp(lua_State* L)
{
  (void)L;
  struct DateStamp * date = _lua_gen_checkDateStamp(L, 1);
  struct DateStamp * _result = DateStamp(date);
  _lua_gen_pushDateStamp(L, _result);
  return 1;
}

static int
_lua_Delay(lua_State* L)
{
  (void)L;
  LONG timeout = luaL_checkinteger(L, 1);
  Delay(timeout);
  return 0;
}

static int
_lua_WaitForChar(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  LONG timeout = luaL_checkinteger(L, 2);
  LONG _result = WaitForChar(file, timeout);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ParentDir(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  BPTR _result = ParentDir(lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_IsInteractive(lua_State* L)
{
  (void)L;
  BPTR file = luaL_checkinteger(L, 1);
  LONG _result = IsInteractive(file);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Execute(lua_State* L)
{
  (void)L;
  CONST_STRPTR string = amiga_checkConstNullableString(L, 1);
  BPTR file = luaL_checkinteger(L, 2);
  BPTR file2 = luaL_checkinteger(L, 3);
  LONG _result = Execute(string, file, file2);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AllocDosObject(lua_State* L)
{
  (void)L;
  ULONG type = luaL_checkinteger(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  APTR _result = AllocDosObject(type, tags);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_AllocDosObjectTagList(lua_State* L)
{
  (void)L;
  ULONG type = luaL_checkinteger(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  APTR _result = AllocDosObjectTagList(type, tags);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_AllocDosObjectTags(lua_State* L)
{
  (void)L;
  ULONG type = luaL_checkinteger(L, 1);
  ULONG tag1type = luaL_checkinteger(L, 2);
  APTR _result = AllocDosObjectTags(type, tag1type);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_FreeDosObject(lua_State* L)
{
  (void)L;
  ULONG type = luaL_checkinteger(L, 1);
  APTR ptr = lua_touserdata(L, 2);
  FreeDosObject(type, ptr);
  return 0;
}

static int
_lua_DoPkt0(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  LONG action = luaL_checkinteger(L, 2);
  LONG _result = DoPkt0(port, action);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DoPkt1(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  LONG action = luaL_checkinteger(L, 2);
  LONG arg1 = luaL_checkinteger(L, 3);
  LONG _result = DoPkt1(port, action, arg1);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WaitPkt(lua_State* L)
{
  (void)L;
  struct DosPacket * _result = WaitPkt();
  _lua_gen_pushDosPacket(L, _result);
  return 1;
}

static int
_lua_ReplyPkt(lua_State* L)
{
  (void)L;
  struct DosPacket * dp = _lua_gen_checkDosPacket(L, 1);
  LONG res1 = luaL_checkinteger(L, 2);
  LONG res2 = luaL_checkinteger(L, 3);
  ReplyPkt(dp, res1, res2);
  return 0;
}

static int
_lua_AbortPkt(lua_State* L)
{
  (void)L;
  struct MsgPort * port = _lua_gen_checkMsgPort(L, 1);
  struct DosPacket * pkt = _lua_gen_checkDosPacket(L, 2);
  AbortPkt(port, pkt);
  return 0;
}

static int
_lua_LockRecords(lua_State* L)
{
  (void)L;
  const struct RecordLock * recArray = _lua_gen_checkRecordLock(L, 1);
  ULONG timeout = luaL_checkinteger(L, 2);
  BOOL _result = LockRecords(recArray, timeout);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_UnLockRecord(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  ULONG offset = luaL_checkinteger(L, 2);
  ULONG length = luaL_checkinteger(L, 3);
  BOOL _result = UnLockRecord(fh, offset, length);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_UnLockRecords(lua_State* L)
{
  (void)L;
  const struct RecordLock * recArray = _lua_gen_checkRecordLock(L, 1);
  BOOL _result = UnLockRecords(recArray);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SelectInput(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  BPTR _result = SelectInput(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SelectOutput(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  BPTR _result = SelectOutput(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FGetC(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG _result = FGetC(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FPutC(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG ch = luaL_checkinteger(L, 2);
  LONG _result = FPutC(fh, ch);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_UnGetC(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG character = luaL_checkinteger(L, 2);
  LONG _result = UnGetC(fh, character);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FRead(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  APTR block = lua_touserdata(L, 2);
  ULONG blocklen = luaL_checkinteger(L, 3);
  ULONG number = luaL_checkinteger(L, 4);
  LONG _result = FRead(fh, block, blocklen, number);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FWrite(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_APTR block = lua_touserdata(L, 2);
  ULONG blocklen = luaL_checkinteger(L, 3);
  ULONG number = luaL_checkinteger(L, 4);
  LONG _result = FWrite(fh, block, blocklen, number);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FGets(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  STRPTR buf = amiga_checkNullableString(L, 2);
  ULONG buflen = luaL_checkinteger(L, 3);
  STRPTR _result = FGets(fh, buf, buflen);
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_FPuts(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_STRPTR str = amiga_checkConstNullableString(L, 2);
  LONG _result = FPuts(fh, str);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_VFWritef(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_STRPTR format = amiga_checkConstNullableString(L, 2);
  const LONG * argarray = lua_touserdata(L, 3);
  VFWritef(fh, format, argarray);
  return 0;
}

static int
_lua_FWritef(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_STRPTR format = amiga_checkConstNullableString(L, 2);
  FWritef(fh, format);
  return 0;
}

static int
_lua_VFPrintf(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_STRPTR format = amiga_checkConstNullableString(L, 2);
  CONST_APTR argarray = lua_touserdata(L, 3);
  LONG _result = VFPrintf(fh, format, argarray);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FPrintf(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  CONST_STRPTR format = amiga_checkConstNullableString(L, 2);
  LONG _result = FPrintf(fh, format);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Flush(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG _result = Flush(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetVBuf(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  STRPTR buff = amiga_checkNullableString(L, 2);
  LONG type = luaL_checkinteger(L, 3);
  LONG size = luaL_checkinteger(L, 4);
  LONG _result = SetVBuf(fh, buff, type, size);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DupLockFromFH(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  BPTR _result = DupLockFromFH(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_OpenFromLock(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  BPTR _result = OpenFromLock(lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ParentOfFH(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  BPTR _result = ParentOfFH(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ExamineFH(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  struct FileInfoBlock * fib = _lua_gen_checkFileInfoBlock(L, 2);
  BOOL _result = ExamineFH(fh, fib);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetFileDate(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  const struct DateStamp * date = _lua_gen_checkDateStamp(L, 2);
  LONG _result = SetFileDate(name, date);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NameFromLock(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  STRPTR buffer = amiga_checkNullableString(L, 2);
  LONG len = luaL_checkinteger(L, 3);
  LONG _result = NameFromLock(lock, buffer, len);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NameFromFH(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  STRPTR buffer = amiga_checkNullableString(L, 2);
  LONG len = luaL_checkinteger(L, 3);
  LONG _result = NameFromFH(fh, buffer, len);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SameLock(lua_State* L)
{
  (void)L;
  BPTR lock1 = luaL_checkinteger(L, 1);
  BPTR lock2 = luaL_checkinteger(L, 2);
  LONG _result = SameLock(lock1, lock2);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetMode(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG mode = luaL_checkinteger(L, 2);
  LONG _result = SetMode(fh, mode);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MakeLink(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG dest = luaL_checkinteger(L, 2);
  LONG soft = luaL_checkinteger(L, 3);
  LONG _result = MakeLink(name, dest, soft);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ChangeMode(lua_State* L)
{
  (void)L;
  LONG type = luaL_checkinteger(L, 1);
  BPTR fh = luaL_checkinteger(L, 2);
  LONG newmode = luaL_checkinteger(L, 3);
  LONG _result = ChangeMode(type, fh, newmode);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetFileSize(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG pos = luaL_checkinteger(L, 2);
  LONG mode = luaL_checkinteger(L, 3);
  LONG _result = SetFileSize(fh, pos, mode);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetIoErr(lua_State* L)
{
  (void)L;
  LONG result = luaL_checkinteger(L, 1);
  LONG _result = SetIoErr(result);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Fault(lua_State* L)
{
  (void)L;
  LONG code = luaL_checkinteger(L, 1);
  CONST_STRPTR header = amiga_checkConstNullableString(L, 2);
  STRPTR buffer = amiga_checkNullableString(L, 3);
  LONG len = luaL_checkinteger(L, 4);
  BOOL _result = Fault(code, header, buffer, len);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_PrintFault(lua_State* L)
{
  (void)L;
  LONG code = luaL_checkinteger(L, 1);
  CONST_STRPTR header = amiga_checkConstNullableString(L, 2);
  BOOL _result = PrintFault(code, header);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_Cli(lua_State* L)
{
  (void)L;
  struct CommandLineInterface * _result = Cli();
  _lua_gen_pushCommandLineInterface(L, _result);
  return 1;
}

static int
_lua_CreateNewProc(lua_State* L)
{
  (void)L;
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 1);
  struct Process * _result = CreateNewProc(tags);
  _lua_gen_pushProcess(L, _result);
  return 1;
}

static int
_lua_CreateNewProcTagList(lua_State* L)
{
  (void)L;
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 1);
  struct Process * _result = CreateNewProcTagList(tags);
  _lua_gen_pushProcess(L, _result);
  return 1;
}

static int
_lua_CreateNewProcTags(lua_State* L)
{
  (void)L;
  ULONG tag1type = luaL_checkinteger(L, 1);
  struct Process * _result = CreateNewProcTags(tag1type);
  _lua_gen_pushProcess(L, _result);
  return 1;
}

static int
_lua_GetConsoleTask(lua_State* L)
{
  (void)L;
  struct MsgPort * _result = GetConsoleTask();
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_SetConsoleTask(lua_State* L)
{
  (void)L;
  struct MsgPort * task = _lua_gen_checkMsgPort(L, 1);
  struct MsgPort * _result = SetConsoleTask(task);
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_GetFileSysTask(lua_State* L)
{
  (void)L;
  struct MsgPort * _result = GetFileSysTask();
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_SetFileSysTask(lua_State* L)
{
  (void)L;
  struct MsgPort * task = _lua_gen_checkMsgPort(L, 1);
  struct MsgPort * _result = SetFileSysTask(task);
  _lua_gen_pushMsgPort(L, _result);
  return 1;
}

static int
_lua_GetArgStr(lua_State* L)
{
  (void)L;
  STRPTR _result = GetArgStr();
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_SetArgStr(lua_State* L)
{
  (void)L;
  STRPTR string = amiga_checkNullableString(L, 1);
  STRPTR _result = SetArgStr(string);
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_FindCliProc(lua_State* L)
{
  (void)L;
  ULONG num = luaL_checkinteger(L, 1);
  struct Process * _result = FindCliProc(num);
  _lua_gen_pushProcess(L, _result);
  return 1;
}

static int
_lua_MaxCli(lua_State* L)
{
  (void)L;
  ULONG _result = MaxCli();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetCurrentDirName(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BOOL _result = SetCurrentDirName(name);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GetCurrentDirName(lua_State* L)
{
  (void)L;
  STRPTR buf = amiga_checkNullableString(L, 1);
  LONG len = luaL_checkinteger(L, 2);
  BOOL _result = GetCurrentDirName(buf, len);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetProgramName(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BOOL _result = SetProgramName(name);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GetProgramName(lua_State* L)
{
  (void)L;
  STRPTR buf = amiga_checkNullableString(L, 1);
  LONG len = luaL_checkinteger(L, 2);
  BOOL _result = GetProgramName(buf, len);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetPrompt(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BOOL _result = SetPrompt(name);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GetPrompt(lua_State* L)
{
  (void)L;
  STRPTR buf = amiga_checkNullableString(L, 1);
  LONG len = luaL_checkinteger(L, 2);
  BOOL _result = GetPrompt(buf, len);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetProgramDir(lua_State* L)
{
  (void)L;
  BPTR lock = luaL_checkinteger(L, 1);
  BPTR _result = SetProgramDir(lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetProgramDir(lua_State* L)
{
  (void)L;
  BPTR _result = GetProgramDir();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SystemTagList(lua_State* L)
{
  (void)L;
  CONST_STRPTR command = amiga_checkConstNullableString(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  LONG _result = SystemTagList(command, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_System(lua_State* L)
{
  (void)L;
  CONST_STRPTR command = amiga_checkConstNullableString(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  LONG _result = System(command, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SystemTags(lua_State* L)
{
  (void)L;
  CONST_STRPTR command = amiga_checkConstNullableString(L, 1);
  ULONG tag1type = luaL_checkinteger(L, 2);
  LONG _result = SystemTags(command, tag1type);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AssignLock(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR lock = luaL_checkinteger(L, 2);
  LONG _result = AssignLock(name, lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AssignLate(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR path = amiga_checkConstNullableString(L, 2);
  BOOL _result = AssignLate(name, path);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_AssignPath(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR path = amiga_checkConstNullableString(L, 2);
  BOOL _result = AssignPath(name, path);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_AssignAdd(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR lock = luaL_checkinteger(L, 2);
  BOOL _result = AssignAdd(name, lock);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_RemAssignList(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR lock = luaL_checkinteger(L, 2);
  LONG _result = RemAssignList(name, lock);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetDeviceProc(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  struct DevProc * dp = _lua_gen_checkDevProc(L, 2);
  struct DevProc * _result = GetDeviceProc(name, dp);
  _lua_gen_pushDevProc(L, _result);
  return 1;
}

static int
_lua_FreeDeviceProc(lua_State* L)
{
  (void)L;
  struct DevProc * dp = _lua_gen_checkDevProc(L, 1);
  FreeDeviceProc(dp);
  return 0;
}

static int
_lua_LockDosList(lua_State* L)
{
  (void)L;
  ULONG flags = luaL_checkinteger(L, 1);
  struct DosList * _result = LockDosList(flags);
  _lua_gen_pushDosList(L, _result);
  return 1;
}

static int
_lua_UnLockDosList(lua_State* L)
{
  (void)L;
  ULONG flags = luaL_checkinteger(L, 1);
  UnLockDosList(flags);
  return 0;
}

static int
_lua_AttemptLockDosList(lua_State* L)
{
  (void)L;
  ULONG flags = luaL_checkinteger(L, 1);
  struct DosList * _result = AttemptLockDosList(flags);
  _lua_gen_pushDosList(L, _result);
  return 1;
}

static int
_lua_RemDosEntry(lua_State* L)
{
  (void)L;
  struct DosList * dlist = _lua_gen_checkDosList(L, 1);
  BOOL _result = RemDosEntry(dlist);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_AddDosEntry(lua_State* L)
{
  (void)L;
  struct DosList * dlist = _lua_gen_checkDosList(L, 1);
  LONG _result = AddDosEntry(dlist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NextDosEntry(lua_State* L)
{
  (void)L;
  const struct DosList * dlist = _lua_gen_checkDosList(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  struct DosList * _result = NextDosEntry(dlist, flags);
  _lua_gen_pushDosList(L, _result);
  return 1;
}

static int
_lua_MakeDosEntry(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG type = luaL_checkinteger(L, 2);
  struct DosList * _result = MakeDosEntry(name, type);
  _lua_gen_pushDosList(L, _result);
  return 1;
}

static int
_lua_FreeDosEntry(lua_State* L)
{
  (void)L;
  struct DosList * dlist = _lua_gen_checkDosList(L, 1);
  FreeDosEntry(dlist);
  return 0;
}

static int
_lua_IsFileSystem(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BOOL _result = IsFileSystem(name);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_Format(lua_State* L)
{
  (void)L;
  CONST_STRPTR filesystem = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR volumename = amiga_checkConstNullableString(L, 2);
  ULONG dostype = luaL_checkinteger(L, 3);
  BOOL _result = Format(filesystem, volumename, dostype);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_Relabel(lua_State* L)
{
  (void)L;
  CONST_STRPTR drive = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR newname = amiga_checkConstNullableString(L, 2);
  LONG _result = Relabel(drive, newname);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Inhibit(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG onoff = luaL_checkinteger(L, 2);
  LONG _result = Inhibit(name, onoff);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AddBuffers(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG number = luaL_checkinteger(L, 2);
  LONG _result = AddBuffers(name, number);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CompareDates(lua_State* L)
{
  (void)L;
  const struct DateStamp * date1 = _lua_gen_checkDateStamp(L, 1);
  const struct DateStamp * date2 = _lua_gen_checkDateStamp(L, 2);
  LONG _result = CompareDates(date1, date2);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DateToStr(lua_State* L)
{
  (void)L;
  struct DateTime * datetime = _lua_gen_checkDateTime(L, 1);
  LONG _result = DateToStr(datetime);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_StrToDate(lua_State* L)
{
  (void)L;
  struct DateTime * datetime = _lua_gen_checkDateTime(L, 1);
  LONG _result = StrToDate(datetime);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NewLoadSeg(lua_State* L)
{
  (void)L;
  CONST_STRPTR file = amiga_checkConstNullableString(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  BPTR _result = NewLoadSeg(file, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NewLoadSegTagList(lua_State* L)
{
  (void)L;
  CONST_STRPTR file = amiga_checkConstNullableString(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  BPTR _result = NewLoadSegTagList(file, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NewLoadSegTags(lua_State* L)
{
  (void)L;
  CONST_STRPTR file = amiga_checkConstNullableString(L, 1);
  ULONG tag1type = luaL_checkinteger(L, 2);
  BPTR _result = NewLoadSegTags(file, tag1type);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_AddSegment(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  BPTR seg = luaL_checkinteger(L, 2);
  LONG system = luaL_checkinteger(L, 3);
  LONG _result = AddSegment(name, seg, system);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_RemSegment(lua_State* L)
{
  (void)L;
  struct Segment * seg = _lua_gen_checkSegment(L, 1);
  LONG _result = RemSegment(seg);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CheckSignal(lua_State* L)
{
  (void)L;
  LONG mask = luaL_checkinteger(L, 1);
  LONG _result = CheckSignal(mask);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FindArg(lua_State* L)
{
  (void)L;
  CONST_STRPTR keyword = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR arg_template = amiga_checkConstNullableString(L, 2);
  LONG _result = FindArg(keyword, arg_template);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_StrToLong(lua_State* L)
{
  (void)L;
  CONST_STRPTR string = amiga_checkConstNullableString(L, 1);
  LONG * value = lua_touserdata(L, 2);
  LONG _result = StrToLong(string, value);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MatchFirst(lua_State* L)
{
  (void)L;
  CONST_STRPTR pat = amiga_checkConstNullableString(L, 1);
  struct AnchorPath * anchor = _lua_gen_checkAnchorPath(L, 2);
  LONG _result = MatchFirst(pat, anchor);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MatchNext(lua_State* L)
{
  (void)L;
  struct AnchorPath * anchor = _lua_gen_checkAnchorPath(L, 1);
  LONG _result = MatchNext(anchor);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MatchEnd(lua_State* L)
{
  (void)L;
  struct AnchorPath * anchor = _lua_gen_checkAnchorPath(L, 1);
  MatchEnd(anchor);
  return 0;
}

static int
_lua_ParsePattern(lua_State* L)
{
  (void)L;
  CONST_STRPTR pat = amiga_checkConstNullableString(L, 1);
  UBYTE * patbuf = lua_touserdata(L, 2);
  LONG patbuflen = luaL_checkinteger(L, 3);
  LONG _result = ParsePattern(pat, patbuf, patbuflen);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MatchPattern(lua_State* L)
{
  (void)L;
  const UBYTE * patbuf = lua_touserdata(L, 1);
  CONST_STRPTR str = amiga_checkConstNullableString(L, 2);
  BOOL _result = MatchPattern(patbuf, str);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_FreeArgs(lua_State* L)
{
  (void)L;
  struct RDArgs * args = _lua_gen_checkRDArgs(L, 1);
  FreeArgs(args);
  return 0;
}

static int
_lua_FilePart(lua_State* L)
{
  (void)L;
  CONST_STRPTR path = amiga_checkConstNullableString(L, 1);
  STRPTR _result = FilePart(path);
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_PathPart(lua_State* L)
{
  (void)L;
  CONST_STRPTR path = amiga_checkConstNullableString(L, 1);
  STRPTR _result = PathPart(path);
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_AddPart(lua_State* L)
{
  (void)L;
  STRPTR dirname = amiga_checkNullableString(L, 1);
  CONST_STRPTR filename = amiga_checkConstNullableString(L, 2);
  ULONG size = luaL_checkinteger(L, 3);
  BOOL _result = AddPart(dirname, filename, size);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_StartNotify(lua_State* L)
{
  (void)L;
  struct NotifyRequest * notify = _lua_gen_checkNotifyRequest(L, 1);
  BOOL _result = StartNotify(notify);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_EndNotify(lua_State* L)
{
  (void)L;
  struct NotifyRequest * notify = _lua_gen_checkNotifyRequest(L, 1);
  EndNotify(notify);
  return 0;
}

static int
_lua_SetVar(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  CONST_STRPTR buffer = amiga_checkConstNullableString(L, 2);
  LONG size = luaL_checkinteger(L, 3);
  LONG flags = luaL_checkinteger(L, 4);
  BOOL _result = SetVar(name, buffer, size, flags);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GetVar(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  STRPTR buffer = amiga_checkNullableString(L, 2);
  LONG size = luaL_checkinteger(L, 3);
  LONG flags = luaL_checkinteger(L, 4);
  LONG _result = GetVar(name, buffer, size, flags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DeleteVar(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  LONG _result = DeleteVar(name, flags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_FindVar(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  ULONG type = luaL_checkinteger(L, 2);
  struct LocalVar * _result = FindVar(name, type);
  _lua_gen_pushLocalVar(L, _result);
  return 1;
}

static int
_lua_CliInitNewcli(lua_State* L)
{
  (void)L;
  struct DosPacket * dp = _lua_gen_checkDosPacket(L, 1);
  LONG _result = CliInitNewcli(dp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_CliInitRun(lua_State* L)
{
  (void)L;
  struct DosPacket * dp = _lua_gen_checkDosPacket(L, 1);
  LONG _result = CliInitRun(dp);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WriteChars(lua_State* L)
{
  (void)L;
  CONST_STRPTR buf = amiga_checkConstNullableString(L, 1);
  ULONG buflen = luaL_checkinteger(L, 2);
  LONG _result = WriteChars(buf, buflen);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_PutStr(lua_State* L)
{
  (void)L;
  CONST_STRPTR str = amiga_checkConstNullableString(L, 1);
  LONG _result = PutStr(str);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_VPrintf(lua_State* L)
{
  (void)L;
  CONST_STRPTR format = amiga_checkConstNullableString(L, 1);
  CONST_APTR argarray = lua_touserdata(L, 2);
  LONG _result = VPrintf(format, argarray);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_Printf(lua_State* L)
{
  (void)L;
  CONST_STRPTR format = amiga_checkConstNullableString(L, 1);
  LONG _result = Printf(format);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ParsePatternNoCase(lua_State* L)
{
  (void)L;
  CONST_STRPTR pat = amiga_checkConstNullableString(L, 1);
  UBYTE * patbuf = lua_touserdata(L, 2);
  LONG patbuflen = luaL_checkinteger(L, 3);
  LONG _result = ParsePatternNoCase(pat, patbuf, patbuflen);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_MatchPatternNoCase(lua_State* L)
{
  (void)L;
  const UBYTE * patbuf = lua_touserdata(L, 1);
  CONST_STRPTR str = amiga_checkConstNullableString(L, 2);
  BOOL _result = MatchPatternNoCase(patbuf, str);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SameDevice(lua_State* L)
{
  (void)L;
  BPTR lock1 = luaL_checkinteger(L, 1);
  BPTR lock2 = luaL_checkinteger(L, 2);
  BOOL _result = SameDevice(lock1, lock2);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetOwner(lua_State* L)
{
  (void)L;
  CONST_STRPTR name = amiga_checkConstNullableString(L, 1);
  LONG owner_info = luaL_checkinteger(L, 2);
  BOOL _result = SetOwner(name, owner_info);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_VolumeRequestHook(lua_State* L)
{
  (void)L;
  CONST_STRPTR vol = amiga_checkConstNullableString(L, 1);
  LONG _result = VolumeRequestHook(vol);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetCurrentDir(lua_State* L)
{
  (void)L;
  BPTR _result = GetCurrentDir();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_PutErrStr(lua_State* L)
{
  (void)L;
  CONST_STRPTR str = amiga_checkConstNullableString(L, 1);
  LONG _result = PutErrStr(str);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ErrorOutput(lua_State* L)
{
  (void)L;
  LONG _result = ErrorOutput();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SelectError(lua_State* L)
{
  (void)L;
  BPTR fh = luaL_checkinteger(L, 1);
  LONG _result = SelectError(fh);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_DoShellMethodTagList(lua_State* L)
{
  (void)L;
  ULONG method = luaL_checkinteger(L, 1);
  const struct TagItem * tags = _lua_gen_checkTagItem(L, 2);
  APTR _result = DoShellMethodTagList(method, tags);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_DoShellMethod(lua_State* L)
{
  (void)L;
  ULONG method = luaL_checkinteger(L, 1);
  ULONG tag1type = luaL_checkinteger(L, 2);
  APTR _result = DoShellMethod(method, tag1type);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_ScanStackToken(lua_State* L)
{
  (void)L;
  BPTR seg = luaL_checkinteger(L, 1);
  LONG defaultstack = luaL_checkinteger(L, 2);
  LONG _result = ScanStackToken(seg, defaultstack);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_gen_GadgetInfo_newindex(lua_State *L)
{
  struct GadgetInfo *obj = *(struct GadgetInfo **)luaL_checkudata(L, 1, "GadgetInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "gi_Screen") == 0) {
    // finder 1
    obj->gi_Screen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "gi_Window") == 0) {
    // finder 1
    obj->gi_Window = *(struct Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "gi_Requester") == 0) {
    // finder 1
    obj->gi_Requester = *(struct Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "gi_RastPort") == 0) {
    // finder 1
    obj->gi_RastPort = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "gi_Layer") == 0) {
    // finder 1
    obj->gi_Layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "gi_DrInfo") == 0) {
    // finder 1
    obj->gi_DrInfo = *(struct DrawInfo **)luaL_checkudata(L, 3, "DrawInfo");
    return 0;
  }
  return 0;
}


static int
_lua_GadgetInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-struct GadgetInfo in userdata
  struct GadgetInfo **objp = lua_newuserdata(L, sizeof(struct GadgetInfo *));
  *objp = malloc(sizeof(struct GadgetInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct GadgetInfo));

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
  struct GadgetInfo *obj = *(struct GadgetInfo **)luaL_checkudata(L, 1, "GadgetInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "gi_Screen") == 0) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = (struct Screen*)obj->gi_Screen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_Window") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->gi_Window;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_Requester") == 0) {
    struct Requester **ud = (struct Requester **)lua_newuserdata(L, sizeof(struct Requester *));
    *ud = (struct Requester*)obj->gi_Requester;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_RastPort") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)obj->gi_RastPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "gi_Layer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->gi_Layer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping gi_Domain struct IBox
// skipping gi_Pens struct (unnamed struct at /usr/local/amiga/bebbo/m68k-amigaos/ndk-include/intuition/cghooks.h:49:5)
  if (strcmp(key, "gi_DrInfo") == 0) {
    struct DrawInfo **ud = (struct DrawInfo **)lua_newuserdata(L, sizeof(struct DrawInfo *));
    *ud = (struct DrawInfo*)obj->gi_DrInfo;
    luaL_getmetatable(L, "DrawInfo");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping gi_Reserved ULONG[6]
  return 0;
}

static void
_lua_gen_GadgetInfo_install_keys(lua_State *L)
{
  lua_newtable(L);
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
_lua_gen_IClass_newindex(lua_State *L)
{
  struct IClass *obj = *(struct IClass **)luaL_checkudata(L, 1, "IClass");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cl_Dispatcher") == 0) {
    // finder 0
    struct Hook *val = *(struct Hook **)luaL_checkudata(L, 3, "Hook");
    obj->cl_Dispatcher = *val;
    return 0;
  }
  if (strcmp(key, "cl_Reserved") == 0) {
    obj->cl_Reserved = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cl_Super") == 0) {
    // finder 1
    obj->cl_Super = *(struct IClass **)luaL_checkudata(L, 3, "IClass");
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
  // Allocate pointer-to-struct IClass in userdata
  struct IClass **objp = lua_newuserdata(L, sizeof(struct IClass *));
  *objp = malloc(sizeof(struct IClass));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct IClass));

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
  struct IClass *obj = *(struct IClass **)luaL_checkudata(L, 1, "IClass");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cl_Dispatcher") == 0) {
    struct Hook **ud = (struct Hook **)lua_newuserdata(L, sizeof(struct Hook *));
    *ud = (struct Hook*)&obj->cl_Dispatcher;
    luaL_getmetatable(L, "Hook");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "cl_Reserved") == 0) {
    lua_pushinteger(L, obj->cl_Reserved);
    return 1;
  }
  if (strcmp(key, "cl_Super") == 0) {
    struct IClass **ud = (struct IClass **)lua_newuserdata(L, sizeof(struct IClass *));
    *ud = (struct IClass*)obj->cl_Super;
    luaL_getmetatable(L, "IClass");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping cl_ID ClassID
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
  lua_pushstring(L, "cl_Reserved");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "cl_InstOffset");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "cl_InstSize");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "cl_UserData");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "cl_SubclassCount");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "cl_ObjectCount");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "cl_Flags");
  lua_rawseti(L, -2, 7);
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
_lua_gen_Rectangle_newindex(lua_State *L)
{
  struct Rectangle *obj = *(struct Rectangle **)luaL_checkudata(L, 1, "Rectangle");
  const char *key = luaL_checkstring(L, 2);
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
_lua_gen_BitMap_newindex(lua_State *L)
{
  struct BitMap *obj = *(struct BitMap **)luaL_checkudata(L, 1, "BitMap");
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
// skipping Planes PLANEPTR[8]
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
_lua_gen_CopList_newindex(lua_State *L)
{
  struct CopList *obj = *(struct CopList **)luaL_checkudata(L, 1, "CopList");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    // finder 1
    obj->Next = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    return 0;
  }
  if (strcmp(key, "_CopList") == 0) {
    // finder 1
    obj->_CopList = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    return 0;
  }
  if (strcmp(key, "_ViewPort") == 0) {
    // finder 1
    obj->_ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
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
// skipping CopIns struct CopIns*
// skipping CopPtr struct CopIns*
// skipping CopLStart UWORD*
// skipping CopSStart UWORD*
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
  if (strcmp(key, "Next") == 0) {
    // finder 1
    obj->Next = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
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
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Next") == 0) {
    struct cprlist **ud = (struct cprlist **)lua_newuserdata(L, sizeof(struct cprlist *));
    *ud = (struct cprlist*)obj->Next;
    luaL_getmetatable(L, "cprlist");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping start UWORD*
  if (strcmp(key, "MaxCount") == 0) {
    lua_pushinteger(L, obj->MaxCount);
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
  if (strcmp(key, "Next") == 0) {
    // finder 1
    obj->Next = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    return 0;
  }
  if (strcmp(key, "ColorMap") == 0) {
    // finder 1
    obj->ColorMap = *(struct ColorMap **)luaL_checkudata(L, 3, "ColorMap");
    return 0;
  }
  if (strcmp(key, "DspIns") == 0) {
    // finder 1
    obj->DspIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    return 0;
  }
  if (strcmp(key, "SprIns") == 0) {
    // finder 1
    obj->SprIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    return 0;
  }
  if (strcmp(key, "ClrIns") == 0) {
    // finder 1
    obj->ClrIns = *(struct CopList **)luaL_checkudata(L, 3, "CopList");
    return 0;
  }
  if (strcmp(key, "UCopIns") == 0) {
    obj->UCopIns = (struct UCopList*)lua_touserdata(L, 3);
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
// skipping RasInfo struct RasInfo*
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

static int
_lua_gen_View_newindex(lua_State *L)
{
  struct View *obj = *(struct View **)luaL_checkudata(L, 1, "View");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ViewPort") == 0) {
    // finder 1
    obj->ViewPort = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    return 0;
  }
  if (strcmp(key, "LOFCprList") == 0) {
    // finder 1
    obj->LOFCprList = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
    return 0;
  }
  if (strcmp(key, "SHFCprList") == 0) {
    // finder 1
    obj->SHFCprList = *(struct cprlist **)luaL_checkudata(L, 3, "cprlist");
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

static int
_lua_gen_Custom_newindex(lua_State *L)
{
  struct Custom *obj = *(struct Custom **)luaL_checkudata(L, 1, "Custom");
  const char *key = luaL_checkstring(L, 2);
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
    _amiga_push_u16array_proxy(L, obj->pad34, 4);
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
    _amiga_push_u16array_proxy(L, obj->pad3b, 3);
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
// skipping aud struct AudChannel[4]
// skipping bplpt APTR[8]
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
    _amiga_push_u16array_proxy(L, obj->bpldat, 8);
    return 1;
  }
// skipping sprpt APTR[8]
// skipping spr struct SpriteDef[8]
  if (strcmp(key, "color") == 0) {
    _amiga_push_u16array_proxy(L, obj->color, 32);
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
    _amiga_push_u16array_proxy(L, obj->padf3, 11);
    return 1;
  }
  if (strcmp(key, "fmode") == 0) {
    lua_pushinteger(L, obj->fmode);
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
  lua_pushstring(L, "bltcdat");
  lua_rawseti(L, -2, 49);
  lua_pushstring(L, "bltbdat");
  lua_rawseti(L, -2, 50);
  lua_pushstring(L, "bltadat");
  lua_rawseti(L, -2, 51);
  lua_pushstring(L, "deniseid");
  lua_rawseti(L, -2, 52);
  lua_pushstring(L, "dsksync");
  lua_rawseti(L, -2, 53);
  lua_pushstring(L, "cop1lc");
  lua_rawseti(L, -2, 54);
  lua_pushstring(L, "cop2lc");
  lua_rawseti(L, -2, 55);
  lua_pushstring(L, "copjmp1");
  lua_rawseti(L, -2, 56);
  lua_pushstring(L, "copjmp2");
  lua_rawseti(L, -2, 57);
  lua_pushstring(L, "copins");
  lua_rawseti(L, -2, 58);
  lua_pushstring(L, "diwstrt");
  lua_rawseti(L, -2, 59);
  lua_pushstring(L, "diwstop");
  lua_rawseti(L, -2, 60);
  lua_pushstring(L, "ddfstrt");
  lua_rawseti(L, -2, 61);
  lua_pushstring(L, "ddfstop");
  lua_rawseti(L, -2, 62);
  lua_pushstring(L, "dmacon");
  lua_rawseti(L, -2, 63);
  lua_pushstring(L, "clxcon");
  lua_rawseti(L, -2, 64);
  lua_pushstring(L, "intena");
  lua_rawseti(L, -2, 65);
  lua_pushstring(L, "intreq");
  lua_rawseti(L, -2, 66);
  lua_pushstring(L, "adkcon");
  lua_rawseti(L, -2, 67);
  lua_pushstring(L, "bplcon0");
  lua_rawseti(L, -2, 68);
  lua_pushstring(L, "bplcon1");
  lua_rawseti(L, -2, 69);
  lua_pushstring(L, "bplcon2");
  lua_rawseti(L, -2, 70);
  lua_pushstring(L, "bplcon3");
  lua_rawseti(L, -2, 71);
  lua_pushstring(L, "bpl1mod");
  lua_rawseti(L, -2, 72);
  lua_pushstring(L, "bpl2mod");
  lua_rawseti(L, -2, 73);
  lua_pushstring(L, "bplcon4");
  lua_rawseti(L, -2, 74);
  lua_pushstring(L, "clxcon2");
  lua_rawseti(L, -2, 75);
  lua_pushstring(L, "htotal");
  lua_rawseti(L, -2, 76);
  lua_pushstring(L, "hsstop");
  lua_rawseti(L, -2, 77);
  lua_pushstring(L, "hbstrt");
  lua_rawseti(L, -2, 78);
  lua_pushstring(L, "hbstop");
  lua_rawseti(L, -2, 79);
  lua_pushstring(L, "vtotal");
  lua_rawseti(L, -2, 80);
  lua_pushstring(L, "vsstop");
  lua_rawseti(L, -2, 81);
  lua_pushstring(L, "vbstrt");
  lua_rawseti(L, -2, 82);
  lua_pushstring(L, "vbstop");
  lua_rawseti(L, -2, 83);
  lua_pushstring(L, "sprhstrt");
  lua_rawseti(L, -2, 84);
  lua_pushstring(L, "sprhstop");
  lua_rawseti(L, -2, 85);
  lua_pushstring(L, "bplhstrt");
  lua_rawseti(L, -2, 86);
  lua_pushstring(L, "bplhstop");
  lua_rawseti(L, -2, 87);
  lua_pushstring(L, "hhposw");
  lua_rawseti(L, -2, 88);
  lua_pushstring(L, "hhposr");
  lua_rawseti(L, -2, 89);
  lua_pushstring(L, "beamcon0");
  lua_rawseti(L, -2, 90);
  lua_pushstring(L, "hsstrt");
  lua_rawseti(L, -2, 91);
  lua_pushstring(L, "vsstrt");
  lua_rawseti(L, -2, 92);
  lua_pushstring(L, "hcenter");
  lua_rawseti(L, -2, 93);
  lua_pushstring(L, "diwhigh");
  lua_rawseti(L, -2, 94);
  lua_pushstring(L, "fmode");
  lua_rawseti(L, -2, 95);
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
_lua_gen_ColorMap_newindex(lua_State *L)
{
  struct ColorMap *obj = *(struct ColorMap **)luaL_checkudata(L, 1, "ColorMap");
  const char *key = luaL_checkstring(L, 2);
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
    obj->cm_vp = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
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
    obj->cm_batch_items = *(struct TagItem **)luaL_checkudata(L, 3, "TagItem");
    return 0;
  }
  if (strcmp(key, "VPModeID") == 0) {
    obj->VPModeID = (ULONG)luaL_checkinteger(L, 3);
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
// skipping cm_vpe struct ViewPortExtra*
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
// skipping PalExtra struct PaletteExtra*
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
  if (strcmp(key, "ms_OpenCount") == 0) {
    obj->ms_OpenCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_xoffset") == 0) {
    obj->ms_xoffset = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_yoffset") == 0) {
    obj->ms_yoffset = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ms_LegalView") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->ms_LegalView = *val;
    return 0;
  }
  if (strcmp(key, "DeniseMinDisplayColumn") == 0) {
    obj->DeniseMinDisplayColumn = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayCompatible") == 0) {
    obj->DisplayCompatible = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    // finder 0
    struct List *val = *(struct List **)luaL_checkudata(L, 3, "List");
    obj->DisplayInfoDataBase = *val;
    return 0;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->DisplayInfoDataBaseSemaphore = *val;
    return 0;
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
  const char *key = luaL_checkstring(L, 2);
// skipping ms_Node struct ExtendedNode
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
// skipping ms_Special struct SpecialMonitor*
  if (strcmp(key, "ms_OpenCount") == 0) {
    lua_pushinteger(L, obj->ms_OpenCount);
    return 1;
  }
// skipping ms_transform LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
// skipping ms_translate LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
// skipping ms_scale LONG (*)(struct MonitorSpec *, Point *, UWORD, Point *)
  if (strcmp(key, "ms_xoffset") == 0) {
    lua_pushinteger(L, obj->ms_xoffset);
    return 1;
  }
  if (strcmp(key, "ms_yoffset") == 0) {
    lua_pushinteger(L, obj->ms_yoffset);
    return 1;
  }
  if (strcmp(key, "ms_LegalView") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->ms_LegalView;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ms_maxoscan LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG)
// skipping ms_videoscan LONG (*)(struct MonitorSpec *, struct Rectangle *, ULONG)
  if (strcmp(key, "DeniseMinDisplayColumn") == 0) {
    lua_pushinteger(L, obj->DeniseMinDisplayColumn);
    return 1;
  }
  if (strcmp(key, "DisplayCompatible") == 0) {
    lua_pushinteger(L, obj->DisplayCompatible);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBase") == 0) {
    struct List **ud = (struct List **)lua_newuserdata(L, sizeof(struct List *));
    *ud = (struct List*)&obj->DisplayInfoDataBase;
    luaL_getmetatable(L, "List");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DisplayInfoDataBaseSemaphore") == 0) {
    struct SignalSemaphore **ud = (struct SignalSemaphore **)lua_newuserdata(L, sizeof(struct SignalSemaphore *));
    *ud = (struct SignalSemaphore*)&obj->DisplayInfoDataBaseSemaphore;
    luaL_getmetatable(L, "SignalSemaphore");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ms_MrgCop LONG (*)(struct View *)
// skipping ms_LoadView LONG (*)(struct View *)
// skipping ms_KillView LONG (*)(struct MonitorSpec *)
  return 0;
}

static void
_lua_gen_MonitorSpec_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ms_Flags");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "ratioh");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "ratiov");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "total_rows");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "total_colorclocks");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "DeniseMaxDisplayColumn");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "BeamCon0");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "min_row");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ms_OpenCount");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "ms_transform");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "ms_translate");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "ms_scale");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "ms_xoffset");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "ms_yoffset");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "ms_maxoscan");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "ms_videoscan");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "DeniseMinDisplayColumn");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "DisplayCompatible");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "ms_MrgCop");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "ms_LoadView");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "ms_KillView");
  lua_rawseti(L, -2, 21);
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
_lua_gen_DBufInfo_newindex(lua_State *L)
{
  struct DBufInfo *obj = *(struct DBufInfo **)luaL_checkudata(L, 1, "DBufInfo");
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
  lua_pushstring(L, "dbi_UserData1");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dbi_Link2");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dbi_Count2");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dbi_UserData2");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dbi_MatchLong");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dbi_CopPtr1");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dbi_CopPtr2");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dbi_CopPtr3");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "dbi_BeamPos1");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "dbi_BeamPos2");
  lua_rawseti(L, -2, 12);
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
_lua_gen_AnimOb_newindex(lua_State *L)
{
  struct AnimOb *obj = *(struct AnimOb **)luaL_checkudata(L, 1, "AnimOb");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextOb") == 0) {
    // finder 1
    obj->NextOb = *(struct AnimOb **)luaL_checkudata(L, 3, "AnimOb");
    return 0;
  }
  if (strcmp(key, "PrevOb") == 0) {
    // finder 1
    obj->PrevOb = *(struct AnimOb **)luaL_checkudata(L, 3, "AnimOb");
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
// skipping AnimORoutine WORD (*)(struct AnimOb *)
// skipping HeadComp struct AnimComp*
  if (strcmp(key, "AUserExt") == 0) {
    lua_pushinteger(L, obj->AUserExt);
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
_lua_gen_BitScaleArgs_newindex(lua_State *L)
{
  struct BitScaleArgs *obj = *(struct BitScaleArgs **)luaL_checkudata(L, 1, "BitScaleArgs");
  const char *key = luaL_checkstring(L, 2);
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
    obj->bsa_SrcBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "bsa_DestBitMap") == 0) {
    // finder 1
    obj->bsa_DestBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
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
  if (strcmp(key, "Flags") == 0) {
    obj->Flags = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "Before") == 0) {
    // finder 1
    obj->Before = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    return 0;
  }
  if (strcmp(key, "After") == 0) {
    // finder 1
    obj->After = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
    return 0;
  }
  if (strcmp(key, "BobVSprite") == 0) {
    // finder 1
    obj->BobVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
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
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Flags") == 0) {
    lua_pushinteger(L, obj->Flags);
    return 1;
  }
// skipping SaveBuffer WORD*
// skipping ImageShadow WORD*
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
// skipping BobComp struct AnimComp*
// skipping DBuffer struct DBufPacket*
  if (strcmp(key, "BUserExt") == 0) {
    lua_pushinteger(L, obj->BUserExt);
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
_lua_gen_DrawInfo_newindex(lua_State *L)
{
  struct DrawInfo *obj = *(struct DrawInfo **)luaL_checkudata(L, 1, "DrawInfo");
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
    obj->dri_Font = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
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
    obj->dri_CheckMark = *(struct Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  if (strcmp(key, "dri_AmigaKey") == 0) {
    // finder 1
    obj->dri_AmigaKey = *(struct Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  if (strcmp(key, "dri_Screen") == 0) {
    // finder 1
    obj->dri_Screen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  return 0;
}


static int
_lua_DrawInfo_constructor(lua_State *L)
{
  // Allocate pointer-to-struct DrawInfo in userdata
  struct DrawInfo **objp = lua_newuserdata(L, sizeof(struct DrawInfo *));
  *objp = malloc(sizeof(struct DrawInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct DrawInfo));

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
  struct DrawInfo *obj = *(struct DrawInfo **)luaL_checkudata(L, 1, "DrawInfo");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dri_Version") == 0) {
    lua_pushinteger(L, obj->dri_Version);
    return 1;
  }
  if (strcmp(key, "dri_NumPens") == 0) {
    lua_pushinteger(L, obj->dri_NumPens);
    return 1;
  }
// skipping dri_Pens UWORD*
  if (strcmp(key, "dri_Font") == 0) {
    struct TextFont **ud = (struct TextFont **)lua_newuserdata(L, sizeof(struct TextFont *));
    *ud = (struct TextFont*)obj->dri_Font;
    luaL_getmetatable(L, "TextFont");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_Depth") == 0) {
    lua_pushinteger(L, obj->dri_Depth);
    return 1;
  }
// skipping dri_Resolution struct (unnamed struct at /usr/local/amiga/bebbo/m68k-amigaos/ndk-include/intuition/screens.h:76:5)
  if (strcmp(key, "dri_Flags") == 0) {
    lua_pushinteger(L, obj->dri_Flags);
    return 1;
  }
  if (strcmp(key, "dri_CheckMark") == 0) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->dri_CheckMark;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_AmigaKey") == 0) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->dri_AmigaKey;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dri_Screen") == 0) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = (struct Screen*)obj->dri_Screen;
    luaL_getmetatable(L, "Screen");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping dri_Reserved ULONG[4]
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
  lua_pushstring(L, "dri_Depth");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dri_Flags");
  lua_rawseti(L, -2, 5);
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
_lua_gen_Gadget_newindex(lua_State *L)
{
  struct Gadget *obj = *(struct Gadget **)luaL_checkudata(L, 1, "Gadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextGadget") == 0) {
    // finder 1
    obj->NextGadget = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
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
    obj->GadgetText = *(struct IntuiText **)luaL_checkudata(L, 3, "IntuiText");
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
  // Allocate pointer-to-struct Gadget in userdata
  struct Gadget **objp = lua_newuserdata(L, sizeof(struct Gadget *));
  *objp = malloc(sizeof(struct Gadget));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Gadget));

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
  struct Gadget *obj = *(struct Gadget **)luaL_checkudata(L, 1, "Gadget");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextGadget") == 0) {
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->NextGadget;
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
    struct IntuiText **ud = (struct IntuiText **)lua_newuserdata(L, sizeof(struct IntuiText *));
    *ud = (struct IntuiText*)obj->GadgetText;
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
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "Activation");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "GadgetType");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "GadgetRender");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "SelectRender");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "MutualExclude");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "SpecialInfo");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "GadgetID");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 13);
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
_lua_gen_Image_newindex(lua_State *L)
{
  struct Image *obj = *(struct Image **)luaL_checkudata(L, 1, "Image");
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
    obj->NextImage = *(struct Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  return 0;
}


static int
_lua_Image_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Image in userdata
  struct Image **objp = lua_newuserdata(L, sizeof(struct Image *));
  *objp = malloc(sizeof(struct Image));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Image));

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
  struct Image *obj = *(struct Image **)luaL_checkudata(L, 1, "Image");
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
// skipping ImageData UWORD*
  if (strcmp(key, "PlanePick") == 0) {
    lua_pushinteger(L, obj->PlanePick);
    return 1;
  }
  if (strcmp(key, "PlaneOnOff") == 0) {
    lua_pushinteger(L, obj->PlaneOnOff);
    return 1;
  }
  if (strcmp(key, "NextImage") == 0) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->NextImage;
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
_lua_gen_InputEvent_newindex(lua_State *L)
{
  struct InputEvent *obj = *(struct InputEvent **)luaL_checkudata(L, 1, "InputEvent");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ie_NextEvent") == 0) {
    // finder 1
    obj->ie_NextEvent = *(struct InputEvent **)luaL_checkudata(L, 3, "InputEvent");
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
// skipping ie_position union (unnamed union at /usr/local/amiga/bebbo/m68k-amigaos/ndk-include/devices/inputevent.h:262:5)
// skipping ie_TimeStamp TimeVal_Type
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping is_Code void (*)()
  return 0;
}

static void
_lua_gen_Interrupt_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "is_Data");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "is_Code");
  lua_rawseti(L, -2, 2);
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
_lua_gen_IntuiText_newindex(lua_State *L)
{
  struct IntuiText *obj = *(struct IntuiText **)luaL_checkudata(L, 1, "IntuiText");
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
    obj->ITextFont = *(struct TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "IText") == 0) {
    obj->IText = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "NextText") == 0) {
    // finder 1
    obj->NextText = *(struct IntuiText **)luaL_checkudata(L, 3, "IntuiText");
    return 0;
  }
  return 0;
}


static int
_lua_IntuiText_constructor(lua_State *L)
{
  // Allocate pointer-to-struct IntuiText in userdata
  struct IntuiText **objp = lua_newuserdata(L, sizeof(struct IntuiText *));
  *objp = malloc(sizeof(struct IntuiText));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct IntuiText));

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
  struct IntuiText *obj = *(struct IntuiText **)luaL_checkudata(L, 1, "IntuiText");
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
    struct TextAttr **ud = (struct TextAttr **)lua_newuserdata(L, sizeof(struct TextAttr *));
    *ud = (struct TextAttr*)obj->ITextFont;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "IText") == 0) {
    lua_pushstring(L, obj->IText);
    return 1;
  }
  if (strcmp(key, "NextText") == 0) {
    struct IntuiText **ud = (struct IntuiText **)lua_newuserdata(L, sizeof(struct IntuiText *));
    *ud = (struct IntuiText*)obj->NextText;
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
  lua_pushstring(L, "IText");
  lua_rawseti(L, -2, 6);
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
_lua_gen_Layer_newindex(lua_State *L)
{
  struct Layer *obj = *(struct Layer **)luaL_checkudata(L, 1, "Layer");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "front") == 0) {
    // finder 1
    obj->front = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "back") == 0) {
    // finder 1
    obj->back = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "rp") == 0) {
    // finder 1
    obj->rp = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
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
    obj->nlink = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
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
    obj->SuperBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
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
  if (strcmp(key, "Lock") == 0) {
    // finder 0
    struct SignalSemaphore *val = *(struct SignalSemaphore **)luaL_checkudata(L, 3, "SignalSemaphore");
    obj->Lock = *val;
    return 0;
  }
  if (strcmp(key, "BackFill") == 0) {
    // finder 1
    obj->BackFill = *(struct Hook **)luaL_checkudata(L, 3, "Hook");
    return 0;
  }
  if (strcmp(key, "reserved1") == 0) {
    obj->reserved1 = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ClipRegion") == 0) {
    // finder 1
    obj->ClipRegion = *(struct Region **)luaL_checkudata(L, 3, "Region");
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
  if (strcmp(key, "DamageList") == 0) {
    // finder 1
    obj->DamageList = *(struct Region **)luaL_checkudata(L, 3, "Region");
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
// skipping ClipRect struct ClipRect*
  if (strcmp(key, "rp") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)obj->rp;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
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
// skipping SuperClipRect struct ClipRect*
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
// skipping OnScreen struct ClipRect*
// skipping OffScreen struct ClipRect*
// skipping Backup struct ClipRect*
// skipping SuperSaveClipRects struct ClipRect*
// skipping Undamaged struct ClipRect*
// skipping LayerInfo struct Layer_Info*
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
// skipping clipped struct ClipRect*
  if (strcmp(key, "Width") == 0) {
    lua_pushinteger(L, obj->Width);
    return 1;
  }
  if (strcmp(key, "Height") == 0) {
    lua_pushinteger(L, obj->Height);
    return 1;
  }
// skipping reserved2 UBYTE[18]
  if (strcmp(key, "DamageList") == 0) {
    struct Region **ud = (struct Region **)lua_newuserdata(L, sizeof(struct Region *));
    *ud = (struct Region*)obj->DamageList;
    luaL_getmetatable(L, "Region");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_Layer_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "priority");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Window");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Scroll_X");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Scroll_Y");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "reserved1");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 8);
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
_lua_gen_MemHeader_newindex(lua_State *L)
{
  struct MemHeader *obj = *(struct MemHeader **)luaL_checkudata(L, 1, "MemHeader");
  const char *key = luaL_checkstring(L, 2);
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping mh_First struct MemChunk*
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
  return 0;
}

static void
_lua_gen_MemHeader_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "mh_Attributes");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "mh_Lower");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "mh_Upper");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "mh_Free");
  lua_rawseti(L, -2, 4);
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
  const char *key = luaL_checkstring(L, 2);
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
// skipping ml_ME struct MemEntry[1]
  return 0;
}

static void
_lua_gen_MemList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "ml_NumEntries");
  lua_rawseti(L, -2, 1);
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
_lua_gen_Menu_newindex(lua_State *L)
{
  struct Menu *obj = *(struct Menu **)luaL_checkudata(L, 1, "Menu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextMenu") == 0) {
    // finder 1
    obj->NextMenu = *(struct Menu **)luaL_checkudata(L, 3, "Menu");
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
    obj->FirstItem = *(struct MenuItem **)luaL_checkudata(L, 3, "MenuItem");
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
  // Allocate pointer-to-struct Menu in userdata
  struct Menu **objp = lua_newuserdata(L, sizeof(struct Menu *));
  *objp = malloc(sizeof(struct Menu));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Menu));

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
  struct Menu *obj = *(struct Menu **)luaL_checkudata(L, 1, "Menu");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextMenu") == 0) {
    struct Menu **ud = (struct Menu **)lua_newuserdata(L, sizeof(struct Menu *));
    *ud = (struct Menu*)obj->NextMenu;
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
    struct MenuItem **ud = (struct MenuItem **)lua_newuserdata(L, sizeof(struct MenuItem *));
    *ud = (struct MenuItem*)obj->FirstItem;
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
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MenuName");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "JazzX");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "JazzY");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "BeatX");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "BeatY");
  lua_rawseti(L, -2, 10);
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
  struct MenuItem *obj = *(struct MenuItem **)luaL_checkudata(L, 1, "MenuItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextItem") == 0) {
    // finder 1
    obj->NextItem = *(struct MenuItem **)luaL_checkudata(L, 3, "MenuItem");
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
    obj->SubItem = *(struct MenuItem **)luaL_checkudata(L, 3, "MenuItem");
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
  // Allocate pointer-to-struct MenuItem in userdata
  struct MenuItem **objp = lua_newuserdata(L, sizeof(struct MenuItem *));
  *objp = malloc(sizeof(struct MenuItem));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct MenuItem));

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
  struct MenuItem *obj = *(struct MenuItem **)luaL_checkudata(L, 1, "MenuItem");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "NextItem") == 0) {
    struct MenuItem **ud = (struct MenuItem **)lua_newuserdata(L, sizeof(struct MenuItem *));
    *ud = (struct MenuItem*)obj->NextItem;
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
    struct MenuItem **ud = (struct MenuItem **)lua_newuserdata(L, sizeof(struct MenuItem *));
    *ud = (struct MenuItem*)obj->SubItem;
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
  lua_pushstring(L, "LeftEdge");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "TopEdge");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Width");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "Height");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MutualExclude");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ItemFill");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "SelectFill");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "Command");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "NextSelect");
  lua_rawseti(L, -2, 10);
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
_lua_gen_NewGadget_newindex(lua_State *L)
{
  struct NewGadget *obj = *(struct NewGadget **)luaL_checkudata(L, 1, "NewGadget");
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
    obj->ng_TextAttr = *(struct TextAttr **)luaL_checkudata(L, 3, "TextAttr");
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
  // Allocate pointer-to-struct NewGadget in userdata
  struct NewGadget **objp = lua_newuserdata(L, sizeof(struct NewGadget *));
  *objp = malloc(sizeof(struct NewGadget));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct NewGadget));

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
  struct NewGadget *obj = *(struct NewGadget **)luaL_checkudata(L, 1, "NewGadget");
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
    struct TextAttr **ud = (struct TextAttr **)lua_newuserdata(L, sizeof(struct TextAttr *));
    *ud = (struct TextAttr*)obj->ng_TextAttr;
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
  lua_pushstring(L, "ng_GadgetID");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ng_Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ng_VisualInfo");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ng_UserData");
  lua_rawseti(L, -2, 9);
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
_lua_gen_NewMenu_newindex(lua_State *L)
{
  struct NewMenu *obj = *(struct NewMenu **)luaL_checkudata(L, 1, "NewMenu");
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
  // Allocate pointer-to-struct NewMenu in userdata
  struct NewMenu **objp = lua_newuserdata(L, sizeof(struct NewMenu *));
  *objp = malloc(sizeof(struct NewMenu));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct NewMenu));

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
  struct NewMenu *obj = *(struct NewMenu **)luaL_checkudata(L, 1, "NewMenu");
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
_lua_gen_NewScreen_newindex(lua_State *L)
{
  struct NewScreen *obj = *(struct NewScreen **)luaL_checkudata(L, 1, "NewScreen");
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
    obj->Font = *(struct TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    obj->DefaultTitle = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "Gadgets") == 0) {
    // finder 1
    obj->Gadgets = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "CustomBitMap") == 0) {
    // finder 1
    obj->CustomBitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  return 0;
}


static int
_lua_NewScreen_constructor(lua_State *L)
{
  // Allocate pointer-to-struct NewScreen in userdata
  struct NewScreen **objp = lua_newuserdata(L, sizeof(struct NewScreen *));
  *objp = malloc(sizeof(struct NewScreen));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct NewScreen));

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
  struct NewScreen *obj = *(struct NewScreen **)luaL_checkudata(L, 1, "NewScreen");
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
    struct TextAttr **ud = (struct TextAttr **)lua_newuserdata(L, sizeof(struct TextAttr *));
    *ud = (struct TextAttr*)obj->Font;
    luaL_getmetatable(L, "TextAttr");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DefaultTitle") == 0) {
    lua_pushstring(L, obj->DefaultTitle);
    return 1;
  }
  if (strcmp(key, "Gadgets") == 0) {
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->Gadgets;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CustomBitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->CustomBitMap;
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
  lua_pushstring(L, "DefaultTitle");
  lua_rawseti(L, -2, 10);
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
_lua_gen_NewWindow_newindex(lua_State *L)
{
  struct NewWindow *obj = *(struct NewWindow **)luaL_checkudata(L, 1, "NewWindow");
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
    obj->FirstGadget = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "CheckMark") == 0) {
    // finder 1
    obj->CheckMark = *(struct Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "Screen") == 0) {
    // finder 1
    obj->Screen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    obj->BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
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
  // Allocate pointer-to-struct NewWindow in userdata
  struct NewWindow **objp = lua_newuserdata(L, sizeof(struct NewWindow *));
  *objp = malloc(sizeof(struct NewWindow));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct NewWindow));

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
  struct NewWindow *obj = *(struct NewWindow **)luaL_checkudata(L, 1, "NewWindow");
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
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->FirstGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "CheckMark") == 0) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->CheckMark;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  if (strcmp(key, "Screen") == 0) {
    struct Screen **ud = (struct Screen **)lua_newuserdata(L, sizeof(struct Screen *));
    *ud = (struct Screen*)obj->Screen;
    luaL_getmetatable(L, "Screen");
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
  lua_pushstring(L, "Title");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "MinWidth");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "MinHeight");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "MaxWidth");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "MaxHeight");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "Type");
  lua_rawseti(L, -2, 14);
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
_lua_gen_RastPort_newindex(lua_State *L)
{
  struct RastPort *obj = *(struct RastPort **)luaL_checkudata(L, 1, "RastPort");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "Layer") == 0) {
    // finder 1
    obj->Layer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 1
    obj->BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "TmpRas") == 0) {
    // finder 1
    obj->TmpRas = *(struct TmpRas **)luaL_checkudata(L, 3, "TmpRas");
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
    obj->Font = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
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
// skipping AreaPtrn UWORD*
  if (strcmp(key, "TmpRas") == 0) {
    struct TmpRas **ud = (struct TmpRas **)lua_newuserdata(L, sizeof(struct TmpRas *));
    *ud = (struct TmpRas*)obj->TmpRas;
    luaL_getmetatable(L, "TmpRas");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping AreaInfo struct AreaInfo*
// skipping GelsInfo struct GelsInfo*
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
// skipping minterms UBYTE[8]
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
// skipping RP_User APTR*
// skipping longreserved ULONG[2]
  if (strcmp(key, "wordreserved") == 0) {
    _amiga_push_u16array_proxy(L, obj->wordreserved, 7);
    return 1;
  }
// skipping reserved UBYTE[8]
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
  if (strcmp(key, "bounds") == 0) {
    // finder 0
    struct Rectangle *val = *(struct Rectangle **)luaL_checkudata(L, 3, "Rectangle");
    obj->bounds = *val;
    return 0;
  }
  if (strcmp(key, "RegionRectangle") == 0) {
    // finder 1
    obj->RegionRectangle = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_Region_install_keys(lua_State *L)
{
  lua_newtable(L);
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
_lua_gen_Requester_newindex(lua_State *L)
{
  struct Requester *obj = *(struct Requester **)luaL_checkudata(L, 1, "Requester");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "OlderRequest") == 0) {
    // finder 1
    obj->OlderRequest = *(struct Requester **)luaL_checkudata(L, 3, "Requester");
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
    obj->ReqGadget = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "ReqText") == 0) {
    // finder 1
    obj->ReqText = *(struct IntuiText **)luaL_checkudata(L, 3, "IntuiText");
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
  if (strcmp(key, "ReqLayer") == 0) {
    // finder 1
    obj->ReqLayer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "ImageBMap") == 0) {
    // finder 1
    obj->ImageBMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "RWindow") == 0) {
    // finder 1
    obj->RWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "ReqImage") == 0) {
    // finder 1
    obj->ReqImage = *(struct Image **)luaL_checkudata(L, 3, "Image");
    return 0;
  }
  return 0;
}


static int
_lua_Requester_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Requester in userdata
  struct Requester **objp = lua_newuserdata(L, sizeof(struct Requester *));
  *objp = malloc(sizeof(struct Requester));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Requester));

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
  struct Requester *obj = *(struct Requester **)luaL_checkudata(L, 1, "Requester");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "OlderRequest") == 0) {
    struct Requester **ud = (struct Requester **)lua_newuserdata(L, sizeof(struct Requester *));
    *ud = (struct Requester*)obj->OlderRequest;
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
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->ReqGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ReqBorder struct Border*
  if (strcmp(key, "ReqText") == 0) {
    struct IntuiText **ud = (struct IntuiText **)lua_newuserdata(L, sizeof(struct IntuiText *));
    *ud = (struct IntuiText*)obj->ReqText;
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
  if (strcmp(key, "ReqLayer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->ReqLayer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ReqPad1 UBYTE[32]
  if (strcmp(key, "ImageBMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->ImageBMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RWindow") == 0) {
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->RWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ReqImage") == 0) {
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->ReqImage;
    luaL_getmetatable(L, "Image");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ReqPad2 UBYTE[32]
  return 0;
}

static void
_lua_gen_Requester_install_keys(lua_State *L)
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
  lua_pushstring(L, "RelLeft");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "RelTop");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Flags");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "BackFill");
  lua_rawseti(L, -2, 8);
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
_lua_gen_Resident_newindex(lua_State *L)
{
  struct Resident *obj = *(struct Resident **)luaL_checkudata(L, 1, "Resident");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "rt_MatchWord") == 0) {
    obj->rt_MatchWord = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "rt_MatchTag") == 0) {
    // finder 1
    obj->rt_MatchTag = *(struct Resident **)luaL_checkudata(L, 3, "Resident");
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
// skipping rt_Name char*
// skipping rt_IdString char*
  if (strcmp(key, "rt_Init") == 0) {
    lua_pushlightuserdata(L, obj->rt_Init);
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
  lua_pushstring(L, "rt_Init");
  lua_rawseti(L, -2, 7);
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
  if (strcmp(key, "NextScreen") == 0) {
    // finder 1
    obj->NextScreen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "FirstWindow") == 0) {
    // finder 1
    obj->FirstWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
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
    obj->Font = *(struct TextAttr **)luaL_checkudata(L, 3, "TextAttr");
    return 0;
  }
  if (strcmp(key, "ViewPort") == 0) {
    // finder 0
    struct ViewPort *val = *(struct ViewPort **)luaL_checkudata(L, 3, "ViewPort");
    obj->ViewPort = *val;
    return 0;
  }
  if (strcmp(key, "RastPort") == 0) {
    // finder 0
    struct RastPort *val = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    obj->RastPort = *val;
    return 0;
  }
  if (strcmp(key, "BitMap") == 0) {
    // finder 0
    struct BitMap *val = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    obj->BitMap = *val;
    return 0;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    // finder 1
    obj->FirstGadget = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
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
  if (strcmp(key, "BarLayer") == 0) {
    // finder 1
    obj->BarLayer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
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
  if (strcmp(key, "ViewPort") == 0) {
    struct ViewPort **ud = (struct ViewPort **)lua_newuserdata(L, sizeof(struct ViewPort *));
    *ud = (struct ViewPort*)&obj->ViewPort;
    luaL_getmetatable(L, "ViewPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "RastPort") == 0) {
    struct RastPort **ud = (struct RastPort **)lua_newuserdata(L, sizeof(struct RastPort *));
    *ud = (struct RastPort*)&obj->RastPort;
    luaL_getmetatable(L, "RastPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)&obj->BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping LayerInfo struct Layer_Info
  if (strcmp(key, "FirstGadget") == 0) {
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->FirstGadget;
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
  if (strcmp(key, "BarLayer") == 0) {
    struct Layer **ud = (struct Layer **)lua_newuserdata(L, sizeof(struct Layer *));
    *ud = (struct Layer*)obj->BarLayer;
    luaL_getmetatable(L, "Layer");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping ExtData UBYTE*
// skipping UserData UBYTE*
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
  lua_pushstring(L, "DetailPen");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "BlockPen");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "SaveColor0");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "ExtData");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "UserData");
  lua_rawseti(L, -2, 23);
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
  const char *key = luaL_checkstring(L, 2);
// skipping posctldata UWORD*
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
_lua_gen_TextFont_newindex(lua_State *L)
{
  struct TextFont *obj = *(struct TextFont **)luaL_checkudata(L, 1, "TextFont");
  const char *key = luaL_checkstring(L, 2);
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_TextFont_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "tf_YSize");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "tf_Style");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "tf_Flags");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "tf_XSize");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "tf_Baseline");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "tf_BoldSmear");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "tf_Accessors");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "tf_LoChar");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "tf_HiChar");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "tf_CharData");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "tf_Modulo");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "tf_CharLoc");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "tf_CharSpace");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "tf_CharKern");
  lua_rawseti(L, -2, 14);
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
  if (strcmp(key, "NextVSprite") == 0) {
    // finder 1
    obj->NextVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    return 0;
  }
  if (strcmp(key, "PrevVSprite") == 0) {
    // finder 1
    obj->PrevVSprite = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    return 0;
  }
  if (strcmp(key, "DrawPath") == 0) {
    // finder 1
    obj->DrawPath = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
    return 0;
  }
  if (strcmp(key, "ClearPath") == 0) {
    // finder 1
    obj->ClearPath = *(struct VSprite **)luaL_checkudata(L, 3, "VSprite");
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
  if (strcmp(key, "VSBob") == 0) {
    // finder 1
    obj->VSBob = *(struct Bob **)luaL_checkudata(L, 3, "Bob");
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
// skipping ImageData WORD*
// skipping BorderLine WORD*
// skipping CollMask WORD*
// skipping SprColors WORD*
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
  if (strcmp(key, "NextWindow") == 0) {
    // finder 1
    obj->NextWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
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
    obj->MenuStrip = *(struct Menu **)luaL_checkudata(L, 3, "Menu");
    return 0;
  }
  if (strcmp(key, "Title") == 0) {
    obj->Title = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "FirstRequest") == 0) {
    // finder 1
    obj->FirstRequest = *(struct Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "DMRequest") == 0) {
    // finder 1
    obj->DMRequest = *(struct Requester **)luaL_checkudata(L, 3, "Requester");
    return 0;
  }
  if (strcmp(key, "ReqCount") == 0) {
    obj->ReqCount = (WORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "WScreen") == 0) {
    // finder 1
    obj->WScreen = *(struct Screen **)luaL_checkudata(L, 3, "Screen");
    return 0;
  }
  if (strcmp(key, "RPort") == 0) {
    // finder 1
    obj->RPort = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
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
    obj->BorderRPort = *(struct RastPort **)luaL_checkudata(L, 3, "RastPort");
    return 0;
  }
  if (strcmp(key, "FirstGadget") == 0) {
    // finder 1
    obj->FirstGadget = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
    return 0;
  }
  if (strcmp(key, "Parent") == 0) {
    // finder 1
    obj->Parent = *(struct Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "Descendant") == 0) {
    // finder 1
    obj->Descendant = *(struct Window **)luaL_checkudata(L, 3, "Window");
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
    obj->UserPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "WindowPort") == 0) {
    // finder 1
    obj->WindowPort = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    return 0;
  }
  if (strcmp(key, "MessageKey") == 0) {
    // finder 1
    obj->MessageKey = *(struct IntuiMessage **)luaL_checkudata(L, 3, "IntuiMessage");
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
    obj->CheckMark = *(struct Image **)luaL_checkudata(L, 3, "Image");
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
  if (strcmp(key, "WLayer") == 0) {
    // finder 1
    obj->WLayer = *(struct Layer **)luaL_checkudata(L, 3, "Layer");
    return 0;
  }
  if (strcmp(key, "IFont") == 0) {
    // finder 1
    obj->IFont = *(struct TextFont **)luaL_checkudata(L, 3, "TextFont");
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
  if (strcmp(key, "MenuStrip") == 0) {
    struct Menu **ud = (struct Menu **)lua_newuserdata(L, sizeof(struct Menu *));
    *ud = (struct Menu*)obj->MenuStrip;
    luaL_getmetatable(L, "Menu");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "Title") == 0) {
    lua_pushstring(L, obj->Title);
    return 1;
  }
  if (strcmp(key, "FirstRequest") == 0) {
    struct Requester **ud = (struct Requester **)lua_newuserdata(L, sizeof(struct Requester *));
    *ud = (struct Requester*)obj->FirstRequest;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "DMRequest") == 0) {
    struct Requester **ud = (struct Requester **)lua_newuserdata(L, sizeof(struct Requester *));
    *ud = (struct Requester*)obj->DMRequest;
    luaL_getmetatable(L, "Requester");
    lua_setmetatable(L, -2);
    return 1;
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
  if (strcmp(key, "FirstGadget") == 0) {
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->FirstGadget;
    luaL_getmetatable(L, "Gadget");
    lua_setmetatable(L, -2);
    return 1;
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
// skipping Pointer UWORD*
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
  if (strcmp(key, "MessageKey") == 0) {
    struct IntuiMessage **ud = (struct IntuiMessage **)lua_newuserdata(L, sizeof(struct IntuiMessage *));
    *ud = (struct IntuiMessage*)obj->MessageKey;
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
    struct Image **ud = (struct Image **)lua_newuserdata(L, sizeof(struct Image *));
    *ud = (struct Image*)obj->CheckMark;
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
// skipping ExtData UBYTE*
// skipping UserData BYTE*
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
  if (strcmp(key, "n") == 0) {
    // finder 1
    obj->n = *(struct bltnode **)luaL_checkudata(L, 3, "bltnode");
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
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "n") == 0) {
    struct bltnode **ud = (struct bltnode **)lua_newuserdata(L, sizeof(struct bltnode *));
    *ud = (struct bltnode*)obj->n;
    luaL_getmetatable(L, "bltnode");
    lua_setmetatable(L, -2);
    return 1;
  }
// skipping function int (*)()
// skipping stat char
  if (strcmp(key, "blitsize") == 0) {
    lua_pushinteger(L, obj->blitsize);
    return 1;
  }
  if (strcmp(key, "beamsync") == 0) {
    lua_pushinteger(L, obj->beamsync);
    return 1;
  }
// skipping cleanup int (*)()
  return 0;
}

static void
_lua_gen_bltnode_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "function");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "blitsize");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "beamsync");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "cleanup");
  lua_rawseti(L, -2, 4);
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
  if (strcmp(key, "Next") == 0) {
    // finder 1
    obj->Next = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
    return 0;
  }
  if (strcmp(key, "Prev") == 0) {
    // finder 1
    obj->Prev = *(struct RegionRectangle **)luaL_checkudata(L, 3, "RegionRectangle");
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
  if (strcmp(key, "bounds") == 0) {
    struct Rectangle **ud = (struct Rectangle **)lua_newuserdata(L, sizeof(struct Rectangle *));
    *ud = (struct Rectangle*)&obj->bounds;
    luaL_getmetatable(L, "Rectangle");
    lua_setmetatable(L, -2);
    return 1;
  }
  return 0;
}

static void
_lua_gen_RegionRectangle_install_keys(lua_State *L)
{
  lua_newtable(L);
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
_lua_gen_TmpRas_newindex(lua_State *L)
{
  struct TmpRas *obj = *(struct TmpRas **)luaL_checkudata(L, 1, "TmpRas");
  const char *key = luaL_checkstring(L, 2);
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
  const char *key = luaL_checkstring(L, 2);
// skipping RasPtr BYTE*
  if (strcmp(key, "Size") == 0) {
    lua_pushinteger(L, obj->Size);
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
  const char *key = luaL_checkstring(L, 2);
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
  return 0;
}

static void
_lua_gen_ExtSprite_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "es_wordwidth");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "es_flags");
  lua_rawseti(L, -2, 2);
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
    _amiga_doTagList(L, _tags, countof(_tags), 2);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
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
    _amiga_doTagList(L, _tags, countof(_tags), 5);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 5);
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
    _amiga_doTagList(L, _tags, countof(_tags), 2);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
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
    _amiga_doTagList(L, _tags, countof(_tags), 2);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
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
    _amiga_doTagList(L, _tags, countof(_tags), 4);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 4);
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
    _amiga_doTagList(L, _tags, countof(_tags), 2);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
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
    _amiga_doTagList(L, _tags, countof(_tags), 2);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  GetRPAttrsA(rp,  taglist);
  return 0;
}

static int
_lua_BestModeIDA(lua_State* L)
{
  struct TagItem* tags = NULL;
  if (!lua_isnoneornil(L, 1)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 1);
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
  _amiga_readVarTags(L, taglist, countof(taglist), 1);
  ULONG _result = BestModeIDA( taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_gen_StringInfo_newindex(lua_State *L)
{
  struct StringInfo *obj = *(struct StringInfo **)luaL_checkudata(L, 1, "StringInfo");
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
  // Allocate pointer-to-struct StringInfo in userdata
  struct StringInfo **objp = lua_newuserdata(L, sizeof(struct StringInfo *));
  *objp = malloc(sizeof(struct StringInfo));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct StringInfo));

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
  struct StringInfo *obj = *(struct StringInfo **)luaL_checkudata(L, 1, "StringInfo");
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
// skipping Extension struct StringExtend*
  if (strcmp(key, "LongInt") == 0) {
    lua_pushinteger(L, obj->LongInt);
    return 1;
  }
// skipping AltKeyMap struct KeyMap*
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
_lua_gen_IntuiMessage_newindex(lua_State *L)
{
  struct IntuiMessage *obj = *(struct IntuiMessage **)luaL_checkudata(L, 1, "IntuiMessage");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ExecMessage") == 0) {
    // finder 0
    struct Message *val = *(struct Message **)luaL_checkudata(L, 3, "Message");
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
    obj->IDCMPWindow = *(struct Window **)luaL_checkudata(L, 3, "Window");
    return 0;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    // finder 1
    obj->SpecialLink = *(struct IntuiMessage **)luaL_checkudata(L, 3, "IntuiMessage");
    return 0;
  }
  return 0;
}


static int
_lua_IntuiMessage_constructor(lua_State *L)
{
  // Allocate pointer-to-struct IntuiMessage in userdata
  struct IntuiMessage **objp = lua_newuserdata(L, sizeof(struct IntuiMessage *));
  *objp = malloc(sizeof(struct IntuiMessage));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct IntuiMessage));

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
  struct IntuiMessage *obj = *(struct IntuiMessage **)luaL_checkudata(L, 1, "IntuiMessage");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ExecMessage") == 0) {
    struct Message **ud = (struct Message **)lua_newuserdata(L, sizeof(struct Message *));
    *ud = (struct Message*)&obj->ExecMessage;
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
    struct Window **ud = (struct Window **)lua_newuserdata(L, sizeof(struct Window *));
    *ud = (struct Window*)obj->IDCMPWindow;
    luaL_getmetatable(L, "Window");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "SpecialLink") == 0) {
    struct IntuiMessage **ud = (struct IntuiMessage **)lua_newuserdata(L, sizeof(struct IntuiMessage *));
    *ud = (struct IntuiMessage*)obj->SpecialLink;
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
  lua_pushstring(L, "Class");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "Code");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "Qualifier");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "IAddress");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "MouseX");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "MouseY");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "Seconds");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "Micros");
  lua_rawseti(L, -2, 8);
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
_lua_gen_ScreenBuffer_newindex(lua_State *L)
{
  struct ScreenBuffer *obj = *(struct ScreenBuffer **)luaL_checkudata(L, 1, "ScreenBuffer");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sb_BitMap") == 0) {
    // finder 1
    obj->sb_BitMap = *(struct BitMap **)luaL_checkudata(L, 3, "BitMap");
    return 0;
  }
  if (strcmp(key, "sb_DBufInfo") == 0) {
    // finder 1
    obj->sb_DBufInfo = *(struct DBufInfo **)luaL_checkudata(L, 3, "DBufInfo");
    return 0;
  }
  return 0;
}


static int
_lua_ScreenBuffer_constructor(lua_State *L)
{
  // Allocate pointer-to-struct ScreenBuffer in userdata
  struct ScreenBuffer **objp = lua_newuserdata(L, sizeof(struct ScreenBuffer *));
  *objp = malloc(sizeof(struct ScreenBuffer));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct ScreenBuffer));

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
  struct ScreenBuffer *obj = *(struct ScreenBuffer **)luaL_checkudata(L, 1, "ScreenBuffer");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "sb_BitMap") == 0) {
    struct BitMap **ud = (struct BitMap **)lua_newuserdata(L, sizeof(struct BitMap *));
    *ud = (struct BitMap*)obj->sb_BitMap;
    luaL_getmetatable(L, "BitMap");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "sb_DBufInfo") == 0) {
    struct DBufInfo **ud = (struct DBufInfo **)lua_newuserdata(L, sizeof(struct DBufInfo *));
    *ud = (struct DBufInfo*)obj->sb_DBufInfo;
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
  BOOL _result = ClearDMRequest(window);
  lua_pushboolean(L, _result);
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
  BOOL _result = CloseScreen(screen);
  lua_pushboolean(L, _result);
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
  LONG _result = CloseWorkBench();
  lua_pushinteger(L, _result);
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
  BOOL _result = DisplayAlert(alertNumber, string, height);
  lua_pushboolean(L, _result);
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
  struct MenuItem * _result = ItemAddress(menuStrip, menuNumber);
  _lua_gen_pushMenuItem(L, _result);
  return 1;
}

static int
_lua_ModifyIDCMP(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG flags = luaL_checkinteger(L, 2);
  BOOL _result = ModifyIDCMP(window, flags);
  lua_pushboolean(L, _result);
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
  struct Screen * _result = OpenScreen(newScreen);
  _lua_gen_pushScreen(L, _result);
  return 1;
}

static int
_lua_OpenWindow(lua_State* L)
{
  (void)L;
  const struct NewWindow * newWindow = _lua_gen_checkNewWindow(L, 1);
  struct Window * _result = OpenWindow(newWindow);
  _lua_gen_pushWindow(L, _result);
  return 1;
}

static int
_lua_OpenWorkBench(lua_State* L)
{
  (void)L;
  ULONG _result = OpenWorkBench();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_RemoveGadget(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Gadget * gadget = _lua_gen_checkGadget(L, 2);
  UWORD _result = RemoveGadget(window, gadget);
  lua_pushinteger(L, _result);
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
  BOOL _result = Request(requester, window);
  lua_pushboolean(L, _result);
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
  BOOL _result = SetDMRequest(window, requester);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_SetMenuStrip(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Menu * menu = _lua_gen_checkMenu(L, 2);
  BOOL _result = SetMenuStrip(window, menu);
  lua_pushboolean(L, _result);
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
  struct View * _result = ViewAddress();
  _lua_gen_pushView(L, _result);
  return 1;
}

static int
_lua_ViewPortAddress(lua_State* L)
{
  (void)L;
  const struct Window * window = _lua_gen_checkWindow(L, 1);
  struct ViewPort * _result = ViewPortAddress(window);
  _lua_gen_pushViewPort(L, _result);
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
  LONG _result = IntuiTextLength(iText);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_WBenchToBack(lua_State* L)
{
  (void)L;
  BOOL _result = WBenchToBack();
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_WBenchToFront(lua_State* L)
{
  (void)L;
  BOOL _result = WBenchToFront();
  lua_pushboolean(L, _result);
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
  LONG _result = MakeScreen(screen);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_RemakeDisplay(lua_State* L)
{
  (void)L;
  LONG _result = RemakeDisplay();
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_RethinkDisplay(lua_State* L)
{
  (void)L;
  LONG _result = RethinkDisplay();
  lua_pushinteger(L, _result);
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
  ULONG _result = LockIBase(dontknow);
  lua_pushinteger(L, _result);
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
  struct Hook * _result = SetEditHook(hook);
  _lua_gen_pushHook(L, _result);
  return 1;
}

static int
_lua_SetMouseQueue(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  ULONG queueLength = luaL_checkinteger(L, 2);
  LONG _result = SetMouseQueue(window, queueLength);
  lua_pushinteger(L, _result);
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
  struct Screen * _result = LockPubScreen(name);
  _lua_gen_pushScreen(L, _result);
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
  struct List * _result = LockPubScreenList();
  _lua_gen_pushList(L, _result);
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
  STRPTR _result = NextPubScreen(screen, namebuf);
  lua_pushstring(L, _result);
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
  UWORD _result = SetPubScreenModes(modes);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_PubScreenStatus(lua_State* L)
{
  (void)L;
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  ULONG statusFlags = luaL_checkinteger(L, 2);
  UWORD _result = PubScreenStatus(screen, statusFlags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ObtainGIRPort(lua_State* L)
{
  (void)L;
  struct GadgetInfo * gInfo = _lua_gen_checkGadgetInfo(L, 1);
  struct RastPort * _result = ObtainGIRPort(gInfo);
  _lua_gen_pushRastPort(L, _result);
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
  struct Window * _result = OpenWindowTagList(newWindow, tagList);
  _lua_gen_pushWindow(L, _result);
  return 1;
}

static int
_lua_OpenWindowTags(lua_State* L)
{
  const struct NewWindow * newWindow = _lua_gen_checkNewWindow(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct Window * _result = OpenWindowTagList(newWindow,  taglist);
  _lua_gen_pushWindow(L, _result);
  return 1;
}

static int
_lua_OpenScreenTagList(lua_State* L)
{
  const struct NewScreen * newScreen = _lua_gen_checkNewScreen(L, 1);
  struct TagItem* tagList = NULL;
  if (!lua_isnoneornil(L, 2)) {
    struct TagItem _tags[32];
    _amiga_doTagList(L, _tags, countof(_tags), 2);
    tagList = _tags;
  }
  struct Screen * _result = OpenScreenTagList(newScreen, tagList);
  _lua_gen_pushScreen(L, _result);
  return 1;
}

static int
_lua_OpenScreenTags(lua_State* L)
{
  const struct NewScreen * newScreen = _lua_gen_checkNewScreen(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct Screen * _result = OpenScreenTagList(newScreen,  taglist);
  _lua_gen_pushScreen(L, _result);
  return 1;
}

static int
_lua_PointInImage(lua_State* L)
{
  (void)L;
  ULONG point = luaL_checkinteger(L, 1);
  const struct Image * image = _lua_gen_checkImage(L, 2);
  BOOL _result = PointInImage(point, image);
  lua_pushboolean(L, _result);
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
  ULONG _result = SetAttrsA(object, tagList);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetAttrs(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  ULONG _result = SetAttrsA(object,  taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_GetAttr(lua_State* L)
{
  (void)L;
  ULONG attrID = luaL_checkinteger(L, 1);
  APTR object = lua_touserdata(L, 2);
  ULONG * storagePtr = lua_touserdata(L, 3);
  ULONG _result = GetAttr(attrID, object, storagePtr);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_NextObject(lua_State* L)
{
  (void)L;
  CONST_APTR objectPtrPtr = lua_touserdata(L, 1);
  APTR _result = NextObject(objectPtrPtr);
  lua_pushlightuserdata(L, _result);
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
  struct DrawInfo * _result = GetScreenDrawInfo(screen);
  _lua_gen_pushDrawInfo(L, _result);
  return 1;
}

static int
_lua_ResetMenuStrip(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  struct Menu * menu = _lua_gen_checkMenu(L, 2);
  BOOL _result = ResetMenuStrip(window, menu);
  lua_pushboolean(L, _result);
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
  BOOL _result = FreeClass(classPtr);
  lua_pushboolean(L, _result);
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
  ULONG _result = ChangeScreenBuffer(sc, sb);
  lua_pushinteger(L, _result);
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
  SetWindowPointerA(win,  taglist);
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
  BOOL _result = TimedDisplayAlert(alertNumber, string, height, time);
  lua_pushboolean(L, _result);
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
  BOOL _result = ShowWindow(window, other);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_HideWindow(lua_State* L)
{
  (void)L;
  struct Window * window = _lua_gen_checkWindow(L, 1);
  BOOL _result = HideWindow(window);
  lua_pushboolean(L, _result);
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
  ULONG _result = IntuitionControlA(object, taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_IntuitionControl(lua_State* L)
{
  APTR object = lua_touserdata(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  ULONG _result = IntuitionControlA(object,  taglist);
  lua_pushinteger(L, _result);
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
  struct Gadget * _result = CreateGadgetA(kind, gad, ng, taglist);
  _lua_gen_pushGadget(L, _result);
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
  struct Gadget * _result = CreateGadgetA(kind, gad, ng,  taglist);
  _lua_gen_pushGadget(L, _result);
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
  GT_SetGadgetAttrsA(gad, win, req,  taglist);
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
  struct Menu * _result = CreateMenusA(newmenu, taglist);
  _lua_gen_pushMenu(L, _result);
  return 1;
}

static int
_lua_CreateMenus(lua_State* L)
{
  const struct NewMenu * newmenu = _lua_gen_checkNewMenu(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  struct Menu * _result = CreateMenusA(newmenu,  taglist);
  _lua_gen_pushMenu(L, _result);
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
  BOOL _result = LayoutMenuItemsA(firstitem, vi, taglist);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_LayoutMenuItems(lua_State* L)
{
  struct MenuItem * firstitem = _lua_gen_checkMenuItem(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  BOOL _result = LayoutMenuItemsA(firstitem, vi,  taglist);
  lua_pushboolean(L, _result);
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
  BOOL _result = LayoutMenusA(firstmenu, vi, taglist);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_LayoutMenus(lua_State* L)
{
  struct Menu * firstmenu = _lua_gen_checkMenu(L, 1);
  APTR vi = lua_touserdata(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  BOOL _result = LayoutMenusA(firstmenu, vi,  taglist);
  lua_pushboolean(L, _result);
  return 1;
}

static int
_lua_GT_GetIMsg(lua_State* L)
{
  (void)L;
  struct MsgPort * iport = _lua_gen_checkMsgPort(L, 1);
  struct IntuiMessage * _result = GT_GetIMsg(iport);
  _lua_gen_pushIntuiMessage(L, _result);
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
  struct IntuiMessage * _result = GT_FilterIMsg(imsg);
  _lua_gen_pushIntuiMessage(L, _result);
  return 1;
}

static int
_lua_GT_PostFilterIMsg(lua_State* L)
{
  (void)L;
  struct IntuiMessage * imsg = _lua_gen_checkIntuiMessage(L, 1);
  struct IntuiMessage * _result = GT_PostFilterIMsg(imsg);
  _lua_gen_pushIntuiMessage(L, _result);
  return 1;
}

static int
_lua_CreateContext(lua_State* L)
{
  (void)L;
  struct Gadget ** glistptr = amiga_checkGadgetPtr(L, 1);
  struct Gadget * _result = CreateContext(glistptr);
  _lua_gen_pushGadget(L, _result);
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
  DrawBevelBoxA(rport, left, top, width, height,  taglist);
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
  APTR _result = GetVisualInfoA(screen, taglist);
  lua_pushlightuserdata(L, _result);
  return 1;
}

static int
_lua_GetVisualInfo(lua_State* L)
{
  struct Screen * screen = _lua_gen_checkScreen(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  APTR _result = GetVisualInfoA(screen,  taglist);
  lua_pushlightuserdata(L, _result);
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
  LONG _result = SetDesignFontA(vi, tattr, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_SetDesignFont(lua_State* L)
{
  APTR vi = lua_touserdata(L, 1);
  struct TextAttr * tattr = _lua_gen_checkTextAttr(L, 2);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 3);
  LONG _result = SetDesignFontA(vi, tattr,  taglist);
  lua_pushinteger(L, _result);
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
  LONG _result = ScaleGadgetRectA(ng, tags);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_ScaleGadgetRect(lua_State* L)
{
  struct NewGadget * ng = _lua_gen_checkNewGadget(L, 1);
  struct TagItem taglist[64];
  _amiga_readVarTags(L, taglist, countof(taglist), 2);
  LONG _result = ScaleGadgetRectA(ng,  taglist);
  lua_pushinteger(L, _result);
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
  LONG _result = GT_GetGadgetAttrsA(gad, win, req, taglist);
  lua_pushinteger(L, _result);
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
  LONG _result = GT_GetGadgetAttrsA(gad, win, req,  taglist);
  lua_pushinteger(L, _result);
  return 1;
}

static int
_lua_gen_GadgetPtr_newindex(lua_State *L)
{
  GadgetPtr *obj = *(GadgetPtr **)luaL_checkudata(L, 1, "GadgetPtr");
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ptr") == 0) {
    // finder 1
    obj->ptr = *(struct Gadget **)luaL_checkudata(L, 3, "Gadget");
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
    struct Gadget **ud = (struct Gadget **)lua_newuserdata(L, sizeof(struct Gadget *));
    *ud = (struct Gadget*)obj->ptr;
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
  CONST_STRPTR _result = TO_CONST_STRPTR(data);
  lua_pushstring(L, _result);
  return 1;
}

static int
_lua_TO_IntuiMessage(lua_State* L)
{
  (void)L;
  struct Message * msg = _lua_gen_checkMessage(L, 1);
  struct IntuiMessage * _result = TO_IntuiMessage(msg);
  _lua_gen_pushIntuiMessage(L, _result);
  return 1;
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
  lua_pushinteger(L, GADGHIGHBITS);
  lua_setglobal(L, "GADGHIGHBITS");
  lua_pushinteger(L, GADGHCOMP);
  lua_setglobal(L, "GADGHCOMP");
  lua_pushinteger(L, GADGHBOX);
  lua_setglobal(L, "GADGHBOX");
  lua_pushinteger(L, GADGHIMAGE);
  lua_setglobal(L, "GADGHIMAGE");
  lua_pushinteger(L, GADGHNONE);
  lua_setglobal(L, "GADGHNONE");
  lua_pushinteger(L, GADGIMAGE);
  lua_setglobal(L, "GADGIMAGE");
  lua_pushinteger(L, GRELBOTTOM);
  lua_setglobal(L, "GRELBOTTOM");
  lua_pushinteger(L, GRELRIGHT);
  lua_setglobal(L, "GRELRIGHT");
  lua_pushinteger(L, GRELWIDTH);
  lua_setglobal(L, "GRELWIDTH");
  lua_pushinteger(L, GRELHEIGHT);
  lua_setglobal(L, "GRELHEIGHT");
  lua_pushinteger(L, SELECTED);
  lua_setglobal(L, "SELECTED");
  lua_pushinteger(L, GADGDISABLED);
  lua_setglobal(L, "GADGDISABLED");
  lua_pushinteger(L, LABELMASK);
  lua_setglobal(L, "LABELMASK");
  lua_pushinteger(L, LABELITEXT);
  lua_setglobal(L, "LABELITEXT");
  lua_pushinteger(L, LABELSTRING);
  lua_setglobal(L, "LABELSTRING");
  lua_pushinteger(L, LABELIMAGE);
  lua_setglobal(L, "LABELIMAGE");
  lua_pushinteger(L, RELVERIFY);
  lua_setglobal(L, "RELVERIFY");
  lua_pushinteger(L, GADGIMMEDIATE);
  lua_setglobal(L, "GADGIMMEDIATE");
  lua_pushinteger(L, ENDGADGET);
  lua_setglobal(L, "ENDGADGET");
  lua_pushinteger(L, FOLLOWMOUSE);
  lua_setglobal(L, "FOLLOWMOUSE");
  lua_pushinteger(L, RIGHTBORDER);
  lua_setglobal(L, "RIGHTBORDER");
  lua_pushinteger(L, LEFTBORDER);
  lua_setglobal(L, "LEFTBORDER");
  lua_pushinteger(L, TOPBORDER);
  lua_setglobal(L, "TOPBORDER");
  lua_pushinteger(L, BOTTOMBORDER);
  lua_setglobal(L, "BOTTOMBORDER");
  lua_pushinteger(L, BORDERSNIFF);
  lua_setglobal(L, "BORDERSNIFF");
  lua_pushinteger(L, TOGGLESELECT);
  lua_setglobal(L, "TOGGLESELECT");
  lua_pushinteger(L, BOOLEXTEND);
  lua_setglobal(L, "BOOLEXTEND");
  lua_pushinteger(L, STRINGLEFT);
  lua_setglobal(L, "STRINGLEFT");
  lua_pushinteger(L, STRINGCENTER);
  lua_setglobal(L, "STRINGCENTER");
  lua_pushinteger(L, STRINGRIGHT);
  lua_setglobal(L, "STRINGRIGHT");
  lua_pushinteger(L, LONGINT);
  lua_setglobal(L, "LONGINT");
  lua_pushinteger(L, ALTKEYMAP);
  lua_setglobal(L, "ALTKEYMAP");
  lua_pushinteger(L, STRINGEXTEND);
  lua_setglobal(L, "STRINGEXTEND");
  lua_pushinteger(L, ACTIVEGADGET);
  lua_setglobal(L, "ACTIVEGADGET");
  lua_pushinteger(L, GADGETTYPE);
  lua_setglobal(L, "GADGETTYPE");
  lua_pushinteger(L, SYSGADGET);
  lua_setglobal(L, "SYSGADGET");
  lua_pushinteger(L, SCRGADGET);
  lua_setglobal(L, "SCRGADGET");
  lua_pushinteger(L, GZZGADGET);
  lua_setglobal(L, "GZZGADGET");
  lua_pushinteger(L, REQGADGET);
  lua_setglobal(L, "REQGADGET");
  lua_pushinteger(L, SIZING);
  lua_setglobal(L, "SIZING");
  lua_pushinteger(L, WDRAGGING);
  lua_setglobal(L, "WDRAGGING");
  lua_pushinteger(L, SDRAGGING);
  lua_setglobal(L, "SDRAGGING");
  lua_pushinteger(L, WUPFRONT);
  lua_setglobal(L, "WUPFRONT");
  lua_pushinteger(L, SUPFRONT);
  lua_setglobal(L, "SUPFRONT");
  lua_pushinteger(L, WDOWNBACK);
  lua_setglobal(L, "WDOWNBACK");
  lua_pushinteger(L, SDOWNBACK);
  lua_setglobal(L, "SDOWNBACK");
  lua_pushinteger(L, CLOSE);
  lua_setglobal(L, "CLOSE");
  lua_pushinteger(L, BOOLGADGET);
  lua_setglobal(L, "BOOLGADGET");
  lua_pushinteger(L, GADGET0002);
  lua_setglobal(L, "GADGET0002");
  lua_pushinteger(L, PROPGADGET);
  lua_setglobal(L, "PROPGADGET");
  lua_pushinteger(L, STRGADGET);
  lua_setglobal(L, "STRGADGET");
  lua_pushinteger(L, CUSTOMGADGET);
  lua_setglobal(L, "CUSTOMGADGET");
  lua_pushinteger(L, GTYPEMASK);
  lua_setglobal(L, "GTYPEMASK");
  lua_pushinteger(L, SIZEVERIFY);
  lua_setglobal(L, "SIZEVERIFY");
  lua_pushinteger(L, NEWSIZE);
  lua_setglobal(L, "NEWSIZE");
  lua_pushinteger(L, REFRESHWINDOW);
  lua_setglobal(L, "REFRESHWINDOW");
  lua_pushinteger(L, MOUSEBUTTONS);
  lua_setglobal(L, "MOUSEBUTTONS");
  lua_pushinteger(L, MOUSEMOVE);
  lua_setglobal(L, "MOUSEMOVE");
  lua_pushinteger(L, GADGETDOWN);
  lua_setglobal(L, "GADGETDOWN");
  lua_pushinteger(L, GADGETUP);
  lua_setglobal(L, "GADGETUP");
  lua_pushinteger(L, REQSET);
  lua_setglobal(L, "REQSET");
  lua_pushinteger(L, MENUPICK);
  lua_setglobal(L, "MENUPICK");
  lua_pushinteger(L, CLOSEWINDOW);
  lua_setglobal(L, "CLOSEWINDOW");
  lua_pushinteger(L, RAWKEY);
  lua_setglobal(L, "RAWKEY");
  lua_pushinteger(L, REQVERIFY);
  lua_setglobal(L, "REQVERIFY");
  lua_pushinteger(L, REQCLEAR);
  lua_setglobal(L, "REQCLEAR");
  lua_pushinteger(L, MENUVERIFY);
  lua_setglobal(L, "MENUVERIFY");
  lua_pushinteger(L, NEWPREFS);
  lua_setglobal(L, "NEWPREFS");
  lua_pushinteger(L, DISKINSERTED);
  lua_setglobal(L, "DISKINSERTED");
  lua_pushinteger(L, DISKREMOVED);
  lua_setglobal(L, "DISKREMOVED");
  lua_pushinteger(L, WBENCHMESSAGE);
  lua_setglobal(L, "WBENCHMESSAGE");
  lua_pushinteger(L, ACTIVEWINDOW);
  lua_setglobal(L, "ACTIVEWINDOW");
  lua_pushinteger(L, INACTIVEWINDOW);
  lua_setglobal(L, "INACTIVEWINDOW");
  lua_pushinteger(L, DELTAMOVE);
  lua_setglobal(L, "DELTAMOVE");
  lua_pushinteger(L, VANILLAKEY);
  lua_setglobal(L, "VANILLAKEY");
  lua_pushinteger(L, INTUITICKS);
  lua_setglobal(L, "INTUITICKS");
  lua_pushinteger(L, IDCMPUPDATE);
  lua_setglobal(L, "IDCMPUPDATE");
  lua_pushinteger(L, MENUHELP);
  lua_setglobal(L, "MENUHELP");
  lua_pushinteger(L, CHANGEWINDOW);
  lua_setglobal(L, "CHANGEWINDOW");
  lua_pushinteger(L, LONELYMESSAGE);
  lua_setglobal(L, "LONELYMESSAGE");
  lua_pushinteger(L, WINDOWSIZING);
  lua_setglobal(L, "WINDOWSIZING");
  lua_pushinteger(L, WINDOWDRAG);
  lua_setglobal(L, "WINDOWDRAG");
  lua_pushinteger(L, WINDOWDEPTH);
  lua_setglobal(L, "WINDOWDEPTH");
  lua_pushinteger(L, WINDOWCLOSE);
  lua_setglobal(L, "WINDOWCLOSE");
  lua_pushinteger(L, SIZEBRIGHT);
  lua_setglobal(L, "SIZEBRIGHT");
  lua_pushinteger(L, SIZEBBOTTOM);
  lua_setglobal(L, "SIZEBBOTTOM");
  lua_pushinteger(L, REFRESHBITS);
  lua_setglobal(L, "REFRESHBITS");
  lua_pushinteger(L, SMART_REFRESH);
  lua_setglobal(L, "SMART_REFRESH");
  lua_pushinteger(L, SIMPLE_REFRESH);
  lua_setglobal(L, "SIMPLE_REFRESH");
  lua_pushinteger(L, SUPER_BITMAP);
  lua_setglobal(L, "SUPER_BITMAP");
  lua_pushinteger(L, OTHER_REFRESH);
  lua_setglobal(L, "OTHER_REFRESH");
  lua_pushinteger(L, BACKDROP);
  lua_setglobal(L, "BACKDROP");
  lua_pushinteger(L, REPORTMOUSE);
  lua_setglobal(L, "REPORTMOUSE");
  lua_pushinteger(L, GIMMEZEROZERO);
  lua_setglobal(L, "GIMMEZEROZERO");
  lua_pushinteger(L, BORDERLESS);
  lua_setglobal(L, "BORDERLESS");
  lua_pushinteger(L, ACTIVATE);
  lua_setglobal(L, "ACTIVATE");
  lua_pushinteger(L, WINDOWACTIVE);
  lua_setglobal(L, "WINDOWACTIVE");
  lua_pushinteger(L, INREQUEST);
  lua_setglobal(L, "INREQUEST");
  lua_pushinteger(L, MENUSTATE);
  lua_setglobal(L, "MENUSTATE");
  lua_pushinteger(L, RMBTRAP);
  lua_setglobal(L, "RMBTRAP");
  lua_pushinteger(L, NOCAREREFRESH);
  lua_setglobal(L, "NOCAREREFRESH");
  lua_pushinteger(L, WINDOWREFRESH);
  lua_setglobal(L, "WINDOWREFRESH");
  lua_pushinteger(L, WBENCHWINDOW);
  lua_setglobal(L, "WBENCHWINDOW");
  lua_pushinteger(L, WINDOWTICKED);
  lua_setglobal(L, "WINDOWTICKED");
  lua_pushinteger(L, NW_EXTENDED);
  lua_setglobal(L, "NW_EXTENDED");
  lua_pushinteger(L, VISITOR);
  lua_setglobal(L, "VISITOR");
  lua_pushinteger(L, ZOOMED);
  lua_setglobal(L, "ZOOMED");
  lua_pushinteger(L, HASZOOM);
  lua_setglobal(L, "HASZOOM");
  lua_pushinteger(L, GA_LEFT);
  lua_setglobal(L, "GA_LEFT");
  lua_pushinteger(L, GA_RELRIGHT);
  lua_setglobal(L, "GA_RELRIGHT");
  lua_pushinteger(L, GA_TOP);
  lua_setglobal(L, "GA_TOP");
  lua_pushinteger(L, GA_RELBOTTOM);
  lua_setglobal(L, "GA_RELBOTTOM");
  lua_pushinteger(L, GA_WIDTH);
  lua_setglobal(L, "GA_WIDTH");
  lua_pushinteger(L, GA_RELWIDTH);
  lua_setglobal(L, "GA_RELWIDTH");
  lua_pushinteger(L, GA_HEIGHT);
  lua_setglobal(L, "GA_HEIGHT");
  lua_pushinteger(L, GA_RELHEIGHT);
  lua_setglobal(L, "GA_RELHEIGHT");
  lua_pushinteger(L, GA_TEXT);
  lua_setglobal(L, "GA_TEXT");
  lua_pushinteger(L, GA_IMAGE);
  lua_setglobal(L, "GA_IMAGE");
  lua_pushinteger(L, GA_BORDER);
  lua_setglobal(L, "GA_BORDER");
  lua_pushinteger(L, GA_SELECTRENDER);
  lua_setglobal(L, "GA_SELECTRENDER");
  lua_pushinteger(L, GA_HIGHLIGHT);
  lua_setglobal(L, "GA_HIGHLIGHT");
  lua_pushinteger(L, GA_DISABLED);
  lua_setglobal(L, "GA_DISABLED");
  lua_pushinteger(L, GA_GZZGADGET);
  lua_setglobal(L, "GA_GZZGADGET");
  lua_pushinteger(L, GA_USERDATA);
  lua_setglobal(L, "GA_USERDATA");
  lua_pushinteger(L, GA_SPECIALINFO);
  lua_setglobal(L, "GA_SPECIALINFO");
  lua_pushinteger(L, GA_SELECTED);
  lua_setglobal(L, "GA_SELECTED");
  lua_pushinteger(L, GA_ENDGADGET);
  lua_setglobal(L, "GA_ENDGADGET");
  lua_pushinteger(L, GA_IMMEDIATE);
  lua_setglobal(L, "GA_IMMEDIATE");
  lua_pushinteger(L, GA_RELVERIFY);
  lua_setglobal(L, "GA_RELVERIFY");
  lua_pushinteger(L, GA_FOLLOWMOUSE);
  lua_setglobal(L, "GA_FOLLOWMOUSE");
  lua_pushinteger(L, GA_RIGHTBORDER);
  lua_setglobal(L, "GA_RIGHTBORDER");
  lua_pushinteger(L, GA_LEFTBORDER);
  lua_setglobal(L, "GA_LEFTBORDER");
  lua_pushinteger(L, GA_TOPBORDER);
  lua_setglobal(L, "GA_TOPBORDER");
  lua_pushinteger(L, GA_BOTTOMBORDER);
  lua_setglobal(L, "GA_BOTTOMBORDER");
  lua_pushinteger(L, GA_TOGGLESELECT);
  lua_setglobal(L, "GA_TOGGLESELECT");
  lua_pushinteger(L, GA_SYSGADGET);
  lua_setglobal(L, "GA_SYSGADGET");
  lua_pushinteger(L, GA_SYSGTYPE);
  lua_setglobal(L, "GA_SYSGTYPE");
  lua_pushinteger(L, GA_PREVIOUS);
  lua_setglobal(L, "GA_PREVIOUS");
  lua_pushinteger(L, GA_NEXT);
  lua_setglobal(L, "GA_NEXT");
  lua_pushinteger(L, GA_DRAWINFO);
  lua_setglobal(L, "GA_DRAWINFO");
  lua_pushinteger(L, GA_INTUITEXT);
  lua_setglobal(L, "GA_INTUITEXT");
  lua_pushinteger(L, GA_LABELIMAGE);
  lua_setglobal(L, "GA_LABELIMAGE");
  lua_pushinteger(L, PGA_FREEDOM);
  lua_setglobal(L, "PGA_FREEDOM");
  lua_pushinteger(L, PGA_BORDERLESS);
  lua_setglobal(L, "PGA_BORDERLESS");
  lua_pushinteger(L, PGA_HORIZPOT);
  lua_setglobal(L, "PGA_HORIZPOT");
  lua_pushinteger(L, PGA_HORIZBODY);
  lua_setglobal(L, "PGA_HORIZBODY");
  lua_pushinteger(L, PGA_VERTPOT);
  lua_setglobal(L, "PGA_VERTPOT");
  lua_pushinteger(L, PGA_VERTBODY);
  lua_setglobal(L, "PGA_VERTBODY");
  lua_pushinteger(L, PGA_TOTAL);
  lua_setglobal(L, "PGA_TOTAL");
  lua_pushinteger(L, PGA_VISIBLE);
  lua_setglobal(L, "PGA_VISIBLE");
  lua_pushinteger(L, PGA_TOP);
  lua_setglobal(L, "PGA_TOP");
  lua_pushinteger(L, LAYOUTA_LAYOUTOBJ);
  lua_setglobal(L, "LAYOUTA_LAYOUTOBJ");
  lua_pushinteger(L, LAYOUTA_SPACING);
  lua_setglobal(L, "LAYOUTA_SPACING");
  lua_pushinteger(L, LAYOUTA_ORIENTATION);
  lua_setglobal(L, "LAYOUTA_ORIENTATION");
  lua_pushinteger(L, IMAGE_ATTRIBUTES);
  lua_setglobal(L, "IMAGE_ATTRIBUTES");
  lua_pushinteger(L, IA_LEFT);
  lua_setglobal(L, "IA_LEFT");
  lua_pushinteger(L, IA_TOP);
  lua_setglobal(L, "IA_TOP");
  lua_pushinteger(L, IA_WIDTH);
  lua_setglobal(L, "IA_WIDTH");
  lua_pushinteger(L, IA_HEIGHT);
  lua_setglobal(L, "IA_HEIGHT");
  lua_pushinteger(L, IA_FGPEN);
  lua_setglobal(L, "IA_FGPEN");
  lua_pushinteger(L, IA_BGPEN);
  lua_setglobal(L, "IA_BGPEN");
  lua_pushinteger(L, IA_DATA);
  lua_setglobal(L, "IA_DATA");
  lua_pushinteger(L, IA_LINEWIDTH);
  lua_setglobal(L, "IA_LINEWIDTH");
  lua_pushinteger(L, IA_PENS);
  lua_setglobal(L, "IA_PENS");
  lua_pushinteger(L, IA_RESOLUTION);
  lua_setglobal(L, "IA_RESOLUTION");
  lua_pushinteger(L, IA_APATTERN);
  lua_setglobal(L, "IA_APATTERN");
  lua_pushinteger(L, IA_APATSIZE);
  lua_setglobal(L, "IA_APATSIZE");
  lua_pushinteger(L, IA_MODE);
  lua_setglobal(L, "IA_MODE");
  lua_pushinteger(L, IA_FONT);
  lua_setglobal(L, "IA_FONT");
  lua_pushinteger(L, IA_OUTLINE);
  lua_setglobal(L, "IA_OUTLINE");
  lua_pushinteger(L, IA_RECESSED);
  lua_setglobal(L, "IA_RECESSED");
  lua_pushinteger(L, IA_DOUBLEEMBOSS);
  lua_setglobal(L, "IA_DOUBLEEMBOSS");
  lua_pushinteger(L, IA_EDGESONLY);
  lua_setglobal(L, "IA_EDGESONLY");
  lua_pushinteger(L, IA_SHADOWPEN);
  lua_setglobal(L, "IA_SHADOWPEN");
  lua_pushinteger(L, IA_HIGHLIGHTPEN);
  lua_setglobal(L, "IA_HIGHLIGHTPEN");
  lua_pushinteger(L, detailPen);
  lua_setglobal(L, "detailPen");
  lua_pushinteger(L, blockPen);
  lua_setglobal(L, "blockPen");
  lua_pushinteger(L, textPen);
  lua_setglobal(L, "textPen");
  lua_pushinteger(L, shinePen);
  lua_setglobal(L, "shinePen");
  lua_pushinteger(L, shadowPen);
  lua_setglobal(L, "shadowPen");
  lua_pushinteger(L, hifillPen);
  lua_setglobal(L, "hifillPen");
  lua_pushinteger(L, hifilltextPen);
  lua_setglobal(L, "hifilltextPen");
  lua_pushinteger(L, backgroundPen);
  lua_setglobal(L, "backgroundPen");
  lua_pushinteger(L, hilighttextPen);
  lua_setglobal(L, "hilighttextPen");
  lua_pushinteger(L, numDrIPens);
  lua_setglobal(L, "numDrIPens");
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
  _lua_gen_install_meta_SignalSemaphore(L);
  _lua_gen_install_meta_SemaphoreMessage(L);
  _lua_gen_install_meta_IORequest(L);
  _lua_gen_install_meta_Device(L);
  _lua_gen_install_meta_DateStamp(L);
  _lua_gen_install_meta_FileInfoBlock(L);
  _lua_gen_install_meta_InfoData(L);
  _lua_gen_install_meta_Process(L);
  _lua_gen_install_meta_DosPacket(L);
  _lua_gen_install_meta_Segment(L);
  _lua_gen_install_meta_CommandLineInterface(L);
  _lua_gen_install_meta_DosList(L);
  _lua_gen_install_meta_DevProc(L);
  _lua_gen_install_meta_RecordLock(L);
  _lua_gen_install_meta_RDArgs(L);
  _lua_gen_install_meta_AnchorPath(L);
  _lua_gen_install_meta_LocalVar(L);
  _lua_gen_install_meta_NotifyRequest(L);
  _lua_gen_install_meta_DateTime(L);
  _lua_gen_install_meta_Hook(L);
  _lua_gen_install_meta_GadgetInfo(L);
  _lua_gen_install_meta_IClass(L);
  _lua_gen_install_meta_Rectangle(L);
  _lua_gen_install_meta_BitMap(L);
  _lua_gen_install_meta_CopList(L);
  _lua_gen_install_meta_cprlist(L);
  _lua_gen_install_meta_ViewPort(L);
  _lua_gen_install_meta_View(L);
  _lua_gen_install_meta_Custom(L);
  _lua_gen_install_meta_ColorMap(L);
  _lua_gen_install_meta_MonitorSpec(L);
  _lua_gen_install_meta_DBufInfo(L);
  _lua_gen_install_meta_AnimOb(L);
  _lua_gen_install_meta_BitScaleArgs(L);
  _lua_gen_install_meta_Bob(L);
  _lua_gen_install_meta_DrawInfo(L);
  _lua_gen_install_meta_Gadget(L);
  _lua_gen_install_meta_Image(L);
  _lua_gen_install_meta_InputEvent(L);
  _lua_gen_install_meta_Interrupt(L);
  _lua_gen_install_meta_IntuiText(L);
  _lua_gen_install_meta_Layer(L);
  _lua_gen_install_meta_MemHeader(L);
  _lua_gen_install_meta_MemList(L);
  _lua_gen_install_meta_Menu(L);
  _lua_gen_install_meta_MenuItem(L);
  _lua_gen_install_meta_NewGadget(L);
  _lua_gen_install_meta_NewMenu(L);
  _lua_gen_install_meta_NewScreen(L);
  _lua_gen_install_meta_NewWindow(L);
  _lua_gen_install_meta_RastPort(L);
  _lua_gen_install_meta_Region(L);
  _lua_gen_install_meta_Requester(L);
  _lua_gen_install_meta_Resident(L);
  _lua_gen_install_meta_Screen(L);
  _lua_gen_install_meta_SimpleSprite(L);
  _lua_gen_install_meta_TextAttr(L);
  _lua_gen_install_meta_TextFont(L);
  _lua_gen_install_meta_VSprite(L);
  _lua_gen_install_meta_Window(L);
  _lua_gen_install_meta_bltnode(L);
  _lua_gen_install_meta_RegionRectangle(L);
  _lua_gen_install_meta_TmpRas(L);
  _lua_gen_install_meta_ExtSprite(L);
  _lua_gen_install_meta_StringInfo(L);
  _lua_gen_install_meta_IntuiMessage(L);
  _lua_gen_install_meta_ScreenBuffer(L);
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
  lua_register(L, "Close", _lua_Close);
  lua_register(L, "Read", _lua_Read);
  lua_register(L, "Write", _lua_Write);
  lua_register(L, "Input", _lua_Input);
  lua_register(L, "Output", _lua_Output);
  lua_register(L, "Seek", _lua_Seek);
  lua_register(L, "DeleteFile", _lua_DeleteFile);
  lua_register(L, "Rename", _lua_Rename);
  lua_register(L, "Lock", _lua_Lock);
  lua_register(L, "UnLock", _lua_UnLock);
  lua_register(L, "DupLock", _lua_DupLock);
  lua_register(L, "Examine", _lua_Examine);
  lua_register(L, "ExNext", _lua_ExNext);
  lua_register(L, "Info", _lua_Info);
  lua_register(L, "CreateDir", _lua_CreateDir);
  lua_register(L, "CurrentDir", _lua_CurrentDir);
  lua_register(L, "IoErr", _lua_IoErr);
  lua_register(L, "Exit", _lua_Exit);
  lua_register(L, "LoadSeg", _lua_LoadSeg);
  lua_register(L, "UnLoadSeg", _lua_UnLoadSeg);
  lua_register(L, "DeviceProc", _lua_DeviceProc);
  lua_register(L, "SetComment", _lua_SetComment);
  lua_register(L, "SetProtection", _lua_SetProtection);
  lua_register(L, "DateStamp", _lua_DateStamp);
  lua_register(L, "Delay", _lua_Delay);
  lua_register(L, "WaitForChar", _lua_WaitForChar);
  lua_register(L, "ParentDir", _lua_ParentDir);
  lua_register(L, "IsInteractive", _lua_IsInteractive);
  lua_register(L, "Execute", _lua_Execute);
  lua_register(L, "AllocDosObject", _lua_AllocDosObject);
  lua_register(L, "AllocDosObjectTagList", _lua_AllocDosObjectTagList);
  lua_register(L, "AllocDosObjectTags", _lua_AllocDosObjectTags);
  lua_register(L, "FreeDosObject", _lua_FreeDosObject);
  lua_register(L, "DoPkt0", _lua_DoPkt0);
  lua_register(L, "DoPkt1", _lua_DoPkt1);
  lua_register(L, "WaitPkt", _lua_WaitPkt);
  lua_register(L, "ReplyPkt", _lua_ReplyPkt);
  lua_register(L, "AbortPkt", _lua_AbortPkt);
  lua_register(L, "LockRecords", _lua_LockRecords);
  lua_register(L, "UnLockRecord", _lua_UnLockRecord);
  lua_register(L, "UnLockRecords", _lua_UnLockRecords);
  lua_register(L, "SelectInput", _lua_SelectInput);
  lua_register(L, "SelectOutput", _lua_SelectOutput);
  lua_register(L, "FGetC", _lua_FGetC);
  lua_register(L, "FPutC", _lua_FPutC);
  lua_register(L, "UnGetC", _lua_UnGetC);
  lua_register(L, "FRead", _lua_FRead);
  lua_register(L, "FWrite", _lua_FWrite);
  lua_register(L, "FGets", _lua_FGets);
  lua_register(L, "FPuts", _lua_FPuts);
  lua_register(L, "VFWritef", _lua_VFWritef);
  lua_register(L, "FWritef", _lua_FWritef);
  lua_register(L, "VFPrintf", _lua_VFPrintf);
  lua_register(L, "FPrintf", _lua_FPrintf);
  lua_register(L, "Flush", _lua_Flush);
  lua_register(L, "SetVBuf", _lua_SetVBuf);
  lua_register(L, "DupLockFromFH", _lua_DupLockFromFH);
  lua_register(L, "OpenFromLock", _lua_OpenFromLock);
  lua_register(L, "ParentOfFH", _lua_ParentOfFH);
  lua_register(L, "ExamineFH", _lua_ExamineFH);
  lua_register(L, "SetFileDate", _lua_SetFileDate);
  lua_register(L, "NameFromLock", _lua_NameFromLock);
  lua_register(L, "NameFromFH", _lua_NameFromFH);
  lua_register(L, "SameLock", _lua_SameLock);
  lua_register(L, "SetMode", _lua_SetMode);
  lua_register(L, "MakeLink", _lua_MakeLink);
  lua_register(L, "ChangeMode", _lua_ChangeMode);
  lua_register(L, "SetFileSize", _lua_SetFileSize);
  lua_register(L, "SetIoErr", _lua_SetIoErr);
  lua_register(L, "Fault", _lua_Fault);
  lua_register(L, "PrintFault", _lua_PrintFault);
  lua_register(L, "Cli", _lua_Cli);
  lua_register(L, "CreateNewProc", _lua_CreateNewProc);
  lua_register(L, "CreateNewProcTagList", _lua_CreateNewProcTagList);
  lua_register(L, "CreateNewProcTags", _lua_CreateNewProcTags);
  lua_register(L, "GetConsoleTask", _lua_GetConsoleTask);
  lua_register(L, "SetConsoleTask", _lua_SetConsoleTask);
  lua_register(L, "GetFileSysTask", _lua_GetFileSysTask);
  lua_register(L, "SetFileSysTask", _lua_SetFileSysTask);
  lua_register(L, "GetArgStr", _lua_GetArgStr);
  lua_register(L, "SetArgStr", _lua_SetArgStr);
  lua_register(L, "FindCliProc", _lua_FindCliProc);
  lua_register(L, "MaxCli", _lua_MaxCli);
  lua_register(L, "SetCurrentDirName", _lua_SetCurrentDirName);
  lua_register(L, "GetCurrentDirName", _lua_GetCurrentDirName);
  lua_register(L, "SetProgramName", _lua_SetProgramName);
  lua_register(L, "GetProgramName", _lua_GetProgramName);
  lua_register(L, "SetPrompt", _lua_SetPrompt);
  lua_register(L, "GetPrompt", _lua_GetPrompt);
  lua_register(L, "SetProgramDir", _lua_SetProgramDir);
  lua_register(L, "GetProgramDir", _lua_GetProgramDir);
  lua_register(L, "SystemTagList", _lua_SystemTagList);
  lua_register(L, "System", _lua_System);
  lua_register(L, "SystemTags", _lua_SystemTags);
  lua_register(L, "AssignLock", _lua_AssignLock);
  lua_register(L, "AssignLate", _lua_AssignLate);
  lua_register(L, "AssignPath", _lua_AssignPath);
  lua_register(L, "AssignAdd", _lua_AssignAdd);
  lua_register(L, "RemAssignList", _lua_RemAssignList);
  lua_register(L, "GetDeviceProc", _lua_GetDeviceProc);
  lua_register(L, "FreeDeviceProc", _lua_FreeDeviceProc);
  lua_register(L, "LockDosList", _lua_LockDosList);
  lua_register(L, "UnLockDosList", _lua_UnLockDosList);
  lua_register(L, "AttemptLockDosList", _lua_AttemptLockDosList);
  lua_register(L, "RemDosEntry", _lua_RemDosEntry);
  lua_register(L, "AddDosEntry", _lua_AddDosEntry);
  lua_register(L, "NextDosEntry", _lua_NextDosEntry);
  lua_register(L, "MakeDosEntry", _lua_MakeDosEntry);
  lua_register(L, "FreeDosEntry", _lua_FreeDosEntry);
  lua_register(L, "IsFileSystem", _lua_IsFileSystem);
  lua_register(L, "Format", _lua_Format);
  lua_register(L, "Relabel", _lua_Relabel);
  lua_register(L, "Inhibit", _lua_Inhibit);
  lua_register(L, "AddBuffers", _lua_AddBuffers);
  lua_register(L, "CompareDates", _lua_CompareDates);
  lua_register(L, "DateToStr", _lua_DateToStr);
  lua_register(L, "StrToDate", _lua_StrToDate);
  lua_register(L, "NewLoadSeg", _lua_NewLoadSeg);
  lua_register(L, "NewLoadSegTagList", _lua_NewLoadSegTagList);
  lua_register(L, "NewLoadSegTags", _lua_NewLoadSegTags);
  lua_register(L, "AddSegment", _lua_AddSegment);
  lua_register(L, "RemSegment", _lua_RemSegment);
  lua_register(L, "CheckSignal", _lua_CheckSignal);
  lua_register(L, "FindArg", _lua_FindArg);
  lua_register(L, "StrToLong", _lua_StrToLong);
  lua_register(L, "MatchFirst", _lua_MatchFirst);
  lua_register(L, "MatchNext", _lua_MatchNext);
  lua_register(L, "MatchEnd", _lua_MatchEnd);
  lua_register(L, "ParsePattern", _lua_ParsePattern);
  lua_register(L, "MatchPattern", _lua_MatchPattern);
  lua_register(L, "FreeArgs", _lua_FreeArgs);
  lua_register(L, "FilePart", _lua_FilePart);
  lua_register(L, "PathPart", _lua_PathPart);
  lua_register(L, "AddPart", _lua_AddPart);
  lua_register(L, "StartNotify", _lua_StartNotify);
  lua_register(L, "EndNotify", _lua_EndNotify);
  lua_register(L, "SetVar", _lua_SetVar);
  lua_register(L, "GetVar", _lua_GetVar);
  lua_register(L, "DeleteVar", _lua_DeleteVar);
  lua_register(L, "FindVar", _lua_FindVar);
  lua_register(L, "CliInitNewcli", _lua_CliInitNewcli);
  lua_register(L, "CliInitRun", _lua_CliInitRun);
  lua_register(L, "WriteChars", _lua_WriteChars);
  lua_register(L, "PutStr", _lua_PutStr);
  lua_register(L, "VPrintf", _lua_VPrintf);
  lua_register(L, "Printf", _lua_Printf);
  lua_register(L, "ParsePatternNoCase", _lua_ParsePatternNoCase);
  lua_register(L, "MatchPatternNoCase", _lua_MatchPatternNoCase);
  lua_register(L, "SameDevice", _lua_SameDevice);
  lua_register(L, "SetOwner", _lua_SetOwner);
  lua_register(L, "VolumeRequestHook", _lua_VolumeRequestHook);
  lua_register(L, "GetCurrentDir", _lua_GetCurrentDir);
  lua_register(L, "PutErrStr", _lua_PutErrStr);
  lua_register(L, "ErrorOutput", _lua_ErrorOutput);
  lua_register(L, "SelectError", _lua_SelectError);
  lua_register(L, "DoShellMethodTagList", _lua_DoShellMethodTagList);
  lua_register(L, "DoShellMethod", _lua_DoShellMethod);
  lua_register(L, "ScanStackToken", _lua_ScanStackToken);
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
  lua_register(L, "OpenScreenTagList", _lua_OpenScreenTagList);
  lua_register(L, "OpenScreenTags", _lua_OpenScreenTags);
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

