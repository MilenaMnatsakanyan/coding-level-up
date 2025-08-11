#include <stdio.h>
#define SIZE 5
int equal(int arr1[] ,int arr2[], int size){
	for(int i = 0; i < size; ++i){
			if(arr1[i] != arr2[i]){
			 printf("arrays are not equal ");
				return 0;
			}

	}
			printf("arrays are equal");

	return 0;
}

int main() {
	int arr1[SIZE];
	int arr2[SIZE];
	printf("Enter the elements : ");
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &arr1[i]);
	}
	printf("Enter the elements ");
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &arr2[i]);
	}

	equal(arr1, arr2, SIZE);
	return 0;
	}
