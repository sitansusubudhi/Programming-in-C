#include <stdio.h>

int main() {
	int day, month, year;
	printf("\n%d",scanf("%d %d %d", &day, &month, &year)); //scanf returns total chars stored
	printf("\nDay %d", day);
	printf("\nMonth %d", month);
	printf("\nYear %d", year);
	
	//similar to line 5
	//sscanf takes values from 1st argument and stores them in later arguments
	printf("\n%d",sscanf("8 6 2019", "%d %d %d", &day, &month, &year)); 	
	printf("\nday %d", day);
	printf("\nMonth %d", month);
	printf("\nYear %d", year);

	
	return 0;
}
