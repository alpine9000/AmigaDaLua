print("\nTest Lua coroutines...\n")

function task(name)
  for i = 1, 3 do
    print(name .. " iteration " .. i)
    coroutine.yield()
  end
end

co1 = coroutine.create(function() task("A") end)
co2 = coroutine.create(function() task("B") end)

while true do
  local ok1 = coroutine.resume(co1)
  local ok2 = coroutine.resume(co2)
  if not ok1 and not ok2 then
    break
  end
end

print("\nPress RETURN to continue...")
io.read()
