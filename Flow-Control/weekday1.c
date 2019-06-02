#include <stdio.h>

int main() {
	char weekday;
	printf("Enter a weekday: ");
	scanf("%c", &weekday);
	printf("%c\n", weekday);
	switch(weekday) {
		default: printf("Enter a valid value!\n"); break;
		case 'm': printf("Monday"); break;
		case 'T': printf("Tuesday"); break;
		case 'w': printf("Wednesday"); break;
	//	case 't': printf("Thursday"); break;
		case 'f': printf("Friday"); break;
		case 's': printf("Saturday"); break;
	//	case 's': printf("Sunday"); break;
	}
	return 0;

}
