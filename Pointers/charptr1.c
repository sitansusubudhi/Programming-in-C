#include <stdio.h>

void main() {
	char arr[] = "ravindra";
	char *p = "ravindra";
	char a = 'x';
	//*(p+3) = a;   //Since read only characters, hence segmentation fault
	arr[3] = a;
	printf("%s\n", p);
	printf("%c\n", p[3]);
	printf("%s\n", arr);
}
