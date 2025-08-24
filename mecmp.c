#include "mecmp.h"
#include "math.h"
int *mecmp(char *arr1, const char *arr2, int n) {
    int result = 0;
    for(int i = 0; i < n; ++i) {
        if((unsigned char)arr1[i] != (unsigned char)arr2[i]) {
       return ((unsigned char)arr1[i] - (unsigned char)arr2[i]);
        }
    }
    return 0;
}


