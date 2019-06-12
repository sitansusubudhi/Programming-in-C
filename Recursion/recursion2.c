#include <stdio.h>

void A(int n) {
	if(n > 0) {
		printf("%d", n);
		A(n-1);
		printf("%d", n);
	}
}

int main() {
	A(3);
	return 0;
}
