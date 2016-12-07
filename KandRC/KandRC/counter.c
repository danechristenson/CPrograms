#include<stdio.h>

int counter(void)
{
	int c, nl, blk, tab;
	nl = 0;
	blk = 0;
	tab = 0;
	while ((c = getchar()) != '0')
	{
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tab;
		else if (c == ' ')
			++blk;
	}

	printf("Newline\tTabs\tSpaces\n");
	printf("%6d\t%4d\t%4d\n", nl, tab, blk);
	getchar();
	return 0;
}