#include <stdio.h>

/* converts celsius to Fahrenheit
	and prints a table */

int main()
{
	float fahr, celsius;
	float upper, lower, step;

	lower = -40;
	upper = 200;
	step = 20;

	celsius = lower;
	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper)
	{
		fahr = (celsius * 9 / 5) + 32;
		printf("%5.0f\t%6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}