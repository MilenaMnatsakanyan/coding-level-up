#include "strrchar.h"
#include <stdio.h>
char *strrchar(const char *str, int ch) {
    const char *last = NULL;
    while (*str) {
        if (*str == ch) {
            last = str;
        }
        str++;
    }

    if (ch == '\0') {
        return (char *)str;
    }

    return (char *)last;
}
