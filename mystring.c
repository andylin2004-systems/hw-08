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
    char *destInital = dest;
    while (*source)
    {
        *dest = *source;
        dest++;
        source++;
    }
    return destInital;
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
    *dest = '\0';
    return dest;
}

int mystrcmp( char *s1, char *s2 ){
    while (*s1 && *s2)
    {
        if (*s1 > *s2){
            return 1;
        }else if (*s1 < *s2){
            return -1;
        }
        s1++;
        s2++;
    }
    if (*s1 == *s2){
        return 0;
    }else if (*s1 == '\0'){
        return -1;
    }else{
        return 1;
    }
}

char * mystrchr(char *s, char c){
    while (*s){
        if (*s == c){
            return s;
        }
        s++;
    }
    if (*s == c){
        return s;
    }
    return NULL;
}