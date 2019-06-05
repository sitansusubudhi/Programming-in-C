#include <stdio.h>

int main() {
	int A[3][4] = {};
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%U, %d ", &A[i][j], A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
