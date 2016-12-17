#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] !=c)
			s[j++] = s[i];
	s[j] = '\0';
}

/* squeezealt: delete from s1 if in s2 */
void squeezeAlt(char s[], char s2[])
{
	int i, j, k;

	for( i = 0; s2[i] != '\0'; i++)
		for( j = k = 0; s[j] != '\0'; j++)
			if(s[j] != s2[i])
				s[k++] = s[j];
		s[k] = '\0';
}
/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while (s[i] != '\0') /*find end of s */
		i++;
	while ((s[i++] = t[j++]) != '\0') /* copy t */
		;
}

int main()
{
	return 0;
}