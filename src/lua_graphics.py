TYPES = [
    # external
    "RastPort",
    "TextFont",
    "TextAttr",
    "ViewPort",
    "View",
    "TagItem",
    "BitMap",
    "DBufInfo",
    
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
#    "GfxBase",
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
]    

TYPE_CONFIG = {
    "View": {"newindex": False, "index": False, "keys": False, "metainstall": False},
}

ENUM_CONFIG = []

DEFINE_CONFIGS = [
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
    
]

TAGS_FUNCTION_CONFIG = [
     #graphics_lib.sfd
     { "name": "AllocSpriteData", "tagList": "AllocSpriteDataA" },
     { "name": "BestModeID", "tagList": "BestModeIDA" },
     { "name": "ChangeExtSprite", "tagList": "ChangeExtSpriteA" },
     { "name": "GetExtSprite", "tagList": "GetExtSpriteA" },
     { "name": "GetRPAttrs", "tagList": "GetRPAttrsA" },
     { "name": "ObtainBestPen", "tagList": "ObtainBestPenA" },
     { "name": "SetRPAttrs", "tagList": "SetRPAttrsA" },
     { "name": "VideoControlTags", "tagList": "VideoControl" },     

]

FAKE_FUNCTION_CONFIG = [

]

FAKE_BOOL_FUNCTION_CONFIG = [

]

BOOL_FUNCTION_CONFIG = [

]

FUNCTOR_SKIP = []
