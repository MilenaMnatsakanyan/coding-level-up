#include <stdio.h> 
char *strchrr(const char *str, char ch){
    while(*str != '\0'){
        if(ch == *str){
            return (char*)str;
            
        }
        str++;
    }
    return 0;
}
int main() {
    const char *str = "Barev";
    char ch = 'e';
    strchrr(str,ch);
    printf("%c", ch);
    return 0;
}
