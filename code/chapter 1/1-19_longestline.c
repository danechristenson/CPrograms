#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getlineO(char line[], int maxline);
void copyO(char to[], char from[]);
void reverse(char string[]);
void discardNewLine(char string[]);

/* print the longest input line */
longline()
{
	int len; // current line length
	int max; // max length seen
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; // longest line saved here

	max = 0;
	while ((len = getlineO(line, MAXLINE)) > 0)

		if (len > max)
		{
			max = len;
			reverse(longest);

		}
	if (max > 0) // there was a line
		printf("%s", longest);

	getchar();
	getchar();
	return 0;
}

// getline: read a line into s, return length
int getlineO(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != '0' && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'to; assume to is large enough
void copyO(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

void reverse(char string[])
{
	int i, j;
	char temp;

	for (j = 0; string[j] != '\0'; j++)
		;
	--j;

	for (i = 0; i < j; i++)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
		--j;
	}
}

void discardNewLine(char string[])
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '\n')
		{
			string[i] = '\0';
		}
	}
}