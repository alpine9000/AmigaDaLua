
--  The example program below shows the use of user Copper lists
--    under Intuition.
--
--    UserCopperExample.c
--    User Copper List Example
--    For SAS/C 5.10a,
--    compile with:  LC -b1 -cfist -L -v -y UserCopperExample.c
--    link with lc.lib and amiga.lib

--  Use this structure to gain access to the custom registers.  

--  Custom custom is a AmigaDaLua global

package.path = "?.lua;" .. package.path 
local Util = require("util")
local screen = nil
local window = nil
local CINIT = UCopperListInit

-- CMOVE { CMove(c,&a,b);CBump(c); }
-- CWAIT(c,a,b)	{ CWait(c,a,b);CBump(c); }
function CWAIT(c,a,b)
   CWait(c,a,b)
   CBump(c)
end

function CMOVE(c,a,b)
   CMove(c,a,b)
   CBump(c)
end

function CEND(c)
   CWAIT(c,10000,255)
end

--
--   The main() routine -- just calls subroutines
-- 
function  main()
   local ret_val
   local intuiMessage
   
   ret_val = openAll()
   if RETURN_OK == ret_val then
      --  Create and attach the user Copper list.
      ret_val = loadCopper()
      if RETURN_OK == ret_val then
	 --  Wait until the user clicks in the close gadget.
	 Wait(1<<window.UserPort.mp_SigBit)
	 local done = false
	 while not done do
	    intuiMessage = GetMsg(window.UserPort)
	    if not intuiMessage then
	       done = true
	    else
	       ReplyMsg(intuiMessage)
	    end	    
	 end
      end
      cleanExit(ret_val)
   end
end

--
-- openAll() -- opens the libraries, screen and window
--
function openAll()
   local  MY_WA_WIDTH = 270 --  Width of window.
   local ret_val = RETURN_OK

   -- Prepare to explicitly request Topaz 60 as the screen font.
   local topaz60 = TextAttr {
      ta_Name = "topaz.font",
      ta_YSize = TOPAZ_SIXTY,
      ta_Style = 0,
      ta_Flags = 0,   
   }

   screen = OpenScreenTags(nil,
			   SA_Overscan, OSCAN_STANDARD,
			   SA_Title,    "User Copper List Example",
			   SA_Font,     GetPtr(topaz60))
   
   if not screen then
      ret_val = ERROR_NO_FREE_STORE
   else
      window = OpenWindowTags(nil,
			      WA_CustomScreen, GetPtr(screen),
			      WA_Title,        "<- Click here to quit.",
			      WA_IDCMP,        CLOSEWINDOW,
			      WA_Flags,        WINDOWDRAG|WINDOWCLOSE|INACTIVEWINDOW,
			      WA_Left,         (screen.Width-MY_WA_WIDTH)/2,
			      WA_Top,          screen.Height/2,
			      WA_Height,       screen.Font.ta_YSize + 3,
			      WA_Width,        MY_WA_WIDTH)
      
      if not window then
	 ret_val = ERROR_NO_FREE_STORE
      end
   end
   
   return ret_val
end


--
-- loadCopper() -- creates a Copper list program and adds it to the system
-- 
function loadCopper()
   local   i
   local scanlines_per_color
   local ret_val = RETURN_OK
   local viewPort
   local uCopList

   local uCopTags = Util.TagList {   
      VTAG_USERCLIP_SET = nil,
      VTAG_END_CM = nil
   }

   local spectrum = CreateArrayUWORD {
      0x0604, 0x0605, 0x0606, 0x0607, 0x0617, 0x0618, 0x0619,
      0x0629, 0x072a, 0x073b, 0x074b, 0x074c, 0x075d, 0x076e,
      0x077e, 0x088f, 0x07af, 0x06cf, 0x05ff, 0x04fb, 0x04f7,
      0x03f3, 0x07f2, 0x0bf1, 0x0ff0, 0x0fc0, 0x0ea0, 0x0e80,
      0x0e60, 0x0d40, 0x0d20, 0x0d00
   }

   local NUMCOLORS = 32
   
   --  Allocate memory for the Copper list.  
   --  Make certain that the initial memory is cleared. 
   --uCopList = AllocMem(sizeof(struct UCopList), MEMF_PUBLIC|MEMF_CLEAR)
   uCopList = AllocMem(12, MEMF_PUBLIC|MEMF_CLEAR)
   if not uCopList then
      ret_val = ERROR_NO_FREE_STORE
   else
      --  Initialize the Copper list buffer.
      
      CINIT(uCopList, NUMCOLORS)
      scanlines_per_color = screen.Height//NUMCOLORS
      
      --  Load in each color. 
      for i = 1, NUMCOLORS do
	 CWAIT(uCopList, ((i-1)*scanlines_per_color), 0)
	 CMOVE(uCopList, custom.color.ptr(1), spectrum[i])
      end
      
      CEND(uCopList) --  End the Copper list
      
      viewPort = ViewPortAddress(window)   --  Get a pointer to the ViewPort.
      Forbid()       --  Forbid task switching while changing the Copper list.
      viewPort.UCopIns = uCopList
      Permit()       --  Permit task switching again.       
      --  Enable user copper list clipping for this ViewPort.
      --VideoControl(viewPort.ColorMap, uCopTags)
      VideoControlTags(viewPort.ColorMap,  VTAG_USERCLIP_SET, 0, VTAG_END_CM, 0)
   end      
   RethinkDisplay()       --  Display the new Copper list.    

   return ret_val
end


--
--  cleanExit() -- returns all resources that were used.
-- 

function cleanExit(retval)
   local viewPort

   if screen then
      if window then
	 viewPort = ViewPortAddress(window)
         if  viewPort.UCopIns then
	    --  Free the memory allocated for the Copper.  
	    FreeVPortCopLists(viewPort)
	    RemakeDisplay()
	 end
	 CloseWindow(window)
      end
      CloseScreen(screen)
   end
end

print("The example program below shows the use of user Copper lists")
main()
