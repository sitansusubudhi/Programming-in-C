#include <stdio.h>

// Find sum of only positive integers from 15 input numbers

int main() {
	int n, i, sum = 0;
	for(i = 0; i < 15; i++) {
		printf("Enter integer: ");
		scanf("%d", &n);

		if(n <= 0)
			continue;
		sum += n;
	}
	printf("Sum of positive integers %d", sum);
	return 0;
}
