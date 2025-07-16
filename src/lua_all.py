TYPES = [
    #AmigaDaLua custom types
    #"GadgetPtr",
    
    #Devices
    "InputEvent",
    "TimeVal_Type",

    #Dos
    #"AChain",
    #"AnchorPath",
    #"AssignList",
    #"CSource",
    #"CommandLineInterface",
    #"DateStamp",
    #"DateTime",
    #"DevProc",
    #"DosList",
    #"DosPacket",
    #"FileInfoBlock",
    #"InfoData",
    #"LocalVar",
    #"NotifyRequest",
    #"Process",
    #"RDArgs",
    #"RecordLock",
    #"Segment",
    #"Unit",
    
    #Exec
    "Device",
    "IORequest",
    "Interrupt",
    "Library",
    "List",
    "MaxList",
    "MemChunk",
    "MemHeader",
    "MemList",
    "Message",
    "MinList",
    "MinNode",
    "MsgPort",
    "Node",
    "Resident",
    "SemaphoreMessage",
    "SemaphoreRequest",
    "SignalSemaphore",
    "StackSwapStruct",
    "Task",

    #GadTools
    #"NewGadget",
    #"NewMenu",

    #Graphics
    "AnalogSignalInterval",
    "AnimComp",
    "AnimOb",
    "AreaInfo",
    "BitScaleArgs",
    "Bob",
    "ColorMap",
    "CopIns",
    "CopList",
    "DBufPacket",
    "ExtSprite",
    "ExtendedNode",
    "GelsInfo",
    "GfxBase",
    "Layer",        
    "MonitorSpec",
    "PaletteExtra",
    "Point",
    "Rectangle",
    "Region",
    "RegionRectangle",
    "SimpleSprite",
    "SpecialMonitor",
    "TmpRas",
    "VSprite",
    "ViewPortExtra",
    "bltnode",
    "collTable",
    "copinit",
    "cprlist",

    #Hardware    
    "AudChannel",
    "Custom",

    #Intuition
    "BitMap",
    #"Border",
    "DBufInfo",
    #"DrawInfo",
    #"Gadget",
    #"GadgetInfo",
    #"IBox",
    #"IClass",
    #"Image",
    #"IntuiMessage",
    #"IntuiText",
    #"KeyMap",
    #"Menu",
    #"MenuItem",
    #"NewScreen",
    #"NewWindow",    
    #"RasInfo",
    "RastPort",
    #"Requester",
    "Screen",
    #"ScreenBuffer",
    #"StringExtend",
    #"StringInfo",
    "TextAttr",
    "TextFont",    
    "View",
    "ViewPort" ,
    #"ViewPort",
    #"ViewPortExtra",
    "Window",

    #Layers
    "ClipRect",
    "Layer_Info",

    #Utility
    "Hook",    
    "Tag",    
    "TagItem",    

]    

TYPE_CONFIG = {

}

ENUM_CONFIG = []

DEFINE_CONFIGS = [
    "TRUE", "ERROR_NO_FREE_STORE","RETURN_OK",
    "MEMF_PUBLIC", "MEMF_CLEAR", "MEMF_CHIP", "MEMF_FAST",
    "MODE_OLDFILE", "MODE_NEWFILE", "MODE_READWRITE",
    "DOSTRUE", "DOSFALSE",
    
    #"WA_Left","WA_Top","WA_Width","WA_Height","WA_DetailPen","WA_BlockPen","WA_IDCMP","WA_Flags","WA_Gadgets","WA_Checkmark","WA_Title",
    #"WA_ScreenTitle","WA_CustomScreen","WA_SuperBitMap","WA_MinWidth","WA_MinHeight","WA_MaxWidth","WA_MaxHeight","WA_InnerWidth","WA_InnerHeight",
    #"WA_PubScreenName","WA_PubScreen","WA_PubScreenFallBack","WA_WindowName","WA_Colors","WA_Zoom","WA_MouseQueue","WA_BackFill","WA_RptQueue",
    #"WA_SizeGadget","WA_DragBar","WA_DepthGadget","WA_CloseGadget","WA_Backdrop","WA_ReportMouse","WA_NoCareRefresh","WA_Borderless","WA_Activate",
    #"WA_RMBTrap","WA_WBenchWindow","WA_SimpleRefresh","WA_SmartRefresh","WA_SizeBRight","WA_SizeBBottom","WA_AutoAdjust","WA_GimmeZeroZero",
    #"WA_MenuHelp","WA_NewLookMenus","WA_AmigaKey","WA_NotifyDepth","WA_Pointer","WA_BusyPointer","WA_PointerDelay","WA_TabletMessages",
    #"WA_HelpGroup","WA_HelpGroupWindow","WA_Hidden","WA_PointerType","WA_IconifyGadget", "TAG_END",
    
    #"IDCMP_SIZEVERIFY","IDCMP_NEWSIZE","IDCMP_REFRESHWINDOW","IDCMP_MOUSEBUTTONS","IDCMP_MOUSEMOVE","IDCMP_GADGETDOWN","IDCMP_GADGETUP",
    #"IDCMP_REQSET","IDCMP_MENUPICK","IDCMP_CLOSEWINDOW","IDCMP_RAWKEY","IDCMP_REQVERIFY","IDCMP_REQCLEAR","IDCMP_MENUVERIFY","IDCMP_NEWPREFS",
    #"IDCMP_DISKINSERTED","IDCMP_DISKREMOVED","IDCMP_WBENCHMESSAGE","IDCMP_ACTIVEWINDOW","IDCMP_INACTIVEWINDOW","IDCMP_DELTAMOVE","IDCMP_VANILLAKEY",
    #"IDCMP_INTUITICKS","IDCMP_IDCMPUPDATE","IDCMP_MENUHELP","IDCMP_CHANGEWINDOW","IDCMP_GADGETHELP","IDCMP_EXTENDEDMOUSE","IDCMP_LONELYMESSAGE",

    #gadtools.h
    #"GENERIC_KIND","BUTTON_KIND","CHECKBOX_KIND","INTEGER_KIND","LISTVIEW_KIND","MX_KIND","NUMBER_KIND","CYCLE_KIND","PALETTE_KIND","SCROLLER_KIND",
    #"SLIDER_KIND","STRING_KIND","TEXT_KIND","NUM_KINDS","ARROWIDCMP","BUTTONIDCMP","CHECKBOXIDCMP","INTEGERIDCMP","LISTVIEWIDCMP","MXIDCMP",
    #"NUMBERIDCMP","CYCLEIDCMP","PALETTEIDCMP","SCROLLERIDCMP","SLIDERIDCMP","STRINGIDCMP","TEXTIDCMP","PLACETEXT_LEFT","PLACETEXT_RIGHT",
    #"PLACETEXT_ABOVE","PLACETEXT_BELOW","PLACETEXT_IN","NG_HIGHLABEL","NG_GRIDLAYOUT","MENU_IMAGE","NM_TITLE","NM_ITEM","NM_SUB","IM_ITEM",
    #"IM_SUB","NM_END","NM_IGNORE","NM_BARLABEL","NM_MENUDISABLED","NM_ITEMDISABLED","NM_COMMANDSTRING","NM_FLAGMASK","NM_FLAGMASK_V39",
    #"GTMENU_TRIMMED","GTMENU_INVALID","GTMENU_NOMEM","MX_WIDTH","MX_HEIGHT","CHECKBOX_WIDTH","CHECKBOX_HEIGHT","GT_TagBase","GTVI_NewWindow",
    #"GTVI_NWTags","GT_Private0","GTCB_Checked","GTLV_Top","GTLV_Labels","GTLV_ReadOnly","GTLV_ScrollWidth","GTMX_Labels","GTMX_Active","GTTX_Text",
    #"GTTX_CopyText","GTNM_Number","GTCY_Labels","GTCY_Active","GTPA_Depth","GTPA_Color","GTPA_ColorOffset","GTPA_IndicatorWidth",
    #"GTPA_IndicatorHeight","GTSC_Top","GTSC_Total","GTSC_Visible","GTSC_Overlap","GTSL_Min","GTSL_Max","GTSL_Level","GTSL_MaxLevelLen",
    #"GTSL_LevelFormat","GTSL_LevelPlace","GTSL_DispFunc","GTST_String","GTST_MaxChars","GTIN_Number","GTIN_MaxChars","GTMN_TextAttr",
    #"GTMN_FrontPen","GTBB_Recessed","GT_VisualInfo","GTLV_ShowSelected","GTLV_Selected","GT_Reserved1","GTTX_Border","GTNM_Border","GTSC_Arrows",
    #"GTMN_Menu","GTMX_Spacing","GTMN_FullMenu","GTMN_SecondaryError","GT_Underscore","GTST_EditHook","GTIN_EditHook","GTMN_Checkmark",
    #"GTMN_AmigaKey","GTMN_NewLookMenus","GTCB_Scaled","GTMX_Scaled","GTPA_NumColors","GTMX_TitlePlace","GTTX_FrontPen","GTTX_BackPen",
    #"GTTX_Justification","GTNM_FrontPen","GTNM_BackPen","GTNM_Justification","GTNM_Format","GTNM_MaxNumberLen","GTBB_FrameType","GTLV_MakeVisible",
    #"GTLV_ItemHeight","GTSL_MaxPixelLen","GTSL_Justification","GTPA_ColorTable","GTLV_CallBack","GTLV_MaxPen","GTTX_Clipped","GTNM_Clipped",
    #"GTBB_reserved1","GTMN_reserved1","GTLV_Total","GTLV_Visible","GTBB_Scale","GTBB_Headline","GTBB_HeadlinePen","GTBB_HeadlineFont",
    #"GTVI_LeftBorder","GTVI_TopBorder","GTVI_AlignRight","GTVI_AlignBottom","GTVI_MinFontWidth","GTVI_MinFontHeight","GTMX_ScaledSpacing",
    #"GT_Reserved0","GTJ_LEFT","GTJ_RIGHT","GTJ_CENTER","BBFT_BUTTON","BBFT_RIDGE","BBFT_ICONDROPBOX","BBFT_DISPLAY","BBFT_CTXTFRAME","INTERWIDTH",
    #"INTERHEIGHT","NWAY_KIND","NWAYIDCMP","GTNW_Labels","GTNW_Active","GADTOOLBIT","GADTOOLMASK","LV_DRAW","LVCB_OK","LVCB_UNKNOWN","LVR_NORMAL",
    #"LVR_SELECTED","LVR_NORMALDISABLED","LVR_SELECTEDDISABLED",


    #gels.h
    "SUSERFLAGS","VSPRITE","SAVEBACK","OVERLAY","MUSTDRAW","BACKSAVED","BOBUPDATE","GELGONE","VSOVERFLOW","BUSERFLAGS","SAVEBOB","BOBISCOMP",
    "BWAITING","BDRAWN","BOBSAWAY","BOBNIX","SAVEPRESERVE","OUTSTEP","ANFRACSIZE","ANIMHALF","RINGTRIGGER","B2NORM","B2SWAP","B2BOBBER",
    #"VUserStuff","BUserStuff","AUserStuff",

    #imageclass.h
    "CUSTOMIMAGEDEPTH","IA_Dummy","IA_Left","IA_Top","IA_Width","IA_Height","IA_FGPen","IA_BGPen","IA_Data","IA_LineWidth","IA_Pens",
    "IA_Resolution","IA_APattern","IA_APatSize","IA_Mode","IA_Font","IA_Outline","IA_Recessed","IA_DoubleEmboss","IA_EdgesOnly","SYSIA_Size",
    "SYSIA_Depth","SYSIA_Which","SYSIA_DrawInfo","SYSIA_Pens","IA_ShadowPen","IA_HighlightPen","SYSIA_ReferenceFont","IA_SupportsDisable",
    "IA_FrameType","IA_Underscore","IA_Scalable","IA_ActivateKey","IA_Screen","IA_Precision","IA_Orientation","IA_Label","IA_EraseBackground",
    "IA_LabelPen","SYSISIZE_MEDRES","SYSISIZE_LOWRES","SYSISIZE_HIRES","DEPTHIMAGE","ZOOMIMAGE","SIZEIMAGE","CLOSEIMAGE","SDEPTHIMAGE",
    "SDOWNBACKMAGE","LEFTIMAGE","UPIMAGE","RIGHTIMAGE","DOWNIMAGE","CHECKIMAGE","MXIMAGE","MENUCHECK","AMIGAKEY","ICONIFYIMAGE","MENUMX","MENUSUB",
    "SHIFTKEYIMAGE","FRAME_DEFAULT","FRAME_BUTTON","FRAME_RIDGE","FRAME_ICONDROPBOX","FRAME_PROPBORDER","FRAME_PROPKNOB","FRAME_DISPLAY",
    "FRAME_CONTEXT","IM_DRAW","IM_HITTEST","IM_ERASE","IM_MOVE","IM_DRAWFRAME","IM_FRAMEBOX","IM_HITFRAME","IM_ERASEFRAME","IM_DOMAINFRAME",
    "IDS_NORMAL","IDS_SELECTED","IDS_DISABLED","IDS_BUSY","IDS_INDETERMINATE","IDS_INACTIVENORMAL","IDS_INACTIVESELECTED","IDS_INACTIVEDISABLED",
    "IDS_SELECTEDDISABLED","IDS_INDETERMINANT","FRAMEF_SPECIFY","FRAMEF_MINIMAL","IDOMAIN_MINIMUM","IDOMAIN_NOMINAL","IDOMAIN_MAXIMUM",

    #obsolete.h
    #"GADGHIGHBITS","GADGHCOMP","GADGHBOX","GADGHIMAGE","GADGHNONE","GADGIMAGE","GRELBOTTOM","GRELRIGHT","GRELWIDTH","GRELHEIGHT","SELECTED",
    #"GADGDISABLED","LABELMASK","LABELITEXT","LABELSTRING","LABELIMAGE","RELVERIFY","GADGIMMEDIATE","ENDGADGET","FOLLOWMOUSE","RIGHTBORDER",
    #"LEFTBORDER","TOPBORDER","BOTTOMBORDER","BORDERSNIFF","TOGGLESELECT","BOOLEXTEND","STRINGLEFT","STRINGCENTER","STRINGRIGHT","LONGINT",
    #"ALTKEYMAP","STRINGEXTEND","ACTIVEGADGET","GADGETTYPE","SYSGADGET","SCRGADGET","GZZGADGET","REQGADGET","SIZING","WDRAGGING","SDRAGGING",
    #"WUPFRONT","SUPFRONT","WDOWNBACK","SDOWNBACK","CLOSE","BOOLGADGET","GADGET0002","PROPGADGET","STRGADGET","CUSTOMGADGET","GTYPEMASK","SIZEVERIFY",
    #"NEWSIZE","REFRESHWINDOW","MOUSEBUTTONS","MOUSEMOVE","GADGETDOWN","GADGETUP","REQSET","MENUPICK","CLOSEWINDOW","RAWKEY","REQVERIFY","REQCLEAR",
    #"MENUVERIFY","NEWPREFS","DISKINSERTED","DISKREMOVED","WBENCHMESSAGE","ACTIVEWINDOW","INACTIVEWINDOW","DELTAMOVE","VANILLAKEY","INTUITICKS",
    #"IDCMPUPDATE","MENUHELP","CHANGEWINDOW","LONELYMESSAGE","WINDOWSIZING","WINDOWDRAG","WINDOWDEPTH","WINDOWCLOSE","SIZEBRIGHT","SIZEBBOTTOM",
    #"REFRESHBITS","SMART_REFRESH","SIMPLE_REFRESH","SUPER_BITMAP","OTHER_REFRESH","BACKDROP","REPORTMOUSE","GIMMEZEROZERO","BORDERLESS","ACTIVATE",
    #"WINDOWACTIVE","INREQUEST","MENUSTATE","RMBTRAP","NOCAREREFRESH","WINDOWREFRESH","WBENCHWINDOW","WINDOWTICKED","NW_EXTENDED","VISITOR","ZOOMED",
    #"HASZOOM","GA_LEFT","GA_RELRIGHT","GA_TOP","GA_RELBOTTOM","GA_WIDTH","GA_RELWIDTH","GA_HEIGHT","GA_RELHEIGHT","GA_TEXT","GA_IMAGE","GA_BORDER",
    #"GA_SELECTRENDER","GA_HIGHLIGHT","GA_DISABLED","GA_GZZGADGET","GA_USERDATA","GA_SPECIALINFO","GA_SELECTED","GA_ENDGADGET","GA_IMMEDIATE",
    #"GA_RELVERIFY","GA_FOLLOWMOUSE","GA_RIGHTBORDER","GA_LEFTBORDER","GA_TOPBORDER","GA_BOTTOMBORDER","GA_TOGGLESELECT","GA_SYSGADGET",
    #"GA_SYSGTYPE","GA_PREVIOUS","GA_NEXT","GA_DRAWINFO","GA_INTUITEXT","GA_LABELIMAGE","PGA_FREEDOM","PGA_BORDERLESS","PGA_HORIZPOT",
    #"PGA_HORIZBODY","PGA_VERTPOT","PGA_VERTBODY","PGA_TOTAL","PGA_VISIBLE","PGA_TOP","LAYOUTA_LAYOUTOBJ","LAYOUTA_SPACING","LAYOUTA_ORIENTATION",
    #"IMAGE_ATTRIBUTES","IA_LEFT","IA_TOP","IA_WIDTH","IA_HEIGHT","IA_FGPEN","IA_BGPEN","IA_DATA","IA_LINEWIDTH","IA_PENS","IA_RESOLUTION",
    #"IA_APATTERN","IA_APATSIZE","IA_MODE","IA_FONT","IA_OUTLINE","IA_RECESSED","IA_DOUBLEEMBOSS","IA_EDGESONLY","IA_SHADOWPEN","IA_HIGHLIGHTPEN",
    #"detailPen","blockPen","textPen","shinePen","shadowPen","hifillPen","hifilltextPen","backgroundPen","hilighttextPen","numDrIPens",

    #screens.h
    "DRI_VERSION","DRIF_NEWLOOK","DETAILPEN","BLOCKPEN","TEXTPEN","SHINEPEN","SHADOWPEN","FILLPEN","FILLTEXTPEN","BACKGROUNDPEN","HIGHLIGHTTEXTPEN",
    "BARDETAILPEN","BARBLOCKPEN","BARTRIMPEN","BARCONTOURPEN","NUMDRIPENS","PEN_C3","PEN_C2","PEN_C1","PEN_C0","SCREENTYPE","WBENCHSCREEN",
    "PUBLICSCREEN","CUSTOMSCREEN","SHOWTITLE","BEEPING","CUSTOMBITMAP","SCREENBEHIND","SCREENQUIET","SCREENHIRES","NS_EXTENDED","AUTOSCROLL",
    "PENSHARED","STDSCREENHEIGHT","STDSCREENWIDTH","SA_Dummy","SA_Left","SA_Top","SA_Width","SA_Height","SA_Depth","SA_DetailPen","SA_BlockPen",
    "SA_Title","SA_Colors","SA_ErrorCode","SA_Font","SA_SysFont","SA_Type","SA_BitMap","SA_PubName","SA_PubSig","SA_PubTask","SA_DisplayID",
    "SA_DClip","SA_Overscan","SA_Obsolete1","SA_ShowTitle","SA_Behind","SA_Quiet","SA_AutoScroll","SA_Pens","SA_FullPalette","SA_ColorMapEntries",
    "SA_Parent","SA_Draggable","SA_Exclusive","SA_SharePens","SA_BackFill","SA_Interleaved","SA_Colors32","SA_VideoControl","SA_FrontChild",
    "SA_BackChild","SA_LikeWorkbench","SA_Reserved","SA_MinimizeISG","SA_OffScreenDragging","NSTAG_EXT_VPMODE","OSERR_NOMONITOR","OSERR_NOCHIPS",
    "OSERR_NOMEM","OSERR_NOCHIPMEM","OSERR_PUBNOTUNIQUE","OSERR_UNKNOWNMODE","OSERR_TOODEEP","OSERR_ATTACHFAIL","OSERR_NOTAVAILABLE",
    "OSERR_NORTGBITMAP","OSCAN_TEXT","OSCAN_STANDARD","OSCAN_MAX","OSCAN_VIDEO","PSNF_PRIVATE","MAXPUBSCREENNAME","SHANGHAI","POPPUBSCREEN",
    "SDEPTH_TOFRONT","SDEPTH_TOBACK","SDEPTH_INFAMILY","SDEPTH_CHILDONLY","SPOS_RELATIVE","SPOS_ABSOLUTE","SPOS_MAKEVISIBLE","SPOS_FORCEDRAG",
    "SB_SCREEN_BITMAP","SB_COPY_BITMAP",

    #videocontrol.h
    "VTAG_END_CM","VTAG_CHROMAKEY_CLR","VTAG_CHROMAKEY_SET","VTAG_BITPLANEKEY_CLR","VTAG_BITPLANEKEY_SET","VTAG_BORDERBLANK_CLR",
    "VTAG_BORDERBLANK_SET","VTAG_BORDERNOTRANS_CLR","VTAG_BORDERNOTRANS_SET","VTAG_CHROMA_PEN_CLR","VTAG_CHROMA_PEN_SET","VTAG_CHROMA_PLANE_SET",
    "VTAG_ATTACH_CM_SET","VTAG_NEXTBUF_CM","VTAG_BATCH_CM_CLR","VTAG_BATCH_CM_SET","VTAG_NORMAL_DISP_GET","VTAG_NORMAL_DISP_SET",
    "VTAG_COERCE_DISP_GET","VTAG_COERCE_DISP_SET","VTAG_VIEWPORTEXTRA_GET","VTAG_VIEWPORTEXTRA_SET","VTAG_CHROMAKEY_GET","VTAG_BITPLANEKEY_GET",
    "VTAG_BORDERBLANK_GET","VTAG_BORDERNOTRANS_GET","VTAG_CHROMA_PEN_GET","VTAG_CHROMA_PLANE_GET","VTAG_ATTACH_CM_GET","VTAG_BATCH_CM_GET",
    "VTAG_BATCH_ITEMS_GET","VTAG_BATCH_ITEMS_SET","VTAG_BATCH_ITEMS_ADD","VTAG_VPMODEID_GET","VTAG_VPMODEID_SET","VTAG_VPMODEID_CLR",
    "VTAG_USERCLIP_GET","VTAG_USERCLIP_SET","VTAG_USERCLIP_CLR","VTAG_PF1_BASE_GET","VTAG_PF2_BASE_GET","VTAG_SPEVEN_BASE_GET",
    "VTAG_SPODD_BASE_GET","VTAG_PF1_BASE_SET","VTAG_PF2_BASE_SET","VTAG_SPEVEN_BASE_SET","VTAG_SPODD_BASE_SET","VTAG_BORDERSPRITE_GET",
    "VTAG_BORDERSPRITE_SET","VTAG_BORDERSPRITE_CLR","VTAG_SPRITERESN_SET","VTAG_SPRITERESN_GET","VTAG_PF1_TO_SPRITEPRI_SET",
    "VTAG_PF1_TO_SPRITEPRI_GET","VTAG_PF2_TO_SPRITEPRI_SET","VTAG_PF2_TO_SPRITEPRI_GET","VTAG_IMMEDIATE","VTAG_FULLPALETTE_SET",
    "VTAG_FULLPALETTE_GET","VTAG_FULLPALETTE_CLR","VTAG_DEFSPRITERESN_SET","VTAG_DEFSPRITERESN_GET","VC_IntermediateCLUpdate",
    "VC_IntermediateCLUpdate_Query","VC_NoColorPaletteLoad","VC_NoColorPaletteLoad_Query","VC_DUALPF_Disable","VC_DUALPF_Disable_Query",
]

FUNCTION_CONFIG = [
    #exec_lib.sfd
    #"CreateTask",
    "DeleteTask",
    "AbortIO", "AddDevice", "AddHead", "AddHeadMinList", "AddIntServer", "AddLibrary", "AddMemHandler", "AddPort", "AddResource", "AddSemaphore",
    "AddTail", "AddTailMinList", "AddTask", "Alert", "AllocAbs", "AllocEntry", "AllocMem", "AllocPooled", "AllocSignal", "AllocTrap", "AllocVec",
    "Allocate", "AttemptSemaphore", "AttemptSemaphoreShared", "AvailMem", "CacheClearE", "CacheClearU", "CacheControl", "CachePostDMA",
    "CachePreDMA", "Cause", "CheckIO", "CloseDevice", "CloseLibrary", "ColdReboot", "CopyMem", "CopyMemQuick", "CreateIORequest", "CreateMsgPort",
    "CreatePool", "Debug", "DeleteIORequest", "DeleteMsgPort", "DeletePool", "Disable", "Dispatch", "DoIO", "Enable", "Enqueue", "Exception",
    "ExecObsolete1", "ExecObsolete2", "ExecObsolete3", "ExecObsolete4", "ExecReserved04", "ExecReserved05", "ExecReserved06", "ExecReserved08",
    "ExecReserved10", "ExecReserved11", "ExecReserved12", "ExecReserved20", "ExecReserved21", "ExecReserved22", "ExecReserved23", "ExecReserved24",
    "ExecReserved25", "ExecReserved26", "ExecReserved27", "ExecReserved28", "ExecReserved29", "ExecReserved30", "ExitIntr", "FindName", "FindPort",
    "FindResident", "FindSemaphore", "FindTask", "Forbid", "FreeEntry", "FreeMem", "FreePooled", "FreeSignal", "FreeTrap", "FreeVec", "GetCC",
    "GetMsg", "InitCode", "InitResident", "InitSemaphore", "InitStruct", "NewMinList", "ObtainQuickVector", "ObtainSemaphore",
    "ObtainSemaphoreList", "ObtainSemaphoreShared", "OldOpenLibrary", "OpenLibrary", "OpenResource", "Permit", "Procure", "PutMsg", "RawIOInit",
    "RawMayGetChar", "RawPutChar", "ReadGayle", "ReleaseSemaphore", "ReleaseSemaphoreList", "RemDevice", "RemHead", "RemHeadMinList",
    "RemIntServer", "RemLibrary", "RemMemHandler", "RemPort", "RemResource", "RemSemaphore", "RemTail", "RemTailMinList", "RemTask", "Remove",
    "RemoveMinNode", "ReplyMsg", "Reschedule", "Schedule", "SendIO", "SetExcept", "SetSR", "SetSignal", "SetTaskPri", "Signal", "StackSwap",
    "SumKickData", "SumLibrary", "SuperState", "Switch", "TaggedOpenLibrary", "TypeOfMem", "UserState", "Vacate", "Wait", "WaitIO", "WaitPort",

    #dos_lib.sfd
    #"AbortPkt", "AddBuffers", "AddDosEntry", "AddPart", "AddSegment", "AllocDosObject", "AllocDosObjectTagList", "AllocDosObjectTags",
    #"AssignAdd", "AssignLate", "AssignLock", "AssignPath", "AttemptLockDosList", "ChangeMode", "CheckSignal", "ClearVec", "Cli", "CliInit",
    #"CliInitNewcli", "CliInitRun", "Close", "CompareDates", "CreateDir", "CreateNewProc", "CreateNewProcTagList", "CreateNewProcTags",
    #"CurrentDir", "DateStamp", "DateToStr", "Delay", "DeleteFile", "DeleteVar", "DeviceProc", "DoPkt0", "DoPkt1", "DoShellMethod",
    #"DoShellMethodTagList", "DosGetString", "DosNameFromAnchor", "DupLock", "DupLockFromFH", "EndNotify", "ErrorOutput", "ExNext", "Examine",
    #"ExamineFH", "Execute", "Exit", "ExtendedCli", "FGetC", "FGets", "FPrintf", "FPutC", "FPuts", "FRead", "FWrite", "FWritef", "Fault",
    #"FilePart", "FindArg", "FindCliProc", "FindVar", "Flush", "Format", "FreeArgs", "FreeDeviceProc", "FreeDosEntry", "FreeDosObject",
    #"GetArgStr", "GetConsoleTask", "GetCurrentDir", "GetCurrentDirName", "GetDeviceProc", "GetFileSysTask", "GetProgramDir", "GetProgramName",
    #"GetPrompt", "GetVar", "Info", "Inhibit", "Input", "InternalRunCommand", "IoErr", "IsFileSystem", "IsInteractive", "LoadSeg", "Lock",
    #"LockDosList", "LockRecords", "MakeDosEntry", "MakeLink", "MatchEnd", "MatchFirst", "MatchNext", "MatchPattern", "MatchPatternNoCase",
    #"MaxCli", "NameFromFH", "NameFromLock", "NewLoadSeg", "NewLoadSegTagList", "NewLoadSegTags", "NextDosEntry", "NoReqLoadSeg", "Open",
    #"OpenFromLock", "Output", "ParentDir", "ParentOfFH", "ParsePattern", "ParsePatternNoCase", "PathPart", "PrintFault", "Printf", "PutErrStr",
    #"PutStr", "Read", "Relabel", "RemAssignList", "RemDosEntry", "RemSegment", "Rename", "ReplyPkt", "SameDevice", "SameLock", "ScanStackToken",
    #"Seek", "SelectError", "SelectInput", "SelectOutput", "SetArgStr", "SetComment", "SetConsoleTask", "SetCurrentDirName", "SetFileDate",
    #"SetFileSize", "SetFileSysTask", "SetIoErr", "SetMode", "SetOwner", "SetProgramDir", "SetProgramName", "SetPrompt", "SetProtection",
    #"SetVBuf", "SetVar", "StartNotify", "StrToDate", "StrToLong", "System", "SystemTagList", "SystemTags", "UnGetC", "UnLoadSeg", "UnLock",
    #"UnLockDosList", "UnLockRecord", "UnLockRecords", "VFPrintf", "VFWritef", "VPrintf", "VolumeRequestHook", "WaitForChar", "WaitPkt", "Write",
    #"WriteChars",
    
    #gadtools_lib.sfd
    #"CreateContext", "FreeGadgets", "FreeMenus", "FreeVisualInfo", "GTReserved2", "GTReserved3", "GTReserved4", "GTReserved5", "GT_BeginRefresh",
    #"GT_EndRefresh", "GT_FilterIMsg", "GT_GetIMsg", "GT_PostFilterIMsg", "GT_RefreshWindow", "GT_ReplyIMsg",
    
    #graphics_lib.sfd 
    "AddBob", "RemBob","AddDisplayInfo", "AddFont", "AddVSprite", "AllocBitMap", "AllocDBufInfo", "AllocRaster",  "AreaDraw", "AreaEnd",
    "AreaMove", "AskFont", "AskSoftStyle", "AttachPalExtra", "AttemptLockLayerRom", "BitMapScale", "BltClear", "CBump", "CMove", "CWait",
    "CalcIVG", "ChangeVPBitMap", "ClearEOL", "ClearRegion", "ClearScreen", "CloseFont", "CloseMonitor", "CoerceMode", "CopySBitMap",
    "DisownBlitter", "DisposeRegion", "DoCollision", "Draw", "DrawGList", "ExtendFont", "ExtendFontTags", "FindColor", "FindDisplayInfo",
    "Flood", "FreeBitMap", "FreeColorMap", "FreeCopList", "FreeCprList", "FreeDBufInfo", "FreeRaster", "FreeSprite", "FreeSpriteData",
    "FreeVPortCopLists", "GetAPen", "GetBPen", "GetBitMapAttr", "GetColorMap", "GetDrMd", "GetOutlinePen", "GetRGB32", "GetRGB4", "GetSprite",
    "GetVPModeID", "GfxAssociate", "GfxFree", "GfxInternal1", "GfxInternal2", "GfxInternal3", "GfxLookUp", "GfxNew", "GfxSpare1", "GfxSpare2",
    "InitGMasks", "InitMasks", "InitRastPort", "InitTmpRas", "InitVPort", "InitView", "LoadRGB32", "LoadRGB4", "LoadView", "LockLayerRom",
    "MakeVPort", "ModeNotAvailable", "Move", "MrgCop", "NewRegion", "NextDisplayInfo", "ObtainPen", "OpenFont", "OpenMonitor", "OwnBlitter",
    "PolyDraw", "QBSBlit", "QBlit", "ReadPixel", "ReleasePen", "RemFont", "RemVSprite", "ScalerDiv", "ScrollVPort", "SetABPenDrMd", "SetAPen",
    "SetBPen", "SetChipRev", "SetDefaultMonitor", "SetDrMd", "SetFont", "SetMaxPen", "SetOutlinePen", "SetRGB32", "SetRGB32CM", "SetRast",
    "SetWriteMask", "SortGList", "StripFont", "SyncSBitMap", "Text", "UCopperListInit", "UnlockLayerRom", "VBeamPos", "WaitBOVP", "WaitBlit",
    "WaitTOF", "WritePixel", "InitGels",
    # not working yet = "Animate"
    
    #intuition_lib.sfd
    #"ActivateWindow", "AddClass", "AlohaWorkbench", "BeginRefresh", "ChangeScreenBuffer", "ClearDMRequest", "ClearMenuStrip", "ClearPointer",
    #"CloseScreen", "CloseWindow", "CloseWorkBench", "CurrentTime", "DisplayAlert", "DisplayBeep", "DisposeObject", "EndRefresh", "EndRequest",
    #"FindClass", "FreeClass", "FreeScreenBuffer", "FreeSysRequest", "GetAttr", "GetDefaultPubScreen", "GetScreenDrawInfo", "HelpControl",
    #"HideWindow", "InitRequester", "IntuiTextLength", "Intuition", "ItemAddress", "LendMenus", "LockIBase", "LockPubScreen", "LockPubScreenList",
    #"MakeScreen", "ModifyIDCMP", "MoveScreen", "MoveWindow", "NextObject", "NextPubScreen", "ObtainGIRPort", "OffMenu", "OnMenu", "OpenIntuition",
    #"OpenScreen", "OpenWindow", "OpenWorkBench", "PointInImage", "PubScreenStatus", "RefreshWindowFrame", "ReleaseGIRPort", "RemakeDisplay",
    #"RemoveClass", "RemoveGadget", "ReportMouse", "ReportMouse1", "Request", "ResetMenuStrip", "RethinkDisplay", "ScreenDepth", "ScreenToBack",
    #"ScreenToFront", "SetDMRequest", "SetDefaultPubScreen", "SetEditHook", "SetIPrefs", "SetMenuStrip", "SetMouseQueue", "SetPubScreenModes",
    #"ShowTitle", "ShowWindow", "SizeWindow", "TimedDisplayAlert", "UnlockIBase", "UnlockPubScreen", "UnlockPubScreenList", "ViewAddress",
    #"ViewPortAddress", "WBenchToBack", "WBenchToFront", "WindowToBack", "WindowToFront", "ZipWindow", "lockPubClass", "unlockPubClass",
    # not working yet - "FreeRemember",
]

TAGS_FUNCTION_CONFIG = [
    #{ "name": "CreateGadget", "tagList": "CreateGadgetA"},
    #{ "name": "OpenWindowTags", "tagList": "OpenWindowTagList"},
    #{ "name": "GetVisualInfo", "tagList": "GetVisualInfoA"},
    #{ "name": "GT_SetGadgetAttrs", "tagList": "GT_SetGadgetAttrsA"},

     #gadtools_lib.sfd
     #{ "name": "CreateGadget", "tagList": "CreateGadgetA" },
     #{ "name": "CreateMenus", "tagList": "CreateMenusA" },
     #{ "name": "DrawBevelBox", "tagList": "DrawBevelBoxA" },
     #{ "name": "GT_GetGadgetAttrs", "tagList": "GT_GetGadgetAttrsA" },
     #{ "name": "GT_SetGadgetAttrs", "tagList": "GT_SetGadgetAttrsA" },
     #{ "name": "GetVisualInfo", "tagList": "GetVisualInfoA" },
     #{ "name": "LayoutMenuItems", "tagList": "LayoutMenuItemsA" },
     #{ "name": "LayoutMenus", "tagList": "LayoutMenusA" },
     #{ "name": "ScaleGadgetRect", "tagList": "ScaleGadgetRectA" },
     #{ "name": "SetDesignFont", "tagList": "SetDesignFontA" },

     #graphics_lib.sfd
     { "name": "AllocSpriteData", "tagList": "AllocSpriteDataA" },
     { "name": "BestModeID", "tagList": "BestModeIDA" },
     { "name": "ChangeExtSprite", "tagList": "ChangeExtSpriteA" },
     { "name": "GetExtSprite", "tagList": "GetExtSpriteA" },
     { "name": "GetRPAttrs", "tagList": "GetRPAttrsA" },
     { "name": "ObtainBestPen", "tagList": "ObtainBestPenA" },
     { "name": "SetRPAttrs", "tagList": "SetRPAttrsA" },
     { "name": "VideoControlTags", "tagList": "VideoControl" },     

     #intuition_lib.sfd     
     #{ "name": "IntuitionControl", "tagList": "IntuitionControlA" },
     #{ "name": "SetAttrs", "tagList": "SetAttrsA" },
     #{ "name": "SetWindowPointer", "tagList": "SetWindowPointerA" },
     #{ "name": "OpenScreenTags", "tagList": "OpenScreenTagList"},
]

FAKE_FUNCTION_CONFIG = [

]

FAKE_BOOL_FUNCTION_CONFIG = [

]

BOOL_FUNCTION_CONFIG = [

]

FUNCTOR_SKIP = []
