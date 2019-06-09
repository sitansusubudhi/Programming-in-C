#include <stdio.h>

int main() {
	FILE *fp;
	int len;
	fp = fopen("putcgetcprog1.txt", "r");
	if(fp == NULL) {
		printf("Error opening file ");
	} else {
		fseek(fp, 0, SEEK_END);
		len = ftell(fp);
		fclose(fp);
		printf("Total size of file txt = %d bytes\n", len);
	}	
	return 0;
}
