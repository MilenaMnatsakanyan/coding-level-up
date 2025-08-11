#include <stdio.h>
#define SIZE 5
int main() {
	int arr[SIZE];
	int num = 0;
	printf("Enter the elements : ");
	for(int i = 0; i < SIZE; ++i){
			scanf("%d", &arr[i]);
	}
	printf("Enter the number : ");
	scanf("%d", &num);
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] == num){
			printf("array contains number  ");


		return 0;
		}
	}

		printf("array doesnt contain  number ");


	return 0;
	}
