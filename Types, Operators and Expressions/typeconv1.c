#include <stdio.h>

int main() {
	char c = 'a';
	int i = 25623;
	double d = i*1.0/2;
	//i = c;
	c = i;
	printf("%d\n",i);
	printf("%c\n",c);
	printf("%lf\n",d);
}
