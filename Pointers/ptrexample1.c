#include <stdio.h>

void main(){
	int x = 12;
	int* y = &x;

	printf("\n%d", x);
	printf("\n%U", &x);
	printf("\n%p", &x);
	printf("\n%U", y);
	printf("\n%p", y);
	printf("\n%d", *y);
	printf("\n%U", &y);
}
