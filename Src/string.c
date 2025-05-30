#include "string.h"

int dev_strlen(const char *str){
    int len;
    for(len=0;str[len]!='\0';len++);
    return len;
}

void dev_memcpy(const char *src, char *dest, size_t size){
    for(int i=0;i<size; i++){
        dest[i] = src[i];
    }
}

int dev_strcmp(const char *str1, const char *str2, size_t size){
    for(int i=0;i<size;i++){
        if(str1[i]!=str2[i]){
            return -1;
        }
    }
    return 0; //equal
}

void dev_memset(char *block, int value, size_t block_size){
    for(int i=0;i<block_size;i++){
        block[i] = (char) value;
    }
}


