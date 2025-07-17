LoadBindings("intuition")
LoadBindings("graphics")
LoadBindings("exec")

print("Simple GadTools Gadget Example - see http://amigadev.elowar.com/read/ADCD_2.1/Libraries_Manual_guide/node0258.html")

-- The example listed here shows how to use the NewGadget structure and
-- the GadTools library functions discussed above to create a simple
-- button gadget.
--
-- Simple example of a GadTools gadget.

package.path = "?.lua;" .. package.path 
local Util = require("util")

-- Gadget defines of our choosing, to be used as GadgetID's.
local MYGAD_BUTTON = 4

local Topaz80 = TextAttr {
   ta_Name = "topaz.font",
   ta_YSize = 8,
   ta_Style = 0,
   ta_Flags = 0,   
}

--
-- Prepare for using GadTools, set up gadgets and open window.
-- Clean up and when done or on error.
--
function gadtoolsWindow()
   local mysc = LockPubScreen(nil)
   local mywin
   local glist = Util.NewGadgetList()
   local gad
   local ng
   local vi
   
   if mysc then
      local viTags = Util.TagList {}
      vi = GetVisualInfoA(mysc, viTags)
      if vi then
	 local buttonTags = Util.TagList {}
	 -- GadTools gadgets require this step to be taken 
	 gad = CreateContext(glist)

	 -- create a button gadget centered below the window title
	 local ng = NewGadget {
	    ng_TextAttr   = Topaz80,
	    ng_VisualInfo = vi,
	    ng_LeftEdge   = 150,
	    ng_TopEdge    = 20 + mysc.WBorTop + (mysc.Font.ta_YSize + 1),
	    ng_Width      = 100,
	    ng_Height     = 12,
	    ng_GadgetText = "Click Me",
	    ng_GadgetID   = MYGAD_BUTTON,
	    ng_Flags      = 0,   
	 }
	 
	 gad = CreateGadgetA(BUTTON_KIND, gad, ng, buttonTags)

	 if gad then 
	    local tags = Util.TagList {
	       WA_Title = "GadTools Gadget Demo (Lua)",
	       WA_Gadgets = GetPtr(gad),   
	       WA_Width = 400,
	       WA_InnerHeight = 100,
	       WA_AutoAdjust = true,
	       WA_DragBar = true,
	       WA_DepthGadget = true,
	       WA_CloseGadget = true,
	       WA_Activate = true,
	       WA_PubScreen = GetPtr(mysc),
	       WA_IDCMP = IDCMP_CLOSEWINDOW|IDCMP_REFRESHWINDOW|BUTTONIDCMP,
	    }
	    
	    mywin = OpenWindowTagList(nil, tags)
	 
	    if mywin then
	       GT_RefreshWindow(mywin, nil);
	       process_window_events(mywin)
	       CloseWindow(mywin)
	    end
	    -- FreeGadgets() must be called after the context has been
	    FreeGadgets(gad) -- In lua we call the free gadget, not the glist which is a pointer-to-pointer type
	 end
	 	    
	 FreeVisualInfo(vi)
      end
      UnlockPubScreen(nil)
   end
end

--
-- Standard message handling loop with GadTools message handling functions
-- used (GT_GetIMsg() and GT_ReplyIMsg()).
--
function process_window_events(mywin)
   local terminated = false
   -- Use GT_GetIMsg() and GT_ReplyIMsg() for handling 
   -- IntuiMessages with GadTools gadgets.             
   while not terminated do 
      WaitPort(mywin.UserPort)
      local imsg = GT_GetIMsg(mywin.UserPort)
      while not terminated and imsg do
	 -- GT_ReplyIMsg() at end of loop 
	 if imsg.Class == IDCMP_GADGETUP then -- Buttons only report GADGETUP 
	    gad = Util.GetGadget(imsg.IAddress);	    
	    if gad and gad.GadgetID == MYGAD_BUTTON then
	       print("Button was pressed")
	    end	 
	 elseif imsg.Class == IDCMP_CLOSEWINDOW then
	    terminated = true	   
	 elseif imsg.Class == IDCMP_REFRESHWINDOW then
	    --  This handling is REQUIRED with GadTools.
	    GT_BeginRefresh(mywin);
	    GT_EndRefresh(mywin, 1);
	 end
	 -- Use the toolkit message-replying function here...
	 GT_ReplyIMsg(imsg)
	 imsg = GT_GetIMsg(mywin.UserPort)
      end 
   end
end

gadtoolsWindow()
