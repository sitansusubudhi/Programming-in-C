#include <stdio.h>

int max(int, int);

void main(void) {
	int a = 5, b = 10;
	int maximum;
        maximum = max(a,b);
	printf("\nMaximum : %d\n", maximum);
//	return 0;
}

int max(int x, int y) {
	return (x > y) ? x : y;
}

