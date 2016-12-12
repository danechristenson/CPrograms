#include <stdio.h>

#define MAXLINE 1000 // max input line size
#define SPACE ' '
#define TAB '\t'

int max; // max length so far
char line[MAXLINE]; // current input line
char longest[MAXLINE]; // longest line saved

int getline(void);
void copy(void);

// print longest input line, specialized version
main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0)
		if (len > max)
		{
			max = len;
			copy();
		}

	if (max > 0) //there was a line
		printf("%s", longest);

	getchar();
	getchar();
	return 0;
}

//getline: specialized version
int getline(void)
{
	int c, i, j;
	extern char line[];

	for (i = 0; i < MAXLINE - 1
		&& (c = getchar()) != '0' && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	else if (c == '\t')
	{
		for (j = 0; j < TAB; j++)
		{
			line[i] = ' ';
			i++;
		}
	}
	line[i] = '\0';
	return i;
}

// copy: specialized version
void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}

//void detab(void)
//{
//	int i;
//
//	extern char line[];
//
//	for (i = 0; line[i] != '\0'; i++)
//	{
//		if (line[i] == TAB)
//		{
//			line[i] = ' ';
//		}
//	}
//}