#include <stdio.h>
#include <time.h>
#define size 1000

//Run this at ide.geeksforgeeks.org
int main() {
	int A[size][size] = {};
	
	printf("\nColumn Major Order\n");
	clock_t begin = clock();
	
	for(int j = 0; j < size; j++) {
		for(int i = 0; i < size; i++) {
			A[i][j] = 0;
		}
	}
	

	for(int j = 0; j < size; j++) {
		for(int i = 0; i < size; i++) {
			//printf("%U, %d \n", &A[i][j], A[i][j]);
		}
		//printf("\n");
	}
	
	clock_t end = clock();
	double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("Time Spent Column Major order: %lf\n", time_spent);

	
	printf("\nRow Major Order\n");
	begin = clock();
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			A[i][j] = 0;
		}
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			//printf("%U, %d ", &A[i][j], A[i][j]);
		}
		//printf("\n");
	}
	
	end = clock();
	time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("\nTime Spent Row Major Order : %lf\n", time_spent);
	
	return 0;
}
