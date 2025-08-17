#include <stdio.h>
#define SIZE 10

int main() {
    char arr[SIZE];
    char  ch = 0;
    printf("Enter the symbol : ");
    scanf("%c", &ch);
    for (int i = 0; i < SIZE; ++i) {
        scanf(" %c", &arr[i]);
    }

    int i = 0;
    int j = 0;
    for(int i = 0; i < SIZE; ++i){
        if(arr[i] != ch){
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j]= '\0';
   
   
    for (int i = 0; i < SIZE; ++i) {
        printf("%c", arr[i]);
    }

    return 0;
}
