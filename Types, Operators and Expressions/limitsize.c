#include <stdio.h>

int main() {
 int a = 4;
 float f = 5.2;
 printf("Char %d\n", sizeof(char));
 printf("Integer %d\n", sizeof(int));
 printf("Float %d\n", sizeof(float));
 printf("Double %d\n", sizeof(double));
 printf("Long Int %d\n", sizeof(long int));
 printf("Short Int %d\n", sizeof(short int));
 printf("Long double %d\n", sizeof(long double));
 printf("Unsigned char %d\n", sizeof(unsigned char));
 printf("Signed char %d\n", sizeof(signed char));
 printf("Unsigned int %d\n", sizeof(unsigned int));
 printf("Signed int %d\n", sizeof(signed int));
 printf("%f", a+f);
}
