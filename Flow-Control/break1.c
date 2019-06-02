#include <stdio.h>

void main() {
	int n, count, i;

	for(i = 0; i < 15; i++) {
		printf("Enter integer: ");
		scanf("%d", &n);
		if(n < 0) {
			break;
		}
	}
}
