#include <stdio.h>
#include <math.h>

int main() {
	char operator;
	double num1, num2;
	printf("Please enter which operator to use (+,-,*,/,%%): ");
	scanf("%c", &operator);
	printf("Enter the two operands\n");
	scanf("%lf %lf", &num1, &num2);
	
	switch(operator){
		case '+' : printf("Addition of Num1 and Num2: %lf\n", num1+num2);
			   break;
		case '-' : printf("Subtraction of Num2 from Num1: %lf\n", num1-num2);
			   break;
		case '*' : printf("Multiplicaion of Num1 and Num2: %lf\n", num1*num2);
			   break;
		case '/' : printf("Division of Num1/Num2: %lf\n", num1/num2);
			   break;
		case '%' : printf("Remainder when Num1 divided by Num2: %lf\n",  fmod(num1,num2));
			   break;
		default: printf("Please select a valid operator!\n");
	}
	return 0;
}
