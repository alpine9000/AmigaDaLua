// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h
#define _lua_gen_pushNode(l, o) amiga_push_type(l, o, "Node")

#define _lua_gen_checkNode(l, i) amiga_check_type(l, i,  "Node")

#define _lua_gen_pushMsgPort(l, o) amiga_push_type(l, o, "MsgPort")

#define _lua_gen_checkMsgPort(l, i) amiga_check_type(l, i,  "MsgPort")

#define _lua_gen_pushTimeVal_Type(l, o) amiga_push_type(l, o, "TimeVal_Type")

#define _lua_gen_checkTimeVal_Type(l, i) amiga_check_type(l, i,  "TimeVal_Type")

#define _lua_gen_pushCustom(l, o) amiga_push_type(l, o, "Custom")

#define _lua_gen_checkCustom(l, i) amiga_check_type(l, i,  "Custom")

#define _lua_gen_pushInputEvent(l, o) amiga_push_type(l, o, "InputEvent")

#define _lua_gen_checkInputEvent(l, i) amiga_check_type(l, i,  "InputEvent")

#define _lua_gen_pushUnit(l, o) amiga_push_type(l, o, "Unit")

#define _lua_gen_checkUnit(l, i) amiga_check_type(l, i,  "Unit")

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
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Succ") == 0) {
    // finder 1
    //obj->unit_MsgPort.mp_Node.ln_Succ = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_Node.ln_Succ = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pred") == 0) {
    // finder 1
    //obj->unit_MsgPort.mp_Node.ln_Pred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_Node.ln_Pred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
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
  if (strcmp(key, "unit_MsgPort.mp_Node") == 0) {
    // finder 0
    struct Node *val = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_Node = *val;
    return 0;
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
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Head") == 0) {
    // finder 1
    //obj->unit_MsgPort.mp_MsgList.lh_Head = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_MsgList.lh_Head = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Tail") == 0) {
    // finder 1
    //obj->unit_MsgPort.mp_MsgList.lh_Tail = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_MsgList.lh_Tail = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    // finder 1
    //obj->unit_MsgPort.mp_MsgList.lh_TailPred = *(struct Node **)luaL_checkudata(L, 3, "Node");
    obj->unit_MsgPort.mp_MsgList.lh_TailPred = (struct Node *)_lua_gen_checkNode(L, 3);
    return 0;
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
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Succ") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->unit_MsgPort.mp_Node.ln_Succ;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_Node.ln_Pred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->unit_MsgPort.mp_Node.ln_Pred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
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
  if (strcmp(key, "unit_MsgPort.mp_Node") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)&obj->unit_MsgPort.mp_Node;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
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
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Head") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->unit_MsgPort.mp_MsgList.lh_Head;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_Tail") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->unit_MsgPort.mp_MsgList.lh_Tail;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
  }
  if (strcmp(key, "unit_MsgPort.mp_MsgList.lh_TailPred") == 0) {
    struct Node **ud = (struct Node **)lua_newuserdata(L, sizeof(struct Node *));
    *ud = (struct Node*)obj->unit_MsgPort.mp_MsgList.lh_TailPred;
    luaL_getmetatable(L, "Node");
    lua_setmetatable(L, -2);
    return 1;
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

static void
_lua_gen_install_defines(lua_State *L)
{
  lua_pushinteger(L, TRUE);
  lua_setglobal(L, "TRUE");
  lua_pushinteger(L, ERROR_NO_FREE_STORE);
  lua_setglobal(L, "ERROR_NO_FREE_STORE");
  lua_pushinteger(L, RETURN_OK);
  lua_setglobal(L, "RETURN_OK");
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
  _lua_gen_install_meta_Node(L);
  _lua_gen_install_meta_MsgPort(L);
  _lua_gen_install_meta_Unit(L);
  _lua_gen_install_meta_TimeVal_Type(L);
  _lua_gen_install_meta_Custom(L);
  _lua_gen_install_meta_AudChannel(L);
  _lua_gen_install_meta_InputEvent(L);
}

static void
_lua_gen_installGeneratedEnums(lua_State *L)
{
  (void)L;
}

static void
_lua_gen_installGeneratedFunctions(lua_State *L)
{(void)L;

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

