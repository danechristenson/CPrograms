#include <stdio.h>
#define LOWER -40
#define UPPER 200
#define STEP 20
/* converts celsius to Fahrenheit
and prints a table */

void convertToFahr(float c);

void main()
{
	float celsius;

	celsius = LOWER;
	printf("Celsius\tFahrenheit\n");
	for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
	{
		convertToFahr(celsius);
	}

	getchar();
	return;
}

void convertToFahr(float celsius)
{
	float fahr;

	fahr = (celsius * 9 / 5) + 32;
	printf("%5.0f\t%6.0f\n", celsius, fahr);
	return;
}