#include <stdio.h>
#include <time.h>

int main() {
	int A[3][4] = {};
	clock_t begin = clock();
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%U, %d ", &A[i][j], A[i][j]);
		}
		printf("\n");
	}
	clock_t end = clock();
	double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("Time Spent : %lf", time_spent);
	return 0;
}
