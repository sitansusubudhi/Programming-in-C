#include <stdio.h>

void TOH(int n, char source, char destination, char through) {
	if(n == 1) {
		printf("%c ---> %c (DISC - %d)\n", source, destination, n);
		return;
	}
	if (n > 1) {
		TOH(n-1, source, through, destination);
		printf("%c ---> %c (DISC - %d)\n", source, destination, n);
		TOH(n-1, through, destination, source);
	}
}

int main() {
	int noOfDisks = 3;
       	char source = 'x', destination = 'y', through = 'z'; 
	TOH(3, source, destination, through);
	return 0;
}


