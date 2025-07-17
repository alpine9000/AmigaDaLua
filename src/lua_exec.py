TYPES = [    
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
]    

TYPE_CONFIG = {

}

ENUM_CONFIG = []

DEFINE_CONFIGS = [
    "MEMF_PUBLIC", "MEMF_CLEAR", "MEMF_CHIP", "MEMF_FAST",    
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
