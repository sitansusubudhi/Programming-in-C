#include <stdio.h>

char *getString() {
	char str[] = "print it";
	return str;
}

int main() {
	printf("%s", getString());
	return 0;
}
