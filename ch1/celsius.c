#include <stdio.h>

/*
print Fahrenheit-Celsius table
for fahr = 0, 25, ..., 400
*/

int main (void) {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature scale */
	upper = 400;		/* upper limit */
	step = 25;		/* step size */
	
	printf("Fahrenheit-Celsius Table\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%5.0f %10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
