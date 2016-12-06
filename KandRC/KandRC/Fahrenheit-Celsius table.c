#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

int main()
{
	int fahr;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		printf("%6.1d\t\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}