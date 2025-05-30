#include "kheap.h"
#include "heap.h"
#include "config.h"

struct heap kernel_heap;
struct heap_table kernel_heap_table;

void heap_init(){
    int total_entries = HEAP_SIZE_BYTES / HEAP_BLOCK_SIZE;
    kernel_heap_table.entries = (void *) 0x00;
    kernel_heap_table.total = total_entries;
}