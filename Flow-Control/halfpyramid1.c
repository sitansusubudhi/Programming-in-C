#include <stdio.h>

int main() {

	int i, j, numOfrows = 4;
	printf("Enter number of rows: ");
	scanf("%d", &numOfrows);
	for(i = 0; i < numOfrows; i++) {
		for(j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
