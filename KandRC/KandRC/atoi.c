#include<stdio.h>

unsigned long int next = 1;

int lower(int c);
unsigned long htoi(const char s[]);
int rand(void);
void srand(unsigned int seed);
int atoi(char s[]);


/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

/* rand: return a pseudo-random integer on 0..32767 */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return(unsigned int)(next / 65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed)
{
	next = seed;
}

/* atoi: convert s to int */
int atoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
	{

	}
}

/* htoi: convert hex digits to integer */
unsigned long htoi(const char s[])
{
	int i, c;
	unsigned long n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = lower(s[i]);

		if (c == '0' && lower(s[i + 1]) == 'x')
			i++;
		else if (c >= '0' && c <= '9')
			n = 16 * n + (c - '0');
		else if (c >= 'a' && c <= 'f')
			n = 16 * n + (c - 'a' + 10);
	}
	return n;
}
