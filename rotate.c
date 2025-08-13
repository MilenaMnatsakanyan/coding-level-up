#include <stdio.h>
#define SIZE 5
void reverse(int arr[], int start, int end){
            while(start < end){
                 int temp = arr[start];
                 arr[start] = arr[end];
                 arr[end] = temp;
                 start++;
                 end--;
                 
            }
}
int main() {
    int arr[] = { 1, 2, 3, 4, 5};
    int start = 0;
    int k = 0;
    printf("Enter the number : ");
    scanf("%d", &k);
    int end = SIZE - 1;
    reverse(arr, start, end);
    for(int i = 0; i < SIZE; ++i){
        printf("%d", arr[i]);
    }
    printf("\n");
    reverse(arr, 0, k-1);
    for(int i = 0; i < SIZE; ++i){
        printf("%d", arr[i]);
    }
    printf("\n");
    reverse(arr, k, end);
    for(int i = 0; i < SIZE; ++i){
        printf("%d", arr[i]);
    }
    return 0;
}
