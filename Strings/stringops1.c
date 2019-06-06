#include <stdio.h>
#include <string.h>

int main() {
	char s[] = "Sitansu";
	char t[] = "Subudhi";
	/*	
	printf("\n%s", strcat(s,t));
	// Concatenate only 4 characters of t to s
	printf("\n%s", strncat(s,t,4));

	printf("\n%d", strcmp(s,t));
	// Compare only first 1 character, return negative, 0, or positive
	printf("\n%d", strncmp(s,t,1));

	// Find length of string
	printf("\n%d", strlen(t));

	// return pointer to first 'u' in string s or NULL 
	printf("\n%s", strchr(s,'u'));
	// return pointer to last 'u' in string s or NULL
	printf("\n%s", strrchr(s,'S'));

	// Copy t to s
	printf("\n%s", strcpy(s,t));
	*/

	// Copy at most 3 characters of t to s
	printf("\n%s", strncpy(s,t,3));
	return 0;
}
