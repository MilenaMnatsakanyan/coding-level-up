#include <stdio.h>
int main() {
	char letter  = 0;
	printf("Enter the letter :");
	scanf(" %c", &letter);
	if(letter  >= 97 && letter <= 123){
		letter -= 32;
	}
	printf("%c", letter);
	return 0;
	}
