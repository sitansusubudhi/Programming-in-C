#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
	int i, j;
	int c;
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("\n%s\n", s);
}
int main() {
	char a[30] = "Sitansu";
	reverse(a);
	//printf("%s", strrev(a)); //Not available for Linux
	return 0;
}
