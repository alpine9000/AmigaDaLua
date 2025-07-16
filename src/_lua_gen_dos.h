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
_lua_gen_pushAssignList(lua_State *L, struct AssignList* obj)
{
  if (obj) {
    struct AssignList **ud = (struct AssignList **)lua_newuserdata(L, sizeof(struct AssignList *));
    *ud = obj;
    luaL_getmetatable(L, "AssignList");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AssignList*
_lua_gen_checkAssignList(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AssignList **ud = (struct AssignList **)luaL_checkudata(L, stackIndex, "AssignList");
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
_lua_gen_pushCSource(lua_State *L, struct CSource* obj)
{
  if (obj) {
    struct CSource **ud = (struct CSource **)lua_newuserdata(L, sizeof(struct CSource *));
    *ud = obj;
    luaL_getmetatable(L, "CSource");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct CSource*
_lua_gen_checkCSource(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct CSource **ud = (struct CSource **)luaL_checkudata(L, stackIndex, "CSource");
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
_lua_gen_pushAChain(lua_State *L, struct AChain* obj)
{
  if (obj) {
    struct AChain **ud = (struct AChain **)lua_newuserdata(L, sizeof(struct AChain *));
    *ud = obj;
    luaL_getmetatable(L, "AChain");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct AChain*
_lua_gen_checkAChain(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct AChain **ud = (struct AChain **)luaL_checkudata(L, stackIndex, "AChain");
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
_lua_gen_pushUnit(lua_State *L, struct Unit* obj)
{
  if (obj) {
    struct Unit **ud = (struct Unit **)lua_newuserdata(L, sizeof(struct Unit *));
    *ud = obj;
    luaL_getmetatable(L, "Unit");
    lua_setmetatable(L, -2);
  } else {
    lua_pushnil(L);
  }
}

struct Unit*
_lua_gen_checkUnit(lua_State* L, int stackIndex)
{
   if (!lua_isnoneornil(L, stackIndex)) {
      struct Unit **ud = (struct Unit **)luaL_checkudata(L, stackIndex, "Unit");
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
_lua_gen_MsgPort_newindex(lua_State *L)
{
  struct MsgPort *obj = *(struct MsgPort **)luaL_checkudata(L, 1, "MsgPort");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  // Unsupported type mp_Node.ln_Succ struct Node
  if (strcmp(key, "mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_Node.ln_Succ");
  }
  // Unsupported type mp_Node.ln_Pred struct Node
  if (strcmp(key, "mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_Node.ln_Pred");
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
  // Unsupported type mp_Node struct Node
  if (strcmp(key, "mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_Node");
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
  // Unsupported type mp_MsgList.lh_Head struct Node
  if (strcmp(key, "mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_MsgList.lh_Head");
  }
  // Unsupported type mp_MsgList.lh_Tail struct Node
  if (strcmp(key, "mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_MsgList.lh_Tail");
  }
  // Unsupported type mp_MsgList.lh_TailPred struct Node
  if (strcmp(key, "mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "mp_MsgList.lh_Type") == 0) {
    obj->mp_MsgList.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "mp_MsgList.l_pad") == 0) {
    obj->mp_MsgList.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type mp_MsgList struct List
  if (strcmp(key, "mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field mp_MsgList");
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
  // Unsupported mp_Node.ln_Succ struct Node *
  if (strcmp(key, "mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field mp_Node.ln_Succ");
  }
  // Unsupported mp_Node.ln_Pred struct Node *
  if (strcmp(key, "mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field mp_Node.ln_Pred");
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
  // Unsupported mp_Node struct Node
  if (strcmp(key, "mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field mp_Node");
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
  // Unsupported mp_MsgList.lh_Head struct Node *
  if (strcmp(key, "mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field mp_MsgList.lh_Head");
  }
  // Unsupported mp_MsgList.lh_Tail struct Node *
  if (strcmp(key, "mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field mp_MsgList.lh_Tail");
  }
  // Unsupported mp_MsgList.lh_TailPred struct Node *
  if (strcmp(key, "mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "mp_MsgList.lh_Type") == 0) {
    lua_pushinteger(L, obj->mp_MsgList.lh_Type);
    return 1;
  }
  if (strcmp(key, "mp_MsgList.l_pad") == 0) {
    lua_pushinteger(L, obj->mp_MsgList.l_pad);
    return 1;
  }
  // Unsupported mp_MsgList struct List
  if (strcmp(key, "mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field mp_MsgList");
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
_lua_gen_Unit_newindex(lua_State *L)
{
  struct Unit *obj = *(struct Unit **)luaL_checkudata(L, 1, "Unit");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  // Unsupported type unit_MsgPort.mp_Node.ln_Succ struct Node
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_Node.ln_Succ");
  }
  // Unsupported type unit_MsgPort.mp_Node.ln_Pred struct Node
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_Node.ln_Pred");
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Type") == 0) {
    obj->unit_MsgPort.mp_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pri") == 0) {
    obj->unit_MsgPort.mp_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Name") == 0) {
    obj->unit_MsgPort.mp_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  // Unsupported type unit_MsgPort.mp_Node struct Node
  if (strcmp(key, "unit_MsgPort.mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_Node");
  }
  if (strcmp(key, "unit_MsgPort.mp_Flags") == 0) {
    obj->unit_MsgPort.mp_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_SigBit") == 0) {
    obj->unit_MsgPort.mp_SigBit = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_SigTask") == 0) {
    obj->unit_MsgPort.mp_SigTask = (void *)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type unit_MsgPort.mp_MsgList.lh_Head struct Node
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_MsgList.lh_Head");
  }
  // Unsupported type unit_MsgPort.mp_MsgList.lh_Tail struct Node
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_MsgList.lh_Tail");
  }
  // Unsupported type unit_MsgPort.mp_MsgList.lh_TailPred struct Node
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Type") == 0) {
    obj->unit_MsgPort.mp_MsgList.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.l_pad") == 0) {
    obj->unit_MsgPort.mp_MsgList.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type unit_MsgPort.mp_MsgList struct List
  if (strcmp(key, "unit_MsgPort.mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field unit_MsgPort.mp_MsgList");
  }
  if (strcmp(key, "unit_MsgPort") == 0) {
    // finder 0
    struct MsgPort *val = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->unit_MsgPort = *val;
    return 0;
  }
  if (strcmp(key, "unit_flags") == 0) {
    obj->unit_flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_pad") == 0) {
    obj->unit_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_OpenCnt") == 0) {
    obj->unit_OpenCnt = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_Unit_constructor(lua_State *L)
{
  // Allocate pointer-to-struct Unit in userdata
  struct Unit **objp = lua_newuserdata(L, sizeof(struct Unit *));
  *objp = malloc(sizeof(struct Unit));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct Unit));

  // Set metatable
  luaL_getmetatable(L, "Unit");
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
_lua_gen_Unit_index(lua_State *L)
{
  struct Unit *obj = *(struct Unit **)luaL_checkudata(L, 1, "Unit");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  // Unsupported unit_MsgPort.mp_Node.ln_Succ struct Node *
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field unit_MsgPort.mp_Node.ln_Succ");
  }
  // Unsupported unit_MsgPort.mp_Node.ln_Pred struct Node *
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field unit_MsgPort.mp_Node.ln_Pred");
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->unit_MsgPort.mp_Node.ln_Name);
    return 1;
  }
  // Unsupported unit_MsgPort.mp_Node struct Node
  if (strcmp(key, "unit_MsgPort.mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field unit_MsgPort.mp_Node");
  }
  if (strcmp(key, "unit_MsgPort.mp_Flags") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_Flags);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_SigBit") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_SigBit);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_SigTask") == 0) {
    lua_pushlightuserdata(L, obj->unit_MsgPort.mp_SigTask);
    return 1;
  }
  // Unsupported unit_MsgPort.mp_MsgList.lh_Head struct Node *
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field unit_MsgPort.mp_MsgList.lh_Head");
  }
  // Unsupported unit_MsgPort.mp_MsgList.lh_Tail struct Node *
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field unit_MsgPort.mp_MsgList.lh_Tail");
  }
  // Unsupported unit_MsgPort.mp_MsgList.lh_TailPred struct Node *
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field unit_MsgPort.mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Type") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_MsgList.lh_Type);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.l_pad") == 0) {
    lua_pushinteger(L, obj->unit_MsgPort.mp_MsgList.l_pad);
    return 1;
  }
  // Unsupported unit_MsgPort.mp_MsgList struct List
  if (strcmp(key, "unit_MsgPort.mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field unit_MsgPort.mp_MsgList");
  }
  if (strcmp(key, "unit_MsgPort") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)&obj->unit_MsgPort;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "unit_flags") == 0) {
    lua_pushinteger(L, obj->unit_flags);
    return 1;
  }
  if (strcmp(key, "unit_pad") == 0) {
    lua_pushinteger(L, obj->unit_pad);
    return 1;
  }
  if (strcmp(key, "unit_OpenCnt") == 0) {
    lua_pushinteger(L, obj->unit_OpenCnt);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Unit));
    return 1;
}

  return 0;
}

static void
_lua_gen_Unit_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "unit_MsgPort.mp_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "unit_MsgPort.mp_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "unit_MsgPort.mp_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "unit_MsgPort.mp_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "unit_MsgPort.mp_SigBit");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "unit_MsgPort.mp_MsgList.lh_Type");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "unit_MsgPort.mp_MsgList.l_pad");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "unit_flags");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "unit_pad");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "unit_OpenCnt");
  lua_rawseti(L, -2, 10);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_Unit(lua_State *L) {
  if (luaL_newmetatable(L, "Unit")) {
    lua_pushcfunction(L, _lua_gen_Unit_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_Unit_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_Unit_constructor);
    lua_setglobal(L, "Unit");
    _lua_gen_Unit_install_keys(L);
    lua_pushstring(L, "Unit");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DateStamp_newindex(lua_State *L)
{
  struct DateStamp *obj = *(struct DateStamp **)luaL_checkudata(L, 1, "DateStamp");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
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
  (void)obj;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DateStamp));
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
static int
_lua_gen_FileInfoBlock_newindex(lua_State *L)
{
  struct FileInfoBlock *obj = *(struct FileInfoBlock **)luaL_checkudata(L, 1, "FileInfoBlock");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "fib_DiskKey") == 0) {
    obj->fib_DiskKey = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_DirEntryType") == 0) {
    obj->fib_DirEntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_FileName") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->fib_FileName, s, sizeof(obj->fib_FileName) - 1);
    obj->fib_FileName[sizeof(obj->fib_FileName) - 1] = '\0';
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
  if (strcmp(key, "fib_Date.ds_Days") == 0) {
    obj->fib_Date.ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Date.ds_Minute") == 0) {
    obj->fib_Date.ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Date.ds_Tick") == 0) {
    obj->fib_Date.ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "fib_Date") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->fib_Date = *val;
    return 0;
  }
  if (strcmp(key, "fib_Comment") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->fib_Comment, s, sizeof(obj->fib_Comment) - 1);
    obj->fib_Comment[sizeof(obj->fib_Comment) - 1] = '\0';
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
  // fib_Reserved[32] proxied via the index
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "fib_DiskKey") == 0) {
    lua_pushinteger(L, obj->fib_DiskKey);
    return 1;
  }
  if (strcmp(key, "fib_DirEntryType") == 0) {
    lua_pushinteger(L, obj->fib_DirEntryType);
    return 1;
  }
  if (strcmp(key, "fib_FileName") == 0) {
    lua_pushstring(L, obj->fib_FileName);
    return 1;
  }
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
  if (strcmp(key, "fib_Date.ds_Days") == 0) {
    lua_pushinteger(L, obj->fib_Date.ds_Days);
    return 1;
  }
  if (strcmp(key, "fib_Date.ds_Minute") == 0) {
    lua_pushinteger(L, obj->fib_Date.ds_Minute);
    return 1;
  }
  if (strcmp(key, "fib_Date.ds_Tick") == 0) {
    lua_pushinteger(L, obj->fib_Date.ds_Tick);
    return 1;
  }
  if (strcmp(key, "fib_Date") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->fib_Date;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "fib_Comment") == 0) {
    lua_pushstring(L, obj->fib_Comment);
    return 1;
  }
  if (strcmp(key, "fib_OwnerUID") == 0) {
    lua_pushinteger(L, obj->fib_OwnerUID);
    return 1;
  }
  if (strcmp(key, "fib_OwnerGID") == 0) {
    lua_pushinteger(L, obj->fib_OwnerGID);
    return 1;
  }
  if (strcmp(key, "fib_Reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->fib_Reserved, 32);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct FileInfoBlock));
    return 1;
}

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
  lua_pushstring(L, "fib_Date.ds_Days");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "fib_Date.ds_Minute");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "fib_Date.ds_Tick");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "fib_OwnerUID");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "fib_OwnerGID");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "fib_Reserved");
  lua_rawseti(L, -2, 12);
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
  (void)key;(void)obj;
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
  (void)obj;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct InfoData));
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
  (void)key;(void)obj;
  // Unsupported type pr_Task.tc_Node.ln_Succ struct Node
  if (strcmp(key, "pr_Task.tc_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_Node.ln_Succ");
  }
  // Unsupported type pr_Task.tc_Node.ln_Pred struct Node
  if (strcmp(key, "pr_Task.tc_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_Node.ln_Pred");
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Type") == 0) {
    obj->pr_Task.tc_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Pri") == 0) {
    obj->pr_Task.tc_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Name") == 0) {
    obj->pr_Task.tc_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  // Unsupported type pr_Task.tc_Node struct Node
  if (strcmp(key, "pr_Task.tc_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_Node");
  }
  if (strcmp(key, "pr_Task.tc_Flags") == 0) {
    obj->pr_Task.tc_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_State") == 0) {
    obj->pr_Task.tc_State = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_IDNestCnt") == 0) {
    obj->pr_Task.tc_IDNestCnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_TDNestCnt") == 0) {
    obj->pr_Task.tc_TDNestCnt = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SigAlloc") == 0) {
    obj->pr_Task.tc_SigAlloc = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SigWait") == 0) {
    obj->pr_Task.tc_SigWait = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SigRecvd") == 0) {
    obj->pr_Task.tc_SigRecvd = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SigExcept") == 0) {
    obj->pr_Task.tc_SigExcept = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_TrapAlloc") == 0) {
    obj->pr_Task.tc_TrapAlloc = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_TrapAble") == 0) {
    obj->pr_Task.tc_TrapAble = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_ExceptData") == 0) {
    obj->pr_Task.tc_ExceptData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_ExceptCode") == 0) {
    obj->pr_Task.tc_ExceptCode = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_TrapData") == 0) {
    obj->pr_Task.tc_TrapData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_TrapCode") == 0) {
    obj->pr_Task.tc_TrapCode = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SPReg") == 0) {
    obj->pr_Task.tc_SPReg = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SPLower") == 0) {
    obj->pr_Task.tc_SPLower = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_SPUpper") == 0) {
    obj->pr_Task.tc_SPUpper = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type pr_Task.tc_Switch void ()()
  if (strcmp(key, "pr_Task.tc_Switch") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field pr_Task.tc_Switch");
  }
  // Unsupported type pr_Task.tc_Launch void ()()
  if (strcmp(key, "pr_Task.tc_Launch") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field pr_Task.tc_Launch");
  }
  // Unsupported type pr_Task.tc_MemEntry.lh_Head struct Node
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_MemEntry.lh_Head");
  }
  // Unsupported type pr_Task.tc_MemEntry.lh_Tail struct Node
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_MemEntry.lh_Tail");
  }
  // Unsupported type pr_Task.tc_MemEntry.lh_TailPred struct Node
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_MemEntry.lh_TailPred");
  }
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Type") == 0) {
    obj->pr_Task.tc_MemEntry.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Task.tc_MemEntry.l_pad") == 0) {
    obj->pr_Task.tc_MemEntry.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type pr_Task.tc_MemEntry struct List
  if (strcmp(key, "pr_Task.tc_MemEntry") == 0) {
    return luaL_error(L, "Unsupported type struct List for field pr_Task.tc_MemEntry");
  }
  if (strcmp(key, "pr_Task.tc_UserData") == 0) {
    obj->pr_Task.tc_UserData = (APTR)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type pr_Task struct Task
  if (strcmp(key, "pr_Task") == 0) {
    return luaL_error(L, "Unsupported type struct Task for field pr_Task");
  }
  // Unsupported type pr_MsgPort.mp_Node.ln_Succ struct Node
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_Node.ln_Succ");
  }
  // Unsupported type pr_MsgPort.mp_Node.ln_Pred struct Node
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_Node.ln_Pred");
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Type") == 0) {
    obj->pr_MsgPort.mp_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Pri") == 0) {
    obj->pr_MsgPort.mp_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Name") == 0) {
    obj->pr_MsgPort.mp_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  // Unsupported type pr_MsgPort.mp_Node struct Node
  if (strcmp(key, "pr_MsgPort.mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_Node");
  }
  if (strcmp(key, "pr_MsgPort.mp_Flags") == 0) {
    obj->pr_MsgPort.mp_Flags = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_MsgPort.mp_SigBit") == 0) {
    obj->pr_MsgPort.mp_SigBit = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_MsgPort.mp_SigTask") == 0) {
    obj->pr_MsgPort.mp_SigTask = (void *)lua_touserdata(L, 3);
    return 0;
  }
  // Unsupported type pr_MsgPort.mp_MsgList.lh_Head struct Node
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_MsgList.lh_Head");
  }
  // Unsupported type pr_MsgPort.mp_MsgList.lh_Tail struct Node
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_MsgList.lh_Tail");
  }
  // Unsupported type pr_MsgPort.mp_MsgList.lh_TailPred struct Node
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Type") == 0) {
    obj->pr_MsgPort.mp_MsgList.lh_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_MsgPort.mp_MsgList.l_pad") == 0) {
    obj->pr_MsgPort.mp_MsgList.l_pad = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // Unsupported type pr_MsgPort.mp_MsgList struct List
  if (strcmp(key, "pr_MsgPort.mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field pr_MsgPort.mp_MsgList");
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
  // Unsupported type pr_ExitCode void ()()
  if (strcmp(key, "pr_ExitCode") == 0) {
    return luaL_error(L, "Unsupported type void ()() for field pr_ExitCode");
  }
  if (strcmp(key, "pr_ExitData") == 0) {
    obj->pr_ExitData = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "pr_Arguments") == 0) {
    obj->pr_Arguments = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  // Unsupported type pr_LocalVars.mlh_Head struct MinNode
  if (strcmp(key, "pr_LocalVars.mlh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode for field pr_LocalVars.mlh_Head");
  }
  // Unsupported type pr_LocalVars.mlh_Tail struct MinNode
  if (strcmp(key, "pr_LocalVars.mlh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode for field pr_LocalVars.mlh_Tail");
  }
  // Unsupported type pr_LocalVars.mlh_TailPred struct MinNode
  if (strcmp(key, "pr_LocalVars.mlh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode for field pr_LocalVars.mlh_TailPred");
  }
  // Unsupported type pr_LocalVars struct MinList
  if (strcmp(key, "pr_LocalVars") == 0) {
    return luaL_error(L, "Unsupported type struct MinList for field pr_LocalVars");
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  // Unsupported pr_Task.tc_Node.ln_Succ struct Node *
  if (strcmp(key, "pr_Task.tc_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_Task.tc_Node.ln_Succ");
  }
  // Unsupported pr_Task.tc_Node.ln_Pred struct Node *
  if (strcmp(key, "pr_Task.tc_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_Task.tc_Node.ln_Pred");
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->pr_Task.tc_Node.ln_Name);
    return 1;
  }
  // Unsupported pr_Task.tc_Node struct Node
  if (strcmp(key, "pr_Task.tc_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_Task.tc_Node");
  }
  if (strcmp(key, "pr_Task.tc_Flags") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_Flags);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_State") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_State);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_IDNestCnt") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_IDNestCnt);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_TDNestCnt") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_TDNestCnt);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SigAlloc") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_SigAlloc);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SigWait") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_SigWait);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SigRecvd") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_SigRecvd);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SigExcept") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_SigExcept);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_TrapAlloc") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_TrapAlloc);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_TrapAble") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_TrapAble);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_ExceptData") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_ExceptData);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_ExceptCode") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_ExceptCode);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_TrapData") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_TrapData);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_TrapCode") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_TrapCode);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SPReg") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_SPReg);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SPLower") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_SPLower);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_SPUpper") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_SPUpper);
    return 1;
  }
  // Unsupported pr_Task.tc_Switch void (*)()
  if (strcmp(key, "pr_Task.tc_Switch") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field pr_Task.tc_Switch");
  }
  // Unsupported pr_Task.tc_Launch void (*)()
  if (strcmp(key, "pr_Task.tc_Launch") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field pr_Task.tc_Launch");
  }
  // Unsupported pr_Task.tc_MemEntry.lh_Head struct Node *
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_Task.tc_MemEntry.lh_Head");
  }
  // Unsupported pr_Task.tc_MemEntry.lh_Tail struct Node *
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_Task.tc_MemEntry.lh_Tail");
  }
  // Unsupported pr_Task.tc_MemEntry.lh_TailPred struct Node *
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_Task.tc_MemEntry.lh_TailPred");
  }
  if (strcmp(key, "pr_Task.tc_MemEntry.lh_Type") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_MemEntry.lh_Type);
    return 1;
  }
  if (strcmp(key, "pr_Task.tc_MemEntry.l_pad") == 0) {
    lua_pushinteger(L, obj->pr_Task.tc_MemEntry.l_pad);
    return 1;
  }
  // Unsupported pr_Task.tc_MemEntry struct List
  if (strcmp(key, "pr_Task.tc_MemEntry") == 0) {
    return luaL_error(L, "Unsupported type struct List for field pr_Task.tc_MemEntry");
  }
  if (strcmp(key, "pr_Task.tc_UserData") == 0) {
    lua_pushlightuserdata(L, obj->pr_Task.tc_UserData);
    return 1;
  }
  // Unsupported pr_Task struct Task
  if (strcmp(key, "pr_Task") == 0) {
    return luaL_error(L, "Unsupported type struct Task for field pr_Task");
  }
  // Unsupported pr_MsgPort.mp_Node.ln_Succ struct Node *
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_MsgPort.mp_Node.ln_Succ");
  }
  // Unsupported pr_MsgPort.mp_Node.ln_Pred struct Node *
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_MsgPort.mp_Node.ln_Pred");
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort.mp_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->pr_MsgPort.mp_Node.ln_Name);
    return 1;
  }
  // Unsupported pr_MsgPort.mp_Node struct Node
  if (strcmp(key, "pr_MsgPort.mp_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field pr_MsgPort.mp_Node");
  }
  if (strcmp(key, "pr_MsgPort.mp_Flags") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_Flags);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort.mp_SigBit") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_SigBit);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort.mp_SigTask") == 0) {
    lua_pushlightuserdata(L, obj->pr_MsgPort.mp_SigTask);
    return 1;
  }
  // Unsupported pr_MsgPort.mp_MsgList.lh_Head struct Node *
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_MsgPort.mp_MsgList.lh_Head");
  }
  // Unsupported pr_MsgPort.mp_MsgList.lh_Tail struct Node *
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_MsgPort.mp_MsgList.lh_Tail");
  }
  // Unsupported pr_MsgPort.mp_MsgList.lh_TailPred struct Node *
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field pr_MsgPort.mp_MsgList.lh_TailPred");
  }
  if (strcmp(key, "pr_MsgPort.mp_MsgList.lh_Type") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_MsgList.lh_Type);
    return 1;
  }
  if (strcmp(key, "pr_MsgPort.mp_MsgList.l_pad") == 0) {
    lua_pushinteger(L, obj->pr_MsgPort.mp_MsgList.l_pad);
    return 1;
  }
  // Unsupported pr_MsgPort.mp_MsgList struct List
  if (strcmp(key, "pr_MsgPort.mp_MsgList") == 0) {
    return luaL_error(L, "Unsupported type struct List for field pr_MsgPort.mp_MsgList");
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
  // Unsupported pr_ExitCode void (*)()
  if (strcmp(key, "pr_ExitCode") == 0) {
    return luaL_error(L, "Unsupported type void (*)() for field pr_ExitCode");
  }
  if (strcmp(key, "pr_ExitData") == 0) {
    lua_pushinteger(L, obj->pr_ExitData);
    return 1;
  }
  if (strcmp(key, "pr_Arguments") == 0) {
    lua_pushstring(L, obj->pr_Arguments);
    return 1;
  }
  // Unsupported pr_LocalVars.mlh_Head struct MinNode *
  if (strcmp(key, "pr_LocalVars.mlh_Head") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode * for field pr_LocalVars.mlh_Head");
  }
  // Unsupported pr_LocalVars.mlh_Tail struct MinNode *
  if (strcmp(key, "pr_LocalVars.mlh_Tail") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode * for field pr_LocalVars.mlh_Tail");
  }
  // Unsupported pr_LocalVars.mlh_TailPred struct MinNode *
  if (strcmp(key, "pr_LocalVars.mlh_TailPred") == 0) {
    return luaL_error(L, "Unsupported type struct MinNode * for field pr_LocalVars.mlh_TailPred");
  }
  // Unsupported pr_LocalVars struct MinList
  if (strcmp(key, "pr_LocalVars") == 0) {
    return luaL_error(L, "Unsupported type struct MinList for field pr_LocalVars");
  }
  if (strcmp(key, "pr_ShellPrivate") == 0) {
    lua_pushinteger(L, obj->pr_ShellPrivate);
    return 1;
  }
  if (strcmp(key, "pr_CES") == 0) {
    lua_pushinteger(L, obj->pr_CES);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Process));
    return 1;
}

  return 0;
}

static void
_lua_gen_Process_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "pr_Task.tc_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "pr_Task.tc_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "pr_Task.tc_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "pr_Task.tc_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "pr_Task.tc_State");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "pr_Task.tc_IDNestCnt");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "pr_Task.tc_TDNestCnt");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "pr_Task.tc_SigAlloc");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "pr_Task.tc_SigWait");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "pr_Task.tc_SigRecvd");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "pr_Task.tc_SigExcept");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "pr_Task.tc_TrapAlloc");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "pr_Task.tc_TrapAble");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "pr_Task.tc_ExceptData");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "pr_Task.tc_ExceptCode");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "pr_Task.tc_TrapData");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "pr_Task.tc_TrapCode");
  lua_rawseti(L, -2, 17);
  lua_pushstring(L, "pr_Task.tc_SPReg");
  lua_rawseti(L, -2, 18);
  lua_pushstring(L, "pr_Task.tc_SPLower");
  lua_rawseti(L, -2, 19);
  lua_pushstring(L, "pr_Task.tc_SPUpper");
  lua_rawseti(L, -2, 20);
  lua_pushstring(L, "pr_Task.tc_Switch");
  lua_rawseti(L, -2, 21);
  lua_pushstring(L, "pr_Task.tc_Launch");
  lua_rawseti(L, -2, 22);
  lua_pushstring(L, "pr_Task.tc_MemEntry.lh_Type");
  lua_rawseti(L, -2, 23);
  lua_pushstring(L, "pr_Task.tc_MemEntry.l_pad");
  lua_rawseti(L, -2, 24);
  lua_pushstring(L, "pr_Task.tc_UserData");
  lua_rawseti(L, -2, 25);
  lua_pushstring(L, "pr_MsgPort.mp_Node.ln_Type");
  lua_rawseti(L, -2, 26);
  lua_pushstring(L, "pr_MsgPort.mp_Node.ln_Pri");
  lua_rawseti(L, -2, 27);
  lua_pushstring(L, "pr_MsgPort.mp_Node.ln_Name");
  lua_rawseti(L, -2, 28);
  lua_pushstring(L, "pr_MsgPort.mp_Flags");
  lua_rawseti(L, -2, 29);
  lua_pushstring(L, "pr_MsgPort.mp_SigBit");
  lua_rawseti(L, -2, 30);
  lua_pushstring(L, "pr_MsgPort.mp_MsgList.lh_Type");
  lua_rawseti(L, -2, 31);
  lua_pushstring(L, "pr_MsgPort.mp_MsgList.l_pad");
  lua_rawseti(L, -2, 32);
  lua_pushstring(L, "pr_Pad");
  lua_rawseti(L, -2, 33);
  lua_pushstring(L, "pr_SegList");
  lua_rawseti(L, -2, 34);
  lua_pushstring(L, "pr_StackSize");
  lua_rawseti(L, -2, 35);
  lua_pushstring(L, "pr_GlobVec");
  lua_rawseti(L, -2, 36);
  lua_pushstring(L, "pr_TaskNum");
  lua_rawseti(L, -2, 37);
  lua_pushstring(L, "pr_StackBase");
  lua_rawseti(L, -2, 38);
  lua_pushstring(L, "pr_Result2");
  lua_rawseti(L, -2, 39);
  lua_pushstring(L, "pr_CurrentDir");
  lua_rawseti(L, -2, 40);
  lua_pushstring(L, "pr_CIS");
  lua_rawseti(L, -2, 41);
  lua_pushstring(L, "pr_COS");
  lua_rawseti(L, -2, 42);
  lua_pushstring(L, "pr_ConsoleTask");
  lua_rawseti(L, -2, 43);
  lua_pushstring(L, "pr_FileSystemTask");
  lua_rawseti(L, -2, 44);
  lua_pushstring(L, "pr_CLI");
  lua_rawseti(L, -2, 45);
  lua_pushstring(L, "pr_ReturnAddr");
  lua_rawseti(L, -2, 46);
  lua_pushstring(L, "pr_PktWait");
  lua_rawseti(L, -2, 47);
  lua_pushstring(L, "pr_WindowPtr");
  lua_rawseti(L, -2, 48);
  lua_pushstring(L, "pr_HomeDir");
  lua_rawseti(L, -2, 49);
  lua_pushstring(L, "pr_Flags");
  lua_rawseti(L, -2, 50);
  lua_pushstring(L, "pr_ExitCode");
  lua_rawseti(L, -2, 51);
  lua_pushstring(L, "pr_ExitData");
  lua_rawseti(L, -2, 52);
  lua_pushstring(L, "pr_Arguments");
  lua_rawseti(L, -2, 53);
  lua_pushstring(L, "pr_ShellPrivate");
  lua_rawseti(L, -2, 54);
  lua_pushstring(L, "pr_CES");
  lua_rawseti(L, -2, 55);
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
  (void)key;(void)obj;
  // Unsupported type dp_Link struct Message
  if (strcmp(key, "dp_Link") == 0) {
    return luaL_error(L, "Unsupported type struct Message for field dp_Link");
  }
  if (strcmp(key, "dp_Port") == 0) {
    // finder 1
    //obj->dp_Port = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->dp_Port = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  // Unsupported dp_Link struct Message *
  if (strcmp(key, "dp_Link") == 0) {
    return luaL_error(L, "Unsupported type struct Message * for field dp_Link");
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DosPacket));
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
  (void)key;(void)obj;
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
  // seg_Name[4] proxied via the index
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
  (void)obj;
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
  if (strcmp(key, "seg_Name") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->seg_Name, 4);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct Segment));
    return 1;
}

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
  lua_pushstring(L, "seg_Name");
  lua_rawseti(L, -2, 4);
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
  (void)key;(void)obj;
  if (strcmp(key, "cli_Result2") == 0) {
    obj->cli_Result2 = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_SetName") == 0) {
    obj->cli_SetName = (BSTR)amiga_checkBSTR(L, 3);
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
  if (strcmp(key, "cli_CommandName") == 0) {
    obj->cli_CommandName = (BSTR)amiga_checkBSTR(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_FailLevel") == 0) {
    obj->cli_FailLevel = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "cli_Prompt") == 0) {
    obj->cli_Prompt = (BSTR)amiga_checkBSTR(L, 3);
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
  if (strcmp(key, "cli_CommandFile") == 0) {
    obj->cli_CommandFile = (BSTR)amiga_checkBSTR(L, 3);
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "cli_Result2") == 0) {
    lua_pushinteger(L, obj->cli_Result2);
    return 1;
  }
  if (strcmp(key, "cli_SetName") == 0) {
    amiga_pushBSTR(L, obj->cli_SetName);
    return 1;
  }
  if (strcmp(key, "cli_CommandDir") == 0) {
    lua_pushinteger(L, obj->cli_CommandDir);
    return 1;
  }
  if (strcmp(key, "cli_ReturnCode") == 0) {
    lua_pushinteger(L, obj->cli_ReturnCode);
    return 1;
  }
  if (strcmp(key, "cli_CommandName") == 0) {
    amiga_pushBSTR(L, obj->cli_CommandName);
    return 1;
  }
  if (strcmp(key, "cli_FailLevel") == 0) {
    lua_pushinteger(L, obj->cli_FailLevel);
    return 1;
  }
  if (strcmp(key, "cli_Prompt") == 0) {
    amiga_pushBSTR(L, obj->cli_Prompt);
    return 1;
  }
  if (strcmp(key, "cli_StandardInput") == 0) {
    lua_pushinteger(L, obj->cli_StandardInput);
    return 1;
  }
  if (strcmp(key, "cli_CurrentInput") == 0) {
    lua_pushinteger(L, obj->cli_CurrentInput);
    return 1;
  }
  if (strcmp(key, "cli_CommandFile") == 0) {
    amiga_pushBSTR(L, obj->cli_CommandFile);
    return 1;
  }
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct CommandLineInterface));
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
  lua_pushstring(L, "cli_SetName");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "cli_CommandDir");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "cli_ReturnCode");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "cli_CommandName");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "cli_FailLevel");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "cli_Prompt");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "cli_StandardInput");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "cli_CurrentInput");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "cli_CommandFile");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "cli_Interactive");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "cli_Background");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "cli_CurrentOutput");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "cli_DefaultStack");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "cli_StandardOutput");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "cli_Module");
  lua_rawseti(L, -2, 16);
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
  (void)key;(void)obj;
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
    //obj->dol_Task = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->dol_Task = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_Lock") == 0) {
    obj->dol_Lock = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_Handler") == 0) {
    obj->dol_misc.dol_handler.dol_Handler = (BSTR)amiga_checkBSTR(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_StackSize") == 0) {
    obj->dol_misc.dol_handler.dol_StackSize = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_Priority") == 0) {
    obj->dol_misc.dol_handler.dol_Priority = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_Startup") == 0) {
    obj->dol_misc.dol_handler.dol_Startup = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_SegList") == 0) {
    obj->dol_misc.dol_handler.dol_SegList = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_GlobVec") == 0) {
    obj->dol_misc.dol_handler.dol_GlobVec = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Days") == 0) {
    obj->dol_misc.dol_volume.dol_VolumeDate.ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Minute") == 0) {
    obj->dol_misc.dol_volume.dol_VolumeDate.ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Tick") == 0) {
    obj->dol_misc.dol_volume.dol_VolumeDate.ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->dol_misc.dol_volume.dol_VolumeDate = *val;
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_LockList") == 0) {
    obj->dol_misc.dol_volume.dol_LockList = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_DiskType") == 0) {
    obj->dol_misc.dol_volume.dol_DiskType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_assign.dol_AssignName") == 0) {
    obj->dol_misc.dol_assign.dol_AssignName = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "dol_misc.dol_assign.dol_List") == 0) {
    // finder 1
    //obj->dol_misc.dol_assign.dol_List = *(struct AssignList **)luaL_checkudata(L, 3, "AssignList");
    obj->dol_misc.dol_assign.dol_List = (struct AssignList *)_lua_gen_checkAssignList(L, 3);
    return 0;
  }
  // Unsupported type dol_misc unnamed union
  if (strcmp(key, "dol_misc") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field dol_misc");
  }
  if (strcmp(key, "dol_Name") == 0) {
    obj->dol_Name = (BSTR)amiga_checkBSTR(L, 3);
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
  (void)obj;
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
  if (strcmp(key, "dol_misc.dol_handler.dol_Handler") == 0) {
    amiga_pushBSTR(L, obj->dol_misc.dol_handler.dol_Handler);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_StackSize") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_handler.dol_StackSize);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_Priority") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_handler.dol_Priority);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_Startup") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_handler.dol_Startup);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_SegList") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_handler.dol_SegList);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_handler.dol_GlobVec") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_handler.dol_GlobVec);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Days") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_volume.dol_VolumeDate.ds_Days);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Minute") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_volume.dol_VolumeDate.ds_Minute);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate.ds_Tick") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_volume.dol_VolumeDate.ds_Tick);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_VolumeDate") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->dol_misc.dol_volume.dol_VolumeDate;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_LockList") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_volume.dol_LockList);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_volume.dol_DiskType") == 0) {
    lua_pushinteger(L, obj->dol_misc.dol_volume.dol_DiskType);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_assign.dol_AssignName") == 0) {
    lua_pushstring(L, obj->dol_misc.dol_assign.dol_AssignName);
    return 1;
  }
  if (strcmp(key, "dol_misc.dol_assign.dol_List") == 0) {
    struct AssignList **ud = (struct AssignList **)lua_newuserdata(L, sizeof(struct AssignList *));
    *ud = (struct AssignList*)obj->dol_misc.dol_assign.dol_List;
    luaL_getmetatable(L, "AssignList");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported dol_misc unnamed union
  if (strcmp(key, "dol_misc") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field dol_misc");
  }
  if (strcmp(key, "dol_Name") == 0) {
    amiga_pushBSTR(L, obj->dol_Name);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DosList));
    return 1;
}

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
  lua_pushstring(L, "dol_misc.dol_handler.dol_Handler");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dol_misc.dol_handler.dol_StackSize");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dol_misc.dol_handler.dol_Priority");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dol_misc.dol_handler.dol_Startup");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dol_misc.dol_handler.dol_SegList");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "dol_misc.dol_handler.dol_GlobVec");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "dol_misc.dol_volume.dol_VolumeDate.ds_Days");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "dol_misc.dol_volume.dol_VolumeDate.ds_Minute");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "dol_misc.dol_volume.dol_VolumeDate.ds_Tick");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "dol_misc.dol_volume.dol_LockList");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "dol_misc.dol_volume.dol_DiskType");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "dol_misc.dol_assign.dol_AssignName");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "dol_Name");
  lua_rawseti(L, -2, 16);
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
_lua_gen_AssignList_newindex(lua_State *L)
{
  struct AssignList *obj = *(struct AssignList **)luaL_checkudata(L, 1, "AssignList");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "al_Next") == 0) {
    // finder 1
    //obj->al_Next = *(struct AssignList **)luaL_checkudata(L, 3, "AssignList");
    obj->al_Next = (struct AssignList *)_lua_gen_checkAssignList(L, 3);
    return 0;
  }
  if (strcmp(key, "al_Lock") == 0) {
    obj->al_Lock = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_AssignList_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AssignList in userdata
  struct AssignList **objp = lua_newuserdata(L, sizeof(struct AssignList *));
  *objp = malloc(sizeof(struct AssignList));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AssignList));

  // Set metatable
  luaL_getmetatable(L, "AssignList");
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
_lua_gen_AssignList_index(lua_State *L)
{
  struct AssignList *obj = *(struct AssignList **)luaL_checkudata(L, 1, "AssignList");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "al_Next") == 0) {
    struct AssignList **ud = (struct AssignList **)lua_newuserdata(L, sizeof(struct AssignList *));
    *ud = (struct AssignList*)obj->al_Next;
    luaL_getmetatable(L, "AssignList");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "al_Lock") == 0) {
    lua_pushinteger(L, obj->al_Lock);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AssignList));
    return 1;
}

  return 0;
}

static void
_lua_gen_AssignList_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "al_Lock");
  lua_rawseti(L, -2, 1);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AssignList(lua_State *L) {
  if (luaL_newmetatable(L, "AssignList")) {
    lua_pushcfunction(L, _lua_gen_AssignList_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AssignList_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AssignList_constructor);
    lua_setglobal(L, "AssignList");
    _lua_gen_AssignList_install_keys(L);
    lua_pushstring(L, "AssignList");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_DevProc_newindex(lua_State *L)
{
  struct DevProc *obj = *(struct DevProc **)luaL_checkudata(L, 1, "DevProc");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "dvp_Port") == 0) {
    // finder 1
    //obj->dvp_Port = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->dvp_Port = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
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
    //obj->dvp_DevNode = *(struct DosList **)luaL_checkudata(L, 3, "DosList");
    obj->dvp_DevNode = (struct DosList *)_lua_gen_checkDosList(L, 3);
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
  (void)obj;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DevProc));
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
  (void)key;(void)obj;
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
  (void)obj;
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct RecordLock));
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
_lua_gen_CSource_newindex(lua_State *L)
{
  struct CSource *obj = *(struct CSource **)luaL_checkudata(L, 1, "CSource");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "CS_Buffer") == 0) {
    obj->CS_Buffer = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "CS_Length") == 0) {
    obj->CS_Length = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "CS_CurChr") == 0) {
    obj->CS_CurChr = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  return 0;
}


static int
_lua_CSource_constructor(lua_State *L)
{
  // Allocate pointer-to-struct CSource in userdata
  struct CSource **objp = lua_newuserdata(L, sizeof(struct CSource *));
  *objp = malloc(sizeof(struct CSource));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct CSource));

  // Set metatable
  luaL_getmetatable(L, "CSource");
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
_lua_gen_CSource_index(lua_State *L)
{
  struct CSource *obj = *(struct CSource **)luaL_checkudata(L, 1, "CSource");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "CS_Buffer") == 0) {
    lua_pushstring(L, obj->CS_Buffer);
    return 1;
  }
  if (strcmp(key, "CS_Length") == 0) {
    lua_pushinteger(L, obj->CS_Length);
    return 1;
  }
  if (strcmp(key, "CS_CurChr") == 0) {
    lua_pushinteger(L, obj->CS_CurChr);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct CSource));
    return 1;
}

  return 0;
}

static void
_lua_gen_CSource_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "CS_Buffer");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "CS_Length");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "CS_CurChr");
  lua_rawseti(L, -2, 3);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_CSource(lua_State *L) {
  if (luaL_newmetatable(L, "CSource")) {
    lua_pushcfunction(L, _lua_gen_CSource_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_CSource_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_CSource_constructor);
    lua_setglobal(L, "CSource");
    _lua_gen_CSource_install_keys(L);
    lua_pushstring(L, "CSource");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_RDArgs_newindex(lua_State *L)
{
  struct RDArgs *obj = *(struct RDArgs **)luaL_checkudata(L, 1, "RDArgs");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "RDA_Source.CS_Buffer") == 0) {
    obj->RDA_Source.CS_Buffer = (STRPTR)amiga_checkNullableString(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_Source.CS_Length") == 0) {
    obj->RDA_Source.CS_Length = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_Source.CS_CurChr") == 0) {
    obj->RDA_Source.CS_CurChr = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "RDA_Source") == 0) {
    // finder 0
    struct CSource *val = *(struct CSource **)luaL_checkudata(L, 3, "CSource");
    obj->RDA_Source = *val;
    return 0;
  }
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "RDA_Source.CS_Buffer") == 0) {
    lua_pushstring(L, obj->RDA_Source.CS_Buffer);
    return 1;
  }
  if (strcmp(key, "RDA_Source.CS_Length") == 0) {
    lua_pushinteger(L, obj->RDA_Source.CS_Length);
    return 1;
  }
  if (strcmp(key, "RDA_Source.CS_CurChr") == 0) {
    lua_pushinteger(L, obj->RDA_Source.CS_CurChr);
    return 1;
  }
  if (strcmp(key, "RDA_Source") == 0) {
    struct CSource **ud = (struct CSource **)lua_newuserdata(L, sizeof(struct CSource *));
    *ud = (struct CSource*)&obj->RDA_Source;
    luaL_getmetatable(L, "CSource");
    lua_setmetatable(L, -2);
    return 1;
  }
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct RDArgs));
    return 1;
}

  return 0;
}

static void
_lua_gen_RDArgs_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "RDA_Source.CS_Buffer");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "RDA_Source.CS_Length");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "RDA_Source.CS_CurChr");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "RDA_DAList");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "RDA_Buffer");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "RDA_BufSiz");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "RDA_ExtHelp");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "RDA_Flags");
  lua_rawseti(L, -2, 8);
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
  (void)key;(void)obj;
  if (strcmp(key, "ap_Base") == 0) {
    // finder 1
    //obj->ap_Base = *(struct AChain **)luaL_checkudata(L, 3, "AChain");
    obj->ap_Base = (struct AChain *)_lua_gen_checkAChain(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Last") == 0) {
    // finder 1
    //obj->ap_Last = *(struct AChain **)luaL_checkudata(L, 3, "AChain");
    obj->ap_Last = (struct AChain *)_lua_gen_checkAChain(L, 3);
    return 0;
  }
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
  if (strcmp(key, "ap_Info.fib_DiskKey") == 0) {
    obj->ap_Info.fib_DiskKey = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_DirEntryType") == 0) {
    obj->ap_Info.fib_DirEntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_FileName") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->ap_Info.fib_FileName, s, sizeof(obj->ap_Info.fib_FileName) - 1);
    obj->ap_Info.fib_FileName[sizeof(obj->ap_Info.fib_FileName) - 1] = '\0';
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Protection") == 0) {
    obj->ap_Info.fib_Protection = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_EntryType") == 0) {
    obj->ap_Info.fib_EntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Size") == 0) {
    obj->ap_Info.fib_Size = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_NumBlocks") == 0) {
    obj->ap_Info.fib_NumBlocks = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Days") == 0) {
    obj->ap_Info.fib_Date.ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Minute") == 0) {
    obj->ap_Info.fib_Date.ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Tick") == 0) {
    obj->ap_Info.fib_Date.ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Date") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->ap_Info.fib_Date = *val;
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_Comment") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->ap_Info.fib_Comment, s, sizeof(obj->ap_Info.fib_Comment) - 1);
    obj->ap_Info.fib_Comment[sizeof(obj->ap_Info.fib_Comment) - 1] = '\0';
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_OwnerUID") == 0) {
    obj->ap_Info.fib_OwnerUID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "ap_Info.fib_OwnerGID") == 0) {
    obj->ap_Info.fib_OwnerGID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // ap_Info.fib_Reserved[32] proxied via the index
  if (strcmp(key, "ap_Info") == 0) {
    // finder 0
    struct FileInfoBlock *val = *(struct FileInfoBlock **)luaL_checkudata(L, 3, "FileInfoBlock");
    obj->ap_Info = *val;
    return 0;
  }
  if (strcmp(key, "ap_Buf") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->ap_Buf, s, sizeof(obj->ap_Buf) - 1);
    obj->ap_Buf[sizeof(obj->ap_Buf) - 1] = '\0';
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "ap_Base") == 0) {
    struct AChain **ud = (struct AChain **)lua_newuserdata(L, sizeof(struct AChain *));
    *ud = (struct AChain*)obj->ap_Base;
    luaL_getmetatable(L, "AChain");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ap_Last") == 0) {
    struct AChain **ud = (struct AChain **)lua_newuserdata(L, sizeof(struct AChain *));
    *ud = (struct AChain*)obj->ap_Last;
    luaL_getmetatable(L, "AChain");
    lua_setmetatable(L, -2);
    return 1;
  }
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
  if (strcmp(key, "ap_Info.fib_DiskKey") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_DiskKey);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_DirEntryType") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_DirEntryType);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_FileName") == 0) {
    lua_pushstring(L, obj->ap_Info.fib_FileName);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Protection") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_Protection);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_EntryType") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_EntryType);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Size") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_Size);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_NumBlocks") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_NumBlocks);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Days") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_Date.ds_Days);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Minute") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_Date.ds_Minute);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Date.ds_Tick") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_Date.ds_Tick);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Date") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->ap_Info.fib_Date;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Comment") == 0) {
    lua_pushstring(L, obj->ap_Info.fib_Comment);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_OwnerUID") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_OwnerUID);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_OwnerGID") == 0) {
    lua_pushinteger(L, obj->ap_Info.fib_OwnerGID);
    return 1;
  }
  if (strcmp(key, "ap_Info.fib_Reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->ap_Info.fib_Reserved, 32);
    return 1;
  }
  if (strcmp(key, "ap_Info") == 0) {
    struct FileInfoBlock **ud = (struct FileInfoBlock **)lua_newuserdata(L, sizeof(struct FileInfoBlock *));
    *ud = (struct FileInfoBlock*)&obj->ap_Info;
    luaL_getmetatable(L, "FileInfoBlock");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "ap_Buf") == 0) {
    lua_pushstring(L, obj->ap_Buf);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AnchorPath));
    return 1;
}

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
  lua_pushstring(L, "ap_Info.fib_DiskKey");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "ap_Info.fib_DirEntryType");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "ap_Info.fib_Protection");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "ap_Info.fib_EntryType");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "ap_Info.fib_Size");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "ap_Info.fib_NumBlocks");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "ap_Info.fib_Date.ds_Days");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "ap_Info.fib_Date.ds_Minute");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "ap_Info.fib_Date.ds_Tick");
  lua_rawseti(L, -2, 14);
  lua_pushstring(L, "ap_Info.fib_OwnerUID");
  lua_rawseti(L, -2, 15);
  lua_pushstring(L, "ap_Info.fib_OwnerGID");
  lua_rawseti(L, -2, 16);
  lua_pushstring(L, "ap_Info.fib_Reserved");
  lua_rawseti(L, -2, 17);
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
_lua_gen_AChain_newindex(lua_State *L)
{
  struct AChain *obj = *(struct AChain **)luaL_checkudata(L, 1, "AChain");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  if (strcmp(key, "an_Child") == 0) {
    // finder 1
    //obj->an_Child = *(struct AChain **)luaL_checkudata(L, 3, "AChain");
    obj->an_Child = (struct AChain *)_lua_gen_checkAChain(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Parent") == 0) {
    // finder 1
    //obj->an_Parent = *(struct AChain **)luaL_checkudata(L, 3, "AChain");
    obj->an_Parent = (struct AChain *)_lua_gen_checkAChain(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Lock") == 0) {
    obj->an_Lock = (BPTR)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_DiskKey") == 0) {
    obj->an_Info.fib_DiskKey = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_DirEntryType") == 0) {
    obj->an_Info.fib_DirEntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_FileName") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->an_Info.fib_FileName, s, sizeof(obj->an_Info.fib_FileName) - 1);
    obj->an_Info.fib_FileName[sizeof(obj->an_Info.fib_FileName) - 1] = '\0';
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Protection") == 0) {
    obj->an_Info.fib_Protection = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_EntryType") == 0) {
    obj->an_Info.fib_EntryType = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Size") == 0) {
    obj->an_Info.fib_Size = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_NumBlocks") == 0) {
    obj->an_Info.fib_NumBlocks = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Days") == 0) {
    obj->an_Info.fib_Date.ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Minute") == 0) {
    obj->an_Info.fib_Date.ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Tick") == 0) {
    obj->an_Info.fib_Date.ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Date") == 0) {
    // finder 0
    struct DateStamp *val = *(struct DateStamp **)luaL_checkudata(L, 3, "DateStamp");
    obj->an_Info.fib_Date = *val;
    return 0;
  }
  if (strcmp(key, "an_Info.fib_Comment") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->an_Info.fib_Comment, s, sizeof(obj->an_Info.fib_Comment) - 1);
    obj->an_Info.fib_Comment[sizeof(obj->an_Info.fib_Comment) - 1] = '\0';
    return 0;
  }
  if (strcmp(key, "an_Info.fib_OwnerUID") == 0) {
    obj->an_Info.fib_OwnerUID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_Info.fib_OwnerGID") == 0) {
    obj->an_Info.fib_OwnerGID = (UWORD)luaL_checkinteger(L, 3);
    return 0;
  }
  // an_Info.fib_Reserved[32] proxied via the index
  if (strcmp(key, "an_Info") == 0) {
    // finder 0
    struct FileInfoBlock *val = *(struct FileInfoBlock **)luaL_checkudata(L, 3, "FileInfoBlock");
    obj->an_Info = *val;
    return 0;
  }
  if (strcmp(key, "an_Flags") == 0) {
    obj->an_Flags = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "an_String") == 0) {
    const char *s = luaL_checkstring(L, 3);
    strncpy(obj->an_String, s, sizeof(obj->an_String) - 1);
    obj->an_String[sizeof(obj->an_String) - 1] = '\0';
    return 0;
  }
  return 0;
}


static int
_lua_AChain_constructor(lua_State *L)
{
  // Allocate pointer-to-struct AChain in userdata
  struct AChain **objp = lua_newuserdata(L, sizeof(struct AChain *));
  *objp = malloc(sizeof(struct AChain));
  if (!*objp) return luaL_error(L, "out of memory");
  memset(*objp, 0, sizeof(struct AChain));

  // Set metatable
  luaL_getmetatable(L, "AChain");
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
_lua_gen_AChain_index(lua_State *L)
{
  struct AChain *obj = *(struct AChain **)luaL_checkudata(L, 1, "AChain");
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "an_Child") == 0) {
    struct AChain **ud = (struct AChain **)lua_newuserdata(L, sizeof(struct AChain *));
    *ud = (struct AChain*)obj->an_Child;
    luaL_getmetatable(L, "AChain");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "an_Parent") == 0) {
    struct AChain **ud = (struct AChain **)lua_newuserdata(L, sizeof(struct AChain *));
    *ud = (struct AChain*)obj->an_Parent;
    luaL_getmetatable(L, "AChain");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "an_Lock") == 0) {
    lua_pushinteger(L, obj->an_Lock);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_DiskKey") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_DiskKey);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_DirEntryType") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_DirEntryType);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_FileName") == 0) {
    lua_pushstring(L, obj->an_Info.fib_FileName);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Protection") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_Protection);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_EntryType") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_EntryType);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Size") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_Size);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_NumBlocks") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_NumBlocks);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Days") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_Date.ds_Days);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Minute") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_Date.ds_Minute);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Date.ds_Tick") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_Date.ds_Tick);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Date") == 0) {
    struct DateStamp **ud = (struct DateStamp **)lua_newuserdata(L, sizeof(struct DateStamp *));
    *ud = (struct DateStamp*)&obj->an_Info.fib_Date;
    luaL_getmetatable(L, "DateStamp");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Comment") == 0) {
    lua_pushstring(L, obj->an_Info.fib_Comment);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_OwnerUID") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_OwnerUID);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_OwnerGID") == 0) {
    lua_pushinteger(L, obj->an_Info.fib_OwnerGID);
    return 1;
  }
  if (strcmp(key, "an_Info.fib_Reserved") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->an_Info.fib_Reserved, 32);
    return 1;
  }
  if (strcmp(key, "an_Info") == 0) {
    struct FileInfoBlock **ud = (struct FileInfoBlock **)lua_newuserdata(L, sizeof(struct FileInfoBlock *));
    *ud = (struct FileInfoBlock*)&obj->an_Info;
    luaL_getmetatable(L, "FileInfoBlock");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "an_Flags") == 0) {
    lua_pushinteger(L, obj->an_Flags);
    return 1;
  }
  if (strcmp(key, "an_String") == 0) {
    lua_pushstring(L, obj->an_String);
    return 1;
  }
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct AChain));
    return 1;
}

  return 0;
}

static void
_lua_gen_AChain_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "an_Lock");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "an_Info.fib_DiskKey");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "an_Info.fib_DirEntryType");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "an_Info.fib_Protection");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "an_Info.fib_EntryType");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "an_Info.fib_Size");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "an_Info.fib_NumBlocks");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "an_Info.fib_Date.ds_Days");
  lua_rawseti(L, -2, 8);
  lua_pushstring(L, "an_Info.fib_Date.ds_Minute");
  lua_rawseti(L, -2, 9);
  lua_pushstring(L, "an_Info.fib_Date.ds_Tick");
  lua_rawseti(L, -2, 10);
  lua_pushstring(L, "an_Info.fib_OwnerUID");
  lua_rawseti(L, -2, 11);
  lua_pushstring(L, "an_Info.fib_OwnerGID");
  lua_rawseti(L, -2, 12);
  lua_pushstring(L, "an_Info.fib_Reserved");
  lua_rawseti(L, -2, 13);
  lua_pushstring(L, "an_Flags");
  lua_rawseti(L, -2, 14);
  lua_setfield(L, -2, "__keys");
}

static void
_lua_gen_install_meta_AChain(lua_State *L) {
  if (luaL_newmetatable(L, "AChain")) {
    lua_pushcfunction(L, _lua_gen_AChain_index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, _lua_gen_AChain_newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pushcfunction(L, _lua_AChain_constructor);
    lua_setglobal(L, "AChain");
    _lua_gen_AChain_install_keys(L);
    lua_pushstring(L, "AChain");
    lua_setfield(L, -2, "__name");
  }
  lua_pop(L, 1);
}

static int
_lua_gen_LocalVar_newindex(lua_State *L)
{
  struct LocalVar *obj = *(struct LocalVar **)luaL_checkudata(L, 1, "LocalVar");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
  // Unsupported type lv_Node.ln_Succ struct Node
  if (strcmp(key, "lv_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field lv_Node.ln_Succ");
  }
  // Unsupported type lv_Node.ln_Pred struct Node
  if (strcmp(key, "lv_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field lv_Node.ln_Pred");
  }
  if (strcmp(key, "lv_Node.ln_Type") == 0) {
    obj->lv_Node.ln_Type = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lv_Node.ln_Pri") == 0) {
    obj->lv_Node.ln_Pri = (BYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "lv_Node.ln_Name") == 0) {
    obj->lv_Node.ln_Name = (char *)luaL_checkstring(L, 3);
    return 0;
  }
  // Unsupported type lv_Node struct Node
  if (strcmp(key, "lv_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field lv_Node");
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  // Unsupported lv_Node.ln_Succ struct Node *
  if (strcmp(key, "lv_Node.ln_Succ") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field lv_Node.ln_Succ");
  }
  // Unsupported lv_Node.ln_Pred struct Node *
  if (strcmp(key, "lv_Node.ln_Pred") == 0) {
    return luaL_error(L, "Unsupported type struct Node * for field lv_Node.ln_Pred");
  }
  if (strcmp(key, "lv_Node.ln_Type") == 0) {
    lua_pushinteger(L, obj->lv_Node.ln_Type);
    return 1;
  }
  if (strcmp(key, "lv_Node.ln_Pri") == 0) {
    lua_pushinteger(L, obj->lv_Node.ln_Pri);
    return 1;
  }
  if (strcmp(key, "lv_Node.ln_Name") == 0) {
    lua_pushstring(L, obj->lv_Node.ln_Name);
    return 1;
  }
  // Unsupported lv_Node struct Node
  if (strcmp(key, "lv_Node") == 0) {
    return luaL_error(L, "Unsupported type struct Node for field lv_Node");
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct LocalVar));
    return 1;
}

  return 0;
}

static void
_lua_gen_LocalVar_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "lv_Node.ln_Type");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "lv_Node.ln_Pri");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "lv_Node.ln_Name");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "lv_Flags");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "lv_Value");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "lv_Len");
  lua_rawseti(L, -2, 6);
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
static int
_lua_gen_NotifyRequest_newindex(lua_State *L)
{
  struct NotifyRequest *obj = *(struct NotifyRequest **)luaL_checkudata(L, 1, "NotifyRequest");
  const char *key = luaL_checkstring(L, 2);
  (void)key;(void)obj;
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
  if (strcmp(key, "nr_stuff.nr_Msg.nr_Port") == 0) {
    // finder 1
    //obj->nr_stuff.nr_Msg.nr_Port = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->nr_stuff.nr_Msg.nr_Port = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
    return 0;
  }
  // Unsupported type nr_stuff.nr_Signal.nr_Task struct Task
  if (strcmp(key, "nr_stuff.nr_Signal.nr_Task") == 0) {
    return luaL_error(L, "Unsupported type struct Task for field nr_stuff.nr_Signal.nr_Task");
  }
  if (strcmp(key, "nr_stuff.nr_Signal.nr_SignalNum") == 0) {
    obj->nr_stuff.nr_Signal.nr_SignalNum = (UBYTE)luaL_checkinteger(L, 3);
    return 0;
  }
  // nr_stuff.nr_Signal.nr_pad[3] proxied via the index
  // Unsupported type nr_stuff unnamed union
  if (strcmp(key, "nr_stuff") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field nr_stuff");
  }
  // nr_Reserved[4] proxied via the index
  if (strcmp(key, "nr_MsgCount") == 0) {
    obj->nr_MsgCount = (ULONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "nr_Handler") == 0) {
    // finder 1
    //obj->nr_Handler = *(struct MsgPort **)luaL_checkudata(L, 3, "MsgPort");
    obj->nr_Handler = (struct MsgPort *)_lua_gen_checkMsgPort(L, 3);
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
  (void)obj;
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
  if (strcmp(key, "nr_stuff.nr_Msg.nr_Port") == 0) {
    struct MsgPort **ud = (struct MsgPort **)lua_newuserdata(L, sizeof(struct MsgPort *));
    *ud = (struct MsgPort*)obj->nr_stuff.nr_Msg.nr_Port;
    luaL_getmetatable(L, "MsgPort");
    lua_setmetatable(L, -2);
    return 1;
  }
  // Unsupported nr_stuff.nr_Signal.nr_Task struct Task *
  if (strcmp(key, "nr_stuff.nr_Signal.nr_Task") == 0) {
    return luaL_error(L, "Unsupported type struct Task * for field nr_stuff.nr_Signal.nr_Task");
  }
  if (strcmp(key, "nr_stuff.nr_Signal.nr_SignalNum") == 0) {
    lua_pushinteger(L, obj->nr_stuff.nr_Signal.nr_SignalNum);
    return 1;
  }
  if (strcmp(key, "nr_stuff.nr_Signal.nr_pad") == 0) {
    _lua_gen_push_UBYTE_array_proxy(L, obj->nr_stuff.nr_Signal.nr_pad, 3);
    return 1;
  }
  // Unsupported nr_stuff unnamed union
  if (strcmp(key, "nr_stuff") == 0) {
    return luaL_error(L, "Unsupported type unnamed union for field nr_stuff");
  }
  if (strcmp(key, "nr_Reserved") == 0) {
    _lua_gen_push_ULONG_array_proxy(L, obj->nr_Reserved, 4);
    return 1;
  }
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct NotifyRequest));
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
  lua_pushstring(L, "nr_stuff.nr_Signal.nr_SignalNum");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "nr_stuff.nr_Signal.nr_pad");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "nr_Reserved");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "nr_MsgCount");
  lua_rawseti(L, -2, 8);
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
  (void)key;(void)obj;
  if (strcmp(key, "dat_Stamp.ds_Days") == 0) {
    obj->dat_Stamp.ds_Days = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_Stamp.ds_Minute") == 0) {
    obj->dat_Stamp.ds_Minute = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
  if (strcmp(key, "dat_Stamp.ds_Tick") == 0) {
    obj->dat_Stamp.ds_Tick = (LONG)luaL_checkinteger(L, 3);
    return 0;
  }
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
  (void)obj;
  const char *key = luaL_checkstring(L, 2);
  if (strcmp(key, "dat_Stamp.ds_Days") == 0) {
    lua_pushinteger(L, obj->dat_Stamp.ds_Days);
    return 1;
  }
  if (strcmp(key, "dat_Stamp.ds_Minute") == 0) {
    lua_pushinteger(L, obj->dat_Stamp.ds_Minute);
    return 1;
  }
  if (strcmp(key, "dat_Stamp.ds_Tick") == 0) {
    lua_pushinteger(L, obj->dat_Stamp.ds_Tick);
    return 1;
  }
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
  if (strcmp(key, "__size") == 0) {
    lua_pushinteger(L, sizeof(struct DateTime));
    return 1;
}

  return 0;
}

static void
_lua_gen_DateTime_install_keys(lua_State *L)
{
  lua_newtable(L);
  lua_pushstring(L, "dat_Stamp.ds_Days");
  lua_rawseti(L, -2, 1);
  lua_pushstring(L, "dat_Stamp.ds_Minute");
  lua_rawseti(L, -2, 2);
  lua_pushstring(L, "dat_Stamp.ds_Tick");
  lua_rawseti(L, -2, 3);
  lua_pushstring(L, "dat_Format");
  lua_rawseti(L, -2, 4);
  lua_pushstring(L, "dat_Flags");
  lua_rawseti(L, -2, 5);
  lua_pushstring(L, "dat_StrDay");
  lua_rawseti(L, -2, 6);
  lua_pushstring(L, "dat_StrDate");
  lua_rawseti(L, -2, 7);
  lua_pushstring(L, "dat_StrTime");
  lua_rawseti(L, -2, 8);
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
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
  _lua_gen_install_meta_TagItem(L);
  _lua_gen_install_meta_MsgPort(L);
  _lua_gen_install_meta_Unit(L);
  _lua_gen_install_meta_DateStamp(L);
  _lua_gen_install_meta_FileInfoBlock(L);
  _lua_gen_install_meta_InfoData(L);
  _lua_gen_install_meta_Process(L);
  _lua_gen_install_meta_DosPacket(L);
  _lua_gen_install_meta_Segment(L);
  _lua_gen_install_meta_CommandLineInterface(L);
  _lua_gen_install_meta_DosList(L);
  _lua_gen_install_meta_AssignList(L);
  _lua_gen_install_meta_DevProc(L);
  _lua_gen_install_meta_RecordLock(L);
  _lua_gen_install_meta_CSource(L);
  _lua_gen_install_meta_RDArgs(L);
  _lua_gen_install_meta_AnchorPath(L);
  _lua_gen_install_meta_AChain(L);
  _lua_gen_install_meta_LocalVar(L);
  _lua_gen_install_meta_NotifyRequest(L);
  _lua_gen_install_meta_DateTime(L);
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

