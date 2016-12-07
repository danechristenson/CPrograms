#include <stdio.h>

/* remove any double spaces */

int main(void)
{
	int c, cc;

	cc = 0;

	while ((c = getchar()) != '0')
	{
		if (c == ' ')
		{
			if (cc == ' ')
			{
				//throw away line
				cc = 0;
			}
			else
			{
				cc = c;
				putchar(c);
			}

		}
		else
			putchar(c);
	}
}