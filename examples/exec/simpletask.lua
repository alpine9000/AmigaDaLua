local STACK_SIZE = 128000

-- Task name, pointers for allocated task struct and stack 
local task = nil
local simpletaskname = "SimpleTask"

local sharedvar = nil

function main()
   -- The new task will have it's own Lua state.
   -- We can't share variables between lua states.
   -- Let's allocate some ram we can share - this one will be a long
   -- sharedvar will be equivalent to a long *   
   sharedvar = AllocMem(4, MEMF_PUBLIC|MEMF_CLEAR)
   SetLong(sharedvar, 0) -- equivalent to *((long*)sharedvar) = 0

   -- We pass in lua script to be executed by the task - this file will be duplicated for the
   -- task. We can pass in any Lua expression which can execute expressions/functions in this script
   -- in this case we pass in the address of our shared variable
   -- Note: the task has it's own Lua state - so nothing is shared
   
   task = CreateTask(simpletaskname,0, string.format("simpletask(%p)", sharedvar), STACK_SIZE)
   
   if not task then
      cleanexit("Can't create task",RETURN_FAIL)
   end

   print("This program initialized a variable to zero, then started a")
   print("separate task which is incrementing that variable right now,")
   print("while this program waits for you to press RETURN.")
   print("Press RETURN now: ")
   io.read(1)
   
   print("The shared variable now equals", GetLong(sharedvar))
   
   -- We can simply remove the task we added because our simpletask does not make 
   -- any system calls which could cause it to be awakened or signalled later.    
   Forbid()
   DeleteTask(task)
   Permit()
   FreeMem(sharedvar, 4)
   cleanexit("",RETURN_OK)
end

function simpletask(address)
   -- Don't call AmigaDOS functions from a Task (or Lua functions that might call AmigaDOS
   local shared = MakePtr(address)
   while GetLong(shared) < 0x8000000 do
      SetLong(shared, GetLong(shared) + 1)
   end
   -- Wait forever because main() is going to RemTask() us
   Wait(0)
end

function cleanexit(s, e)
   print(s)
end

-- Hack for Lua threads - AmigaDaLua will load this script for the task, but we don't want it to run main again
if _isTask == nil then
   main()
end
