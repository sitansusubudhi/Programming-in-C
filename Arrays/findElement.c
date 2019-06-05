#include <stdio.h>

int isCommon(int a[], int b[], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if(a[i] == b[j]) {
				printf("\n %d\n", a[i]);
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int a[] = {1,2,4,5};
	int b[] = {6,7,8,5};
	printf("\n Found common element?  %d", isCommon(a, b, sizeof(a)/sizeof(int), sizeof(b)/sizeof(int)));
	return 0;
}
