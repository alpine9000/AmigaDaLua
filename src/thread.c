#include <inline/dos_protos.h>

typedef struct  {
  const char* script;
} thread_callback_t;


static const char*
_thread_getCurrentScriptFilename(lua_State* L)
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


const char *
thread_getLua(lua_State* L, const char *expression)
{
  const char* filename = _thread_getCurrentScriptFilename(L);
  const char* prefix = "local _isTask = 1\n";
  
  FILE *fp = fopen(filename, "rb");
  if (!fp) return NULL;
  
  if (fseek(fp, 0, SEEK_END) != 0) {
    fclose(fp);
    return NULL;
  }
  
  long filesize = ftell(fp);
  if (filesize < 0) {
    fclose(fp);
    return NULL;
  }
  rewind(fp);
  
  size_t expression_len = expression ? strlen(expression) : 0;
  size_t prefix_len = strlen(prefix);
  size_t total_size = expression_len + (size_t)filesize + prefix_len;
  
  char *buffer = malloc(total_size + 1);
  if (!buffer) {
    fclose(fp);
    return NULL;
  }
  
  if (prefix_len > 0) {
    memcpy(buffer, prefix, prefix_len);
  }
  
  size_t read = fread(buffer + prefix_len, 1, filesize, fp);
  fclose(fp);
  
  if (read != (size_t)filesize) {
    free(buffer);
    return NULL;
  }
  
  memcpy(&buffer[total_size-expression_len], expression, expression_len);
  buffer[total_size] = '\0'; 

  return (const char *)buffer;
}

static void
_thread_dispatch(register thread_callback_t* cb asm("d0"))
{
  lua_State* L = luaL_newstate();

  if (!L) return;
     
  luaL_openlibs(L);  
  lua_install(L);
  lua_gen_install(L);

  int status = luaL_loadstring(L, cb->script);
  
  if (status != LUA_OK) {
    const char *errmsg = lua_tostring(L, -1);
    printf("_thread_dispatch: %s\n", errmsg);
    lua_pop(L, 1);  // remove error message
    return;
  }
  
  if (lua_pcall(L, 0, 0, 0) != LUA_OK) {
    printf("Thunk error: %s\n", lua_tostring(L, -1));
    printf("_thread_dispatch: %s\n", lua_tostring(L, -1));
    lua_pop(L, 1);
  }
  
  lua_close(L);  // Clean up thread-local state
}

thunk_t
thread_make68000Thunk(lua_State* L, const char* expression)
{
  thread_callback_t* cb = malloc(sizeof(thread_callback_t));

  cb->script = thread_getLua(L, expression);

  
  uint8_t* code = malloc(12);  // 6 bytes for move.l + 6 for jmp
  if (!code) return NULL;

  // move.l #<cb>,d0 => 0x20 0x3C + 4 bytes address
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
  uint32_t disp_addr = (uint32_t)(uintptr_t)_thread_dispatch;
  code[8] = (disp_addr >> 24) & 0xFF;
  code[9] = (disp_addr >> 16) & 0xFF;
  code[10] = (disp_addr >> 8) & 0xFF;
  code[11] = disp_addr & 0xFF;

  // Do we need to clear cache ? Probably ?
  return (thunk_t)code;
}
