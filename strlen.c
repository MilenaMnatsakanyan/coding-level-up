#include <stdio.h>
size_t astrlen( const char *str){
    int i = 0;
    while(str[i] != 0){
        i++;
    }
    return i;
}
int main() {
    const char *str = "Barev";
    printf("%zu", astrlen(str));
    
}
