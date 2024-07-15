#include <stdio.h>

/* copy input to output; 2nd version 
	for example, "hello\world	\b" to "hello\\world\t\\b" 
*/

int main(void){
	int c;

	while ((c =getchar()) != EOF)
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	return 0;
}