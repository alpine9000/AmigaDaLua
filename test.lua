
--file = Open("A1200:t.txt", 1005)

--if not file then
--   print("Failed to open")   
--else
--   bufferSize = 1024
--   buffer = AllocMem(bufferSize, MEMF_PUBLIC | MEMF_CLEAR)
--   bytesRead = Read(file, buffer, bufferSize)
--   stringBuffer = TO_CONST_STRPTR(buffer)
 --  PutStr(stringBuffer)
--end

package.path = "a1200:?.lua;" .. package.path 

local UI = require("taglist")

local tags = UI.TagList {
    WA_Title = "My Window",
    WA_Width = 320,
    WA_Height = 120,
    WA_DragBar = true,
    WA_CloseGadget = true,
    WA_Activate = true,
    WA_IDCMP = IDCMP_CLOSEWINDOW,
}

win = OpenWindowTagList(nil, tags)

if win then
   local rp = win.RPort;
   Move(rp, 10, 20)
   Text(rp, "Hello, Amiga!", 13)
   local done = false
   while not done do 
      WaitPort(win.UserPort)
      local msg = GetMsg(win.UserPort)
      while msg do
	 local class = TO_IntuiMessage(msg).Class
	 if class == IDCMP_CLOSEWINDOW then
	    done = true
	 end
	 ReplyMsg(msg)
	 msg = GetMsg(win.UserPort)
      end 
   end
   CloseWindow(win)   
end

