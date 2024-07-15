#include <stdio.h>

/* Replace multiple blanks with a single blank*/

int main(void) {
	int c, last_c;

	last_c = 0;
	while ((c = getchar()) != EOF)
		if (c != ' ') {
			last_c = 0;
			putchar(c);
		} else if (c == ' ' && last_c != ' ') {
			last_c = ' ';
			putchar(c);
		}
			
	return 0;
}