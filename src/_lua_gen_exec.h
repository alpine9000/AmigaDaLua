// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h
#define _lua_gen_pushNode(l, o) amiga_push_type(l, o, "Node")

#define _lua_gen_checkNode(l, i) amiga_check_type(l, i,  "Node")

#define _lua_gen_pushMinNode(l, o) amiga_push_type(l, o, "MinNode")

#define _lua_gen_checkMinNode(l, i) amiga_check_type(l, i,  "MinNode")

#define _lua_gen_pushList(l, o) amiga_push_type(l, o, "List")

#define _lua_gen_checkList(l, i) amiga_check_type(l, i,  "List")

#define _lua_gen_pushMinList(l, o) amiga_push_type(l, o, "MinList")

#define _lua_gen_checkMinList(l, i) amiga_check_type(l, i,  "MinList")

#define _lua_gen_pushTask(l, o) amiga_push_type(l, o, "Task")

#define _lua_gen_checkTask(l, i) amiga_check_type(l, i,  "Task")

#define _lua_gen_pushStackSwapStruct(l, o) amiga_push_type(l, o, "StackSwapStruct")

#define _lua_gen_checkStackSwapStruct(l, i) amiga_check_type(l, i,  "StackSwapStruct")

#define _lua_gen_pushMsgPort(l, o) amiga_push_type(l, o, "MsgPort")

#define _lua_gen_checkMsgPort(l, i) amiga_check_type(l, i,  "MsgPort")

#define _lua_gen_pushMessage(l, o) amiga_push_type(l, o, "Message")

#define _lua_gen_checkMessage(l, i) amiga_check_type(l, i,  "Message")

#define _lua_gen_pushLibrary(l, o) amiga_push_type(l, o, "Library")

#define _lua_gen_checkLibrary(l, i) amiga_check_type(l, i,  "Library")

#define _lua_gen_pushSemaphoreRequest(l, o) amiga_push_type(l, o, "SemaphoreRequest")

#define _lua_gen_checkSemaphoreRequest(l, i) amiga_check_type(l, i,  "SemaphoreRequest")

#define _lua_gen_pushSignalSemaphore(l, o) amiga_push_type(l, o, "SignalSemaphore")

#define _lua_gen_checkSignalSemaphore(l, i) amiga_check_type(l, i,  "SignalSemaphore")

#define _lua_gen_pushSemaphoreMessage(l, o) amiga_push_type(l, o, "SemaphoreMessage")

#define _lua_gen_checkSemaphoreMessage(l, i) amiga_check_type(l, i,  "SemaphoreMessage")

#define _lua_gen_pushIORequest(l, o) amiga_push_type(l, o, "IORequest")

#define _lua_gen_checkIORequest(l, i) amiga_check_type(l, i,  "IORequest")

#define _lua_gen_pushDevice(l, o) amiga_push_type(l, o, "Device")

#define _lua_gen_checkDevice(l, i) amiga_check_type(l, i,  "Device")

#define _lua_gen_pushInterrupt(l, o) amiga_push_type(l, o, "Interrupt")

#define _lua_gen_checkInterrupt(l, i) amiga_check_type(l, i,  "Interrupt")

#define _lua_gen_pushMemHeader(l, o) amiga_push_type(l, o, "MemHeader")

#define _lua_gen_checkMemHeader(l, i) amiga_check_type(l, i,  "MemHeader")

#define _lua_gen_pushMemList(l, o) amiga_push_type(l, o, "MemList")

#define _lua_gen_checkMemList(l, i) amiga_check_type(l, i,  "MemList")

#define _lua_gen_pushResident(l, o) amiga_push_type(l, o, "Resident")

#define _lua_gen_checkResident(l, i) amiga_check_type(l, i,  "Resident")

#define _lua_gen_pushMemChunk(l, o) amiga_push_type(l, o, "MemChunk")

#define _lua_gen_checkMemChunk(l, i) amiga_check_type(l, i,  "MemChunk")

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
_lua_DeleteTask(lua_State* L)
{
  (void)L;
  struct Task * task = _lua_gen_checkTask(L, 1);
  DeleteTask(task);
  return 0;
}

static void
_lua_gen_install_defines(lua_State *L)
{
  lua_pushinteger(L, MEMF_PUBLIC);
  lua_setglobal(L, "MEMF_PUBLIC");
  lua_pushinteger(L, MEMF_CLEAR);
  lua_setglobal(L, "MEMF_CLEAR");
  lua_pushinteger(L, MEMF_CHIP);
  lua_setglobal(L, "MEMF_CHIP");
  lua_pushinteger(L, MEMF_FAST);
  lua_setglobal(L, "MEMF_FAST");
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
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
  _lua_gen_install_meta_Interrupt(L);
  _lua_gen_install_meta_MemHeader(L);
  _lua_gen_install_meta_MemList(L);
  _lua_gen_install_meta_Resident(L);
  _lua_gen_install_meta_MemChunk(L);
}

static void
_lua_gen_installGeneratedEnums(lua_State *L)
{
  (void)L;
}

static void
_lua_gen_installGeneratedFunctions(lua_State *L)
{(void)L;

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
  lua_register(L, "DeleteTask", _lua_DeleteTask);
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

