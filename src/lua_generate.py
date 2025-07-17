import sys
import clang.cindex
import re

TYPES = []    
TYPE_CONFIG = {}
ENUM_CONFIG = []
DEFINE_CONFIGS = []
FUNCTION_CONFIG = []
TAGS_FUNCTION_CONFIG = []
FAKE_FUNCTION_CONFIG = []
FAKE_BOOL_FUNCTION_CONFIG = []
BOOL_FUNCTION_CONFIG = []
FUNCTOR_SKIP = []


#import lua_all
#TYPES.extend(lua_all.TYPES)
#TYPE_CONFIG.update(lua_all.TYPE_CONFIG)
#ENUM_CONFIG.extend(lua_all.ENUM_CONFIG)
#DEFINE_CONFIGS.extend(lua_all.DEFINE_CONFIGS)
#FUNCTION_CONFIG.extend(lua_all.FUNCTION_CONFIG)
#TAGS_FUNCTION_CONFIG.extend(lua_all.TAGS_FUNCTION_CONFIG)
#FAKE_FUNCTION_CONFIG.extend(lua_all.FAKE_FUNCTION_CONFIG)
#FAKE_BOOL_FUNCTION_CONFIG.extend(lua_all.FAKE_BOOL_FUNCTION_CONFIG)
#BOOL_FUNCTION_CONFIG.extend(lua_all.BOOL_FUNCTION_CONFIG)
#FUNCTOR_SKIP.extend(lua_all.FUNCTOR_SKIP)

#import lua_dos
#TYPES.extend(lua_dos.TYPES)
#TYPE_CONFIG.update(lua_dos.TYPE_CONFIG)
#ENUM_CONFIG.extend(lua_dos.ENUM_CONFIG)
#DEFINE_CONFIGS.extend(lua_dos.DEFINE_CONFIGS)
#FUNCTION_CONFIG.extend(lua_dos.FUNCTION_CONFIG)
#TAGS_FUNCTION_CONFIG.extend(lua_dos.TAGS_FUNCTION_CONFIG)
#FAKE_FUNCTION_CONFIG.extend(lua_dos.FAKE_FUNCTION_CONFIG)
#FAKE_BOOL_FUNCTION_CONFIG.extend(lua_dos.FAKE_BOOL_FUNCTION_CONFIG)
#BOOL_FUNCTION_CONFIG.extend(lua_dos.BOOL_FUNCTION_CONFIG)
#FUNCTOR_SKIP.extend(lua_dos.FUNCTOR_SKIP)

clang.cindex.Config.set_library_file('/opt/homebrew/opt/llvm/lib/libclang.dylib')

READ_TYPE_TO_LUA = {
    'int': 'lua_pushinteger',
    'unsigned int': 'lua_pushinteger',
    'short': 'lua_pushinteger',
    'unsigned short': 'lua_pushinteger',
    'int16_t': 'lua_pushinteger',
    'uint16_t': 'lua_pushinteger',
    'int32_t': 'lua_pushinteger',
    'uint32_t': 'lua_pushinteger',
    'float': 'lua_pushnumber',
    'double': 'lua_pushnumber',
    'BSTR': 'amiga_pushBSTR',
    'char' : 'lua_pushnumber',
    'const char *': 'lua_pushstring',
    'char *': 'lua_pushstring',
    'TEXT': 'lua_pushstring',
    'ClassID': 'lua_pushstring',
    'void *': 'lua_pushlightuserdata',
    'WORD **': 'lua_pushlightuserdata',
    'UWORD *': 'lua_pushlightuserdata',
    'PLANEPTR': 'lua_pushlightuserdata',
    'CONST_STRPTR': 'lua_pushstring',
    'STRPTR': 'lua_pushstring',
    'DisplayInfoHandle': 'lua_pushlightuserdata',
    'APTR': 'lua_pushlightuserdata',
    'APTR *': 'lua_pushlightuserdata',    
    'CONST_APTR': 'lua_pushlightuserdata',
    'BPTR': 'lua_pushinteger',
    'LONG': 'lua_pushinteger',
    'LONG *': 'lua_pushlightuserdata',
    'const LONG *' : 'lua_pushlightuserdata',
    'const ULONG *' : 'lua_pushlightuserdata',
    'unsigned long': 'lua_pushinteger',
    'time_t': 'lua_pushinteger',
    'suseconds_t': 'lua_pushinteger',        
    'ULONG': 'lua_pushinteger',
    'ULONG *': 'lua_pushlightuserdata',
    'BYTE': 'lua_pushinteger',
    'BYTE *': 'lua_pushlightuserdata',
    'UBYTE': 'lua_pushinteger',
    'UBYTE *': 'lua_pushlightuserdata',
    'const UBYTE *': 'lua_pushlightuserdata',
    'PLANEPTR':  'lua_pushlightuserdata',
    'WORD': 'lua_pushinteger',
    'WORD *': 'lua_pushlightuserdata',
    'UWORD': 'lua_pushinteger',
    'UWORD *': 'lua_pushlightuserdata',
    'const UWORD *': 'lua_pushlightuserdata',
    'const WORD *': 'lua_pushlightuserdata',            
    'BOOL': 'lua_pushboolean',
    'struct Gadget **': 'lua_pushGadgetPtr',
    'struct UCopList *': 'lua_pushlightuserdata',
    'struct UCopList*': 'lua_pushlightuserdata',        
}

WRITE_TYPE_FROM_LUA = {
    'int': 'luaL_checkinteger',
    'unsigned int': 'luaL_checkinteger',
    'short': 'luaL_checkinteger',
    'unsigned short': 'luaL_checkinteger',
    'int16_t': 'luaL_checkinteger',
    'uint16_t': 'luaL_checkinteger',
    'int32_t': 'luaL_checkinteger',
    'uint32_t': 'luaL_checkinteger',
    'float': 'luaL_checknumber',
    'double': 'luaL_checknumber',
    'BSTR': 'amiga_checkBSTR',
    'char': 'luaL_checknumber',    
    'char *': 'luaL_checkstring',
    'TEXT': 'luaL_checkstring',
    'ClassID': 'luaL_checkstring',
    'void *': 'lua_touserdata',
    'UWORD *': 'lua_touserdata',    
    'PLANEPTR': 'lua_touserdata',
    'CONST_STRPTR': 'amiga_checkConstNullableString',
    'STRPTR': 'amiga_checkNullableString',    
    'BPTR': 'luaL_checkinteger',
    'DisplayInfoHandle': 'lua_touserdata',
    'APTR': 'lua_touserdata',
    'APTR *': 'lua_touserdata',    
    'CONST_APTR': 'lua_touserdata',    
    'LONG': 'luaL_checkinteger',
    'LONG *': 'lua_touserdata',            
    'const LONG *': 'lua_touserdata',
    'const ULONG *': 'lua_touserdata',
    'time_t': 'luaL_checkinteger',
    'suseconds_t': 'luaL_checkinteger',
    'unsigned long': 'luaL_checkinteger',    
    'BYTE': 'luaL_checkinteger',
    'BYTE *': 'lua_touserdata',    
    'UBYTE': 'luaL_checkinteger',
    'UBYTE *': 'lua_touserdata',
    'const UBYTE *': 'lua_touserdata',
    'PLANEPTR' : 'lua_touserdata',
    'WORD': 'luaL_checkinteger',
    'WORD *': 'lua_touserdata',
    'WORD **': 'lua_touserdata',                
    'UWORD': 'luaL_checkinteger',
    'UWORD *': 'lua_touserdata',
    'const UWORD *': 'lua_touserdata',
    'const WORD *': 'lua_touserdata',
    'ULONG': 'luaL_checkinteger',
    'ULONG *': 'lua_touserdata',    
    'BOOL': 'luaL_checkboolean',    
    'struct Gadget **': 'amiga_checkGadgetPtr',
    'struct UCopList *': 'lua_touserdata',
    'struct UCopList*': 'lua_touserdata',        
}

metainstall_types = []
enums = []
functions = []
callers = []
thunk_metadata = []
interfaces = set()
newindexes = set()
indexes = set()
keys = set()
metas = set()
array_proxies = set()

def parse_ctype(ctype, c):
    pointer_level = ctype.count('*')
    base = ctype.replace('*', '').strip()
    base = re.sub(r'\s+', ' ', base)  # normalize whitespace
    base = base.replace('const', '').strip()
    # Map "struct foo" to "foo_t" if available
    if base.startswith("struct "):
        tag = base[len("struct "):]
        if tag in TYPES:
            #struct = TYPE_CONFIG[tag].get("struct")
            struct = c.type.spelling.startswith("struct") or c.type.spelling.startswith("const struct")
            if not struct:
                return tag, pointer_level, tag
            else:
                return base, pointer_level, tag

    return base, pointer_level, base

def get_struct_fields(cursor):
    fields = []
    for c in cursor.get_children():
            
        if c.kind == clang.cindex.CursorKind.FIELD_DECL:
            typ = c.type            
            decl = c.type.get_declaration()
            if decl.kind ==  clang.cindex.CursorKind.UNION_DECL or decl.kind ==  clang.cindex.CursorKind.STRUCT_DECL:
                #print(f"// struct/union with members: {c.spelling}")
                prefix = c.spelling
                _fields = get_struct_fields(decl)
                for f, t, _c, size in _fields:
                    #print(f"// field -> {prefix} {f} ->{t}<- {_c.kind}")
                    if not t.startswith("union (unnamed union at") and not t.startswith("struct (unnamed struct at"):
                        fields.append((prefix + "." + f, t, _c, size))
            elif typ.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                elem_type = typ.get_array_element_type().spelling
                size = typ.element_count
                if elem_type == "char":
                    fields.append((c.spelling, f"char[{size}]", c, 0))
                    continue
                elif elem_type == "TEXT":
                    fields.append((c.spelling, f"TEXT[{size}]", c, 0))
                    continue
                else:
                    fields.append((c.spelling, elem_type, c, size))
                    continue

            # Handle function pointer: pointer to function type
            if typ.kind == clang.cindex.TypeKind.POINTER:
                pointee = typ.get_pointee()
                if pointee.kind in (
                    clang.cindex.TypeKind.FUNCTIONPROTO,
                    clang.cindex.TypeKind.FUNCTIONNOPROTO,
                ):
                    ret_type = pointee.get_result().spelling
                    arg_types = [arg.spelling for arg in pointee.argument_types()] \
                        if pointee.kind == clang.cindex.TypeKind.FUNCTIONPROTO else []
                    func_sig = f"{ret_type} (*)({', '.join(arg_types)})"
                    fields.append((c.spelling, func_sig, c, 0))
                    continue
                
            # Handle regular pointers and nested struct resolution
            pointer_level = 0
            t = typ
            while t.kind == clang.cindex.TypeKind.POINTER:
                pointer_level += 1
                t = t.get_pointee()
            base_type = t.spelling.strip()
            if base_type.startswith("struct "):
                tag = base_type[len("struct "):]
                #if tag in TYPES:
                #    if TYPE_CONFIG[tag].get("struct"):
                #        base_type = t.spelling.strip()
                #    else:
                #        base_type = tag
            full_type = base_type + "*" * pointer_level
            fields.append((c.spelling, full_type, c, 0))

        elif c.kind == clang.cindex.CursorKind.UNION_DECL:
            if c.spelling.startswith("union (anonymous at"):
                for _c in c.get_children():                
                    fields.extend(get_struct_fields(c))
            
    return fields

def normalize_pointer_decl(decl: str) -> str:
    # Match: type, pointer stars, optional variable name
    match = re.fullmatch(r'\s*(.+?)\s*(\*+)\s*(\w+)?\s*', decl)
    
    if match:
        raw_type = match.group(1)
        stars = match.group(2)
        name = match.group(3) or ""

        # Collapse internal whitespace (including tabs) in type
        cleaned_type = ' '.join(raw_type.split())
        result = f"{cleaned_type} {stars}{name}".strip()
        return result

    ret = decl.strip()
    return ret

def emit_array_proxy_c_code(ctype, c):
    func_base = ctype.replace(" ", "_").replace("*", "p")
    base, pointer_level, tag = parse_ctype(ctype, c)
    if "struct" in ctype or "union" in ctype or tag in TYPES:    
        return

    print(f"typedef struct {{")
    print(f"  {ctype}* data;")
    print(f"  uint16_t count;")
    print(f"}} lua_gen_wrapped_{func_base}_array_data_t;\n")

    print(f"static int _lua_gen_wrapped_{func_base}_array_ptr_method(lua_State* L) {{")
    print(f"    lua_gen_wrapped_{func_base}_array_data_t* wrapper = luaL_checkudata(L, 1, \"{func_base}_array_proxy\");")
    print(f"    int index = luaL_checkinteger(L, 2);")
    print(f"    void* ptr = &wrapper->data[index - 1];")
    print(f"    lua_pushlightuserdata(L, ptr);")
    print(f"    return 1;")
    print(f"}}")

    print(f"static int")
    print(f"_lua_gen_wrapped_{func_base}_array_index(lua_State* L)")
    print(f"{{")
    print(f"  lua_gen_wrapped_{func_base}_array_data_t* wrapper = luaL_checkudata(L, 1, \"{func_base}_array_proxy\");")
    print(f"  if (lua_isinteger(L, 2)) {{")
    print(f"    int index = lua_tointeger(L, 2);")
    print(f"    if (index < 1 || index > wrapper->count)")
    print(f"      return luaL_error(L, \"index out of range (1..%d)\", wrapper->count);")
    print(f"    {get_lua_push(ctype)}(L, wrapper->data[index - 1]);")
    print(f"    return 1;")
    print(f"  }}\n")
  
    print(f"  // Not a numeric key? Try methods")
    print(f"  lua_getmetatable(L, 1);")
    print(f"  lua_getfield(L, -1, \"__methods\");")
    print(f"  lua_pushvalue(L, 2);")
    print(f"  lua_gettable(L, -2);")
    print(f"  return 1;")
    print(f"}}\n")

    print(f"static int")
    print(f"_lua_gen_wrapped_{func_base}_array_newindex(lua_State* L)")
    print(f"{{")
    print(f"  lua_gen_wrapped_{func_base}_array_data_t* wrapper = luaL_checkudata(L, 1, \"{func_base}_array_proxy\");")
  
    print(f"  if (!lua_isinteger(L, 2))")
    print(f"    return luaL_error(L, \"only integer indices allowed\");")
  
    print(f"  int index = lua_tointeger(L, 2);")
    print(f"  if (index < 1 || index > wrapper->count)")
    print(f"    return luaL_error(L, \"index out of range (1..%d)\", wrapper->count);")
  
    print(f"  {ctype} value = {get_lua_check(ctype)}(L,  3);")   
    print(f"  wrapper->data[index - 1] = value;")
    print(f"  return 0;")
    print(f"}}\n")

    print(f"static void")
    print(f"_lua_gen_push_{func_base}_array_proxy(lua_State *L,  {ctype} *array, int count)")
    print(f"{{\n")
    print(f"  lua_gen_wrapped_{func_base}_array_data_t* wrapper = lua_newuserdata(L, sizeof(lua_gen_wrapped_{func_base}_array_data_t));")
    print(f"  wrapper->data = array;")
    print(f"  wrapper->count = count;\n")
    
    print(f"  if (luaL_newmetatable(L, \"{func_base}_array_proxy\")) {{")
    print(f"    // Create method table")
    print(f"    lua_newtable(L);")
    print(f"    lua_pushcfunction(L, _lua_gen_wrapped_{func_base}_array_ptr_method);")
    print(f"    lua_setfield(L, -2, \"ptr\");")
    print(f"    lua_setfield(L, -2, \"__methods\");\n")

    print(f"    // __index handles both numeric and method lookup")
    print(f"    lua_pushcfunction(L, _lua_gen_wrapped_{func_base}_array_index);")
    print(f"    lua_setfield(L, -2, \"__index\");\n")

    print(f"    // __newindex for writing")
    print(f"    lua_pushcfunction(L, _lua_gen_wrapped_{func_base}_array_newindex);")
    print(f"    lua_setfield(L, -2, \"__newindex\");")
    print(f"  }}\n")

    print(f"  lua_setmetatable(L, -2);  // assign to userdata\n")
    
    print(f"}}")

    
"""
    print(f"static int")
    print(f"_lua_gen_{func_base}_element_ptr(lua_State *L)")
    print(f"{{")
    print(f"   {ctype} *array = lua_touserdata(L, lua_upvalueindex(1));")
    print(f"   int count       = lua_tointeger(L, lua_upvalueindex(2));\n");
    print(f"   int index = luaL_checkinteger(L, 1);")
    print(f"   if (index < 1 || index > count)")
    print(f"     return luaL_error(L, \"index out of range (1..%d)\", count);")
    print(f"   // Return as lightuserdata (raw pointer)")
    print(f"   lua_pushlightuserdata(L, &array[index - 1]);")
    print(f"return 1;")
    print(f"}}\n")
    
    print(f"static int _lua_gen_{func_base}_array_index(lua_State *L)\n{{")
    print(f"    {ctype} *arr = lua_touserdata(L, lua_upvalueindex(1));")
    print( "    int count     = lua_tointeger(L, lua_upvalueindex(2));")
    print(f"    // if key is not a number, let normal lookup proceed\n")

    print(f"    if (!lua_isinteger(L, 2)) {{")
    print(f"        lua_getmetatable(L, 1);")
    print(f"        lua_pushvalue(L, 2);")
    print(f"        lua_rawget(L, -2);")
    print(f"        return 1;")
    print(f"    }}\n")
    print( "    int index     = luaL_checkinteger(L, 2);\n")    
    print( "    if (index < 1 || index > count)")
    print(f"        return luaL_error(L, \"index out of range (1..%d)\", count);")
    print(f"    {get_lua_push(ctype)}(L, arr[index - 1]);")
    print( "    return 1;")
    print( "}\n")

    print(f"static int _lua_gen_{func_base}_array_newindex(lua_State *L)\n{{")
    print(f"    {ctype} *arr = lua_touserdata(L, lua_upvalueindex(1));")
    print( "    int count     = lua_tointeger(L, lua_upvalueindex(2));")
    print( "    int index     = luaL_checkinteger(L, 2);")
    print( "    if (index < 1 || index > count)")
    print(f"        return luaL_error(L, \"index out of range (1..%d)\", count);")
#    print(f"    arr[index - 1] = ({ctype})luaL_checkinteger(L, 3);")
    print(f"    arr[index - 1] = {get_lua_check(ctype)}(L,  3);")
    print( "    return 0;")
    print( "}\n")

    print(f"static void _lua_gen_push_{func_base}_array_proxy(lua_State *L, {ctype} *array, int count)\n{{")
    print( "    lua_newtable(L);\n")

    print( "    lua_pushlightuserdata(L, array);")
    print( "    lua_pushinteger(L, count);\n")
    
    print(f"    lua_pushcclosure(L, _lua_gen_{func_base}_array_index, 2);")
    print( "    lua_setfield(L, -2, \"__index\");\n")

    print( "    lua_pushlightuserdata(L, array);")
    print( "    lua_pushinteger(L, count);\n")
    
    print(f"    lua_pushcclosure(L, _lua_gen_{func_base}_array_newindex, 2);")
    print( "    lua_setfield(L, -2, \"__newindex\");\n")

    print(f"    lua_pushlightuserdata(L, array);")
    print(f"    lua_pushinteger(L, count);")
    print(f"    lua_pushcclosure(L, _lua_gen_{func_base}_element_ptr, 2);")
    print(f"    lua_setfield(L, -2, \"ptr\");")
    
    print( "    lua_setmetatable(L, -2);")
    print( "}\n")
"""
def generate_lua_index(struct_name, fields, functors, node):
    if struct_name in indexes:
        return
    else:
        indexes.add(struct_name)    
    print(f"static int\n_lua_gen_{struct_name}_index(lua_State *L)\n{{")
    print(f"  {node.type.spelling} *obj = *({node.type.spelling} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print(f"  (void)obj;")
    print("  const char *key = luaL_checkstring(L, 2);")
    for name, ctype, c, size in fields:        
        ctype = normalize_pointer_decl(ctype)
        if not name:
            continue

        if size > 0:
            func_base = ctype.replace(" ", "_").replace("*", "p")
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            base, pointer_level, tag = parse_ctype(ctype, c)
            if "struct" in ctype or "union" in ctype or tag in TYPES:                
                print(f"     return luaL_error(L, \"Unsupported array type {ctype}\");")
            else:
                print(f"    _lua_gen_push_{func_base}_array_proxy(L, obj->{name}, {size});")
                print(f"    return 1;")
            print(f"  }}")
            
        elif ctype.startswith("char["):
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    lua_pushstring(L, obj->{name});")
            print("    return 1;")
            print("  }")
        elif ctype.startswith("TEXT["):
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    lua_pushstring(L, obj->{name});")
            print("    return 1;")
            print("  }")            
        elif "(*)" in ctype and functors:
            if name not in FUNCTOR_SKIP:
                # Function pointer: return the Lua callback reference if stored
                print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                print(f"    if (obj->lua.luaStates.{name}) {{");
                print(f"      lua_rawgeti(obj->lua.luaStates.{name}, LUA_REGISTRYINDEX, obj->lua.refs.{name});")
                print(f"    }} else {{")
                print(f"      lua_pushnil(L);")
                print(f"    }}")
                print(f"    return 1;")
                print(f"  }}")
            else:
                print(f"// skipping {name}")
                
        elif ctype in READ_TYPE_TO_LUA:
            lua_func = READ_TYPE_TO_LUA[ctype]
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    {lua_func}(L, obj->{name});")
            print("    return 1;")
            print("  }")
        else:
            base, pointer_level, tag = parse_ctype(ctype, c)
            
            if tag in TYPES:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)&obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{tag}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{tag}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0 && obj->{name}) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = ({base}*)*obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{base}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
            else:
                skipped = True
                #if c.kind == clang.cindex.CursorKind.FIELD_DECL:
                #    if c.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                #        if c.type.get_array_element_type().spelling == "UWORD":
                #            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                #            print(f"    _amiga_push_u16array_proxy(L, obj->{name}, {c.type.get_array_size()});")
                #            print(f"    return 1;")
                #            print(f"  }}")                            
                #            skipped = False
                if skipped:
                    if ctype.startswith("union (unnamed union"):
                        ctype = "unnamed union"
                    if ctype.startswith("struct (unnamed struct"):
                        ctype = "unnamed struct"                                                            
                    print(f"  // Unsupported {name} {ctype}")
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")                    
                    print(f"    return luaL_error(L, \"Unsupported type {ctype} for field {name}\");")
                    print(f"  }}")

    print(f"  if (strcmp(key, \"__size\") == 0) {{")
    print(f"    lua_pushinteger(L, sizeof({node.type.spelling}));")
    print(f"    return 1;")
    print(f"}}\n")
    print("  return 0;\n}\n")


def generate_array_externs(struct_name, fields):    
    for name, ctype, c, size in fields:        
        ctype = normalize_pointer_decl(ctype)
        if not name:
            continue
        if size > 0:
            func_base = ctype.replace(" ", "_").replace("*", "p")
            if func_base in array_proxies:
                continue
            array_proxies.add(func_base)
            emit_array_proxy_c_code(ctype, c)
            
    
def generate_thunk_externs(struct_name, fields):
    for name, ctype in fields:
        if not name:
            continue

        # Function pointer fields
        elif "(*)" in ctype:            
            match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
            if match:
                ret_type = match.group(1).strip()
                args_str = match.group(2).strip()
                arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []

                thunk_name = f"_lua_gen_thunk_{struct_name}_{name}"
                args_with_names = [f"{arg_types[i]} arg{i}" for i in range(len(arg_types))]
                if name not in FUNCTOR_SKIP:
                    print(f"static {ret_type} {thunk_name}({', '.join(args_with_names)});")
                else:
                    print(f"// skipping {name}")
    print("\n")

    
def generate_lua_newindex(struct_name, fields, functors, node):
    if struct_name in newindexes:
        return
    else:
        newindexes.add(struct_name)
    print(f"static int\n_lua_gen_{struct_name}_newindex(lua_State *L)\n{{")
    print(f"  {node.type.spelling} *obj = *({node.type.spelling} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print("  const char *key = luaL_checkstring(L, 2);")
    print("  (void)key;(void)obj;");

    for name, ctype, c, size in fields:
        if not name:
            continue
        
        ctype = normalize_pointer_decl(ctype)

        
        if size > 0:
            print(f"  // {name}[{size}] proxied via the index")
        # char[] strings
        elif ctype.startswith("char[") or ctype.startswith("TEXT["):
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print("    const char *s = luaL_checkstring(L, 3);")
            print(f"    strncpy(obj->{name}, s, sizeof(obj->{name}) - 1);")
            print(f"    obj->{name}[sizeof(obj->{name}) - 1] = '\\0';")
            print("    return 0;")
            print("  }")

        # Function pointer fields
        elif "(*)" in ctype and functors:
            if name not in FUNCTOR_SKIP:
                match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
                if match:
                    ret_type = match.group(1).strip()
                    args_str = match.group(2).strip()
                    arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []
                    
                    thunk_metadata.append({
                        "struct": struct_name,
                        "field": name,
                        "return_type": ret_type,
                        "arg_types": arg_types,
                        "c": c
                    })
                    
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    if (lua_isfunction(L, 3) || lua_isnil(L, 3)) {{")
                    print(f"        if (obj->lua.refs.{name} != LUA_REFNIL)")
                    print(f"            luaL_unref(L, LUA_REGISTRYINDEX, obj->lua.refs.{name});")
                    print(f"        if (lua_isnil(L, 3)) {{")
                    print(f"            obj->lua.refs.{name} = LUA_REFNIL;")
                    print("        } else {")
                    print(f"            lua_pushvalue(L, 3);")
                    print(f"            obj->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
                    print(f"            obj->lua.luaStates.{name} = L;")
                    print(f"            obj->{name} = _lua_gen_thunk_{struct_name}_{name};")
                    print("        }")
                    print("    } else {")
                    print(f"        return luaL_error(L, \"Expected function or nil for field '%s'\", key);")
                    print("    }")
                    print("    return 0;")
                    print("  }")
            else:
                print(f"// skipping {name}")
                
        # Numeric/primitive types
        elif ctype in WRITE_TYPE_FROM_LUA:
            lua_func = WRITE_TYPE_FROM_LUA[ctype]
            print(f"  if (strcmp(key, \"{name}\") == 0) {{")
            print(f"    obj->{name} = ({ctype}){lua_func}(L, 3);")
            print("    return 0;")
            print("  }")

        # Struct pointers and values
        else:
            base, pointer_level, tag = parse_ctype(ctype, c)
            if tag in TYPES:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 0")
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print(f"    obj->{name} = *val;")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 1")
                    print(f"    //obj->{name} = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print(f"    obj->{name} = ({base} *){get_lua_check(ctype)}(L, 3);")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    // finder 2")                    
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{tag}\");")
                    print(f"    *obj->{name} = val;")
                    print("    return 0;")
                    print("  }")
            else:
                if base.startswith("union (unnamed union"):
                    base = "unnamed union"
                if base.startswith("struct (unnamed struct"):
                    base = "unnamed struct"                                    
                print(f"  // Unsupported type {name} {base}")
                print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                print(f"    return luaL_error(L, \"Unsupported type {base} for field {name}\");")
                print(f"  }}")                

    print("  return 0;")
    print("}\n\n")

    print(f"static int")
    print(f"_lua_{struct_name}_constructor(lua_State *L)")
    print(f"{{")
    print(f"  // Allocate pointer-to-{node.type.spelling} in userdata")
    print(f"  {node.type.spelling} **objp = lua_newuserdata(L, sizeof({node.type.spelling} *));")
    print(f"  *objp = malloc(sizeof({node.type.spelling}));")
    print(f"  if (!*objp) return luaL_error(L, \"out of memory\");")
    print(f"  memset(*objp, 0, sizeof({node.type.spelling}));")
    print()
    print(f"  // Set metatable")
    print(f"  luaL_getmetatable(L, \"{struct_name}\");")
    print(f"  lua_setmetatable(L, -2);")
    print()
    print(f"  // If a table is passed, use __newindex to copy fields")
    print(f"  if (lua_istable(L, 1)) {{")
    print(f"    lua_insert(L, 1); // move userdata below table")
    print(f"    lua_pushnil(L); // first key")
    print(f"    while (lua_next(L, 2) != 0) {{")
    print(f"      lua_pushvalue(L, -2); // copy key")
    print(f"      lua_pushvalue(L, -2); // copy value")
    print(f"      lua_settable(L, 1);   // userdata[key] = value (via __newindex)")
    print(f"      lua_pop(L, 1); // pop original value, keep key")
    print(f"    }}")
    print(f"    lua_remove(L, 2); // remove table, leave userdata")
    print(f"  }}")
    print()
    print(f"  return 1; // return userdata")
    print(f"}}\n")
    
    
def generate_functor_callers(node, fields, prefix):
    struct_name = node.spelling
    for name, ctype in fields:
        if not name:
            continue

        # Function pointer fields
        elif "(*)" in ctype:
            if name not in FUNCTOR_SKIP:
                match = re.match(r'^(.*?)\s*\(\*\)\s*\((.*?)\)$', ctype)
                if match:
                    ret_type = match.group(1).strip()
                    args_str = match.group(2).strip()
                    arg_types = [arg.strip() for arg in args_str.split(",")] if args_str else []
            
                    print(f"int _lua_gen_{prefix}_{name}(lua_State* L){{")
                    for argNumber, type in enumerate(arg_types, 1):
                        lua_expr = get_lua_check(type)
                        print(f"  {type} arg{argNumber} = {lua_expr}(L, {argNumber});")
                    argString = ", ".join(f"arg{i+1}" for i in range(len(arg_types)))
                    print(f"  arg1->{name}({argString});")							                    
                    print(f"  return 0;")
                    print(f"}}")
                    
                    callers.append(f"{prefix}_{name}")                    
            else:
                print(f"// skipping {name}")
                

    
def generate_lua_keys_installer(struct_name, fields):
    if struct_name in keys:
        return
    else:
        keys.add(struct_name)
    print(f"static void\n_lua_gen_{struct_name}_install_keys(lua_State *L)\n{{")
    print("  lua_newtable(L);")
    index = 1
    for name, ctype, c, size in fields:
        if not name:
            continue
        base, _, tag = parse_ctype(ctype, c)
        base = normalize_pointer_decl(base)        
        if (
            base in READ_TYPE_TO_LUA or
            base in TYPES or
            ctype.startswith("char[") or
            "(*)" in ctype  # Function pointer support
        ):
            print(f"  lua_pushstring(L, \"{name}\");")
            print(f"  lua_rawseti(L, -2, {index});")
            index += 1
    print(f"  lua_setfield(L, -2, \"__keys\");")
    print("}\n")
    
def generate_metatable_installer(struct_name):
    if struct_name in metas:
        return
    else:
        metas.add(struct_name)    
    print(f"static void\n_lua_gen_install_meta_{struct_name}(lua_State *L) {{")
    print(f"  if (luaL_newmetatable(L, \"{struct_name}\")) {{")
    if struct_name in TYPE_CONFIG:
        config = TYPE_CONFIG[struct_name]
    else:
        config = None
    if config == None or config.get("index") == None or config.get("index"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_index);")
        print("    lua_setfield(L, -2, \"__index\");")
    if config == None or config.get("newindex") == None or config.get("newindex"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_newindex);")
        print(f"    lua_setfield(L, -2, \"__newindex\");")
        print(f"    lua_pushcfunction(L, _lua_{struct_name}_constructor);")
        print(f"    lua_setglobal(L, \"{struct_name}\");")
    if config == None or config.get("keys") == None or config.get("keys"):
        print(f"    _lua_gen_{struct_name}_install_keys(L);")
    print(f"    lua_pushstring(L, \"{struct_name}\");");
    print(f"    lua_setfield(L, -2, \"__name\");");
    print("  }")
    print("  lua_pop(L, 1);")
    print("}\n")
    metainstall_types.append(struct_name)


def generate_thunks(thunk_metadata):
    for meta in thunk_metadata:
        struct_name = meta["struct"]
        field_name = meta["field"]
        ret_type = meta["return_type"]
        arg_types = meta["arg_types"]
        c = meta["c"]

        thunk_name = f"_lua_gen_thunk_{struct_name}_{field_name}"
        args_with_names = [f"{arg_types[i]} arg{i}" for i in range(len(arg_types))]
        print(f"static {ret_type}\n{thunk_name}({', '.join(args_with_names)})\n{{")        

        
        print(f"  lua_rawgeti(arg0->lua.luaStates.{field_name}, LUA_REGISTRYINDEX, arg0->lua.refs.{field_name});")
        print(f"  if (!lua_isfunction(arg0->lua.luaStates.{field_name}, -1)) {{")
        print(f"     lua_pop(arg0->lua.luaStates.{field_name}, 1);");
        if ret_type != "void":
            print(f"    return ({ret_type})0;")
        else:
            print("     return;")
        print("  }")

        # Push arguments (skip arg0 – the struct pointer itself)
        for i in range(0, len(arg_types)):
            ctype = arg_types[i]
            base, pointer_level = parse_ctype(ctype, c)

            # Direct mappings for known primitive types
            ctype = normalize_pointer_decl(ctype)            
            if ctype in READ_TYPE_TO_LUA:
                #func = READ_TYPE_TO_LUA[ctype].replace("lua_push", "")  # e.g. "integer"
                func = READ_TYPE_TO_LUA[ctype]
                print(f"  {func}(arg0->lua.luaStates.{field_name}, arg{i});")

            elif ctype == "const char *":
                print(f"  lua_pushstring(arg0->lua.luaStates.{field_name}, arg{i});")

            elif base in TYPE_CONFIG and pointer_level == 1:
                print(f"  if (arg{i}) {{")
                print(f"    {base} **ud = ({base} **)lua_newuserdata(arg0->lua.luaStates.{field_name}, sizeof({base} *));")
                print(f"    *ud = arg{i};")
                print(f"    luaL_getmetatable(arg0->lua.luaStates.{field_name}, \"{base}\");")
                print(f"    lua_setmetatable(arg0->lua.luaStates.{field_name}, -2);")
                print("  } else {")
                print(f"    lua_pushnil(arg0->lua.luaStates.{field_name});")
                print("  }")

            else:
                print(f"   error(2) - unsupported type type: {ctype}")
                print(f"  lua_pushnil(arg0->lua.luaStates.{field_name});")

        # Call the function
        arg_count = len(arg_types) 
        ret_count = 1 if ret_type != "void" else 0
        print(f"  if (lua_pcall(arg0->lua.luaStates.{field_name}, {arg_count}, {ret_count}, 0) != LUA_OK) {{")
        print(f"    roid_lua_error(arg0, lua_tostring(arg0->lua.luaStates.{field_name}, -1));");
        print(f"    lua_pop(arg0->lua.luaStates.{field_name}, 1);")
        if ret_type != "void":
            print(f"    return ({ret_type})0;")
        else:
            print("    return;")
        print("  }")

        # Return result
        if ret_type != "void":
            if ret_type in ("uint32_t", "int32_t",
                            "uint16_t", "int16_t",
                            "uint8_t", "int8_t",
                            "unsigned long", "long"
                            "unsigned int", "int",
                            "unsigned short", "short",
                            "lua_Integer",):
                print(f"  lua_Integer _result = lua_tointeger(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            elif ret_type in ("float", "double"):
                print(f"  lua_Number _result = lua_tonumber(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            else:
                print(f"  error(1) - unsupported type {ret_type}")
        else:
            print("  return;")

        print("}\n")

def generate_lua_defines():
    print(f"static void\n_lua_gen_install_defines(lua_State *L)\n{{")    
    for name in DEFINE_CONFIGS:
        print(f"  lua_pushinteger(L, {name});")
        print(f"  lua_setglobal(L, \"{name}\");");
    print("}\n")        
    
def generate_lua_enum(node, underlying):
    print(f"static void\n_lua_gen_install_enum_{node.spelling}(lua_State *L)\n{{")
    for enum_const in underlying.get_children():
        if enum_const.kind == clang.cindex.CursorKind.ENUM_CONSTANT_DECL:            
            print(f"  lua_pushinteger(L, {enum_const.spelling});")
            print(f"  lua_setglobal(L, \"{enum_const.spelling}\");")
    print("}\n")
    enums.append(node.spelling)    

def get_lua_check(ctype):
    ctype = normalize_pointer_decl(ctype)            
    for base in TYPES:
        if f"struct {base} *" == ctype or f"const struct {base} *" == ctype or f"CONST struct {base} *" == ctype:
            return f"_lua_gen_check{base}"
        tag = base[len("struct "):]
        if base == tag:
            return f"_lua_gen_check{base}"
    return WRITE_TYPE_FROM_LUA.get(ctype, f"error(3) - unsupported type {ctype}")

def get_lua_push(ctype):
    ctype = normalize_pointer_decl(ctype)            
    for base in TYPES:        
        if f"struct {base} *" == ctype or f"const struct {base} *" == ctype or f"CONST struct {base} *" == ctype:            
            return f"_lua_gen_push{base}"
        tag = base[len("struct "):]
        if base == tag:
            return f"_lua_gen_push{base}"
    return READ_TYPE_TO_LUA.get(ctype, f"error(4) - unsupported type {ctype}<-")

def _extract_function_pointer_signature(arg_type):
    canonical = arg_type.get_canonical()
    if canonical.kind != clang.cindex.TypeKind.POINTER:
        return None

    pointee = canonical.get_pointee()
    if pointee.kind != clang.cindex.TypeKind.FUNCTIONPROTO:
        return None

    result_type = pointee.get_result().spelling
    arg_types = [p.spelling for p in pointee.argument_types()]
    return result_type, arg_types

def extract_function_pointer_signature(arg_type):
    canonical = arg_type.get_canonical()
    if canonical.kind != clang.cindex.TypeKind.POINTER:
        return None

    pointee = canonical.get_pointee()
    if pointee.kind != clang.cindex.TypeKind.FUNCTIONPROTO:
        return None

    ret = pointee.get_result().spelling
    arg_list = ", ".join(p.spelling for p in pointee.argument_types())
    return f"{ret} (*)({arg_list})"
    
def generate_lua_function(node, fake, isBool):    
    if fake:
        fake_name = node.spelling
        function_name = fake_name[1:] if fake_name.startswith('_') else fake_name
    else:
        function_name = node.spelling
    ret_type = node.result_type.spelling
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")
    print("  (void)L;")
    arg1 = "UNDEFINED"
    for i, arg in enumerate(node.get_arguments()):
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            lua_func = get_lua_check(ctype)
            print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    if ret_type == "void":
        print(f"  {function_name}({call_args});")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {function_name}({call_args});")        
        if isBool:
            print(f"  if (result) {{")
            print(f"     lua_pushboolean(L, 1);")        
            print(f"  }} else {{")
            print(f"     lua_pushboolean(L, 0);")
            print(f"  }}")
        else:
            print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

def generate_lua_tags_function(node):    
    function_name = node.spelling
    ret_type = node.result_type.spelling
    #args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments() if "tag1" not in arg.spelling]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")

    arg1 = "UNDEFINED"
    count = 0
    for i, arg in enumerate(node.get_arguments()):
        count=count+1
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            if "tag1" in name:
                count = count - 1
                pass
            else:
                lua_func = get_lua_check(ctype)
                print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    print(f"  struct TagItem taglist[64];")
    print(f"  amiga_readVarTags(L, taglist, countof(taglist), {count+1});");

    tag_list = next((entry["tagList"] for entry in TAGS_FUNCTION_CONFIG if entry["name"] == function_name), None)

    sep = ', '
    if count == 0:
        sep = ''
    if ret_type == "void":
        print(f"  {tag_list}({call_args}{sep} taglist);")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {tag_list}({call_args}{sep} taglist);")        
        print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

def generate_lua_taglist_function(node):    
    function_name = node.spelling
    ret_type = node.result_type.spelling
    args = [(arg.spelling, arg.type.spelling) for arg in node.get_arguments()]

    print("static int\n_lua_" + function_name + "(lua_State* L)\n{")

    arg1 = "UNDEFINED"
    count = 0
    for i, arg in enumerate(node.get_arguments()):
        count=count+1
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            print(f"  int type = lua_type(L, {i+1});");            
            print(f"  if (type == LUA_TNUMBER && lua_tointeger(L, {i+1}) == 0) {{")	
            print(f"    {arg1}->lua.refs.{name} = LUA_NOREF;")
            print(f"    {arg1}->_update = 0;")   
            print(f"  }} else {{")
            print(f"    luaL_checktype(L, {i+1}, LUA_TFUNCTION);")
            print(f"    lua_pushvalue(L, {i+1});");
            print(f"     {arg1}->lua.refs.{name} = luaL_ref(L, LUA_REGISTRYINDEX);")
            print(f"     {arg1}->lua.luaStates.{name} = L;")            
            print(f"     {arg1}->{name} = _lua_gen_thunk_object_t_{name};");
            print(f"  }}")
            args[i] = (f"{arg1}->{name}", args[i][1])
        else:
            lua_func = get_lua_check(ctype)
            if "TagItem" in arg.type.spelling:
                print(f"  struct TagItem* {name} = NULL;")
                print(f"  if (!lua_isnoneornil(L, {i+1})) {{")
                print(f"    struct TagItem _tags[32];")
                print(f"    amiga_doTagList(L, _tags, countof(_tags), {i+1});")
                print(f"    {name} = _tags;")
                print(f"  }}")
            else:
                print(f"  {ctype} {name} = {lua_func}(L, {i+1});")
    call_args = ", ".join(name for name, _ in args)

    if ret_type == "void":
        print(f"  {function_name}({call_args});")
        print("  return 0;")
    else:
        print(f"  {ret_type} _result = {function_name}({call_args});")        
        print(f"  {get_lua_push(ret_type)}(L, _result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)

    
    
def generate_lua_interface(node, spelling, type_):
    if spelling in interfaces:
        return
    else:
        interfaces.add(spelling)

    #prefix = "struct "
    #if not TYPE_CONFIG[spelling].get("struct"):
    #    prefix = ""
    #type_spelling = f"{prefix}{spelling}

    type_spelling = node.type.spelling

    print(f"#define _lua_gen_push{spelling}(l, o) amiga_push_type(l, o, \"{spelling}\")\n")

 #   print(f"\nvoid")
 #   print(f"_lua_gen_push{spelling}(lua_State *L, {type_spelling}* obj)");
 #   print(f"{{")
 #   print(f"  if (obj) {{")
 #   print(f"    {type_spelling} **ud = ({type_spelling} **)lua_newuserdata(L, sizeof({type_spelling} *));")
 #   print(f"    *ud = obj;")
 #   print(f"    luaL_getmetatable(L, \"{spelling}\");")
 #   print(f"    lua_setmetatable(L, -2);")
 #   print(f"  }} else {{")
 #   print(f"    lua_pushnil(L);")
 #   print(f"  }}")
 #   print(f"}}\n")

    print(f"#define _lua_gen_check{spelling}(l, i) amiga_check_type(l, i,  \"{spelling}\")\n")
#    print(f"{type_spelling}*")
#    print(f"_lua_gen_check{spelling}(lua_State* L, int stackIndex)")
#    print(f"{{")
#    print(f"   if (!lua_isnoneornil(L, stackIndex)) {{")
#    print(f"      {type_spelling} **ud = ({type_spelling} **)luaL_checkudata(L, stackIndex, \"{spelling}\");")
#    print(f"      if (!ud) {{")
#    print(f"        return 0;")
#    print(f"      }}")
#    print(f"      return *ud;")
#    print(f"   }} else {{")
#    print(f"      return 0;");
#    print(f"   }}")
#    print(f"}}")

def find_interfaces(cursor):    
    for node in cursor.get_children():
        if node.kind == clang.cindex.CursorKind.STRUCT_DECL:
            if node.spelling in TYPES:
                struct_def = node.underlying_typedef_type.get_declaration()
                if node.spelling in TYPE_CONFIG:
                    config = TYPE_CONFIG[node.spelling]
                else:
                    config = None
                if config == None or (config.get("interface") == None or config.get("interface")): # and config.get("struct"):
                    generate_lua_interface(node, node.spelling, 1)
        if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL:
            if node.spelling in TYPES:
                struct_def = node.underlying_typedef_type.get_declaration()
                if struct_def.kind == clang.cindex.CursorKind.STRUCT_DECL and struct_def.is_definition():
                    if node.spelling in TYPE_CONFIG:
                        config = TYPE_CONFIG[node.spelling]
                    else:
                        config = None
                    if config == None or (config.get("interface") == None or config.get("interface")):
                        generate_lua_interface(node, node.spelling, 2)

def find_typedef_structs(cursor):
    for node in cursor.get_children():        
        if node.kind == clang.cindex.CursorKind.FUNCTION_DECL:
            if any(entry["name"] == node.spelling for entry in TAGS_FUNCTION_CONFIG):
                generate_lua_tags_function(node)
            if any(entry["tagList"] == node.spelling for entry in TAGS_FUNCTION_CONFIG):
                generate_lua_taglist_function(node)                
            if node.spelling in FUNCTION_CONFIG:
                generate_lua_function(node, False, False)
            if node.spelling in FAKE_FUNCTION_CONFIG:
                generate_lua_function(node, True, False)
            if node.spelling in FAKE_BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, True, True)                                
            if node.spelling in BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, False, True)                
        if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL or clang.cindex.CursorKind.STRUCT_DECL:
            if node.spelling in ENUM_CONFIG:
                 underlying = node.underlying_typedef_type.get_declaration()
                 if underlying.kind == clang.cindex.CursorKind.ENUM_DECL:
                     generate_lua_enum(node, underlying)

            lookup = node.spelling
            if lookup in TYPES:
                struct_def = None
                process = False
                if node.kind == clang.cindex.CursorKind.STRUCT_DECL:
                    #if TYPE_CONFIG[lookup].get("struct"):
                    struct_def = node.type.get_declaration()
                    process = True
                if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL:
                    struct_def = node.underlying_typedef_type.get_declaration()
                    if struct_def.kind == clang.cindex.CursorKind.STRUCT_DECL and struct_def.is_definition():
                        process = True
                    
                if process:
                    fields = get_struct_fields(struct_def)
                    if node.spelling in TYPE_CONFIG:
                        config = TYPE_CONFIG[node.spelling]
                        functors =  config.get("functors")
                    else:
                        config = None
                        functors = False
                    
                    generate_array_externs(node.spelling, fields)
                    if config == None or config.get("newindex") == None or config.get("newindex"):
                        if functors:
                            generate_thunk_externs(node.spelling, fields)
                        generate_lua_newindex(node.spelling, fields, functors, node)
                    if config == None or config.get("index") == None or config.get("index"):
                        generate_lua_index(node.spelling, fields, functors, node)                        
                    if config == None or config.get("keys") == None or config.get("keys"):
                        generate_lua_keys_installer(node.spelling, fields)
                    if config == None or (config.get("metainstall") == None or config.get("metainstall")):
                        generate_metatable_installer(node.spelling)
                    if config != None and (config.get("functor_callers")):
                        generate_functor_callers(node, fields, config.get("prefix"))
        find_typedef_structs(node)

def generate_global_installer():
    print("static void\n_lua_gen_installGeneratedMetaTables(lua_State *L)\n{")
    for struct_name in metainstall_types:
        print(f"  _lua_gen_install_meta_{struct_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedEnums(lua_State *L)\n{")
    print("  (void)L;")
    for enum_name in enums:
        print(f"  _lua_gen_install_enum_{enum_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctions(lua_State *L)\n{(void)L;\n")
    for function_name in functions:
        print(f"  lua_register(L, \"{function_name}\", _lua_{function_name});")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctionCallers(lua_State *L)\n{")
    print("  (void)L;")
    for function_name in callers:
        print(f"  lua_register(L, \"{function_name}\", _lua_gen_{function_name});")
    print("}\n")        

    print("void\nlua_gen_install(lua_State *L) {")
    print("  _lua_gen_install_defines(L);\n");    
    print("  _lua_gen_installGeneratedMetaTables(L);")
    print("  _lua_gen_installGeneratedEnums(L);")
    print("  _lua_gen_installGeneratedFunctions(L);")
    print("  _lua_gen_installGeneratedFunctionCallers(L);")
    print("}\n")
        
def main():
    if len(sys.argv) < 3:
        print("Usage: python lua_generate.py header.h <config>")
        sys.exit(1)

    header = sys.argv[1]
    

    count = len(sys.argv)-2
    for i in range(2, len(sys.argv)) :
        config = sys.argv[i]
        import importlib
    
        mod = importlib.import_module(config)
        TYPES.extend(mod.TYPES)
        ENUM_CONFIG.extend(mod.ENUM_CONFIG)
        DEFINE_CONFIGS.extend(mod.DEFINE_CONFIGS)
        FUNCTION_CONFIG.extend(mod.FUNCTION_CONFIG)
        TAGS_FUNCTION_CONFIG.extend(mod.TAGS_FUNCTION_CONFIG)
        FAKE_FUNCTION_CONFIG.extend(mod.FAKE_FUNCTION_CONFIG)
        FAKE_BOOL_FUNCTION_CONFIG.extend(mod.FAKE_BOOL_FUNCTION_CONFIG)
        BOOL_FUNCTION_CONFIG.extend(mod.BOOL_FUNCTION_CONFIG)
        FUNCTOR_SKIP.extend(mod.FUNCTOR_SKIP)

        if count == 1:
            TYPE_CONFIG.update(mod.TYPE_CONFIG)        
    
    
    index = clang.cindex.Index.create()
    tu = index.parse(header, args=['-x', 'c', '-I/usr/local/amiga/bebbo/m68k-amigaos/sys-include/', '-I/usr/local/amiga/bebbo/m68k-amigaos/ndk-include'])
    print("// generated with lua_generate.py - run: python3 lua_generate.py amiga.h > _lua_gen.h")

    find_interfaces(tu.cursor)
    find_typedef_structs(tu.cursor)
    generate_lua_defines()
    generate_global_installer()
    generate_thunks(thunk_metadata)
    
if __name__ == "__main__":
    main()
