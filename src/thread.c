#include <inline/dos_protos.h>

typedef struct  {
  char functionName[64];  // name of the function to call
  char scriptFilename[128];
} thread_callback_t;

static const char*
thread_getCurrentScriptFilename(lua_State* L)
{
  lua_Debug ar;
  for (int level = 0; level < 10; level++) {
    if (lua_getstack(L, level, &ar) == 0)
      break;
    
    if (lua_getinfo(L, "S", &ar) && ar.source && ar.source[0] == '@') {
      return ar.source + 1; // Skip '@'
    }
  }
  return NULL;
}



// Loads a Lua script file using AmigaDOS functions and luaL_loadbuffer
int safe_lua_loadfile_from_amigados(lua_State* L, const char* filename)
{   
    if (!L || !filename) {
        amiga_debug_print("[Lua Error] Invalid arguments\n");
        return LUA_ERRERR;
    }

    amiga_debug_print("1\n");

    BPTR fh = Open(filename, MODE_OLDFILE);
    if (!fh) {
      amiga_debug_print("[Lua Error] Could not open file: ");
      amiga_debug_print(filename);
      amiga_debug_print("\n");
      return LUA_ERRFILE;
    }
 
    amiga_debug_print("2\n");   

    long size = Seek(fh, 0, OFFSET_END);
    if (size <= 0) {
        Close(fh);
        amiga_debug_print("[Lua Error] Empty or unreadable file: ");
        amiga_debug_print(filename);
        amiga_debug_print("\n");
        return LUA_ERRSYNTAX;
    }

    amiga_debug_print("3\n");    
    Seek(fh, 0, OFFSET_BEGINNING);

    // Allocate memory for buffer
    char* buffer = AllocVec(size, MEMF_PUBLIC);
    if (!buffer) {
        Close(fh);
        amiga_debug_print("[Lua Error] Memory allocation failed\n");
        return LUA_ERRMEM;
    }

    if (Read(fh, buffer, size) != size) {
        amiga_debug_print("[Lua Error] Failed to read: ");
        amiga_debug_print(filename);
        amiga_debug_print("\n");
        FreeVec(buffer);
        Close(fh);
        return LUA_ERRFILE;
    }

    Close(fh);

    int status = luaL_loadbuffer(L, buffer, size, filename);
    FreeVec(buffer);

    if (status != LUA_OK) {
        const char* err = lua_tostring(L, -1);
        amiga_debug_print("[Lua Error] ");
        amiga_debug_print(filename);
        amiga_debug_print(": ");
        if (err) amiga_debug_print(err);
        amiga_debug_print("\n");
        lua_pop(L, 1);
    }

    return status;
}


void thread_dispatch(register thread_callback_t* cb asm("d0") )
{
  lua_State* L = luaL_newstate();
  if (!L) return;

  //   struct DosLibrary* DOSBase = (struct DosLibrary*)OpenLibrary("dos.library", 0);
     
  luaL_openlibs(L);
  lua_install(L);

  //  printf("luaL_loadfile(L, cb->scriptFilename: ->%s<-\n", cb->scriptFilename);
  
  //  if (luaL_loadfile(L, "test2.lua") != LUA_OK) { // cb->scriptFilename) != LUA_OK) {
  //    printf("load error: %s\n", lua_tostring(L, -1));
  //    lua_close(L);
  //    return;
  //  }
  safe_lua_loadfile_from_amigados(L, cb->scriptFilename);

  return;  
  
  // Load the function by name
  printf("lua_getglobal: %s\n", cb->functionName);
  lua_getglobal(L, cb->functionName);
  
  if (!lua_isfunction(L, -1)) {
    printf("Error: function '%s' not found in new state\n", cb->functionName);
    lua_close(L);
    return;
  }


  if (lua_pcall(L, 0, 0, 0) != LUA_OK) {
    printf("Thunk error: %s\n", lua_tostring(L, -1));
    lua_pop(L, 1);
  }
  
  lua_close(L);  // Clean up thread-local state
}


// Write 68000 instructions to buffer
thunk_t make_68000_thread_thunk(thread_callback_t* cb, void (*dispatcher)(thread_callback_t*))
{
  uint8_t* code = malloc(12);  // 6 bytes for move.l + 6 for jmp
  if (!code) return NULL;

  printf("make_68000_thread_thunk: %x %x\n", (uint32_t) dispatcher, (uint32_t)cb);
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
