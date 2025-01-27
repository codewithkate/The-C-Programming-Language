#include <stdio.h>

/* count lines in input */

int main(void) {
	int c, nl, blanks, tabs;

	nl = 0;
	blanks = 0;
	tabs = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n') {
			++nl;
		} else if (c == ' ') {
			++blanks;
		} else if (c == '\t') {
			++tabs;
		}
	printf("newlines: %d\nblanks: %d\ntabs: %d\n", nl, blanks, tabs);
	return 0;
}