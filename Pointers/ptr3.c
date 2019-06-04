#include <stdio.h>

void swap(int* x, int* y) {
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
	int a;
	printf("x = %d\n", *x);
	printf("Sizeof x : %d\n", sizeof(x));
	printf("Sizeof y : %d\n", sizeof(y));
	printf("Sizeof a : %u\n", sizeof(a));
	printf("y = %d\n", *y);
}

void main() {
	int a, b;
	a = 3, b = 4;
	swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("Sizeof &a : %d\n", sizeof(&a));
}
