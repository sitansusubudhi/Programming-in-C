#include <stdio.h>

void fun(int);

void main(void) {
	int a = 5, b = 10;
	int m;
        fun(a);
	printf("\nA value: %d\n", a);
//	return 0;
}

void fun(int x) {
	x = 30;
	printf("\nX value: %d\n", x);
}

