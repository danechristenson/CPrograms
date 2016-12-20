#include <stdio.h>

/* any: returns first location in  a string where that char occurs in the other */
void any(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == t[j])
				return i;
		}
	}
}