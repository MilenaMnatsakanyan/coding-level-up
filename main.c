#include <stdio.h>
#include "strrchar.h" 

int main() {
    const char *str = "banana";
    char ch = 'a';

    char *result = strrchar(str, ch); 
    if (result == NULL) {
        printf("Symbol is not found");
    } else {
        printf("last symbol is : %p", result);
    }

    return 0;
}
