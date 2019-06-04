#include <stdio.h>

void strcpys(char* s, char* t){
	while(*s++ = *t++);
}

void main() {
	char a[] = "ravindra";
	char p[10];
	strcpys(p, a);
	printf("%s\n", p);
	printf("%c\n", p[3]);
}
