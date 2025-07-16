#include "lauxlib.h"
#include "lualib.h"

#include "amiga.h"

amiga_da_lua_bft_t* _bft;



#define amiga_checkConstNullableString _bft->amiga_checkConstNullableString
#define amiga_checkBSTR _bft->amiga_checkBSTR
#define amiga_pushBSTR _bft->amiga_pushBSTR
#define amiga_checkNullableString _bft->amiga_checkNullableString
#define amiga_toIntuiMessage _bft->amiga_toIntuiMessage
#define amiga_checkGadgetPtr _bft->amiga_checkGadgetPtr
#define amiga_readVarTags _bft->amiga_readVarTags
#define amiga_doTagList _bft->amiga_doTagList

#define strncpy _bft->strncpy
#define strcmp _bft->strcmp
#define malloc _bft->malloc
#define memset _bft->memset

#define lua_type _bft->lua_type
#define luaL_newmetatable _bft->luaL_newmetatable
#define lua_newuserdatauv _bft->lua_newuserdatauv
#define luaL_error _bft->luaL_error
#define luaL_checklstring _bft->luaL_checklstring
#define luaL_checkudata _bft->luaL_checkudata
#define luaL_checkinteger _bft->luaL_checkinteger
#define lua_createtable _bft->lua_createtable

#define lua_isinteger _bft->lua_isinteger
#define lua_pushnil _bft->lua_pushnil
#define lua_pushvalue _bft->lua_pushvalue
#define lua_pushcclosure _bft->lua_pushcclosure
#define lua_pushboolean _bft->lua_pushboolean
#define lua_pushlightuserdata _bft->lua_pushlightuserdata
#define lua_pushstring _bft->lua_pushstring
#define lua_pushinteger _bft->lua_pushinteger

#define lua_getmetatable _bft->lua_getmetatable
#define lua_gettable _bft->lua_gettable
#define lua_getfield _bft->lua_getfield
#define lua_rawseti _bft->lua_rawseti
#define lua_settop _bft->lua_settop
#define lua_settable _bft->lua_settable
#define lua_setfield _bft->lua_setfield
#define lua_setglobal _bft->lua_setglobal
#define lua_setmetatable _bft->lua_setmetatable
#define lua_next _bft->lua_next
#define lua_rotate _bft->lua_rotate
#define lua_tointegerx _bft->lua_tointegerx
#define lua_touserdata _bft->lua_touserdata

#undef DOS_BASE_NAME
#define DOS_BASE_NAME _bft->DOSBase
#define ExecBase _bft->ExecBase
#define GfxBase _bft->GfxBase
#define SysBase _bft->SysBase
#define GadToolsBase _bft->GadToolsBase
#define IntuitionBase _bft->IntuitionBase

__attribute__ ((section (".entry")))
int
start(register amiga_da_lua_bft_t* bft asm("a0"))
{
  _bft = bft;
  lua_gen_install(_bft->L);
  return 0;
}

int
puts(const char* s)
{
  return _bft->puts(s);
}
#define _AMIGA_LUA_EXTENSION

//#include "thunk.c"
//#include "thread.c"

#undef NM_BARLABEL
#define NM_BARLABEL ((uint32_t)(STRPTR)-1)



