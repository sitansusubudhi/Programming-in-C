#include <stdio.h>
#include <stdlib.h>

int main() {

	struct node {
		int x;
		struct node* next;
	};

	struct node* p = (struct node*)malloc(sizeof(struct node));
	printf("\n%U", p);
	printf("\n%d", sizeof(struct node));
	printf("\n%d", sizeof(struct node*));
	printf("\n%d", sizeof(int));
	return 0;
}
