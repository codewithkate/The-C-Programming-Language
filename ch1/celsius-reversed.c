#include <stdio.h>

#define LOWER 	0			/* lower limit of temperature scale */
#define UPPER 	400		/* upper limit */
#define STEP		25		/* step size */

int main(void) {
	printf("Fahrenheit-Celcius Table\n");
	
	float fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%5.0f %10.1f\n", fahr, (5.0/9.0) * (fahr-32));
}