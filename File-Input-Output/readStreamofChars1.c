#include <stdio.h>
#include <stdlib.h>
#define DEFAULTSIZE 100

char* resize(char *p, int capacity);

int main() {
	int count = 0, capacity = DEFAULTSIZE;	
	char *input, ch;
	
	input = (char*)malloc(DEFAULTSIZE * sizeof(char));

	while((ch = getchar()) != EOF) {
		if (count == capacity) {
			input = resize(input, capacity);
			capacity = capacity + DEFAULTSIZE;
		}
		input[count++] = ch;
	}
	if(count == capacity) {
		input = realloc(input, capacity + 1);
	}
	input[count] = '\0';
	printf("\n");
	puts(input);
	
	return 0;
}

char* resize(char *p, int capacity) {
	return realloc(p, capacity + DEFAULTSIZE);
}
