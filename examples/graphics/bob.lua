LoadBindings("intuition")
LoadBindings("graphics")
LoadBindings("exec")

-- This example must be linked with animtools.c and includes the header
-- files animtools.h and animtools_proto.h.  These files are listed at
-- the end of the chapter.
--
-- bob.c
--
-- SAS/C V5.10a
-- lc -b1 -cfist -v -y bob.c
-- blink FROM LIB:c.o bob.o animtools.o LIB LIB:lc.lib LIB:amiga.lib TO bob

--#include "animtools.h"

local return_code
local GEL_SIZE = 4                  -- number of lines in the bob 

-- Bob data - two sets that are alternated between.  Note that this 
-- data is at the resolution of the screen.                         

-- data is 2 planes by 2 words by GEL_SIZE lines                    
local bob_data1 = CreateChipArrayUWORD {
   -- plane 1
   0xffff, 0x0003, 0xfff0, 0x0003, 0xfff0, 0x0003, 0xffff, 0x0003,
   -- plane 2 
   0x3fff, 0xfffc, 0x3ff0, 0x0ffc, 0x3ff0, 0x0ffc, 0x3fff, 0xfffc
}

-- data is 2 planes by 2 words by GEL_SIZE lines                    
local bob_data2 = CreateChipArrayUWORD {
   -- plane 1 
   0xc000, 0xffff, 0xc000, 0x0fff, 0xc000, 0x0fff, 0xc000, 0xffff,
   -- plane 2 
   0x3fff, 0xfffc, 0x3ff0, 0x0ffc, 0x3ff0, 0x0ffc, 0x3fff, 0xfffc
}

local myNewBob = {
   nb_Image = bob_data2:ptr(1),     -- image data for the bob       
   nb_WordWidth = 2,         -- width in words       
   nb_LineHeight = GEL_SIZE, -- height in lines      
   nb_ImageDepth = 2,        -- depth of the image   
   nb_PlanePick = 3,         -- planes that get image data   
   nb_PlaneOnOff = 0,        -- unused planes to turn on     
   nb_BFlags = SAVEBACK | OVERLAY,  -- bob flags    
   nb_DBuf = 0,              -- 1=double buf, 0=not  
   nb_RasDepth = 2,          -- depth of the raster  
   nb_X = 160,               -- initial x position   
   nb_Y = 100,               -- initial y position   
   nb_HitMask = 0,           -- Hit mask.    
   nb_MeMask =  0,           -- Me mask.     
}

local myNewWindow = NewWindow { -- information for the new window 
   LeftEdge = 80,
   TopEdge = 20,
   Width = 400,
   Height = 150,
   DetailPen = -1,
   BlockPen = -1,
   IDCMPFlags = CLOSEWINDOW | INTUITICKS,
   Flags =  ACTIVATE | WINDOWCLOSE | WINDOWDEPTH | RMBTRAP,
   FirstGadget = nil,
   CheckMark = nil,
   Title = "Bob",
   Screen = nil,
   BitMap = nil,
   MinWidth = 0,
   MinHeight = 0,
   MaxWidth = 0,
   MaxHeight = 0,
   Type = WBENCHSCREEN
}

-- Draw the Bobs into the RastPort. 
function bobDrawGList(rport, vport)
   SortGList(rport)
   DrawGList(rport, vport)
   -- If the GelsList includes true VSprites, MrgCop() and LoadView() here
   WaitTOF()
end

-- Process window and dynamically change bob: Get messages. Go away on CLOSEWINDOW.
-- Update and redisplay bob on INTUITICKS. Wait for more messages.

function process_window(win, myBob)
   local msg
   local exit = false

   while not exit do
      Wait(1 << win.UserPort.mp_SigBit)
      local done = false      
      while not done do
	 msg = GT_GetIMsg(win.UserPort) -- GetMsg(win.UserPort)
	 if not msg then
	    done = true
	 else
	    -- only CLOSEWINDOW and INTUITICKS are active 
	    if msg.Class == CLOSEWINDOW then
	       GT_ReplyIMsg(msg)--ReplyMsg(msg)
	       return
	    end
	    -- Must be INTUITICKS:  change x and y values on the fly.  Note:
            -- do not have to add window offset, Bob is relative to the
            -- window (sprite relative to screen).
	    
	    myBob.BobVSprite.X = msg.MouseX + 20
	    myBob.BobVSprite.Y = msg.MouseY + 1
	    GT_ReplyIMsg(msg)--ReplyMsg(msg)
	 end
      end
      -- after getting a message, change image data on the fly
      if myBob.BobVSprite.ImageData == bob_data1:ptr(1) then
	 myBob.BobVSprite.ImageData = bob_data2:ptr(1)
      else
	 myBob.BobVSprite.ImageData = bob_data1:ptr(1)
      end
      InitMasks(myBob.BobVSprite) -- set up masks for new image 
      bobDrawGList(win.RPort, ViewPortAddress(win))
   end
end


-- Setup the GELs system.  After this call is made you can use VSprites, Bobs, AnimComps
-- and AnimObs.  Note that this links the GelsInfo structure into the RastPort, and calls
-- InitGels().  It uses information in your RastPort structure to establish boundary collision
-- defaults at the outer edges of the raster.  This routine sets up for everything - collision
-- detection and all. You must already have run LoadView before ReadyGelSys is called.

function setupGelSys(rPort, reserved)
   local gInfo
   local vsHead
   local vsTail

   gInfo = GelsInfo {}
   gInfo.nextLine = AllocMem(2 * 8, MEMF_CLEAR)
   gInfo.lastColor = AllocMem(4 * 8, MEMF_CLEAR)
   gInfo.collHandler = collTable {}
   vsHead = VSprite {}
   vsTail = VSprite {}
   gInfo.sprRsrvd   = reserved
   -- Set left- and top-most to 1 to better keep items 
   -- inside the display boundaries.                   
   gInfo.leftmost   = 1
   gInfo.topmost    = 1
   gInfo.rightmost  = (rPort.BitMap.BytesPerRow << 3) - 1
   gInfo.bottommost = rPort.BitMap.Rows - 1
   rPort.GelsInfo = gInfo
   InitGels(vsHead, vsTail, gInfo)
   return(gInfo)
end

-- Create a VSprite from the information given in nVSprite.  Use freeVSprite()
-- to free this GEL.
function makeVSprite(nVSprite)
   local vsprite
   local line_size
   local plane_size

   line_size = 2 * nVSprite.nvs_WordWidth
   plane_size = line_size * nVSprite.nvs_LineHeight

   vsprite = VSprite {}
   vsprite.BorderLine = AllocMem(line_size, MEMF_CHIP)
   vsprite.CollMask = AllocMem(plane_size, MEMF_CHIP)
   vsprite.Y          = nVSprite.nvs_Y
   vsprite.X          = nVSprite.nvs_X
   vsprite.Flags      = nVSprite.nvs_Flags
   vsprite.Width      = nVSprite.nvs_WordWidth
   vsprite.Depth      = nVSprite.nvs_ImageDepth
   vsprite.Height     = nVSprite.nvs_LineHeight
   vsprite.MeMask     = nVSprite.nvs_MeMask
   vsprite.HitMask    = nVSprite.nvs_HitMask
   vsprite.ImageData  = nVSprite.nvs_Image
   vsprite.SprColors  = nVSprite.nvs_ColorSet
   vsprite.PlanePick  = 0
   vsprite.PlaneOnOff = 0
   InitMasks(vsprite)
   return(vsprite)
end


-- Create a Bob from the information given in nBob.  Use freeBob() to free this GEL.
-- A VSprite is created for this bob.  This routine properly allocates all double
-- buffered information if it is required.

function makeBob(nBob)
   local bob
   local vsprite
   local rassize

   rassize = 2 * nBob.nb_WordWidth * nBob.nb_LineHeight * nBob.nb_RasDepth
   bob = Bob {}
   bob.SaveBuffer = AllocMem(rassize, MEMF_CHIP)
   local nVSprite = {
      nvs_WordWidth  = nBob.nb_WordWidth,
      nvs_LineHeight = nBob.nb_LineHeight,
      nvs_ImageDepth = nBob.nb_ImageDepth,
      nvs_Image      = nBob.nb_Image,
      nvs_X          = nBob.nb_X,
      nvs_Y          = nBob.nb_Y,
      nvs_ColorSet   = nil,
      nvs_Flags      = nBob.nb_BFlags,
      -- Push the values into the NEWVSPRITE structure for use in makeVSprite().
      nvs_MeMask     = nBob.nb_MeMask,
      nvs_HitMask    = nBob.nb_HitMask,
   }

   vsprite = makeVSprite(nVSprite)
   vsprite.PlanePick = nBob.nb_PlanePick
   vsprite.PlaneOnOff = nBob.nb_PlaneOnOff
   vsprite.VSBob   = bob
   bob.BobVSprite  = vsprite
   bob.ImageShadow = vsprite.CollMask
   bob.Flags       = 0
   bob.Before      = nil
   bob.After       = nil
   bob.BobComp     = nil

   if nBob.nb_DBuf ~= 0 then
      bob.DBuffer = DBufPacket {}
      bob.DBuffer.BufBuffer = AllocMem(rassize, MEMF_CHIP)
   else
      bob.DBuffer = nil
   end

   return bob
end

-- Working with the Bob: setup the GEL system, and get a new Bob (makeBob()).
-- Add the bob to the system and display. Use the Bob.  When done, remove
-- the Bob and update the display without the bob. Cleanup everything.

function do_Bob(win)
   local myBob
   local my_ginfo

   my_ginfo = setupGelSys(win.RPort, 0x03)

   if my_ginfo == nil then
      return_code = RETURN_WARN
   else
      myBob = makeBob(myNewBob)
      if myBob == nil then
	 return_code = RETURN_WARN
      else
	 AddBob(myBob, win.RPort)
	 bobDrawGList(win.RPort, ViewPortAddress(win))
	 process_window(win, myBob)
	 RemBob(myBob)
	 bobDrawGList(win.RPort, ViewPortAddress(win))
	 freeBob(myBob, myNewBob.nb_RasDepth)
      end
      cleanupGelSys(my_ginfo,win.RPort)
   end
end



-- Free the data created by makeBob().  It's important that rasdepth match the depth you */
-- passed to makeBob() when this gel was made. Assumes images deallocated elsewhere.     */
function freeBob(bob, rasdepth)
   local rassize = 2 * bob.BobVSprite.Width * bob.BobVSprite.Height * rasdepth

   if GetPtr(bob.DBuffer) ~= 0 then
      FreeMem(bob.DBuffer.BufBuffer, rassize)
   end
   
   FreeMem(bob.SaveBuffer, rassize)
   
   freeVSprite(bob.BobVSprite);
end

-- Free the data created by makeVSprite().  Assumes images deallocated elsewhere.
function freeVSprite(vsprite)
   local line_size
   local plane_size

   line_size = 2 * vsprite.Width
   plane_size = line_size * vsprite.Height
   FreeMem(vsprite.BorderLine, line_size)
   FreeMem(vsprite.CollMask, plane_size)
end

-- Free all of the stuff allocated by setupGelSys().  Only call this routine if
-- setupGelSys() returned successfully.  The GelsInfo structure is the one returned
-- by setupGelSys().   It also unlinks the GelsInfo from the RastPort.
function cleanupGelSys(gInfo, rPort)
   FreeMem(gInfo.lastColor, 4 * 8)
   FreeMem(gInfo.nextLine, 2 * 8)
--   FreeMem(gInfo->gelHead, (LONG)sizeof(struct VSprite));
--   FreeMem(gInfo->gelTail, (LONG)sizeof(struct VSprite));
end

function main()

   local return_code = RETURN_OK
   local win = OpenWindow(myNewWindow)
   if win == nil then
      print("Failed to open window")
      return_code = RETURN_FAIL
   else
      do_Bob(win)
      CloseWindow(win)
   end
end

main()
