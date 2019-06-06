#include <stdio.h>

int main() {
	int noOfChars;
	int c;
	for(noOfChars = 0; (c=getchar())!= EOF; noOfChars++); //{
//		putchar(c);
//	}
	// To read from "input.txt", give command "./countChars1.out < input.txt
	printf("\n%d", noOfChars);	
	return 0;
}
