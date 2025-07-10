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
#include <intuition/intuition.h>
#include <intuition/screens.h>
#include <intuition/intuitionbase.h>
#include <intuition/imageclass.h>
#include <exec/libraries.h>
#include <exec/types.h>
#include <exec/execbase.h>
#include <exec/ports.h>
#include <exec/execbase.h>
#include <graphics/rastport.h>
#include <graphics/videocontrol.h>
#include <libraries/gadtools.h>

typedef struct {
  struct Gadget *ptr;
} GadgetPtr;

CONST_STRPTR TO_CONST_STRPTR(void* data)
{
  return (CONST_STRPTR)data;
}

struct IntuiMessage* TO_IntuiMessage(struct Message* msg)
{
  return (struct IntuiMessage*)msg;
}


struct Gadget **
amiga_checkGadgetPtr(lua_State *L, int stackIndex);

const char *
amiga_checkConstNullableString(lua_State *L, int stackIndex);

char *
amiga_checkNullableString(lua_State *L, int stackIndex);
