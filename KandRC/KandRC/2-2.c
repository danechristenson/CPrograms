#include <stdio.h>

#define STRINGSIZE 100

main()
{
	int i = 0;
	int lim = 10;
	char c;
	char s[STRINGSIZE];

	while (i < lim - 1)
	{
		c = getchar();
		if (c == '\n')
			break;
		else if (c == EOF)
			break;

		s[i] = c;
		i++;
		
	}

	//for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {}

}