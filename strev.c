#include "strev.h"
#define SIZE 6
char *strev(char arr1[SIZE],const char arr2[SIZE] ) {
    int i = SIZE - 2;
    int j = 0;
    while(i >= 0) {
        arr1[i] = arr2[j];
        i--;
    j++;

    }
    arr1[j] = '\0';
    return arr1;
}
