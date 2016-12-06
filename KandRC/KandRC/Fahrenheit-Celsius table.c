#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

int fToC()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%11.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}