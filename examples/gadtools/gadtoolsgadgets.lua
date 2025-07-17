LoadBindings("intuition")
LoadBindings("graphics")
LoadBindings("exec")

print("Simple example of using a number of gadtools gadgets - see http://amigadev.elowar.com/read/ADCD_2.1/Libraries_Manual_guide/node0598.html")
-- Simple example of using a number of gadtools gadgets.
--
-- Here's a working example showing how to set up and use a linked list
-- of GadTools gadgets complete with keyboard shortcuts.
--
-- Compiled with SAS C v5.10a
-- lc -b1 -cfistq -v -y gadtoolsgadgets
-- blink FROM LIB:c.o gadtoolsgadgets.o TO gadtoolsgadgets LIB LIB:lc.lib LIB:amiga.lib

-- Gadget defines of our choosing, to be used as GadgetID's,
-- also used as the index into the gadget array my_gads[].
--
local MYGAD_SLIDER = 0
local MYGAD_STRING1 = 1
local MYGAD_STRING2 = 2
local MYGAD_STRING3 = 3
local MYGAD_BUTTON = 4

-- Range for the slider:
local SLIDER_MIN = 1
local SLIDER_MAX = 20

local Topaz80 = TextAttr {
   ta_Name = "topaz.font",
   ta_YSize = 8,
   ta_Style = 0,
   ta_Flags = 0,   
}

-- Print any error message.  We could do more fancy handling (like
-- an EasyRequest()), but this is only a demo.
function errorMessage(error)
   if error then
      print("Error: ", error);
   end
end


-- Function to handle a GADGETUP or GADGETDOWN event.  For GadTools gadgets,
-- it is possible to use this function to handle MOUSEMOVEs as well, with
-- little or no work.

function handleGadgetEvent(win, gad, code, slider_level, my_gads)
   if gad.GadgetID == MYGAD_SLIDER then
      -- Sliders report their level in the IntuiMessage Code field: 
      print("Slider at level %ld\n", code)
      slider_level = code
   elseif gad.GadgetID == MYGAD_STRING1 then
      -- String gadgets report GADGETUP's
      print("String gadget 1: ", GetStringInfo(gad.SpecialInfo).Buffer)
   elseif gad.GadgetID == MYGAD_STRING2 then
      -- String gadgets report GADGETUP's
      print("String gadget 2: ", GetStringInfo(gad.SpecialInfo).Buffer)      
   elseif gad.GadgetID == MYGAD_STRING3 then
      -- String gadgets report GADGETUP's 
      print("String gadget 3: ", GetStringInfo(gad.SpecialInfo).Buffer)            
   elseif gad.GadgetID == MYGAD_BUTTON then
      -- Buttons report GADGETUP's (button resets slider to 10)
      print("Button was pressed, slider reset to 10.")
      slider_level = 10;
      GT_SetGadgetAttrs(my_gads[MYGAD_SLIDER], win, nil,
			GTSL_Level, slider_level)       
   end
   
   return slider_level
end    


--
-- Function to handle vanilla keys.
--
function handleVanillaKey(win, code, slider_level, my_gads)

    if code == 'v' then
       -- increase slider level, but not past maximum
       slider_level = slider_level + 1
       if slider_level > SLIDER_MAX then
	  slider_level = SLIDER_MAX
       end
       GT_SetGadgetAttrs(my_gads[MYGAD_SLIDER], win, NULL,
			 GTSL_Level, slider_level)
    elseif code == 'V' then
       -- decrease slider level, but not past minimum
       slider_level = slider_level - 1
       if slider_level < SLIDER_MIN then
	  slider_level = SLIDER_MIN
       end
       GT_SetGadgetAttrs(my_gads[MYGAD_SLIDER], win, NULL,
			 GTSL_Level, slider_level)
    elseif (code == 'c' or code == 'C') then
       -- button resets slider to 10 
       slider_level = 10;
       GT_SetGadgetAttrs(my_gads[MYGAD_SLIDER], win, NULL,
			 GTSL_Level, slider_level,TAG_END)
    elseif code == 'f' or code == 'F' then
       ActivateGadget(my_gads[MYGAD_STRING1], win, NULL)
    elseif code == 's' or code == 'S' then
       ActivateGadget(my_gads[MYGAD_STRING2], win, NULL)
    elseif code == 't' or code == 'T' then
       ActivateGadget(my_gads[MYGAD_STRING3], win, NULL)
    end
end
       


-- Here is where all the initialization and creation of GadTools gadgets
-- take place.  This function requires a pointer to a NULL-initialized
-- gadget list pointer.  It returns a pointer to the last created gadget,
-- which can be checked for success/failure.

function createAllGadgets(gad, vi, topborder, slider_level, my_gads)

   local ng = NewGadget()
-- All the gadget creation calls accept a pointer to the previous gadget, and
-- link the new gadget to that gadget's NextGadget field.  Also, they exit
-- gracefully, returning NULL, if any previous gadget was NULL.  This limits
-- the amount of checking for failure that is needed.  You only need to check
-- before you tweak any gadget structure or use any of its fields, and finally
-- once at the end, before you add the gadgets.

-- Since the NewGadget structure is unmodified by any of the CreateGadget()
-- calls, we need only change those fields which are different.

   ng.ng_LeftEdge   = 140
   ng.ng_TopEdge    = 20+topborder
   ng.ng_Width      = 200
   ng.ng_Height     = 12
   ng.ng_GadgetText = "_Volume:   "
   ng.ng_TextAttr   = Topaz80
   ng.ng_VisualInfo = vi
   ng.ng_GadgetID   = MYGAD_SLIDER
   ng.ng_Flags      = NG_HIGHLABEL   
   
   gad = CreateGadget(SLIDER_KIND, gad, ng,
		      GTSL_Min,         SLIDER_MIN,
		      GTSL_Max,         SLIDER_MAX,
		      GTSL_Level,       slider_level,
		      GTSL_LevelFormat, "%2ld",
		      GTSL_MaxLevelLen, 2,
		      GT_Underscore,    '_')

   my_gads[MYGAD_SLIDER] = gad

   ng.ng_TopEdge    = ng.ng_TopEdge + 20
   ng.ng_Height     = 14
   ng.ng_GadgetText = "_First:"
   ng.ng_GadgetID   = MYGAD_STRING1
   gad = CreateGadget(STRING_KIND, gad, ng,
					 GTST_String,   "Try pressing",
					 GTST_MaxChars, 50,
					 GT_Underscore, '_')

   my_gads[MYGAD_STRING1] = gad

   
   ng.ng_TopEdge   = ng.ng_TopEdge + 20
   ng.ng_GadgetText = "_Second:"
   ng.ng_GadgetID   = MYGAD_STRING2
   gad = CreateGadget(STRING_KIND, gad, ng,
					 GTST_String,   "TAB or Shift-TAB",
					 GTST_MaxChars, 50,
					 GT_Underscore, '_')
   my_gads[MYGAD_STRING2] = gad
   
   ng.ng_TopEdge   = ng.ng_TopEdge + 20
   ng.ng_GadgetText = "_Third:"
   ng.ng_GadgetID   = MYGAD_STRING3
   gad = CreateGadget(STRING_KIND, gad, ng,
					 GTST_String,   "To see what happens!",
					 GTST_MaxChars, 50,
					 GT_Underscore, '_')
   my_gads[MYGAD_STRING3] = gad
   
   ng.ng_LeftEdge   = ng.ng_LeftEdge + 50
   ng.ng_TopEdge    = ng.ng_TopEdge + 20
   ng.ng_Width      = 100
   ng.ng_Height     = 12
   ng.ng_GadgetText = "_Click Here"
   ng.ng_GadgetID   = MYGAD_BUTTON
   ng.ng_Flags      = 0
   gad = CreateGadget(BUTTON_KIND, gad, ng,
		      GT_Underscore, '_')

   my_gads[MYGAD_BUTTON] = gad

   return gad
end


-- Standard message handling loop with GadTools message handling functions
-- used (GT_GetIMsg() and GT_ReplyIMsg()).

function process_window_events(mywin, slider_level, my_gads)

   local imsg
   local imsgClass
   local imsgCode
   local gad
   local terminated = False

   while not terminated do
      WaitPort(mywin.UserPort)

      -- GT_GetIMsg() returns an IntuiMessage with more friendly information for
      -- complex gadget classes.  Use it wherever you get IntuiMessages where
      -- using GadTools gadgets.

      local imsg = GT_GetIMsg(mywin.UserPort)
      while not terminated and imsg do              
        -- Presuming a gadget, of course, but no harm...
        -- Only dereference this value (gad) where the Class specifies
        -- that it is a gadget event.
	 
	 
	 imsgClass = imsg.Class
	 imsgCode = imsg.Code
	 
	 GT_ReplyIMsg(imsg)

            --  --- WARNING --- WARNING --- WARNING --- WARNING --- WARNING ---
            -- GadTools puts the gadget address into IAddress of IDCMP_MOUSEMOVE
            -- messages.  This is NOT true for standard Intuition messages,
            -- but is an added feature of GadTools.

	 if imsgClass == IDCMP_GADGETDOWN or imsgClass == IDCMP_MOUSEMOVE or imsgClass == IDCMP_GADGETUP then
	    gad = GetGadget(imsg.IAddress)	    
	    slider_level = handleGadgetEvent(mywin, gad, imsgCode, slider_level, my_gads)
	 elseif imsgClass == IDCMP_VANILLAKEY then
	    slider_level = handleVanillaKey(mywin, imsgCode, slider_level, my_gads)	    
	 elseif imsgClass == IDCMP_CLOSEWINDOW then
	    terminated = true
	 elseif imsgClass == IDCMP_REFRESHWINDOW then
	    -- With GadTools, the application must use GT_BeginRefresh()
	    -- where it would normally have used BeginRefresh()
	    GT_BeginRefresh(mywin)
	    GT_EndRefresh(mywin, 1)
	 end

	 imsg = GT_GetIMsg(mywin.UserPort)
      end
   end
end

--
-- Prepare for using GadTools, set up gadgets and open window.
-- Clean up and when done or on error.

function gadtoolsWindow()
   
   local font
   local mysc
   local mywin
   local _glist = NewGadgetList()
-- The following operation is required of any program that uses GadTools.
-- It gives the toolkit a place to stuff context data.   
   local gad = CreateContext(_glist)
   local glist = gad -- Lua slightly different way of keeping track of the glist
   local my_gads = {}
   local vi
   local slider_level = 5
   local topborder

   --Open topaz 8 font, so we can be sure it's openable
   -- when we later set ng_TextAttr to &Topaz80:

   font = OpenFont(Topaz80)   
   if font == nil then
      errorMessage( "Failed to open Topaz 80")
   else
      mysc = LockPubScreen(nil)
      if mysc == nill then
	     errorMessage( "Couldn't lock default public screen")
      else
	 vi = GetVisualInfo(mysc)
	 if vi == nil then
            errorMessage( "GetVisualInfo() failed")
	 else
            -- Here is how we can figure out ahead of time how tall the  */
            -- window's title bar will be:                               */
            topborder = mysc.WBorTop + (mysc.Font.ta_YSize + 1)
            if nil == createAllGadgets(gad, vi, topborder, slider_level, my_gads) then
	       errorMessage( "createAllGadgets() failed")
	    else					    
	       mywin = OpenWindowTags(nil,
				      WA_Title,         "GadTools Gadget Demo (Lua)",
				      WA_Gadgets,       GetPtr(glist),
				      WA_AutoAdjust,    true,
				      WA_Width,         400,
				      WA_MinWidth,      50,
				      WA_InnerHeight,   140,
				      WA_MinHeight,     50,
				      WA_DragBar,       true,
				      WA_DepthGadget,   true,
				      WA_Activate,      true,
				      WA_CloseGadget,   true,
				      WA_SizeGadget,    true,
				      WA_SimpleRefresh, true,
	                              WA_IDCMP, IDCMP_CLOSEWINDOW | IDCMP_REFRESHWINDOW | IDCMP_VANILLAKEY | SLIDERIDCMP | STRINGIDCMP | BUTTONIDCMP,
				      WA_PubScreen, GetPtr(mysc))
				      
	       if mywin == nil then
		  errorMessage( "OpenWindow() failed")
	       else
		  -- After window is open, gadgets must be refreshed with a
		  -- call to the GadTools refresh window function.
		  GT_RefreshWindow(mywin, nil)

		  process_window_events(mywin, slider_level, my_gads)
		  
		  CloseWindow(mywin)
	       end
	       -- FreeGadgets() even if createAllGadgets() fails, as some
	       -- of the gadgets may have been created...If glist is NULL
	       -- then FreeGadgets() will do nothing.
	       --
	       FreeGadgets(glist)
	       FreeVisualInfo(vi)
            end
	    UnlockPubScreen(nil, mysc)
	 end
	 CloseFont(font)
      end
   end
end

--
-- Open all libraries and run.  Clean up when finished or on error..
--

gadtoolsWindow()
