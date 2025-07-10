import sys
import clang.cindex
import re

TYPE_CONFIG = {
    #AmigaDaLua custom types
    "GadgetPtr": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},

    #Dos
    "FileInfoBlock": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "InfoData":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "DateStamp": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "DosPacket": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "RecordLock": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "CommandLineInterface": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "Process": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "DevProc": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "DosList": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "DateTime": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "Segment":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "AnchorPath": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "RDArgs":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "NotifyRequest": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "LocalVar":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    
    #Exec
    "Message": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MsgPort": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "List": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Resident": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Interrupt": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MemHeader": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MemList":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Node":   {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MinList":   {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MaxList":   {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MinNode":   {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Task":    {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Library": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Device":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "IORequest": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "SignalSemaphore": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "SemaphoreMessage": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "StackSwapStruct":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},

    #Utility
    "TagItem": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "Hook": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},    
    
    #Intuition
    "Window": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "NewWindow": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},    
    "RastPort": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "IntuiMessage": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "View": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "ViewPort": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "IntuiText": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Screen": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "NewScreen": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "IClass": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "DrawInfo": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "ScreenBuffer": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "GadgetInfo": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Image":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "StringInfo": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "TextAttr": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True, "struct": True},
    "TextFont":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},    
    "Gadget": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Requester": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "Menu":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "MenuItem":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "BitMap":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "DBufInfo":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},    
    
    #GadTools
    "NewGadget": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
    "NewMenu":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},

    #Devices
    "InputEvent": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False, "interface": True},
}

ENUM_CONFIG = []

DEFINE_CONFIGS = [
    "TRUE",
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
    "GENERIC_KIND","BUTTON_KIND","CHECKBOX_KIND","INTEGER_KIND","LISTVIEW_KIND","MX_KIND","NUMBER_KIND","CYCLE_KIND","PALETTE_KIND","SCROLLER_KIND","SLIDER_KIND","STRING_KIND","TEXT_KIND","NUM_KINDS","ARROWIDCMP","BUTTONIDCMP","CHECKBOXIDCMP","INTEGERIDCMP","LISTVIEWIDCMP","MXIDCMP","NUMBERIDCMP","CYCLEIDCMP","PALETTEIDCMP","SCROLLERIDCMP","SLIDERIDCMP","STRINGIDCMP","TEXTIDCMP","PLACETEXT_LEFT","PLACETEXT_RIGHT","PLACETEXT_ABOVE","PLACETEXT_BELOW","PLACETEXT_IN","NG_HIGHLABEL","NG_GRIDLAYOUT","MENU_IMAGE","NM_TITLE","NM_ITEM","NM_SUB","IM_ITEM","IM_SUB","NM_END","NM_IGNORE","NM_BARLABEL","NM_MENUDISABLED","NM_ITEMDISABLED","NM_COMMANDSTRING","NM_FLAGMASK","NM_FLAGMASK_V39","GTMENU_TRIMMED","GTMENU_INVALID","GTMENU_NOMEM","MX_WIDTH","MX_HEIGHT","CHECKBOX_WIDTH","CHECKBOX_HEIGHT","GT_TagBase","GTVI_NewWindow","GTVI_NWTags","GT_Private0","GTCB_Checked","GTLV_Top","GTLV_Labels","GTLV_ReadOnly","GTLV_ScrollWidth","GTMX_Labels","GTMX_Active","GTTX_Text","GTTX_CopyText","GTNM_Number","GTCY_Labels","GTCY_Active","GTPA_Depth","GTPA_Color","GTPA_ColorOffset","GTPA_IndicatorWidth","GTPA_IndicatorHeight","GTSC_Top","GTSC_Total","GTSC_Visible","GTSC_Overlap","GTSL_Min","GTSL_Max","GTSL_Level","GTSL_MaxLevelLen","GTSL_LevelFormat","GTSL_LevelPlace","GTSL_DispFunc","GTST_String","GTST_MaxChars","GTIN_Number","GTIN_MaxChars","GTMN_TextAttr","GTMN_FrontPen","GTBB_Recessed","GT_VisualInfo","GTLV_ShowSelected","GTLV_Selected","GT_Reserved1","GTTX_Border","GTNM_Border","GTSC_Arrows","GTMN_Menu","GTMX_Spacing","GTMN_FullMenu","GTMN_SecondaryError","GT_Underscore","GTST_EditHook","GTIN_EditHook","GTMN_Checkmark","GTMN_AmigaKey","GTMN_NewLookMenus","GTCB_Scaled","GTMX_Scaled","GTPA_NumColors","GTMX_TitlePlace","GTTX_FrontPen","GTTX_BackPen","GTTX_Justification","GTNM_FrontPen","GTNM_BackPen","GTNM_Justification","GTNM_Format","GTNM_MaxNumberLen","GTBB_FrameType","GTLV_MakeVisible","GTLV_ItemHeight","GTSL_MaxPixelLen","GTSL_Justification","GTPA_ColorTable","GTLV_CallBack","GTLV_MaxPen","GTTX_Clipped","GTNM_Clipped","GTBB_reserved1","GTMN_reserved1","GTLV_Total","GTLV_Visible","GTBB_Scale","GTBB_Headline","GTBB_HeadlinePen","GTBB_HeadlineFont","GTVI_LeftBorder","GTVI_TopBorder","GTVI_AlignRight","GTVI_AlignBottom","GTVI_MinFontWidth","GTVI_MinFontHeight","GTMX_ScaledSpacing","GT_Reserved0","GTJ_LEFT","GTJ_RIGHT","GTJ_CENTER","BBFT_BUTTON","BBFT_RIDGE","BBFT_ICONDROPBOX","BBFT_DISPLAY","BBFT_CTXTFRAME","INTERWIDTH","INTERHEIGHT","NWAY_KIND","NWAYIDCMP","GTNW_Labels","GTNW_Active","GADTOOLBIT","GADTOOLMASK","LV_DRAW","LVCB_OK","LVCB_UNKNOWN","LVR_NORMAL","LVR_SELECTED","LVR_NORMALDISABLED","LVR_SELECTEDDISABLED"
]

FUNCTION_CONFIG = [
    "Open","Read",

    "AllocMem",

    "PutStr",

    "Move","Text",

    "LockPubScreen", "UnlockPubScreen", "CloseWindow", "OpenFont", "CloseFont",
    
    "TO_CONST_STRPTR", "TO_IntuiMessage",

    #exec_lib.sfd
    "AbortIO", "AddDevice", "AddHead", "AddHeadMinList", "AddIntServer", "AddLibrary", "AddMemHandler", "AddPort", "AddResource", "AddSemaphore", "AddTail", "AddTailMinList", "AddTask", "Alert", "AllocAbs", "AllocEntry", "AllocMem", "AllocPooled", "AllocSignal", "AllocTrap", "AllocVec", "Allocate", "AttemptSemaphore", "AttemptSemaphoreShared", "AvailMem", "CacheClearE", "CacheClearU", "CacheControl", "CachePostDMA", "CachePreDMA", "Cause", "CheckIO", "CloseDevice", "CloseLibrary", "ColdReboot", "CopyMem", "CopyMemQuick", "CreateIORequest", "CreateMsgPort", "CreatePool", "Debug", "DeleteIORequest", "DeleteMsgPort", "DeletePool", "Disable", "Dispatch", "DoIO", "Enable", "Enqueue", "Exception", "ExecObsolete1", "ExecObsolete2", "ExecObsolete3", "ExecObsolete4", "ExecReserved04", "ExecReserved05", "ExecReserved06", "ExecReserved08", "ExecReserved10", "ExecReserved11", "ExecReserved12", "ExecReserved20", "ExecReserved21", "ExecReserved22", "ExecReserved23", "ExecReserved24", "ExecReserved25", "ExecReserved26", "ExecReserved27", "ExecReserved28", "ExecReserved29", "ExecReserved30", "ExitIntr", "FindName", "FindPort", "FindResident", "FindSemaphore", "FindTask", "Forbid", "FreeEntry", "FreeMem", "FreePooled", "FreeSignal", "FreeTrap", "FreeVec", "GetCC", "GetMsg", "InitCode", "InitResident", "InitSemaphore", "InitStruct", "NewMinList", "ObtainQuickVector", "ObtainSemaphore", "ObtainSemaphoreList", "ObtainSemaphoreShared", "OldOpenLibrary", "OpenLibrary", "OpenResource", "Permit", "Procure", "PutMsg", "RawIOInit", "RawMayGetChar", "RawPutChar", "ReadGayle", "ReleaseSemaphore", "ReleaseSemaphoreList", "RemDevice", "RemHead", "RemHeadMinList", "RemIntServer", "RemLibrary", "RemMemHandler", "RemPort", "RemResource", "RemSemaphore", "RemTail", "RemTailMinList", "RemTask", "Remove", "RemoveMinNode", "ReplyMsg", "Reschedule", "Schedule", "SendIO", "SetExcept", "SetSR", "SetSignal", "SetTaskPri", "Signal", "StackSwap", "SumKickData", "SumLibrary", "SuperState", "Switch", "TaggedOpenLibrary", "TypeOfMem", "UserState", "Vacate", "Wait", "WaitIO", "WaitPort",

     #dos_lib.sfd
     "AbortPkt", "AddBuffers", "AddDosEntry", "AddPart", "AddSegment", "AllocDosObject", "AllocDosObjectTagList", "AllocDosObjectTags", "AssignAdd", "AssignLate", "AssignLock", "AssignPath", "AttemptLockDosList", "ChangeMode", "CheckSignal", "ClearVec", "Cli", "CliInit", "CliInitNewcli", "CliInitRun", "Close", "CompareDates", "CreateDir", "CreateNewProc", "CreateNewProcTagList", "CreateNewProcTags", "CurrentDir", "DateStamp", "DateToStr", "Delay", "DeleteFile", "DeleteVar", "DeviceProc", "DoPkt0", "DoPkt1", "DoShellMethod", "DoShellMethodTagList", "DosGetString", "DosNameFromAnchor", "DupLock", "DupLockFromFH", "EndNotify", "ErrorOutput", "ExNext", "Examine", "ExamineFH", "Execute", "Exit", "ExtendedCli", "FGetC", "FGets", "FPrintf", "FPutC", "FPuts", "FRead", "FWrite", "FWritef", "Fault", "FilePart", "FindArg", "FindCliProc", "FindVar", "Flush", "Format", "FreeArgs", "FreeDeviceProc", "FreeDosEntry", "FreeDosObject", "GetArgStr", "GetConsoleTask", "GetCurrentDir", "GetCurrentDirName", "GetDeviceProc", "GetFileSysTask", "GetProgramDir", "GetProgramName", "GetPrompt", "GetVar", "Info", "Inhibit", "Input", "InternalRunCommand", "IoErr", "IsFileSystem", "IsInteractive", "LoadSeg", "Lock", "LockDosList", "LockRecords", "MakeDosEntry", "MakeLink", "MatchEnd", "MatchFirst", "MatchNext", "MatchPattern", "MatchPatternNoCase", "MaxCli", "NameFromFH", "NameFromLock", "NewLoadSeg", "NewLoadSegTagList", "NewLoadSegTags", "NextDosEntry", "NoReqLoadSeg", "Open", "OpenFromLock", "Output", "ParentDir", "ParentOfFH", "ParsePattern", "ParsePatternNoCase", "PathPart", "PrintFault", "Printf", "PutErrStr", "PutStr", "Read", "Relabel", "RemAssignList", "RemDosEntry", "RemSegment", "Rename", "ReplyPkt", "SameDevice", "SameLock", "ScanStackToken", "Seek", "SelectError", "SelectInput", "SelectOutput", "SetArgStr", "SetComment", "SetConsoleTask", "SetCurrentDirName", "SetFileDate", "SetFileSize", "SetFileSysTask", "SetIoErr", "SetMode", "SetOwner", "SetProgramDir", "SetProgramName", "SetPrompt", "SetProtection", "SetVBuf", "SetVar", "StartNotify", "StrToDate", "StrToLong", "System", "SystemTagList", "SystemTags", "UnGetC", "UnLoadSeg", "UnLock", "UnLockDosList", "UnLockRecord", "UnLockRecords", "VFPrintf", "VFWritef", "VPrintf", "VolumeRequestHook", "WaitForChar", "WaitPkt", "Write", "WriteChars",
     

     #gadtools_lib.sfd
    "CreateContext", "FreeGadgets", "FreeMenus", "FreeVisualInfo", "GTReserved2", "GTReserved3", "GTReserved4", "GTReserved5", "GT_BeginRefresh", "GT_EndRefresh", "GT_FilterIMsg", "GT_GetIMsg", "GT_PostFilterIMsg", "GT_RefreshWindow", "GT_ReplyIMsg",

    #intuition_lib.sfd
    "ActivateWindow", "AddClass", "AlohaWorkbench", "BeginRefresh", "ChangeScreenBuffer", "ClearDMRequest", "ClearMenuStrip", "ClearPointer", "CloseScreen", "CloseWindow", "CloseWorkBench", "CurrentTime", "DisplayAlert", "DisplayBeep", "DisposeObject", "EndRefresh", "EndRequest", "FindClass", "FreeClass", "FreeScreenBuffer", "FreeSysRequest", "GetAttr", "GetDefaultPubScreen", "GetScreenDrawInfo", "HelpControl", "HideWindow", "InitRequester", "IntuiTextLength", "Intuition", "ItemAddress", "LendMenus", "LockIBase", "LockPubScreen", "LockPubScreenList", "MakeScreen", "ModifyIDCMP", "MoveScreen", "MoveWindow", "NextObject", "NextPubScreen", "ObtainGIRPort", "OffMenu", "OnMenu", "OpenIntuition", "OpenScreen", "OpenWindow", "OpenWorkBench", "PointInImage", "PubScreenStatus", "RefreshWindowFrame", "ReleaseGIRPort", "RemakeDisplay", "RemoveClass", "RemoveGadget", "ReportMouse", "ReportMouse1", "Request", "ResetMenuStrip", "RethinkDisplay", "ScreenDepth", "ScreenToBack", "ScreenToFront", "SetDMRequest", "SetDefaultPubScreen", "SetEditHook", "SetIPrefs", "SetMenuStrip", "SetMouseQueue", "SetPubScreenModes", "ShowTitle", "ShowWindow", "SizeWindow", "TimedDisplayAlert", "UnlockIBase", "UnlockPubScreen", "UnlockPubScreenList", "ViewAddress", "ViewPortAddress", "WBenchToBack", "WBenchToFront", "WindowToBack", "WindowToFront", "ZipWindow", "lockPubClass", "unlockPubClass",
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
     { "name": "SetWindowPointer", "tagList": "SetWindowPointerA" }
]

FAKE_FUNCTION_CONFIG = [

]

FAKE_BOOL_FUNCTION_CONFIG = [

]

BOOL_FUNCTION_CONFIG = [

]

FUNCTOR_SKIP = []

clang.cindex.Config.set_library_file('/opt/homebrew/opt/llvm/lib/libclang.dylib')

READ_TYPE_TO_LUA = {
    'int': 'lua_pushinteger',
    'unsigned int': 'lua_pushinteger',
    'short': 'lua_pushinteger',
    'unsigned short': 'lua_pushinteger',
    'int16_t': 'lua_pushinteger',
    'uint16_t': 'lua_pushinteger',
    'int32_t': 'lua_pushinteger',
    'uint32_t': 'lua_pushinteger',
    'float': 'lua_pushnumber',
    'double': 'lua_pushnumber',
    'const char *': 'lua_pushstring',
    'char *': 'lua_pushstring',
    'void *': 'lua_pushlightuserdata',    
    'CONST_STRPTR': 'lua_pushstring',
    'STRPTR': 'lua_pushstring',
    'APTR': 'lua_pushlightuserdata',
    'CONST_APTR': 'lua_pushlightuserdata',
    'BPTR': 'lua_pushinteger',
    'LONG': 'lua_pushinteger',
    'LONG *': 'lua_pushlightuserdata',
    'const LONG *' : 'lua_pushlightuserdata',    
    'ULONG': 'lua_pushinteger',
    'ULONG *': 'lua_pushlightuserdata',
    'BYTE': 'lua_pushinteger',
    'UBYTE': 'lua_pushinteger',
    'UBYTE *': 'lua_pushlightuserdata',
    'const UBYTE *': 'lua_pushlightuserdata',        
    'WORD': 'lua_pushinteger',
    'UWORD': 'lua_pushinteger',
    'BOOL': 'lua_pushboolean',
    'struct Gadget **': 'lua_pushGadgetPtr',
}

WRITE_TYPE_FROM_LUA = {
    'int': 'luaL_checkinteger',
    'unsigned int': 'luaL_checkinteger',
    'short': 'luaL_checkinteger',
    'unsigned short': 'luaL_checkinteger',
    'int16_t': 'luaL_checkinteger',
    'uint16_t': 'luaL_checkinteger',
    'int32_t': 'luaL_checkinteger',
    'uint32_t': 'luaL_checkinteger',
    'float': 'luaL_checknumber',
    'double': 'luaL_checknumber',
    'char *': 'luaL_checkstring',
    'void *': 'lua_touserdata',
    'CONST_STRPTR': 'amiga_checkConstNullableString',
    'STRPTR': 'amiga_checkNullableString',    
    'LONG': 'luaL_checkinteger',
    'BPTR': 'luaL_checkinteger',
    'APTR': 'lua_touserdata',
    'CONST_APTR': 'lua_touserdata',    
    'LONG': 'luaL_checkinteger',
    'LONG *': 'lua_touserdata',            
    'const LONG *': 'lua_touserdata',            
    'ULONG': 'luaL_checkinteger',
    'ULONG *': 'lua_touserdata',
    'BYTE': 'luaL_checkinteger',
    'UBYTE': 'luaL_checkinteger',
    'UBYTE *': 'lua_touserdata',
    'const UBYTE *': 'lua_touserdata',        
    'WORD': 'luaL_checkinteger',
    'UWORD': 'luaL_checkinteger',
    'BOOL': 'luaL_checkboolean',    
    'struct Gadget **': 'amiga_checkGadgetPtr',    
}

metainstall_types = []
enums = []
functions = []
callers = []
thunk_metadata = []
interfaces = set()
newindexes = set()
indexes = set()
keys = set()
metas = set()

def parse_ctype(ctype):
    pointer_level = ctype.count('*')
    base = ctype.replace('*', '').strip()
    base = re.sub(r'\s+', ' ', base)  # normalize whitespace
    base = base.replace('const', '').strip()
    # Map "struct foo" to "foo_t" if available
    if base.startswith("struct "):
        tag = base[len("struct "):]
        if tag in TYPE_CONFIG:
            struct = TYPE_CONFIG[tag].get("struct")
            if not struct:
                return tag, pointer_level, tag
            else:
                return base, pointer_level, tag

    return base, pointer_level, base

def get_struct_fields(cursor):
    fields = []
    for c in cursor.get_children():
        if c.kind == clang.cindex.CursorKind.FIELD_DECL:
            typ = c.type
            if typ.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                elem_type = typ.get_array_element_type().spelling
                size = typ.element_count
                if elem_type == "char":
                    fields.append((c.spelling, f"char[{size}]"))
                    continue

            # Handle function pointer: pointer to function type
            if typ.kind == clang.cindex.TypeKind.POINTER:
                pointee = typ.get_pointee()
                if pointee.kind in (
                    clang.cindex.TypeKind.FUNCTIONPROTO,
                    clang.cindex.TypeKind.FUNCTIONNOPROTO,
                ):
                    ret_type = pointee.get_result().spelling
                    arg_types = [arg.spelling for arg in pointee.argument_types()] \
                        if pointee.kind == clang.cindex.TypeKind.FUNCTIONPROTO else []
                    func_sig = f"{ret_type} (*)({', '.join(arg_types)})"
                    fields.append((c.spelling, func_sig))
                    continue

            # Handle regular pointers and nested struct resolution
            pointer_level = 0
            t = typ
            while t.kind == clang.cindex.TypeKind.POINTER:
                pointer_level += 1
                t = t.get_pointee()
            base_type = t.spelling.strip()
            if base_type.startswith("struct "):
                tag = base_type[len("struct "):]
                if tag in TYPE_CONFIG:
                    if TYPE_CONFIG[tag].get("struct"):
                        base_type = t.spelling.strip()
                    else:
                        base_type = tag                
            full_type = base_type + "*" * pointer_level
            fields.append((c.spelling, full_type))

    return fields

def generate_lua_index(struct_name, type_name, fields, functors):
    if struct_name in indexes:
        return
    else:
        indexes.add(struct_name)    
    print(f"static int\n_lua_gen_{struct_name}_index(lua_State *L)\n{{")
    print(f"  {type_name} *obj = *({type_name} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print("  const char *key = luaL_checkstring(L, 2);")
    for name, ctype in fields:
        if not name:
            continue
        if ctype.startswith("char["):
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    lua_pushstring(L, obj->{name});")
            print("    return 1;")
            print("  }")
        elif "(*)" in ctype and functors:
            if name not in FUNCTOR_SKIP:
                # Function pointer: return the Lua callback reference if stored
                print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                print(f"    if (obj->lua.luaStates.{name}) {{");
                print(f"      lua_rawgeti(obj->lua.luaStates.{name}, LUA_REGISTRYINDEX, obj->lua.refs.{name});")
                print(f"    }} else {{")
                print(f"      lua_pushnil(L);")
                print(f"    }}")
                print(f"    return 1;")
                print(f"  }}")
            else:
                print(f"// skipping {name}")
                
        elif ctype in READ_TYPE_TO_LUA:
            lua_func = READ_TYPE_TO_LUA[ctype]
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    {lua_func}(L, obj->{name});")
            print("    return 1;")
            print("  }")
        else:
            base, pointer_level, tag = parse_ctype(ctype)

            
            if tag in TYPE_CONFIG:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)&obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{tag}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{tag}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0 && obj->{name}) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)*obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{base}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
    print("  return 0;\n}\n")

def generate_thunk_externs(struct_name, fields):
    for name, ctype in fields:
        if not name:
            continue

        # Function pointer fields
        elif "(*)" in ctype:            
            match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
            if match:
                ret_type = match.group(1).strip()
                args_str = match.group(2).strip()
                arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []

                thunk_name = f"_lua_gen_thunk_{struct_name}_{name}"
                args_with_names = [f"{arg_types[i]} arg{i}" for i in range(len(arg_types))]
                if name not in FUNCTOR_SKIP:
                    print(f"static {ret_type} {thunk_name}({', '.join(args_with_names)});")
                else:
                    print(f"// skipping {name}")
    print("\n")

    
def generate_lua_newindex(struct_name, type_name, fields, functors):
    if struct_name in newindexes:
        return
    else:
        newindexes.add(struct_name)
    print(f"static int\n_lua_gen_{struct_name}_newindex(lua_State *L)\n{{")
    print(f"  {type_name} *obj = *({type_name} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print("  const char *key = luaL_checkstring(L, 2);")

    for name, ctype in fields:
        if not name:
            continue

        # char[] strings
        if ctype.startswith("char["):
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print("    const char *s = luaL_checkstring(L, 3);")
            print(f"    strncpy(obj->{name}, s, sizeof(obj->{name}) - 1);")
            print(f"    obj->{name}[sizeof(obj->{name}) - 1] = '\\0';")
            print("    return 0;")
            print("  }")

        # Function pointer fields
        elif "(*)" in ctype and functors:
            if name not in FUNCTOR_SKIP:
                match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
                if match:
                    ret_type = match.group(1).strip()
                    args_str = match.group(2).strip()
                    arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []
                    
                    thunk_metadata.append({
                        "struct": struct_name,
                        "field": name,
                        "return_type": ret_type,
                        "arg_types": arg_types,
                    })
                    
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    if (lua_isfunction(L, 3) || lua_isnil(L, 3)) {{")
                    print(f"        if (obj->lua.refs.{name} != LUA_REFNIL)")
                    print(f"            luaL_unref(L, LUA_REGISTRYINDEX, obj->lua.refs.{name});")
                    print(f"        if (lua_isnil(L, 3)) {{")
                    print(f"            obj->lua.refs.{name} = LUA_REFNIL;")
                    print("        } else {")
                    print(f"            lua_pushvalue(L, 3);")
                    print(f"            obj->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
                    print(f"            obj->lua.luaStates.{name} = L;")
                    print(f"            obj->{name} = _lua_gen_thunk_{struct_name}_{name};")
                    print("        }")
                    print("    } else {")
                    print(f"        return luaL_error(L, \"Expected function or nil for field '%s'\", key);")
                    print("    }")
                    print("    return 0;")
                    print("  }")
            else:
                print(f"// skipping {name}")
                
        # Numeric/primitive types
        elif ctype in WRITE_TYPE_FROM_LUA:
            lua_func = WRITE_TYPE_FROM_LUA[ctype]
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    obj->{name} = ({ctype}){lua_func}(L, 3);")
            print("    return 0;")
            print("  }")

        # Struct pointers and values
        else:
            base, pointer_level, tag = parse_ctype(ctype)
            if tag in TYPE_CONFIG:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 0")
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print(f"    obj->{name} = *val;")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 1")                    
                    print(f"    obj->{name} = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 2")                    
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print(f"    *obj->{name} = val;")
                    print("    return 0;")
                    print("  }")

    print("  return 0;")
    print("}\n\n")

    print(f"static int")
    print(f"_lua_{struct_name}_constructor(lua_State *L)")
    print(f"{{")
    print(f"  // Allocate pointer-to-{type_name} in userdata")
    print(f"  {type_name} **objp = lua_newuserdata(L, sizeof({type_name} *));")
    print(f"  *objp = malloc(sizeof({type_name}));")
    print(f"  if (!*objp) return luaL_error(L, \"out of memory\");")
    print(f"  memset(*objp, 0, sizeof({type_name}));")
    print()
    print(f"  // Set metatable")
    print(f"  luaL_getmetatable(L, \"{struct_name}\");")
    print(f"  lua_setmetatable(L, -2);")
    print()
    print(f"  // If a table is passed, use __newindex to copy fields")
    print(f"  if (lua_istable(L, 1)) {{")
    print(f"    lua_insert(L, 1); // move userdata below table")
    print(f"    lua_pushnil(L); // first key")
    print(f"    while (lua_next(L, 2) != 0) {{")
    print(f"      lua_pushvalue(L, -2); // copy key")
    print(f"      lua_pushvalue(L, -2); // copy value")
    print(f"      lua_settable(L, 1);   // userdata[key] = value (via __newindex)")
    print(f"      lua_pop(L, 1); // pop original value, keep key")
    print(f"    }}")
    print(f"    lua_remove(L, 2); // remove table, leave userdata")
    print(f"  }}")
    print()
    print(f"  return 1; // return userdata")
    print(f"}}\n")
    
    
def generate_functor_callers(node, fields, prefix):
    struct_name = node.spelling
    for name, ctype in fields:
        if not name:
            continue

        # Function pointer fields
        elif "(*)" in ctype:
            if name not in FUNCTOR_SKIP:
                match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
                if match:
                    ret_type = match.group(1).strip()
                    args_str = match.group(2).strip()
                    arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []
            
                    print(f"int _lua_gen_{prefix}_{name}(lua_State* L){{")
                    for argNumber, type in enumerate(arg_types, 1):
                        lua_expr = get_lua_check(type)
                        print(f"  {type} arg{argNumber} = {lua_expr}(L, {argNumber});")
                    argString = ", ".join(f"arg{i+1}" for i in range(len(arg_types)))
                    print(f"  arg1->{name}({argString});")							                    
                    print(f"  return 0;")
                    print(f"}}")
                    
                    callers.append(f"{prefix}_{name}")                    
            else:
                print(f"// skipping {name}")
                

    
def generate_lua_keys_installer(struct_name, fields):
    if struct_name in keys:
        return
    else:
        keys.add(struct_name)
    print(f"static void\n_lua_gen_{struct_name}_install_keys(lua_State *L)\n{{")
    print("  lua_newtable(L);")
    index = 1
    for name, ctype in fields:
        if not name:
            continue
        base, _, tag = parse_ctype(ctype)
        if (
            base in READ_TYPE_TO_LUA or
            base in TYPE_CONFIG or
            ctype.startswith("char[") or
            "(*)" in ctype  # Function pointer support
        ):
            print(f"  lua_pushstring(L, \"{name}\");")
            print(f"  lua_rawseti(L, -2, {index});")
            index += 1
    print(f"  lua_setfield(L, -2, \"__keys\");")
    print("}\n")
    
def generate_metatable_installer(struct_name):
    if struct_name in metas:
        return
    else:
        metas.add(struct_name)    
    print(f"static void\n_lua_gen_install_meta_{struct_name}(lua_State *L) {{")
    print(f"  if (luaL_newmetatable(L, \"{struct_name}\")) {{")
    config = TYPE_CONFIG[struct_name]
    if config.get("index"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_index);")
        print("    lua_setfield(L, -2, \"__index\");")
    if config.get("newindex"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_newindex);")
        print(f"    lua_setfield(L, -2, \"__newindex\");")
        print(f"    lua_pushcfunction(L, _lua_{struct_name}_constructor);")
        print(f"    lua_setglobal(L, \"{struct_name}\");")
    if config.get("keys"):
        print(f"    _lua_gen_{struct_name}_install_keys(L);")
    print(f"    lua_pushstring(L, \"{struct_name}\");");
    print(f"    lua_setfield(L, -2, \"__name\");");
    print("  }")
    print("  lua_pop(L, 1);")
    print("}\n")
    metainstall_types.append(struct_name)


def generate_thunks(thunk_metadata):
    for meta in thunk_metadata:
        struct_name = meta["struct"]
        field_name = meta["field"]
        ret_type = meta["return_type"]
        arg_types = meta["arg_types"]

        thunk_name = f"_lua_gen_thunk_{struct_name}_{field_name}"
        args_with_names = [f"{arg_types[i]} arg{i}" for i in range(len(arg_types))]
        print(f"static {ret_type}\n{thunk_name}({', '.join(args_with_names)})\n{{")        

        
        print(f"  lua_rawgeti(arg0->lua.luaStates.{field_name}, LUA_REGISTRYINDEX, arg0->lua.refs.{field_name});")
        print(f"  if (!lua_isfunction(arg0->lua.luaStates.{field_name}, -1)) {{")
        print(f"     lua_pop(arg0->lua.luaStates.{field_name}, 1);");
        if ret_type != "void":
            print(f"    return ({ret_type})0;")
        else:
            print("     return;")
        print("  }")

        # Push arguments (skip arg0 – the struct pointer itself)
        for i in range(0, len(arg_types)):
            ctype = arg_types[i]
            base, pointer_level = parse_ctype(ctype)

            # Direct mappings for known primitive types
            if ctype in READ_TYPE_TO_LUA:
                #func = READ_TYPE_TO_LUA[ctype].replace("lua_push", "")  # e.g. "integer"
                func = READ_TYPE_TO_LUA[ctype]
                print(f"  {func}(arg0->lua.luaStates.{field_name}, arg{i});")

            elif ctype == "const char *":
                print(f"  lua_pushstring(arg0->lua.luaStates.{field_name}, arg{i});")

            elif base in TYPE_CONFIG and pointer_level == 1:
                print(f"  if (arg{i}) {{")
                print(f"    {base} **ud = ({base} **)lua_newuserdata(arg0->lua.luaStates.{field_name}, sizeof({base} *));")
                print(f"    *ud = arg{i};")
                print(f"    luaL_getmetatable(arg0->lua.luaStates.{field_name}, \"{base}\");")
                print(f"    lua_setmetatable(arg0->lua.luaStates.{field_name}, -2);")
                print("  } else {")
                print(f"    lua_pushnil(arg0->lua.luaStates.{field_name});")
                print("  }")

            else:
                print(f"   error(2) - unsupported type type: {ctype}")
                print(f"  lua_pushnil(arg0->lua.luaStates.{field_name});")

        # Call the function
        arg_count = len(arg_types) 
        ret_count = 1 if ret_type != "void" else 0
        print(f"  if (lua_pcall(arg0->lua.luaStates.{field_name}, {arg_count}, {ret_count}, 0) != LUA_OK) {{")
        print(f"    roid_lua_error(arg0, lua_tostring(arg0->lua.luaStates.{field_name}, -1));");
        print(f"    lua_pop(arg0->lua.luaStates.{field_name}, 1);")
        if ret_type != "void":
            print(f"    return ({ret_type})0;")
        else:
            print("    return;")
        print("  }")

        # Return result
        if ret_type != "void":
            if ret_type in ("uint32_t", "int32_t",
                            "uint16_t", "int16_t",
                            "uint8_t", "int8_t",
                            "unsigned long", "long"
                            "unsigned int", "int",
                            "unsigned short", "short",
                            "lua_Integer",):
                print(f"  lua_Integer _result = lua_tointeger(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            elif ret_type in ("float", "double"):
                print(f"  lua_Number _result = lua_tonumber(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            else:
                print(f"  error(1) - unsupported type {ret_type}")
        else:
            print("  return;")

        print("}\n")

def generate_lua_defines():
    print(f"static void\n_lua_gen_install_defines(lua_State *L)\n{{")    
    for name in DEFINE_CONFIGS:
        print(f"  lua_pushinteger(L, {name});")
        print(f"  lua_setglobal(L, \"{name}\");");
    print("}\n")        
    
def generate_lua_enum(node, underlying):
    print(f"static void\n_lua_gen_install_enum_{node.spelling}(lua_State *L)\n{{")
    for enum_const in underlying.get_children():
        if enum_const.kind == clang.cindex.CursorKind.ENUM_CONSTANT_DECL:            
            print(f"  lua_pushinteger(L, {enum_const.spelling});")
            print(f"  lua_setglobal(L, \"{enum_const.spelling}\");")
    print("}\n")
    enums.append(node.spelling)    

def get_lua_check(ctype):
    for base in TYPE_CONFIG:
        if f"struct {base} *" == ctype or f"const struct {base} *" == ctype or f"CONST struct {base} *" == ctype:
            return f"_lua_gen_check{base}"
        tag = base[len("struct "):]
        if base == tag:
            return f"_lua_gen_check{base}"
    return WRITE_TYPE_FROM_LUA.get(ctype, f"error(3) - unsupported type {ctype}")

def get_lua_push(ctype):
    for base in TYPE_CONFIG:
        if f"struct {base} *" == ctype:
            return f"_lua_gen_push{base}"
        tag = base[len("struct "):]
        if base == tag:
            return f"_lua_gen_push{base}"
    return READ_TYPE_TO_LUA.get(ctype, f"error(4) - unsupported type {ctype}")

def _extract_function_pointer_signature(arg_type):
    canonical = arg_type.get_canonical()
    if canonical.kind != clang.cindex.TypeKind.POINTER:
        return None

    pointee = canonical.get_pointee()
    if pointee.kind != clang.cindex.TypeKind.FUNCTIONPROTO:
        return None

    result_type = pointee.get_result().spelling
    arg_types = [p.spelling for p in pointee.argument_types()]
    return result_type, arg_types

def extract_function_pointer_signature(arg_type):
    canonical = arg_type.get_canonical()
    if canonical.kind != clang.cindex.TypeKind.POINTER:
        return None

    pointee = canonical.get_pointee()
    if pointee.kind != clang.cindex.TypeKind.FUNCTIONPROTO:
        return None

    ret = pointee.get_result().spelling
    arg_list = ", ".join(p.spelling for p in pointee.argument_types())
    return f"{ret} (*)({arg_list})"
    
def generate_lua_function(node, fake, isBool):    
    if fake:
        fake_name = node.spelling
        function_name = fake_name[1:] if fake_name.startswith('_') else fake_name
    else:
        function_name = node.spelling
    ret_type = node.result_type.spelling
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")
    print("  (void)L;")
    arg1 = "UNDEFINED"
    for i, arg in enumerate(node.get_arguments()):
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            lua_func = get_lua_check(ctype)
            print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    if ret_type == "void":
        print(f"  {function_name}({call_args});")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {function_name}({call_args});")        
        if isBool:
            print(f"  if (result) {{")
            print(f"     lua_pushboolean(L, 1);")        
            print(f"  }} else {{")
            print(f"     lua_pushboolean(L, 0);")
            print(f"  }}")
        else:
            print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

def generate_lua_tags_function(node):    
    function_name = node.spelling
    ret_type = node.result_type.spelling
    #args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments() if "tag1" not in arg.spelling]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")

    arg1 = "UNDEFINED"
    count = 0
    for i, arg in enumerate(node.get_arguments()):
        count=count+1
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            if "tag1" in name:
                count = count - 1
                pass
            else:
                lua_func = get_lua_check(ctype)
                print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    print(f"  struct TagItem taglist[64];")
    print(f"  _amiga_readVarTags(L, taglist, countof(taglist), {count+1});");

    tag_list = next((entry["tagList"] for entry in TAGS_FUNCTION_CONFIG if entry["name"] == function_name), None)
    
    if ret_type == "void":
        print(f"  {tag_list}({call_args}, taglist);")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {tag_list}({call_args}, taglist);")        
        print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

def generate_lua_taglist_function(node):    
    function_name = node.spelling
    ret_type = node.result_type.spelling
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")

    arg1 = "UNDEFINED"
    count = 0
    for i, arg in enumerate(node.get_arguments()):
        count=count+1
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            lua_func = get_lua_check(ctype)
            if "TagItem" in arg.type.spelling:
                print(f"  struct TagItem* {name} = NULL;")
                print(f"  if (!lua_isnoneornil(L, {i+1})) {{")
                print(f"    struct TagItem _tags[32];")
                print(f"    _amiga_doTagList(L, _tags, countof(_tags), {i+1});")
                print(f"    {name} = _tags;")
                print(f"  }}")
            else:
                print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    if ret_type == "void":
        print(f"  {function_name}({call_args});")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {function_name}({call_args});")        
        print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

    
    
def generate_lua_interface(spelling):
    if spelling in interfaces:
        return
    else:
        interfaces.add(spelling)
   
    print(f"\nvoid")
    print(f"_lua_gen_push{spelling}(lua_State *L, struct {spelling}* obj)");
    print(f"{{")
    print(f"  if (obj) {{")
    print(f"    struct {spelling} **ud = (struct {spelling} **)lua_newuserdata(L, sizeof(struct {spelling} *));")
    print(f"    *ud = obj;")
    print(f"    luaL_getmetatable(L, \"{spelling}\");")
    print(f"    lua_setmetatable(L, -2);")
    print(f"  }} else {{")
    print(f"    lua_pushnil(L);")
    print(f"  }}")
    print(f"}}\n")

    print(f"struct {spelling}*")
    print(f"_lua_gen_check{spelling}(lua_State* L, int stackIndex)")
    print(f"{{")
    print(f"   if (!lua_isnoneornil(L, stackIndex)) {{")
    print(f"      struct {spelling} **ud = (struct {spelling} **)luaL_checkudata(L, stackIndex, \"{spelling}\");")
    print(f"      if (!ud) {{")
    print(f"        return 0;")
    print(f"      }}")
    print(f"      return *ud;")
    print(f"   }} else {{")
    print(f"      return 0;");
    print(f"   }}")
    print(f"}}")

def find_interfaces(cursor):    
    for node in cursor.get_children():
        if node.kind == clang.cindex.CursorKind.STRUCT_DECL:
            if node.spelling in TYPE_CONFIG:
                struct_def = node.underlying_typedef_type.get_declaration()
                config = TYPE_CONFIG[node.spelling]
                if config.get("interface") and config.get("struct"):
                    generate_lua_interface(node.spelling)
        if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL:
            if node.spelling in TYPE_CONFIG:
                struct_def = node.underlying_typedef_type.get_declaration()
                if struct_def.kind == clang.cindex.CursorKind.STRUCT_DECL and struct_def.is_definition():
                    config = TYPE_CONFIG[node.spelling]
                    if config.get("interface"):
                        generate_lua_interface(node.spelling)

def find_typedef_structs(cursor):
    for node in cursor.get_children():        
        if node.kind == clang.cindex.CursorKind.FUNCTION_DECL:
            if any(entry["name"] == node.spelling for entry in TAGS_FUNCTION_CONFIG):
                generate_lua_tags_function(node)
            if any(entry["tagList"] == node.spelling for entry in TAGS_FUNCTION_CONFIG):
                generate_lua_taglist_function(node)                
            if node.spelling in FUNCTION_CONFIG:
                generate_lua_function(node, False, False)
            if node.spelling in FAKE_FUNCTION_CONFIG:
                generate_lua_function(node, True, False)
            if node.spelling in FAKE_BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, True, True)                                
            if node.spelling in BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, False, True)                
        if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL or clang.cindex.CursorKind.STRUCT_DECL:
            if node.spelling in ENUM_CONFIG:
                 underlying = node.underlying_typedef_type.get_declaration()
                 if underlying.kind == clang.cindex.CursorKind.ENUM_DECL:
                     generate_lua_enum(node, underlying)

            lookup = node.spelling
            typename = node.spelling
            if lookup in TYPE_CONFIG:
                struct_def = None
                process = False
                if node.kind == clang.cindex.CursorKind.STRUCT_DECL:
                    if TYPE_CONFIG[lookup].get("struct"):
                        struct_def = node.type.get_declaration()
                        typename = f"struct {lookup}"
                        process = True
                if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL:
                    struct_def = node.underlying_typedef_type.get_declaration()
                    if struct_def.kind == clang.cindex.CursorKind.STRUCT_DECL and struct_def.is_definition():
                        typename = lookup
                        process = True
                    
                if process:
                    fields = get_struct_fields(struct_def)
                    config = TYPE_CONFIG[node.spelling]
                    functors =  config.get("functors")         
                    if config.get("newindex"):
                        if functors:
                            generate_thunk_externs(node.spelling, fields)
                        generate_lua_newindex(node.spelling, typename, fields, functors)
                    if config.get("index"):
                        generate_lua_index(node.spelling, typename, fields, functors)                        
                    if config.get("keys"):
                        generate_lua_keys_installer(node.spelling, fields)
                    if config.get("metainstall"):
                        generate_metatable_installer(node.spelling)
                    if config.get("functor_callers"):
                        generate_functor_callers(node, fields, config.get("prefix"))
        find_typedef_structs(node)

def generate_global_installer():
    print("static void\n_lua_gen_installGeneratedMetaTables(lua_State *L)\n{")
    for struct_name in metainstall_types:
        print(f"  _lua_gen_install_meta_{struct_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedEnums(lua_State *L)\n{")
    print("  (void)L;")
    for enum_name in enums:
        print(f"  _lua_gen_install_enum_{enum_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctions(lua_State *L)\n{")
    for function_name in functions:
        print(f"  lua_register(L, \"{function_name}\", _lua_{function_name});")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctionCallers(lua_State *L)\n{")
    print("  (void)L;")
    for function_name in callers:
        print(f"  lua_register(L, \"{function_name}\", _lua_gen_{function_name});")
    print("}\n")        

    print("void\nlua_gen_install(lua_State *L) {")
    print("  _lua_gen_install_defines(L);\n");    
    print("  _lua_gen_installGeneratedMetaTables(L);")
    print("  _lua_gen_installGeneratedEnums(L);")
    print("  _lua_gen_installGeneratedFunctions(L);")
    print("  _lua_gen_installGeneratedFunctionCallers(L);")
    print("}\n")
        
def main():
    if len(sys.argv) < 2:
        print("Usage: python generate_lua_bindings.py my_header.h")
        sys.exit(1)

    header = sys.argv[1]
    index = clang.cindex.Index.create()
    tu = index.parse(header, args=['-x', 'c', '-I/usr/local/amiga/bebbo/m68k-amigaos/sys-include/', '-I/usr/local/amiga/bebbo/m68k-amigaos/ndk-include'])
    print("// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h")

    find_interfaces(tu.cursor)
    find_typedef_structs(tu.cursor)
    generate_lua_defines()
    generate_global_installer()
    generate_thunks(thunk_metadata)
    
if __name__ == "__main__":
    main()
