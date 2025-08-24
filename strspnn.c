#include <stdio.h>
#include "strspnn.h"

size_t strspnn(const char *str1, const char *str2) {
    size_t count = 0;

    while (str1[count] != '\0' && str2[count] != '\0') {
        if (str1[count] == str2[count]) {
            count++;
        } else {
            return 0;
        }
    }

    return count;
}
