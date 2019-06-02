#include <stdio.h>

/* Checking decimal value with octal base */
int main() {
	int a = 010; // Octal value = 1 * 8^1
	if(a < 10) { 
		printf("a is less than 10 - %d \n", a);
	}
	else if (a < 100) {
		printf("a is between 10 and 100 - %d \n", a);
	}
	else {
		printf("a is greater than 100- %d \n", a);
	}
}
