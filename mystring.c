#include <stdio.h>

int mystrlen(char *s){
    int result = 0;
    while (*s){
        result++;
        s++;
    }
    return result;
}

char * mystrcpy(char *dest, char *source){
    while (*source){
        *dest = *source;
        dest++;
        source++;
    }
    return *dest;
}

char * mystrncat(char *dest, char *source, int n){
    int i = 0;
    dest += mystrlen(dest);
    while (*source && i<n-1)
    {
        dest = source;
        dest++;
        source++;
        i++;
    }
    dest = '\0';
    return dest;
}

char * mystrchr(char *s, char c){
    while (*s){
        if (*s == c){
            return s;
        }
    }
    return NULL;
}