
#include <stdio.h>
char *strcopy(char *dest, const char *src){
    
    char *new = dest;
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0';
    return new;
}
int main() {
    char dest[100];
    char *src = "barev";
     strcopy(dest, src);
    printf("%s\n", dest);
        printf("%s", src);
        return 0;
}
