#include <stdio.h>

int main() {
	FILE *fp;
	char ch;
	
	fp = fopen("putcgetcprog1.txt", "w");
	printf("Enter data\n");
	//getchar() == getc(stdin)
	//printf("%c", ch) == putc(ch, stdout)
	while((ch = getc(stdin)) != EOF){
		putc(ch, fp);
	}
	fclose(fp);
 	printf("\n");	
	fp = fopen("putcgetcprog1.txt","r");
	while((ch = getc(fp)) != EOF) {
		//printf("%c", ch);
		putc(ch, stdout);
	}
	fclose(fp);
	return 0;
}
