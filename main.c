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

#include "memove.h"
int main() {
    char arr[] = "123456789";

    memove(arr + 2, arr, 5);
    printf("src: %s\n", arr);
   
    return 0;

}
#include <stdio.h>
#include "mecmp.h"
int main() {
    char *arr1 = "barev";
    char *arr2 = "bareV";
    int result = mecmp(arr1, arr2, 3);
    if(result == 0) {
        printf("they have the same size ");
    }
    else if(result < 0) {
        printf("arr2  > arr1 ");
    }
    else if(result > 0){
        printf("arr2 < arr1");
    }
return 0;
}


#include "memchar.h"
int main() {
    const char arr[] = "abcdef";
    int value = 'd';
    int n = 6;        

    char *result = memchar(arr, value, n);

    if (result != NULL) {
        printf("Found  %c %s\n", value, result - arr);
    } else {
        printf("Character not found %c\n", value);
    }

    return 0;
}
#include "memmset.h"
int main() {
    char arr[20];
    int value = 'd';
    int n = 9;
    memmset(arr, value, n);
    arr[n] = '\0';
    printf("%s", arr);
    return 0;
}
#include "strev.h"
int main() {
    const char arr2[SIZE] = "hello";
    char arr1[SIZE];
    char *res = strev(arr1, arr2);
    printf("%s", res);
    return 0;
}

