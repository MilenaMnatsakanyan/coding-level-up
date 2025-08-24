#include <stdio.h>

size_t strcspnn(const char *str1, const char *str2) {
    size_t count = 0;

    while (str1[count] != '\0') {
        size_t j = 0;

        while (str2[j] != '\0') {
            if (str1[count] == str2[j]) {
                return count;  
            }
            j++;
        }

        count++;
    }

    return count;  
}
