#include <stdio.h>

int main() {
	struct node {
		int i;
		int *c;
	};
	struct node a[2], *p;
	int b[2] = {30, 40};
	p = &a[0];
	a[0].i = 10; a[1].i = 20;
	a[0].c = b;
	int x;
	printf("\n%d", ++p->i);
//	x = (p++)->i;
//	x = (++p)->i;
//	x = *p->c;
//	x = *p->c++;
//	x = (*p->c)++;
	x = *p++->c;
	printf("\n%d", x);
	return 0;
}

