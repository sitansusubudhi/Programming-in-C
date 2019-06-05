#include <stdio.h>
int sum(int a, int b) {
	return a+b;
}

int* swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return x;
}

int main() {
	int (*fp) (int, int);
	fp = sum;
	int s = sum(10,11);
	int x = (*fp)(20, 22);
	int d = fp(30,33);

	printf("%d\n", s);
	printf("%d\n", x);
	printf("%d\n", d);


	printf("\n\nCasting of ptr2functions: Generic pointers");
	//printf("\n%d", sizeof(void));
	void* (*gp) (void*, void*);
	int t1 = 29, t2 = 14;
	int* temp;
	//gp = swap;
	gp = (void* (*)(void*, void*))swap;
	printf("\nt1 - %d, t2 - %d", t1, t2);
	temp = swap(&t1, &t2);
	printf("\nt1 - %d, t2 - %d", t1, t2);
	return 0;
}
