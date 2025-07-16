#pragma once

typedef struct _list {
  void* data;
  struct _list* next;
} dll_t;


void
dll_append(dll_t** listPtr, void* ptr);

void
dll_remove(dll_t** listPtr, void* item);

void
dll_free(dll_t** listPtr, int freeData);

int
dll_count(dll_t* list);

dll_t *
dll_last(dll_t *head);
