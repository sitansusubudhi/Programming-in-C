#include <stdio.h>

int main() {
	//int a = 1;
	for(int a = 10; ; a = a * 2)  {
		printf("Value of a: %d\n",a);	//Checking overflow value
	}
	return 0;
}
