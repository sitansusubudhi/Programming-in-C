#include <stdio.h>

int strcomp(char *s, char *t){
	
	for( ; *s == *t; s++, t++)
		if(*s == '\0')
			return 0;
	return *s - *t;
}

int main() {
	printf("\n%d", strcomp("Sitansu", "Subudhi"));
	printf("\n%d", strcomp("ABCDE", "ABE"));
	return 0;
}
