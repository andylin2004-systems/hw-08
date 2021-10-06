#include <stdio.h>

int mystrlen(char *s){
    int result = 0;
    while (s){
        result++;
    }
    return result;
}