#include <stdio.h>


char* strcopy(char *s, char *t) {
	char *copiedString = s;
	while((*s++ = *t++) != '\0');
	return copiedString;
}

/*
char * strcopy(char *s, char *t) {
	int i;
	i = 0;
	while((s[i] = t[i]) != '\0')
		i++;
	return s;
}
*/
int main() {
	char s[] = "Sitansu";
	char t[] = "Subudhi";
	//strcopy(s,t);
	printf("\n%s", strcopy(s,t));
	printf("\n%s", s);
	return 0;
}
