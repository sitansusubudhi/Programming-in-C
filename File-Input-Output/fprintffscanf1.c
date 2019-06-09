#include <stdio.h>

struct emp {
	char name[10];
	int salary;
};

int main() {
	struct emp sks;
	FILE *p, *q;
	p = fopen("Sitansu's salary file.txt", "a");
	q = fopen("Sitansu's salary file.txt", "r");
	printf("Enter name and salary:\n");
	scanf("%s %d", sks.name, &sks.salary);
	fprintf(p, "%s %d\n", sks.name, sks.salary);
	fclose(p);
	int count = 1;
	//do {
	//Reading File contents
	printf("\n\nReading File contents \n\n");
	fscanf(q, "%s %d", sks.name, &sks.salary);
	while (!feof(q)) {
		//printf("\nGot here : %d\n", count++);
		printf("%s %d\n", sks.name, sks.salary);
		fscanf(q, "%s %d", sks.name, &sks.salary);
	}
	//}while(!feof(q));
	fclose(q);	
	return 0;
}
