#include <stdio.h>

void main() {
	int number, originalNo, remainder, reversedNumber = 0;
	printf("Enter a number: ");
	scanf("%d", &originalNo);
	number = originalNo;

	while(number != 0) {
		remainder = number % 10;
		printf("%d\n",remainder);
		reversedNumber = reversedNumber*10 + remainder;
		number /= 10;
	}
	reversedNumber == originalNo ? printf("Palindrome\n") : 
	       				   printf("Not a palindrome\n");
}	

