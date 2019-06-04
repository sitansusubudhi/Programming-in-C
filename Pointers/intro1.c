#include <stdio.h>

int main() {
	int b = 5;
	int* p = &b;
	const int x = 5;
	const int* q = &x;

	printf("\nb = %d", b);
	printf("\n*p = %d", *p);
	printf("\np = %p", p);
	printf("\nq = %p", q);
	printf("\nx = %p", &x);
	return 0;
}
