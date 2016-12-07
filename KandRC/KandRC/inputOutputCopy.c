#include <stdio.h>

/* copy input to output; v2 */
inOut()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		putchar(getchar() != EOF);
		putchar(EOF);
	}

	getchar();
}
