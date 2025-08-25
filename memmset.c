#include "memmset.h"

void memmset(char *arr, int value, int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = value;
    }
    
}
