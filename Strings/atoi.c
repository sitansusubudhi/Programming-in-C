#include <stdio.h>
/*ASCII to integer*/

int atoi(char s[]) {
	int i, n;
	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10*n + (s[i] - '0');
	}

	return n;
}

int main() {
	char c = '0';
	//printf("\n%d", c);
	printf("\n%d", atoi("1234"));
	printf("\n%d", atoi("12S4"));
	printf("\n%d", atoi("24"));
	return 0;
}
