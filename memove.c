#include "memove.h"
void *memove(char *dest, const char *src, int n) {
    for (int i = n - 1; i >= 0; i--) {
        dest[i] = src[i];
    }
}


