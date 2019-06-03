#include <stdio.h>

long power(int base, int n) {
	long p;
	for(p = 1; n > 0; --n) {
		p = p *  base;
	}
	return p;
}

int main() {
	int b = 13, n = 3;
	long pow = power(b,3);
	printf("%ld\n", pow);
	return 0;
}
