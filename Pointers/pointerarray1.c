#include <stdio.h>

void printArray(int* x) {
	for(int i = 0; i < 6; i++) {
		printf("%d ", x[i]);
	}
}

void main() {
	int a[5];
	int *p = a;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%p\n", a);
	printf("%p\n", p);
	for(int i = 0; i < 7; i++) {
		printf("%d ", a[i]);
	}
	printf("\n________________\n");
	printArray(a);
}
			
