#include <stdio.h> 
#define SIZE 10
int main() {
    int vowels = 0;
    int Consonants = 0;
    char arr[SIZE];
    printf("Enter the elements : " );
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }
    for(int i = 0; i < SIZE; ++i){
        if(arr[i] == 'a' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'i'){
            vowels++;
        }
        else{
           Consonants++;
        }
    }
    printf("Consonants %d\n", Consonants);
    printf("vowels %d", vowels);
    return 0;
}
    
