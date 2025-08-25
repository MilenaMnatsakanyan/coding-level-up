#include "memchar.h"
#include <stdio.h>
char *memchar(const char *arr, int value, int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            return (char *)(arr + i);
        }
    }
    return NULL;
}

