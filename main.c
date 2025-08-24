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

#include "strspnn.h"

int main() {
    const char *str1 = "apple123";
    const char *str2 = "apple";

    size_t count1 = strspnn(str1, str2);

    printf(" %zu\n", count1);

    return 0;
}


#include "strcspnn.h"

int main() {
    const char *str1 = "hello world!";
    const char *str2 = "w";

    size_t count2 = strcspnn(str1, str2);

    printf(" %zu\n", count2);

    return 0;
}
