#include <stdio.h>

int main() {

	register int i = 0;
	int *a = &i;
	printf("\n%d", *a);
	return 0;
}
