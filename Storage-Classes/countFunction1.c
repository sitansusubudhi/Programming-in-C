#include <stdio.h>

int countFunctionCall(void) {
	//int count = 0;
	static int count;
	return ++count;
}


int main() {

	countFunctionCall();
	countFunctionCall();
	countFunctionCall();
	printf("\n%d times function is called", countFunctionCall());
	return 0;
}
