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
#include <stdio.h>

const char *strpbrkk(const char *str1, const char *str2);

int main() {
    const char *str1 = "barev milena";
    const char *str2 = "hajox";

    const char *result = strpbrkk(str1, str2);

    if (result != 0) {
        printf("First matched symbol is:%c\n", *result);
    } else {
        printf("No matchied symbol: ");
    }

    return 0;
}

#include "memcopy.h"
int main() {
    char src[] = "barev";
    char dest[20] ;
    int n = 0;
    scanf("%d", &n);
    memcopy(dest, src,n);
    printf("%s", dest);
    return 0;
}


