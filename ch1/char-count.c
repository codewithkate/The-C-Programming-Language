#include <stdio.h> 

/* count characters in input */

int main(void) { 
	long nc; 

	nc = 0; 

	while (getchar() != EOF) 
		++nc; 
	printf("%ld\n", nc); 
	return 0;
}