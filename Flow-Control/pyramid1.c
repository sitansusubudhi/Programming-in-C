#include <stdio.h>

int main() {
	int i, j, k, numOfRows = 4;

	for(i = 1; i <= numOfRows; i++) {
		for(j = i; j < numOfRows; j++){
			printf(" ");
		}
		for(k = 1; k < 2 * i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
