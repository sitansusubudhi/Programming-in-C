#include <stdio.h>

int main() {
	int weekday;
	printf("Enter a weekday: ");
	scanf("%d", &weekday);
	printf("%d\n", weekday);
	switch(weekday) {
	//	default: printf("Enter a valid value!\n"); break;
		case 1: printf("Monday"); break;
		case (int)1.1: printf("Tuesday"); break;
		case 2: printf("Wednesday"); break;
		case 3: printf("Thursday"); break;
		case 4: printf("Friday"); break;
		case 5: printf("Saturday"); break;
		case 6: printf("Sunday"); break;
	}
	return 0;

}
