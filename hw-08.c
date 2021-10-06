#include <stdio.h>

int mystrlen(char *s){
    int result = 0;
    while (s){
        result++;
        s++;
    }
    return result;
}

char * mystrcpy(char *dest, char *source){
    while (source){
        dest = source;
        dest++;
        source++;
    }
    return *dest;
}