#include <stdio.h>

char *strcaat(char *dest, const char *src){
  char *new = dest; 
  while(*dest != '\0'){
      dest++;
  }
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return new;
}
int main() {
    char dest[100] = "Barev ";
    const char *src = "Milena";
    strcaat(dest,src);
    printf("%s", dest);
    return 0;
}
