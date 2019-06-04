#include <stdio.h>

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

void main() {
	int a, b;
	a = 3, b = 4;
	swap(a,b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
