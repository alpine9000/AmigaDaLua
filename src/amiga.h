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
#include <exec/libraries.h>
#include <exec/types.h>
#include <exec/execbase.h>
#include <exec/ports.h>
#include <exec/execbase.h>
#include <graphics/rastport.h>
#include <libraries/gadtools.h>


typedef struct Window Window;
typedef struct RastPort RastPort;
typedef struct TagItem TagItem;
typedef struct RastPort RastPort;
typedef struct MsgPort MsgPort;
typedef struct Message Message;
typedef struct IntuiMessage IntuiMessage;
typedef struct Gadget Gadget;
typedef struct View View;
typedef struct ViewPort ViewPort;
typedef struct IntuiText IntuiText;
typedef struct Screen Screen;
typedef struct Hook Hook;
typedef struct List List;
typedef struct GadgetInfo GadgetInfo;
typedef struct Image Image;
typedef struct IClass IClass;
typedef struct DrawInfo DrawInfo;
typedef struct ScreenBuffer ScreenBuffer;
typedef struct NewScreen NewScreen;
typedef struct NewGadget NewGadget;
typedef struct NewWindow NewWindow;
typedef struct Requester Requester;
typedef struct TextAttr TextAttr;
typedef struct StringInfo StringInfo;
typedef struct TextFont TextFont;
typedef struct NewMenu NewMenu;
typedef struct Menu Menu;
typedef struct MenuItem MenuItem;
typedef struct InputEvent InputEvent;
typedef struct BitMap BitMap;
typedef struct DBufInfo DBufInfo;

struct GadgetPtr{
    Gadget *ptr;
};

typedef struct GadgetPtr GadgetPtr;

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
