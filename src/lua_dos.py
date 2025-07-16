TYPES = [
    #Exec
    "MsgPort",
    #Dos
    "AChain",
    "AnchorPath",
    "AssignList",
    "CSource",
    "CommandLineInterface",
    "DateStamp",
    "DateTime",
    "DevProc",
    "DosList",
    "DosPacket",
    "FileInfoBlock",
    "InfoData",
    "LocalVar",
    "NotifyRequest",
    "Process",
    "RDArgs",
    "RecordLock",
    "Segment",
    "Unit",
    
    #Utility
    #"Hook",    
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
    
]

FUNCTION_CONFIG = [
    #dos_lib.sfd
    "AbortPkt", "AddBuffers", "AddDosEntry", "AddPart", "AddSegment", "AllocDosObject", "AllocDosObjectTagList", "AllocDosObjectTags",
    "AssignAdd", "AssignLate", "AssignLock", "AssignPath", "AttemptLockDosList", "ChangeMode", "CheckSignal", "ClearVec", "Cli", "CliInit",
    "CliInitNewcli", "CliInitRun", "Close", "CompareDates", "CreateDir", "CreateNewProc", "CreateNewProcTagList", "CreateNewProcTags",
    "CurrentDir", "DateStamp", "DateToStr", "Delay", "DeleteFile", "DeleteVar", "DeviceProc", "DoPkt0", "DoPkt1", "DoShellMethod",
    "DoShellMethodTagList", "DosGetString", "DosNameFromAnchor", "DupLock", "DupLockFromFH", "EndNotify", "ErrorOutput", "ExNext", "Examine",
    "ExamineFH", "Execute", "Exit", "ExtendedCli", "FGetC", "FGets", "FPrintf", "FPutC", "FPuts", "FRead", "FWrite", "FWritef", "Fault",
    "FilePart", "FindArg", "FindCliProc", "FindVar", "Flush", "Format", "FreeArgs", "FreeDeviceProc", "FreeDosEntry", "FreeDosObject",
    "GetArgStr", "GetConsoleTask", "GetCurrentDir", "GetCurrentDirName", "GetDeviceProc", "GetFileSysTask", "GetProgramDir", "GetProgramName",
    "GetPrompt", "GetVar", "Info", "Inhibit", "Input", "InternalRunCommand", "IoErr", "IsFileSystem", "IsInteractive", "LoadSeg", "Lock",
    "LockDosList", "LockRecords", "MakeDosEntry", "MakeLink", "MatchEnd", "MatchFirst", "MatchNext", "MatchPattern", "MatchPatternNoCase",
    "MaxCli", "NameFromFH", "NameFromLock", "NewLoadSeg", "NewLoadSegTagList", "NewLoadSegTags", "NextDosEntry", "NoReqLoadSeg", "Open",
    "OpenFromLock", "Output", "ParentDir", "ParentOfFH", "ParsePattern", "ParsePatternNoCase", "PathPart", "PrintFault", "Printf", "PutErrStr",
    "PutStr", "Read", "Relabel", "RemAssignList", "RemDosEntry", "RemSegment", "Rename", "ReplyPkt", "SameDevice", "SameLock", "ScanStackToken",
    "Seek", "SelectError", "SelectInput", "SelectOutput", "SetArgStr", "SetComment", "SetConsoleTask", "SetCurrentDirName", "SetFileDate",
    "SetFileSize", "SetFileSysTask", "SetIoErr", "SetMode", "SetOwner", "SetProgramDir", "SetProgramName", "SetPrompt", "SetProtection",
    "SetVBuf", "SetVar", "StartNotify", "StrToDate", "StrToLong", "System", "SystemTagList", "SystemTags", "UnGetC", "UnLoadSeg", "UnLock",
    "UnLockDosList", "UnLockRecord", "UnLockRecords", "VFPrintf", "VFWritef", "VPrintf", "VolumeRequestHook", "WaitForChar", "WaitPkt", "Write",
    "WriteChars",    

]

TAGS_FUNCTION_CONFIG = [

]

FAKE_FUNCTION_CONFIG = [

]

FAKE_BOOL_FUNCTION_CONFIG = [

]

BOOL_FUNCTION_CONFIG = [

]

FUNCTOR_SKIP = []
