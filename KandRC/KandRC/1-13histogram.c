#include <stdio.h>

/* count digits, white space, others */
histogram()
{
	int c, i, j, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '0')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits = ");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", whitespace = %d, other = %d\n",
		nwhite, nother);

	printf("number ");
	for (i = 0; i < 10; ++i)
	{
		printf("%d: ", i);
		for (j = 0; j < ndigit[i]; ++j)
		{
			putchar('+');
		}
		putchar('\n');
	}

	printf("whitespace: ");
	for (i = 0; i < nwhite; ++i)
	{
		putchar('+');
	}

	printf("\nothers: ");
	for (i = 0; i < nother; ++i)
	{
		putchar('+');
	}
	getchar();
	getchar();
}