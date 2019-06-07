#include <stdio.h>
#include <stdlib.h>

int main() {
	int *mall, *call, *reall;
	int no_of_elements = 3;
	mall = (int*)malloc(sizeof(int));
	call = (int*)calloc(no_of_elements, sizeof(int)); //Initialises to 0 all values
	printf("\nCalloc address before realloc %U", call);
	printf("\nCalloc value %d", *call);
	//realloc(call,900*sizeof(int));
	reall = (int*)realloc(call,90*sizeof(int));
	*mall = 50;
	printf("\nMalloc address %U", mall);
	printf("\nMalloc value %d", *mall);
	printf("\nCalloc address %U", call); 
	printf("\nCalloc value %d", *call); //garbage value at location pointed by call variable
	printf("\nRealloc address %U", reall);
	printf("\nRealloc value %d", *reall); // all original contents are copied into new location hence value 0
	free(mall);
	//free(call); //no longer available
	free(reall);
	return 0;

}
