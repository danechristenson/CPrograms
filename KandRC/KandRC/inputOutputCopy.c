#include <stdio.h>

/* copy input to output; v2 */
inOutCopy()
{
	int c;

	while ((c = getchar()) != '0')
	{
		putchar(c);
		printf("Value is %d\n", getchar() != EOF);
		printf("The value of EOF is %d\n", EOF);
	}
}
