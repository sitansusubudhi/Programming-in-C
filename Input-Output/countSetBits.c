#include <stdio.h>

/*count number of set bits in num*/

int countSetBits(unsigned num) {
	int count;
	for ( count = 0; num != 0; num >>= 1) {
		if (num & 1)
			count++;
	} 
	return count;
}


int main() {
	int x = 5;
	printf("Enter a number to find number of set bits in it: ");
	scanf("%d", &x);
	printf("No of set bits in %d is %d", x, countSetBits(x));
	return 0;
}
