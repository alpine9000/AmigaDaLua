LoadBindings("dos")
LoadBindings("exec")

print("\nSimple DOS example in Lua that reads text from a file")

local filename = "test.txt"
local BUFSIZE = 512

print("\nLoading " .. filename.. "...\n")
local fh = Open(filename, MODE_OLDFILE)

if fh == 0 then
   print("Failed to open file ", filename)
   os.exit()
end

local buffer = AllocMem(BUFSIZE, MEMF_PUBLIC|MEMF_CLEAR)

print("Contents of file")
print("================")
local done = false
while not done do
   local bytes = Read(fh, buffer, BUFSIZE)
   Write(Output(), buffer, bytes)
   if bytes == 0 then
      done = true
   end
end
print("================")

FreeMem(buffer, BUFSIZE)
Close(fh)

print("\nPress RETURN to continue...")
io.read()
