#include <stdio.h>

int main() {
	int i = 10;
	register static int a = 10;
	printf("\n%d", a);
	return 0;
}
