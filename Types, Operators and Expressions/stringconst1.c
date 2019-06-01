#include <stdio.h>

int stringlen1 ( char s[]) {
	int i = 0;
	while(s[i] != '\0') 
		i = i+1;
	return i;
}

int main() {
	//const char str[] = "SKS";
	char str[] = "SKS";
	//str = "Subudhi";
	printf("%s\n", str);
	printf("%d\n", stringlen1("Sita\0nsu"));
	
}

