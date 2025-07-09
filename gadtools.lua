print('Hello')

package.path = "?.lua;" .. package.path 

local Util = require("util")
local buttonTags = Util.TagList {}
local infoTags = Util.TagList {}
local gadlist = Util.NewGadgetList()
local screen = LockPubScreen(nil)
local gadget = CreateContext(gadlist)
local visualInfo = GetVisualInfoA(screen, infoTags)

local ng = NewGadget {
   ng_TextAttr   = nil,
   ng_LeftEdge   = 10,
   ng_TopEdge    = 20,
   ng_Width      = 100,
   ng_Height     = 20,
   ng_Flags      = 0,
   ng_GadgetText = "Click Me",
   ng_GadgetID   = 1,
   ng_VisualInfo = visualInfo
}

local mg = CreateGadgetA(BUTTON_KIND, gadget, ng, buttonTags)

local tags = Util.TagList {
   WA_Title = "My Window",
   WA_Width = 320,
   WA_Height = 120,
   WA_DragBar = true,
   WA_CloseGadget = true,
   WA_Activate = true,
   WA_Gadgets = GetPtr(gadget),
   WA_IDCMP = IDCMP_CLOSEWINDOW|IDCMP_REFRESHWINDOW|BUTTONIDCMP,
}

win = OpenWindowTagList(nil, tags)

if win then
   GT_RefreshWindow(win, nil);
   
   local done = false
   while not done do 
      WaitPort(win.UserPort)
      local msg = GT_GetIMsg(win.UserPort)
      while msg do
	 if msg.Class == IDCMP_CLOSEWINDOW then
	    done = true
	 elseif msg.Class == IDCMP_REFRESHWINDOW then
	     GT_BeginRefresh(win);
	     GT_EndRefresh(win, 1);
	 end
	 GT_ReplyIMsg(msg)
	 msg = GT_GetIMsg(win.UserPort)
      end 
   end
   CloseWindow(win)   
end

