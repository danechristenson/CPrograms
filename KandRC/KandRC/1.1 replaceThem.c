#include <stdio.h>

int main(void)
{
	int c;
	while ((c = getchar()) != '0')
	{
		if (c == '\t')
		{
			printf("\\t");
		}
		else if (c == '\b')
		{
			printf("\\b");
		}
		else if (c == '\\')
		{
			printf("\\\\");
		}
		else if (c == ' ')
		{
			putchar('_');
		}
		else
		{
			putchar(c);
		}
	 }
}