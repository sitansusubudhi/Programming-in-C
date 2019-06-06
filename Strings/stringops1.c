#include <stdio.h>
#include <string.h>

int main() {
	char s[] = "Sitansu";
	char t[] = "Subudhi";
	/*	
	printf("\n%s", strcat(s,t));
	printf("\n%s", strncat(s,t,4));
	printf("\n%d", strcmp(s,t));
	printf("\n%d", strncmp(s,t,1));
	printf("\n%d", strlen(t));
	printf("\n%s", strchr(s,'u'));
	printf("\n%s", strrchr(s,'S'));
	printf("\n%s", strcpy(s,t));
	*/
	printf("\n%s", strncpy(s,t,3));
	return 0;
}
