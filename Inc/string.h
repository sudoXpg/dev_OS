#ifndef STRING_H
#define STRING_H

#include <stdint.h>
#include <stddef.h>

int dev_strlen(const char *str);
void dev_memcpy(const char *src, const char *dest, size_t size);
int dev_strcmp(const char *str1, const char *str2, size_t size);
void dev_memset(const char *block, size_t block_size);



#endif