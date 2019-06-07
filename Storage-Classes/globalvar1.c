#include <stdio.h>

int i;

void fun1() {
	i = 20;
	printf("\n%d",i);
}

void fun2() {
	int i = 30;
	printf("\n%d",i);
}

int main() {
	fun1();
	fun2();
	return 0;
}
