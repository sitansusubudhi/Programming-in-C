#include <stdio.h>

void A(int n) {
	if(n > 0) {
		printf("%d", n-1);
		A(n-1);
	}
}

int main() {
	A(3);
	return 0;
}
