#include <stdio.h>

int main() {
	int lineCount = 0, c;
	while ((c = getchar()) != EOF) {
		if ( c == '\n')
			++lineCount;
	}
	printf("\n No of lines: %d ", lineCount);
	return 0;
}
