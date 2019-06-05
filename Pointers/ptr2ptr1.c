#include <stdio.h>

int main() {
	int a[] = {10, 20, 30, 40, 50};
	int* p[] = {a, a+1, a+2, a+3, a+4, a+5};

	//int **qq = 0;
	int **pp = p;
	printf("\n --- Test -- %d", **(p+3)); 
	printf("\n --- Test -- %d", **(pp+3)); 
	//printf("\n --- Test -- %d", pp-qq); 
	pp++;
	printf("\n%d, %d, %d", pp-p, *pp-a, **pp);
	*pp++;
	printf("\n%d, %d, %d", pp-p, *pp-a, **pp);
        ++*pp;
	printf("\n%d, %d, %d", pp-p, *pp-a, **pp);
	++**pp;
	printf("\n%d, %d, %d", pp-p, *pp-a, **pp);
	printf("\n");
	return 0;
}

