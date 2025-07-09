
local TagItem = {}
TagItem.__index = TagItem

function TagItem.new(tag, data)
    return setmetatable({ tag = tag, data = data }, TagItem)
end

function TagList(tbl)
    local list = {}
    for k, v in pairs(tbl) do
        assert(type(k) == "string", "Tag name must be a string")
        assert(_G[k], "Unknown tag name: " .. tostring(k))
        local tag = _G[k]  -- Get WA_* constant from global scope
        if type(v) == "boolean" then v = v and 1 or 0 end
        table.insert(list, TagItem.new(tag, v))
    end
    table.insert(list, TagItem.new(TAG_END, 0))
    return list
end

return {
    TagItem = TagItem,
    TagList = TagList,
    NewGadgetList = NewGadgetList,
}
