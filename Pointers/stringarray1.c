#include <stdio.h>

int main() {
	//Array of pointers to character
	char* names[] = {"sks", "sitansu", "hawk"};
	char* s = "ABC";
	printf("\n%s", s);
	//Draw a memory based string array and trace them to be clear
	printf("\n%s", *(names+1));
	printf("\n%s", *names+1);
	printf("\n%s", names[2]); 
	printf("\n%c", names[1][5]); 
	printf("\n%c", (*(names+1) + 3)); 
	printf("\n%c", *(*(names+1) + 3)); 
	return 0;
}
