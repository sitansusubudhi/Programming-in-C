#include <stdio.h>
#include <string.h>

int len(char s[]) {
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return i;
}

void reverse(char s[]) {
	int i, j, c;
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
//	printf("\nReverse : %s\n", s);
}

void itoa(int n, char s[]) {
	int i, sign;
	if((sign = n) < 0) {
		n = -n;
	}
	
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while((n /= 10) > 0);
	if(sign < 0) 
		s[i++] = '-';
        s[i] = '\0';
	reverse(s);	
}

int main() {
	int n = 1235;
	int t = -3246;
	char s[10];
	char s2[5] = {'s','i','t','\0'};
//	printf("\n%d", strlen(s2));
//	reverse(s2);
//	printf("\n%s", s2);
//	printf("\n----------\n");
	itoa(n, s);
	printf("\n%s\n", s); 
	itoa(t, s);
	printf("\n%s\n", s); 
	return 0;
}
