#include <stdio.h>
int main() {
    int num1 = 0;
    printf("Enter the number : ");
    scanf("%d", &num1);
    int num2 = 0;
    printf("Enter the seecond number : ");
    scanf("%d", &num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;
    printf("%d %d", *ptr1,*ptr2);
    return 0;
}
