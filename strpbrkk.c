#include <stdio.h>  

const char *strpbrkk(const char *str1, const char *str2) {
    size_t i = 0;

    while (str1[i] != '\0') {
        size_t j = 0;
        while (str2[j] != '\0') {
            if (str1[i] == str2[j]) {
                return &str1[i];  
            }
            j++;
        }
        i++;
    }

    return 0;  
}

