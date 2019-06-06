#include <stdio.h>

void strconcat(char s[], char t[]) {
	int i, j;
	i = j = 0;
	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0');

	printf("%s", s);
}

int main(){
	char a[] = "Sitansu";
	char b[] = " Subudhi";
	strconcat(a,b);
	return 0;
}
