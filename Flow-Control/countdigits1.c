#include <stdio.h>

int main() {
	int count = 0, n;
	printf("\nEnter an integer: ");
	scanf("%d", &n);
	while(n != 0) {
		n /= 10;
		++count;
	}
	printf("Number of digits: %d\n", count);
	return 0;
}
