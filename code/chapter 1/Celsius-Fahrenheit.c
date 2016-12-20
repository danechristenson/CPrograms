#include <stdio.h>
#define LOWER -40
#define UPPER 200
#define STEP 20
/* converts celsius to Fahrenheit
	and prints a table */

void cToF()
{
	float fahr, celsius;

	celsius = LOWER;
	printf("Celsius\tFahrenheit\n");
	for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
	{
		fahr = (celsius * 9 / 5) + 32;
		printf("%5.0f\t%6.0f\n", celsius, fahr);
	}
	return 0;
}