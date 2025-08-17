#include <stdio.h> 
void strcmmp(const char *str1, const char *str2){
        int cmp = str2 - str1;
        if(cmp > 0){
            printf("str2 is greater then str1");
        }
        else if(cmp < 0){
            printf("str1 is longer then str2");
        }
        else{
            printf("they have the same lenght : ");
        }
    }
    int main() {
        const char *str1 = "Barev";
        const char *str2 = "hajoxutyun";
        strcmmp(str1,str2);
        return 0;
    }
