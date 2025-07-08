// generated with roid_lua_generate.py - run: python3 roid_lua_generate.py roid_lua_template.h > _lua_gen.h
static int
_lua_Open(lua_State* L)
{
  //  CONST_STRPTR name = luaL_checkstring(L, 1);
  //  LONG accessMode = luaL_checkinteger(L, 2);
  //  BPTR result = Open(name, accessMode);
  //  BPTR result = 0;
  //  lua_pushinteger(L, result);
  //  return 1;
  return 0;
}

static void
_lua_gen_installGeneratedMetaTables(lua_State *L)
{
}

static void
_lua_gen_installGeneratedEnums(lua_State *L)
{
}

static void
_lua_gen_installGeneratedFunctions(lua_State *L)
{
  lua_register(L, "Open", _lua_Open);
}

static void
_lua_gen_installGeneratedFunctionCallers(lua_State *L)
{
}

void
lua_gen_install(lua_State *L) {
  _lua_gen_installGeneratedMetaTables(L);
  _lua_gen_installGeneratedEnums(L);
  _lua_gen_installGeneratedFunctions(L);
  _lua_gen_installGeneratedFunctionCallers(L);
}

