#include <stdio.h>

//Swap declaration
void swap (int*, int*); 

int main() {
	int x, y;
	printf("Enter the values of x and y : ");
	scanf("%d %d", &x, &y);
	swap(&x, &y);
	printf("After swapping : X = %d  Y = %d", x, y);
	return 0;
}

void swap (int* a, int* b) {
	int temp;
	temp = *b;
	*b = *a;
	*a  = temp;
}
