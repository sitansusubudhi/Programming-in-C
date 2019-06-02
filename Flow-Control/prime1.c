#include <stdio.h>

int main(){
	int n, i, flag = 0;
	printf("Enter a number to check if prime: ");
	scanf("%d", &n);
	for(i = 2; i*i <= n; i++) {    //Factors lie in range 2 and sqroot(n)
		if(n % i == 0) {
			flag = 1; //Flag to indicate we exit the loop using
			break;	  //using break and not by iterating till end
		}
	}
	if(flag == 1) 
		printf("%d is not prime", n);
	else 
		printf("%d is prime", n);
	return 0;
}
