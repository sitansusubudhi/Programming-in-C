#include <stdio.h>

int main(){

	int n;
	do {
		printf("Enter a number ");
		scanf("%d", &n);
	} while(n <= 0);
	printf("The final number %d", n);
	return 0;
}
