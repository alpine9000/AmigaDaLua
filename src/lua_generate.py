import sys
import clang.cindex
import re

#python3 roid_lua_generate.py roid_lua_template.h  > _lua_gen.h

# Type configuration
TYPE_CONFIG = {
    "object_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": True, "functor_callers": True, "prefix": "object"},    
    "object_image_file_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_animation_frame_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "attack_dammage_t":  {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_animation_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_character_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_ai_config_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_ai_state_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "enemy_config_t": {"index": True, "newindex": True, "keys": True, "metainstall": True, "functors": False},
    "object_joystick_t": {"index": False, "newindex": False, "keys": True, "metainstall": False, "functors": False},    
}

ENUM_CONFIG = ["sfx_enum_t", "object_facing_t", "fighter_attackgroup_enum_t", "hw_joystick_enum_t"]

FAKE_FUNCTION_CONFIG = [
    "_fighter_setupAttack",
    #"_fighter_setAnimCF",    
    "_object_setUpdate",
    "_object_setIntelligence",
    "_sound_queue",
    "_object_getX",
    "_object_getY",
    "_object_getH",
    "_object_getVX",
    "_object_getVY",
    "_object_getVH",
    "_object_getFacing",
    "_object_setX",
    "_object_setY",
    "_object_setVX",
    "_object_setVY",
    "_object_setH",
    "_object_setIsDown",
    "_object_setXY",
    "_object_setVXVY",
    "object_attackSolutionForTarget",    
]

FAKE_BOOL_FUNCTION_CONFIG = [
    "_JOYSTICK_B1_FIRE",
    "_JOYSTICK_B2_FIRE",
    "_object_getIsDown",
    "_object_isPlayer",
    "_object_isItem",
    "fighter_isCurrentAnim",
]

BOOL_FUNCTION_CONFIG = [
    "fighter_checkButtonDownMoves",
    "fighter_checkJump",
]

FUNCTION_CONFIG = [
    "Open",
    "object_setAnimCF",
    #
    "fighter_cf_jabA",
    "fighter_cf_hookA",
    "fighter_cf_animationHit",
    "fighter_cf_attackComplete",
    "fighter_update_hitting",
    "fighter_update_hittingSlide",
    "fighter_ap_hit0",
    "fighter_ap_hit1",
    "fighter_ap_bumped",
    "fighter_ap_fallback",
    "fighter_applyJoystickVXVY",
    "fighter_collision_hit",
    "fighter_update_bump",
    "fighter_defaultUpdate",
    #
    "enemy_intelligence_kick",
    "enemy_ai_moveIdle",
    "enemy_ai_moveKick",
    "enemy_ai_moveJump",
    #
    "cell_debugConsoleClear",
    #
    "sound_queue",
    #
]

FUNCTOR_SKIP = ['updateHUDHealth', 'updateHUDLives']

struct_tag_to_typedef = {"object": "object_t"}
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
    'const char *': 'lua_pushstring',
    'CONST_STRPTR': 'lua_pushstring',
    'char *': 'lua_pushstring',
    'object_t *': 'roid_lua_pushobject_t',
    'struct object *': 'roid_lua_pushobject_t',
    'void *': 'lua_pushlightuserdata',
    'attack_group_t': 'lua_pushinteger',
    'BPTR': 'lua_pushinteger',
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
    'char *': 'luaL_checkstring',
    'object_t *': 'roid_lua_checkobject_t',
    'struct object *': 'roid_lua_checkobject_t',
    'void *': 'lua_touserdata',
    'attack_group_t': 'luaL_checkinteger',
    'CONST_STRPTR': 'luaL_checkstring',
    'LONG': 'luaL_checkinteger',
    'BPTR': 'luaL_checkinteger'
}

metainstall_types = []
enums = []
functions = []
callers = []
thunk_metadata = []

def parse_ctype(ctype):
    pointer_level = ctype.count('*')
    base = ctype.replace('*', '').strip()
    base = re.sub(r'\s+', ' ', base)  # normalize whitespace

    # Map "struct foo" to "foo_t" if available
    if base.startswith("struct "):
        tag = base[len("struct "):]
        base = struct_tag_to_typedef.get(tag, base)

    return base, pointer_level

def get_struct_fields(cursor):
    fields = []
    for c in cursor.get_children():
        if c.kind == clang.cindex.CursorKind.FIELD_DECL:
            typ = c.type
            if typ.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                elem_type = typ.get_array_element_type().spelling
                size = typ.element_count
                if elem_type == "char":
                    fields.append((c.spelling, f"char[{size}]"))
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
                    fields.append((c.spelling, func_sig))
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
                base_type = struct_tag_to_typedef.get(tag, base_type)
            full_type = base_type + "*" * pointer_level
            fields.append((c.spelling, full_type))

    return fields

def generate_lua_index(struct_name, fields, functors):
    print(f"static int\n_lua_gen_{struct_name}_index(lua_State *L)\n{{")
    print(f"  {struct_name} *obj = *({struct_name} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print("  const char *key = luaL_checkstring(L, 2);")
    for name, ctype in fields:
        if not name:
            continue
        if ctype.startswith("char["):
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
            base, pointer_level = parse_ctype(ctype)
            if base in TYPE_CONFIG:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = &obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{base}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{base}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0 && obj->{name}) {{")
                    print(f"    {base} **ud = ({base} **)lua_newuserdata(L, sizeof({base} *));")
                    print(f"    *ud = *obj->{name};")
                    print(f"    luaL_getmetatable(L, \"{base}\");")
                    print("    lua_setmetatable(L, -2);")
                    print("    return 1;")
                    print("  }")
    print("  return 0;\n}\n")

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

    
def generate_lua_newindex(struct_name, fields, functors):
    print(f"static int\n_lua_gen_{struct_name}_newindex(lua_State *L)\n{{")
    print(f"  {struct_name} *obj = *({struct_name} **)luaL_checkudata(L, 1, \"{struct_name}\");")
    print("  const char *key = luaL_checkstring(L, 2);")

    for name, ctype in fields:
        if not name:
            continue

        # char[] strings
        if ctype.startswith("char["):
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
            base, pointer_level = parse_ctype(ctype)
            if base in TYPE_CONFIG:
                if pointer_level == 0:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{base}\");")
                    print(f"    obj->{name} = *val;")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 1:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    obj->{name} = ({base} *)luaL_checkudata(L, 3, \"{base}\");")
                    print("    return 0;")
                    print("  }")
                elif pointer_level == 2:
                    print(f"  if (strcmp(key, \"{name}\") == 0) {{")
                    print(f"    {base} *val = *({base} **)luaL_checkudata(L, 3, \"{base}\");")
                    print(f"    *obj->{name} = val;")
                    print("    return 0;")
                    print("  }")

    print("  return 0;")
    print("}\n")

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
    print(f"static void\n_lua_gen_{struct_name}_install_keys(lua_State *L)\n{{")
    print("  lua_newtable(L);")
    index = 1
    for name, ctype in fields:
        if not name:
            continue
        base, _ = parse_ctype(ctype)
        if (
            base in READ_TYPE_TO_LUA or
            base in TYPE_CONFIG or
            ctype.startswith("char[") or
            "(*)" in ctype  # Function pointer support
        ):
            print(f"  lua_pushstring(L, \"{name}\");")
            print(f"  lua_rawseti(L, -2, {index});")
            index += 1
    print(f"  lua_setfield(L, -2, \"__keys\");")
    print("}\n")
    
def generate_metatable_installer(struct_name):
    print(f"static void\n_lua_gen_install_meta_{struct_name}(lua_State *L) {{")
    print(f"  if (luaL_newmetatable(L, \"{struct_name}\")) {{")
    config = TYPE_CONFIG[struct_name]
    if config.get("index"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_index);")
        print("    lua_setfield(L, -2, \"__index\");")
    if config.get("newindex"):
        print(f"    lua_pushcfunction(L, _lua_gen_{struct_name}_newindex);")
        print("    lua_setfield(L, -2, \"__newindex\");")
    if config.get("keys"):
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
            base, pointer_level = parse_ctype(ctype)

            # Direct mappings for known primitive types
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
                print(f"  lua_Integer result = lua_tointeger(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            elif ret_type in ("float", "double"):
                print(f"  lua_Number result = lua_tonumber(arg0->lua.luaStates.{field_name}, -1);\nlua_pop(arg0->lua.luaStates.{field_name}, 1);")
                print("  return result;")
            else:
                print(f"  error(1) - unsupported type {ret_type}")
        else:
            print("  return;")

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
    return WRITE_TYPE_FROM_LUA.get(ctype, f"error(3) - unsupported type {ctype}")

def get_lua_push(ctype):
    return READ_TYPE_TO_LUA.get(ctype, f"error(4) - unsupported type {ctype}")

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

    arg1 = "UNDEFINED"
    for i, arg in enumerate(node.get_arguments()):
        sig = extract_function_pointer_signature(arg.type)
        name = arg.spelling
        ctype = arg.type.spelling
        if i == 0:
            arg1 = name        
        if sig:
            #lua_func = get_lua_check(sig)
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
        print(f"  {ret_type} result = {function_name}({call_args});")        
        if isBool:
            print(f"  if (result) {{")
            print(f"     lua_pushboolean(L, 1);")        
            print(f"  }} else {{")
            print(f"     lua_pushboolean(L, 0);")
            print(f"  }}")
        else:
            print(f"  {get_lua_push(ret_type)}(L, result);")
        print("  return 1;")
    print("}\n")
    functions.append(function_name)


        
def find_typedef_structs(cursor):
    for node in cursor.get_children():        
        if node.kind == clang.cindex.CursorKind.FUNCTION_DECL:
            if node.spelling in FUNCTION_CONFIG:
                generate_lua_function(node, False, False)
            if node.spelling in FAKE_FUNCTION_CONFIG:
                generate_lua_function(node, True, False)
            if node.spelling in FAKE_BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, True, True)                                
            if node.spelling in BOOL_FUNCTION_CONFIG:
                generate_lua_function(node, False, True)                
        if node.kind == clang.cindex.CursorKind.TYPEDEF_DECL:
            if node.spelling in ENUM_CONFIG:
                 underlying = node.underlying_typedef_type.get_declaration()
                 if underlying.kind == clang.cindex.CursorKind.ENUM_DECL:
                     generate_lua_enum(node, underlying)
            if node.spelling in TYPE_CONFIG:
                struct_def = node.underlying_typedef_type.get_declaration()
                if struct_def.kind == clang.cindex.CursorKind.STRUCT_DECL and struct_def.is_definition():
                    if struct_def.spelling:
                        struct_tag_to_typedef[struct_def.spelling] = node.spelling
                    fields = get_struct_fields(struct_def)
                    config = TYPE_CONFIG[node.spelling]
                    functors =  config.get("functors")         
                    if config.get("newindex"):
                        if functors:
                            generate_thunk_externs(node.spelling, fields)
                        generate_lua_newindex(node.spelling, fields, functors)
                    if config.get("index"):
                        generate_lua_index(node.spelling, fields, functors)                        
                    if config.get("keys"):
                        generate_lua_keys_installer(node.spelling, fields)
                    if config.get("metainstall"):
                        generate_metatable_installer(node.spelling)
                    if config.get("functor_callers"):
                        generate_functor_callers(node, fields, config.get("prefix"))
        find_typedef_structs(node)

def generate_global_installer():
    print("static void\n_lua_gen_installGeneratedMetaTables(lua_State *L)\n{")
    for struct_name in metainstall_types:
        print(f"  _lua_gen_install_meta_{struct_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedEnums(lua_State *L)\n{")
    for enum_name in enums:
        print(f"  _lua_gen_install_enum_{enum_name}(L);")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctions(lua_State *L)\n{")
    for function_name in functions:
        print(f"  lua_register(L, \"{function_name}\", _lua_{function_name});")
    print("}\n")

    print("static void\n_lua_gen_installGeneratedFunctionCallers(lua_State *L)\n{")
    for function_name in callers:
        print(f"  lua_register(L, \"{function_name}\", _lua_gen_{function_name});")
    print("}\n")        

    print("void\nlua_gen_install(lua_State *L) {")
    print("  _lua_gen_installGeneratedMetaTables(L);")
    print("  _lua_gen_installGeneratedEnums(L);")
    print("  _lua_gen_installGeneratedFunctions(L);")
    print("  _lua_gen_installGeneratedFunctionCallers(L);")
    print("}\n")
        
def main():
    if len(sys.argv) < 2:
        print("Usage: python generate_lua_bindings.py my_header.h")
        sys.exit(1)

    header = sys.argv[1]
    index = clang.cindex.Index.create()
    tu = index.parse(header, args=['-x', 'c', '-I/usr/local/amiga/bebbo/m68k-amigaos/sys-include/', '-I/usr/local/amiga/bebbo/m68k-amigaos/ndk-include'])
    print("// generated with roid_lua_generate.py - run: python3 roid_lua_generate.py roid_lua_template.h > _lua_gen.h")

    find_typedef_structs(tu.cursor)
    generate_global_installer()
    generate_thunks(thunk_metadata)
    
if __name__ == "__main__":
    main()
