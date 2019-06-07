#include <stdio.h>
#include <stdlib.h>

int main() {
	int *mall, *call, *reall;
	int no_of_elements = 5;
	mall = (int*)malloc(sizeof(int));
	call = (int*)calloc(no_of_elements, sizeof(int)); //Initialises to 0 all values
	reall = (int*)realloc(call,sizeof(int));
	*mall = 50;
	printf("\n%U", mall);
	printf("\n%d", *mall);
	printf("\n%U", call);
	printf("\n%U", reall);
	printf("\n%d", *reall);
	free(mall);
	//free(call);
	free(reall);
	return 0;

}
