#include <stdlib.h>
#include "list.h"

int
dll_count(dll_t* list)
{
  int count = 0;
  while (list != 0) {
    count++;
    list = list->next;
  }
  return count;
}

dll_t *
dll_last(dll_t *head)
{
  if (!head) return 0;
  
  while (head->next) {
    head = head->next;
  }
  
  return head;
}

void
dll_free(dll_t** listPtr, int freeData)
{
  dll_t* list = *listPtr;

  while (list != 0) {
    dll_t* ptr = list;
    list = list->next;
    if (freeData) {
      free(ptr->data);
    }
    free(ptr);
  }

  *listPtr = 0;
}

void
dll_append(dll_t** listPtr, void* ptr)
{
  dll_t* list = *listPtr;
  if (list == 0) {
    list = malloc(sizeof(dll_t));
    list->data = ptr;
    list->next = 0;
    *listPtr = list;
  } else {
    while (list->next != 0) {
      list = list->next;
    }
    list->next = malloc(sizeof(dll_t));
    list->next->data = ptr;
    list->next->next = 0;
  }
}

void
dll_remove(dll_t** listPtr, void* item)
{
  dll_t* list = *listPtr;

  if (!list) {
    return;
  }

  if (list->data == item) {
    dll_t* prev = list;
    list = list->next;
    free(prev);
  } else {
    dll_t* ptr = list;
    dll_t* prev = ptr;
    while (ptr && ptr->data != item) {
      prev = ptr;
      ptr = ptr->next;
    }
    if (ptr && ptr->data == item) {
      prev->next = ptr->next;
      free(ptr);
    }
  }

  *listPtr = list;
}
