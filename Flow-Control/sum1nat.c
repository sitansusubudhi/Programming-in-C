#include <stdio.h>

int main() {
	int n, sum;
	printf("Enter the value of N: ");
	scanf("%d", &n);
	for(int i = 0; i <= n; i++){
		sum = sum + i;
	}
	printf("Sum of natural numbers %d", sum);
	return 0;
}
