#include <stdio.h>
int sumofdigits(int num){
    if(num == 0){
        return num;
    }
    return (num % 10) + sumofdigits(num / 10);
}
int main() {
    int num = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("%d", sumofdigits(num));
    return 0;
    
}
