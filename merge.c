#include <stdio.h>
#define SIZE1 5
#define SIZE2 6
int main() {
	int arr1[SIZE1];
	int arr2[SIZE2];
	int arr3[SIZE1 + SIZE2];
	int i = 0;
	int j = 0;
	int m = 0;

	printf("Enter the numbers : ");
	for(int i = 0; i < SIZE1; ++i){
		scanf("%d", &arr1[i]);
	}

	printf("Enter the elements : ");
	for(int j = 0; j < SIZE2; ++j){
		scanf("%d", &arr2[j]);
	}
		while(i < SIZE1 && j < SIZE2){
			if(arr1[i] < arr2[j]){
			arr3[m++] = arr1[i++];
			}
			else{
		arr3[m++] = arr2[j++];

			}
}
while (i < SIZE1){
arr3[m++] = arr1[i++];
}
while(j < SIZE2){
arr3[m++] = arr2[j++];
}
for(int  m  = 0; m < SIZE1 + SIZE2; ++m){
	printf(" %d", arr3[m]);
}
return 0;
}
