#include <stdio.h>
#include <math.h>

void main() {
	int number, originalNumber, remainder, result = 0, count = 0;
	printf("Enter an integer: ");
	scanf("%d", &originalNumber);
	number = originalNumber;
	
	while(number != 0) {
		number /= 10;
		++count;
	}

	number = originalNumber;

	while(number != 0) {
		remainder = number%10;
		result += pow(remainder, count);
		number /= 10;
	}

	(result == originalNumber) ? printf("\nArmstrong number") : printf("\nNot an Armstrong number");

}
