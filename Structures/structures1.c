#include <stdio.h>

int main() {

	struct {
		int a;
		char c;
	} x, y;

	struct ex {
		int a;
		char c;
	};
	struct ex str1 = {1, 'a'};
	str1.a = 5;
	printf("\n%d", str1.a);
	printf("\n%d", sizeof(x));
	printf("\n%d", sizeof(int));
	printf("\n%d", sizeof(char));
	return 0;
}
