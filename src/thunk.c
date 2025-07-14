

typedef struct lua_callback_t {
    struct lua_State* L;
    int ref;
} lua_callback_t;

typedef void (*thunk_t)(void);

void thunk_dispatch(lua_callback_t* cb) {
    lua_rawgeti(cb->L, LUA_REGISTRYINDEX, cb->ref);
    if (lua_pcall(cb->L, 0, 0, 0) != LUA_OK) {
        const char* err = lua_tostring(cb->L, -1);
        printf("Thunk error: %s\n", err);
        lua_pop(cb->L, 1);
    }
}

// Write 68000 instructions to buffer
thunk_t make_68000_thunk(lua_callback_t* cb, void (*dispatcher)(lua_callback_t*)) {
    uint8_t* code = malloc(12);  // 6 bytes for move.l + 6 for jmp
    if (!code) return NULL;

    // move.l #<cb>, a0 => 0x20 0x3C + 4 bytes address
    code[0] = 0x20;
    code[1] = 0x3C;
    uint32_t cb_addr = (uint32_t)(uintptr_t)cb;
    code[2] = (cb_addr >> 24) & 0xFF;
    code[3] = (cb_addr >> 16) & 0xFF;
    code[4] = (cb_addr >> 8) & 0xFF;
    code[5] = cb_addr & 0xFF;

    // jmp <dispatcher> => 0x4E 0xF9 + 4 bytes address
    code[6] = 0x4E;
    code[7] = 0xF9;
    uint32_t disp_addr = (uint32_t)(uintptr_t)dispatcher;
    code[8] = (disp_addr >> 24) & 0xFF;
    code[9] = (disp_addr >> 16) & 0xFF;
    code[10] = (disp_addr >> 8) & 0xFF;
    code[11] = disp_addr & 0xFF;

    return (thunk_t)code;
}
