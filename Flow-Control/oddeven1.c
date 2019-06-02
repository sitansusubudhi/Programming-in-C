#include <stdio.h>

int main() {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);	
	if (num % 2 == 0) {
		printf("num is even - %d \n", num);
	}
	else {
		printf("num is odd - %d \n", num);
	}
	return 0;
}
