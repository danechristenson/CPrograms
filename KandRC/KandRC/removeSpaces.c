#include <stdio.h>

/* remove any double spaces */

int main(void)
{
	int c, lastIn;

	lastIn = 0;

	while ((c = getchar()) != '0')
	{
		if (c == ' ')
		{
			if (lastIn == 0)
			{
				lastIn = 1;
				putchar(c);

			}
		}
		else
		{
			lastIn = 0;
			putchar(c);
		}
	}
	return 0;
}