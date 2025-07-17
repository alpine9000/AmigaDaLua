#undef __stdargs
#define __stdargs

#include <sys/types.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <dos/dostags.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <proto/socket.h>
#include <proto/dos.h>
#include <proto/graphics.h>
#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/gadtools.h>
#include <graphics/rastport.h>
#include <graphics/videocontrol.h>
#include <graphics/copper.h>
#include <graphics/gels.h>
#include <intuition/intuition.h>
#include <intuition/screens.h>
#include <intuition/intuitionbase.h>
#include <intuition/imageclass.h>
#include <intuition/sghooks.h>
#include <exec/libraries.h>
#include <exec/types.h>
#include <exec/execbase.h>
#include <exec/ports.h>
#include <exec/execbase.h>
#include <libraries/gadtools.h>
#include <libraries/keymap.h>
#include <clib/alib_protos.h>
#include <devices/timer.h>
#include "list.h"

#define countof(x) (sizeof(x) / sizeof(x[0]))

int
amiga_doTagList(lua_State *L, struct TagItem *tags, uint16_t maxTags, uint16_t argNumber);

extern void
lua_gen_install(lua_State *L);

extern void
lua_install(lua_State *L);

void
amiga_serialPrint(const char *text);


typedef struct {
  struct Gadget *ptr;
} GadgetPtr;

#undef RemBob
void RemBob(struct Bob *b);

//CONST_STRPTR amiga_toCONST_STRPTR(void* data);

//struct IntuiMessage* amiga_toIntuiMessage(struct Message* msg);

struct Gadget **
amiga_checkGadgetPtr(lua_State *L, int stackIndex);

const char *
amiga_checkConstNullableString(lua_State *L, int stackIndex);

char *
amiga_checkNullableString(lua_State *L, int stackIndex);

BSTR
amiga_checkBSTR(lua_State *L, int stackIndex);

void
amiga_pushBSTR(lua_State *L, BSTR bstr);

int
amiga_readVarTags(lua_State* L, struct TagItem* taglist, int maxTags, int argNum);

void
amiga_lua_install(lua_State* L);

void
amiga_push_type(lua_State *L, void *o, const char *name);

void *
amiga_check_type(lua_State *L, int index, const char* name);

#define AMIGA_DA_LUA_BFT_VERSION 1


typedef struct {
  uint32_t version;

  char * (*strncpy)(char *, const char *, size_t);
  int	 (*strcmp)(const char *, const char *);
  void * (*malloc)(size_t __size);
  void * (*memset)(void *b, int c, size_t len);
  int    (*puts)(const char *s);

  int    (*__fixdfsi)(double A);
  double (*__floatsidf)(int I);
  
  int   (*lua_type) (lua_State *L, int idx);
  void  (*lua_setfield) (lua_State *L, int idx, const char *k);
  void  (*lua_settable) (lua_State *L, int idx);
  void  (*lua_settop) (lua_State *L, int idx);
  void  (*lua_setglobal) (lua_State *L, const char *name);
  int   (*lua_setmetatable) (lua_State *L, int objindex);    

  int   (*lua_getmetatable) (lua_State *L, int objindex);  
  int   (*lua_gettable) (lua_State *L, int idx);
  int   (*lua_getfield) (lua_State *L, int idx, const char *k);  

  int   (*lua_isinteger) (lua_State *L, int idx);  

  lua_Integer (*lua_tointegerx) (lua_State *L, int idx, int *isnum);
  void*       (*lua_touserdata) (lua_State *L, int idx);  
  
  int   (*lua_next) (lua_State *L, int idx);
  void  (*lua_rotate) (lua_State *L, int idx, int n);
  void  (*lua_rawseti) (lua_State *L, int idx, lua_Integer n);

  void  (*lua_pushvalue) (lua_State *L, int idx);
  void  (*lua_pushcclosure) (lua_State *L, lua_CFunction fn, int n);
  void  (*lua_pushboolean) (lua_State *L, int b);
  void  (*lua_pushlightuserdata) (lua_State *L, void *p);
  void  (*lua_pushnil) (lua_State *L);
  void  (*lua_pushinteger) (lua_State *L, lua_Integer n);
  void  (*lua_pushnumber) (lua_State *L, lua_Number n);    
  const char *(*lua_pushstring) (lua_State *L, const char *s);

  void  (*lua_createtable) (lua_State *L, int narr, int nrec);  

  int   (*luaL_newmetatable) (lua_State *L, const char *tname);
  void* (*lua_newuserdatauv) (lua_State *L, size_t sz, int nuvalue);  
  int   (*luaL_error) (lua_State *L, const char *fmt, ...);
  const char *(*luaL_checklstring) (lua_State *L, int arg, size_t *l);
  void *(*luaL_checkudata) (lua_State *L, int ud, const char *tname);
  lua_Integer (*luaL_checkinteger) (lua_State *L, int arg);
  lua_Number (*luaL_checknumber) (lua_State *L, int arg);
  

  int (*amiga_doTagList)(lua_State *L, struct TagItem *tags, uint16_t maxTags, uint16_t argNumber);  
  const char * (*amiga_checkConstNullableString)(lua_State *L, int stackIndex);  
  struct Gadget ** (*amiga_checkGadgetPtr)(lua_State *L, int stackIndex);
  char * (*amiga_checkNullableString)(lua_State *L, int stackIndex);  
  void (*amiga_pushBSTR)(lua_State *L, BSTR bstr);
  BSTR (*amiga_checkBSTR)(lua_State *L, int stackIndex);
  int (*amiga_readVarTags)(lua_State* L, struct TagItem* taglist, int maxTags, int argNum);  
  void (*amiga_push_type)(lua_State *L, void *o, const char *name);
  void* (*amiga_check_type)(lua_State *L, int index, const char* name);  

  void (*RemBob)(struct Bob* b);
  void (*DeleteTask)( struct Task *task );

  struct DosLibrary *DOSBase;
  struct ExecBase* ExecBase;
  struct GfxBase* GfxBase;
  struct ExecBase* SysBase;
  struct Library* GadToolsBase;
  struct IntuitionBase* IntuitionBase;

  dll_t* seglists;
  lua_State* L;
} amiga_da_lua_bft_t;

