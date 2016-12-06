#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int fahr;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%6.1d\t\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}