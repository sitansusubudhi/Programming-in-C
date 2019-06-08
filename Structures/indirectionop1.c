#include <stdio.h>

int main() {
	struct node {
		int i;
		int j;
	};

	struct node *p, a;
	a.i = 10;
	p = &a;
	(*p).i = 20;
	printf("\n%d", a.i);
	printf("\n%d", p->i);
	return 0;
}
