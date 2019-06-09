#include <stdio.h>

int main() {

	int a;
	float b, c;
	char ch, str[20];
	unsigned int d;

	printf("Enter character input: value of ch\n");
	scanf("%c", &ch);
	printf("Enter integer input: value of a\n");
	scanf("%d", &a);
	printf("Enter float input: value of b\n");
	scanf("%f", &b);
	printf("Enter float input in exponent format: value of c\n");
	scanf("%e", &c);
	printf("Enter string input: value of str\n");
	scanf("%s", str);
	printf("Enter unsigned integer input : value of d\n");
	scanf("%u", &d);
	printf("Display all variables \n");
	printf("%d %f %e %c %s %u %o\n",
		a, b, c, ch, str, d, d);
	return 0;
}
