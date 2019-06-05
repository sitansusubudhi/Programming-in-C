#include <stdio.h>

void fun(int* a){
	for(int i = 0; i < 4; i++) {
		printf("\n%d", a[i]);
	}
}

void print2d(int (*a)[3]) {  // 'a' is a pointer to an array of 3 elements
	printf("\n");
	int *p[9]; // will be storing the address of elements of array passed in array of pointers 'p'
	int k = 0;	
	for(int i = 0; i < 3; i++){
		printf("\n");			
		for(int j = 0; j < 3; j++) {
			p[k++] = &a[i][j];
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");			
	for(int i = 0; i < 9; i++) { 
		printf("\n%U", p[i]);
		printf("\n%d", *p[i]);
	}
}

int main() {
	int a[] = {1,2,3,4};
	int b[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

	// initial index not required when declaring and defining the array
	int test[][3][4] = { 
                    	      { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                    	      { {13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9} }
                            };	
	fun(a);
	print2d(b);
	return 0;
}
