TYPES = [
    #AmigaDaLua custom types
    "GadgetPtr",
    
    #GadTools
    "NewGadget",
    "NewMenu",

    #Required from other extensions
    "Point",
    "InputEvent",
    "List",
    "MsgPort",
    "Message",    

    #Intuition
    "BitMap",
    "Border",
    "DBufInfo",
    "DrawInfo",
    "Gadget",
    "GadgetInfo",
    "IBox",
    "IClass",
    "Image",
    "IntuiMessage",
    "IntuiText",
    "KeyMap",
    "Menu",
    "MenuItem",
    "NewScreen",
    "NewWindow",    
    "RasInfo",
    "RastPort",
    "Requester",
    "Screen",
    "ScreenBuffer",
    "StringExtend",
    "StringInfo",
    "TextAttr",
    "TextFont",    
    "View",
    "ViewPort" ,
    "ViewPort",
    "ViewPortExtra",
    "Window",

    #Layers
    "ClipRect",
    "Layer_Info",

    #Utility
    "Hook",    
    #"Tag",    
    #"TagItem",    

]    

TYPE_CONFIG = {

}

ENUM_CONFIG = []

DEFINE_CONFIGS = [
    "TRUE", "ERROR_NO_FREE_STORE","RETURN_OK",
    "MEMF_PUBLIC", "MEMF_CLEAR", "MEMF_CHIP", "MEMF_FAST",
    "MODE_OLDFILE", "MODE_NEWFILE", "MODE_READWRITE",
    "DOSTRUE", "DOSFALSE",
    
    "WA_Left","WA_Top","WA_Width","WA_Height","WA_DetailPen","WA_BlockPen","WA_IDCMP","WA_Flags","WA_Gadgets","WA_Checkmark","WA_Title",
    "WA_ScreenTitle","WA_CustomScreen","WA_SuperBitMap","WA_MinWidth","WA_MinHeight","WA_MaxWidth","WA_MaxHeight","WA_InnerWidth","WA_InnerHeight",
    "WA_PubScreenName","WA_PubScreen","WA_PubScreenFallBack","WA_WindowName","WA_Colors","WA_Zoom","WA_MouseQueue","WA_BackFill","WA_RptQueue",
    "WA_SizeGadget","WA_DragBar","WA_DepthGadget","WA_CloseGadget","WA_Backdrop","WA_ReportMouse","WA_NoCareRefresh","WA_Borderless","WA_Activate",
    "WA_RMBTrap","WA_WBenchWindow","WA_SimpleRefresh","WA_SmartRefresh","WA_SizeBRight","WA_SizeBBottom","WA_AutoAdjust","WA_GimmeZeroZero",
    "WA_MenuHelp","WA_NewLookMenus","WA_AmigaKey","WA_NotifyDepth","WA_Pointer","WA_BusyPointer","WA_PointerDelay","WA_TabletMessages",
    "WA_HelpGroup","WA_HelpGroupWindow","WA_Hidden","WA_PointerType","WA_IconifyGadget", "TAG_END",
    
    "IDCMP_SIZEVERIFY","IDCMP_NEWSIZE","IDCMP_REFRESHWINDOW","IDCMP_MOUSEBUTTONS","IDCMP_MOUSEMOVE","IDCMP_GADGETDOWN","IDCMP_GADGETUP",
    "IDCMP_REQSET","IDCMP_MENUPICK","IDCMP_CLOSEWINDOW","IDCMP_RAWKEY","IDCMP_REQVERIFY","IDCMP_REQCLEAR","IDCMP_MENUVERIFY","IDCMP_NEWPREFS",
    "IDCMP_DISKINSERTED","IDCMP_DISKREMOVED","IDCMP_WBENCHMESSAGE","IDCMP_ACTIVEWINDOW","IDCMP_INACTIVEWINDOW","IDCMP_DELTAMOVE","IDCMP_VANILLAKEY",
    "IDCMP_INTUITICKS","IDCMP_IDCMPUPDATE","IDCMP_MENUHELP","IDCMP_CHANGEWINDOW","IDCMP_GADGETHELP","IDCMP_EXTENDEDMOUSE","IDCMP_LONELYMESSAGE",

    #gadtools.h
    "GENERIC_KIND","BUTTON_KIND","CHECKBOX_KIND","INTEGER_KIND","LISTVIEW_KIND","MX_KIND","NUMBER_KIND","CYCLE_KIND","PALETTE_KIND","SCROLLER_KIND",
    "SLIDER_KIND","STRING_KIND","TEXT_KIND","NUM_KINDS","ARROWIDCMP","BUTTONIDCMP","CHECKBOXIDCMP","INTEGERIDCMP","LISTVIEWIDCMP","MXIDCMP",
    "NUMBERIDCMP","CYCLEIDCMP","PALETTEIDCMP","SCROLLERIDCMP","SLIDERIDCMP","STRINGIDCMP","TEXTIDCMP","PLACETEXT_LEFT","PLACETEXT_RIGHT",
    "PLACETEXT_ABOVE","PLACETEXT_BELOW","PLACETEXT_IN","NG_HIGHLABEL","NG_GRIDLAYOUT","MENU_IMAGE","NM_TITLE","NM_ITEM","NM_SUB","IM_ITEM",
    "IM_SUB","NM_END","NM_IGNORE","NM_BARLABEL","NM_MENUDISABLED","NM_ITEMDISABLED","NM_COMMANDSTRING","NM_FLAGMASK","NM_FLAGMASK_V39",
    "GTMENU_TRIMMED","GTMENU_INVALID","GTMENU_NOMEM","MX_WIDTH","MX_HEIGHT","CHECKBOX_WIDTH","CHECKBOX_HEIGHT","GT_TagBase","GTVI_NewWindow",
    "GTVI_NWTags","GT_Private0","GTCB_Checked","GTLV_Top","GTLV_Labels","GTLV_ReadOnly","GTLV_ScrollWidth","GTMX_Labels","GTMX_Active","GTTX_Text",
    "GTTX_CopyText","GTNM_Number","GTCY_Labels","GTCY_Active","GTPA_Depth","GTPA_Color","GTPA_ColorOffset","GTPA_IndicatorWidth",
    "GTPA_IndicatorHeight","GTSC_Top","GTSC_Total","GTSC_Visible","GTSC_Overlap","GTSL_Min","GTSL_Max","GTSL_Level","GTSL_MaxLevelLen",
    "GTSL_LevelFormat","GTSL_LevelPlace","GTSL_DispFunc","GTST_String","GTST_MaxChars","GTIN_Number","GTIN_MaxChars","GTMN_TextAttr",
    "GTMN_FrontPen","GTBB_Recessed","GT_VisualInfo","GTLV_ShowSelected","GTLV_Selected","GT_Reserved1","GTTX_Border","GTNM_Border","GTSC_Arrows",
    "GTMN_Menu","GTMX_Spacing","GTMN_FullMenu","GTMN_SecondaryError","GT_Underscore","GTST_EditHook","GTIN_EditHook","GTMN_Checkmark",
    "GTMN_AmigaKey","GTMN_NewLookMenus","GTCB_Scaled","GTMX_Scaled","GTPA_NumColors","GTMX_TitlePlace","GTTX_FrontPen","GTTX_BackPen",
    "GTTX_Justification","GTNM_FrontPen","GTNM_BackPen","GTNM_Justification","GTNM_Format","GTNM_MaxNumberLen","GTBB_FrameType","GTLV_MakeVisible",
    "GTLV_ItemHeight","GTSL_MaxPixelLen","GTSL_Justification","GTPA_ColorTable","GTLV_CallBack","GTLV_MaxPen","GTTX_Clipped","GTNM_Clipped",
    "GTBB_reserved1","GTMN_reserved1","GTLV_Total","GTLV_Visible","GTBB_Scale","GTBB_Headline","GTBB_HeadlinePen","GTBB_HeadlineFont",
    "GTVI_LeftBorder","GTVI_TopBorder","GTVI_AlignRight","GTVI_AlignBottom","GTVI_MinFontWidth","GTVI_MinFontHeight","GTMX_ScaledSpacing",
    "GT_Reserved0","GTJ_LEFT","GTJ_RIGHT","GTJ_CENTER","BBFT_BUTTON","BBFT_RIDGE","BBFT_ICONDROPBOX","BBFT_DISPLAY","BBFT_CTXTFRAME","INTERWIDTH",
    "INTERHEIGHT","NWAY_KIND","NWAYIDCMP","GTNW_Labels","GTNW_Active","GADTOOLBIT","GADTOOLMASK","LV_DRAW","LVCB_OK","LVCB_UNKNOWN","LVR_NORMAL",
    "LVR_SELECTED","LVR_NORMALDISABLED","LVR_SELECTEDDISABLED",

    #obsolete.h
    "GADGHIGHBITS","GADGHCOMP","GADGHBOX","GADGHIMAGE","GADGHNONE","GADGIMAGE","GRELBOTTOM","GRELRIGHT","GRELWIDTH","GRELHEIGHT","SELECTED",
    "GADGDISABLED","LABELMASK","LABELITEXT","LABELSTRING","LABELIMAGE","RELVERIFY","GADGIMMEDIATE","ENDGADGET","FOLLOWMOUSE","RIGHTBORDER",
    "LEFTBORDER","TOPBORDER","BOTTOMBORDER","BORDERSNIFF","TOGGLESELECT","BOOLEXTEND","STRINGLEFT","STRINGCENTER","STRINGRIGHT","LONGINT",
    "ALTKEYMAP","STRINGEXTEND","ACTIVEGADGET","GADGETTYPE","SYSGADGET","SCRGADGET","GZZGADGET","REQGADGET","SIZING","WDRAGGING","SDRAGGING",
    "WUPFRONT","SUPFRONT","WDOWNBACK","SDOWNBACK","CLOSE","BOOLGADGET","GADGET0002","PROPGADGET","STRGADGET","CUSTOMGADGET","GTYPEMASK","SIZEVERIFY",
    "NEWSIZE","REFRESHWINDOW","MOUSEBUTTONS","MOUSEMOVE","GADGETDOWN","GADGETUP","REQSET","MENUPICK","CLOSEWINDOW","RAWKEY","REQVERIFY","REQCLEAR",
    "MENUVERIFY","NEWPREFS","DISKINSERTED","DISKREMOVED","WBENCHMESSAGE","ACTIVEWINDOW","INACTIVEWINDOW","DELTAMOVE","VANILLAKEY","INTUITICKS",
    "IDCMPUPDATE","MENUHELP","CHANGEWINDOW","LONELYMESSAGE","WINDOWSIZING","WINDOWDRAG","WINDOWDEPTH","WINDOWCLOSE","SIZEBRIGHT","SIZEBBOTTOM",
    "REFRESHBITS","SMART_REFRESH","SIMPLE_REFRESH","SUPER_BITMAP","OTHER_REFRESH","BACKDROP","REPORTMOUSE","GIMMEZEROZERO","BORDERLESS","ACTIVATE",
    "WINDOWACTIVE","INREQUEST","MENUSTATE","RMBTRAP","NOCAREREFRESH","WINDOWREFRESH","WBENCHWINDOW","WINDOWTICKED","NW_EXTENDED","VISITOR","ZOOMED",
    "HASZOOM","GA_LEFT","GA_RELRIGHT","GA_TOP","GA_RELBOTTOM","GA_WIDTH","GA_RELWIDTH","GA_HEIGHT","GA_RELHEIGHT","GA_TEXT","GA_IMAGE","GA_BORDER",
    "GA_SELECTRENDER","GA_HIGHLIGHT","GA_DISABLED","GA_GZZGADGET","GA_USERDATA","GA_SPECIALINFO","GA_SELECTED","GA_ENDGADGET","GA_IMMEDIATE",
    "GA_RELVERIFY","GA_FOLLOWMOUSE","GA_RIGHTBORDER","GA_LEFTBORDER","GA_TOPBORDER","GA_BOTTOMBORDER","GA_TOGGLESELECT","GA_SYSGADGET",
    "GA_SYSGTYPE","GA_PREVIOUS","GA_NEXT","GA_DRAWINFO","GA_INTUITEXT","GA_LABELIMAGE","PGA_FREEDOM","PGA_BORDERLESS","PGA_HORIZPOT",
    "PGA_HORIZBODY","PGA_VERTPOT","PGA_VERTBODY","PGA_TOTAL","PGA_VISIBLE","PGA_TOP","LAYOUTA_LAYOUTOBJ","LAYOUTA_SPACING","LAYOUTA_ORIENTATION",
    "IMAGE_ATTRIBUTES","IA_LEFT","IA_TOP","IA_WIDTH","IA_HEIGHT","IA_FGPEN","IA_BGPEN","IA_DATA","IA_LINEWIDTH","IA_PENS","IA_RESOLUTION",
    "IA_APATTERN","IA_APATSIZE","IA_MODE","IA_FONT","IA_OUTLINE","IA_RECESSED","IA_DOUBLEEMBOSS","IA_EDGESONLY","IA_SHADOWPEN","IA_HIGHLIGHTPEN",
    "detailPen","blockPen","textPen","shinePen","shadowPen","hifillPen","hifilltextPen","backgroundPen","hilighttextPen","numDrIPens",

]

FUNCTION_CONFIG = [
    #gadtools_lib.sfd
    "CreateContext", "FreeGadgets", "FreeMenus", "FreeVisualInfo", "GTReserved2", "GTReserved3", "GTReserved4", "GTReserved5", "GT_BeginRefresh",
    "GT_EndRefresh", "GT_FilterIMsg", "GT_GetIMsg", "GT_PostFilterIMsg", "GT_RefreshWindow", "GT_ReplyIMsg",
        
    #intuition_lib.sfd
    "ActivateWindow", "AddClass", "AlohaWorkbench", "BeginRefresh", "ChangeScreenBuffer", "ClearDMRequest", "ClearMenuStrip", "ClearPointer",
    "CloseScreen", "CloseWindow", "CloseWorkBench", "CurrentTime", "DisplayAlert", "DisplayBeep", "DisposeObject", "EndRefresh", "EndRequest",
    "FindClass", "FreeClass", "FreeScreenBuffer", "FreeSysRequest", "GetAttr", "GetDefaultPubScreen", "GetScreenDrawInfo", "HelpControl",
    "HideWindow", "InitRequester", "IntuiTextLength", "Intuition", "ItemAddress", "LendMenus", "LockIBase", "LockPubScreen", "LockPubScreenList",
    "MakeScreen", "ModifyIDCMP", "MoveScreen", "MoveWindow", "NextObject", "NextPubScreen", "ObtainGIRPort", "OffMenu", "OnMenu", "OpenIntuition",
    "OpenScreen", "OpenWindow", "OpenWorkBench", "PointInImage", "PubScreenStatus", "RefreshWindowFrame", "ReleaseGIRPort", "RemakeDisplay",
    "RemoveClass", "RemoveGadget", "ReportMouse", "ReportMouse1", "Request", "ResetMenuStrip", "RethinkDisplay", "ScreenDepth", "ScreenToBack",
    "ScreenToFront", "SetDMRequest", "SetDefaultPubScreen", "SetEditHook", "SetIPrefs", "SetMenuStrip", "SetMouseQueue", "SetPubScreenModes",
    "ShowTitle", "ShowWindow", "SizeWindow", "TimedDisplayAlert", "UnlockIBase", "UnlockPubScreen", "UnlockPubScreenList", "ViewAddress",
    "ViewPortAddress", "WBenchToBack", "WBenchToFront", "WindowToBack", "WindowToFront", "ZipWindow", "lockPubClass", "unlockPubClass",
    # not working yet - "FreeRemember",
]

TAGS_FUNCTION_CONFIG = [
    { "name": "CreateGadget", "tagList": "CreateGadgetA"},
    { "name": "OpenWindowTags", "tagList": "OpenWindowTagList"},
    { "name": "GetVisualInfo", "tagList": "GetVisualInfoA"},
    { "name": "GT_SetGadgetAttrs", "tagList": "GT_SetGadgetAttrsA"},

     #gadtools_lib.sfd
     { "name": "CreateGadget", "tagList": "CreateGadgetA" },
     { "name": "CreateMenus", "tagList": "CreateMenusA" },
     { "name": "DrawBevelBox", "tagList": "DrawBevelBoxA" },
     { "name": "GT_GetGadgetAttrs", "tagList": "GT_GetGadgetAttrsA" },
     { "name": "GT_SetGadgetAttrs", "tagList": "GT_SetGadgetAttrsA" },
     { "name": "GetVisualInfo", "tagList": "GetVisualInfoA" },
     { "name": "LayoutMenuItems", "tagList": "LayoutMenuItemsA" },
     { "name": "LayoutMenus", "tagList": "LayoutMenusA" },
     { "name": "ScaleGadgetRect", "tagList": "ScaleGadgetRectA" },
     { "name": "SetDesignFont", "tagList": "SetDesignFontA" },

     #intuition_lib.sfd     
     { "name": "IntuitionControl", "tagList": "IntuitionControlA" },
     { "name": "SetAttrs", "tagList": "SetAttrsA" },
     { "name": "SetWindowPointer", "tagList": "SetWindowPointerA" },
     { "name": "OpenScreenTags", "tagList": "OpenScreenTagList"},
]

FAKE_FUNCTION_CONFIG = [

]

FAKE_BOOL_FUNCTION_CONFIG = [

]

BOOL_FUNCTION_CONFIG = [

]

FUNCTOR_SKIP = []
