#include <stdio.h>


#define MAXLINE 1000 // max input line size
#define SPACE ' '
#define TAB '\t'

char line[MAXLINE]; // current input line

int getline(void);
int calculateSpaces(int offset, int tabSize);

// print longest input line, specialized version
int main()
{
	int tabSize = 4;
	int i, j ,offset, spaces;

	spaces = 0;
	
	while (getline() > 0)
	{
		for  (i = 0, offset = 0; line[i] != '\0'; i++)
		{
			if (line[i] == TAB)
			{
				spaces = calculateSpaces(offset, tabSize);
				for ( j = 0; j < spaces; j++)
				{
					putchar(SPACE);
					offset++;
				}
			}
			else
			{
				putchar(line[i]);
				offset++;
			}
		}
	}
		
	getchar();
	getchar();
	return 0;
}

//getline: specialized version
int getline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != '0' && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

// calculateSpaces: return the number of spaces to replace the tabs
int calculateSpaces(int offset, int TabSize)
{
	return TabSize - (offset % TabSize);
}