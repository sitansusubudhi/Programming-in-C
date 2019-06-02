#include <stdio.h>

void main() {
	int first, second, num, counter = 0, sum;
	printf("Enter the number of terms: ");
	scanf("%d", &num);
	printf("\nEnter 1st number (1st num to start the sequence from): ");
	scanf("%d", &first);
	printf("\nEnter 2nd number: ");
	scanf("%d", &second);
	printf("\nFibonnaci series\n%d %d ", first, second);
	while(counter < num) {
		sum = first + second;
		printf("%d ", sum);
		first = second;
		second = sum;
		counter++;
	}
}
