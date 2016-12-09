#include <stdio.h>

#define IN 1
#define OUT 0

int oneWord(void)
{
	int c;

	while ((c = getchar()) != '0')
	{
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);

	}
}