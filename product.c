#include <stdio.h>
#define SIZE 5
int main()  {
	int arr1[SIZE];
	int arr2[SIZE];
	int res = 0;
	printf("Enter the elements : ");
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &arr1[i]);
	}
	printf("Enter the elements : ");
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < SIZE; ++i){{
			res = arr1[i] * arr2[i];
			printf("%d ", res);
			}
	}
	return 0;
	}
