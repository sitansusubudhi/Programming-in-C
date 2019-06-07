#include <stdio.h>

int main() {
	int i = 10;
	register int *a = &i;
	printf("\n%d", *a);
	return 0;
}
