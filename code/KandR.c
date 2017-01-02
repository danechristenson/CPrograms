#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* atoi: convert s to interger; v2 */
int atoiv2(char s[])
{
    int i, n, sign;
    
    for(i = 0;isspace(s[i]); i++) /* skip white space */
    ;
    sign = (s[i] == '-') ? -1:1;
    if(s[i] == '+' || s[i] == '-') /* skip sign */
    i++;
    
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}

// shellsort: sort v[0] ... v[n-1] into increasing order
void shellsort(int v[], int n) 
{
    int gap, i, j, temp;
    
    for (gap = n/2; gap > 0; gap /= 2)
    {
        
        for(i = gap; i < n; i ++)
        {
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) 
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

// reverse: reverse string s in place
void reverse(char s[])
{
    int c, i , j;
    
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) 
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

// itoa: convert n to characters in s 
void itoa( int n, char s[])
{
    int i, sign;
    
    if((sign = n ) < 0) //record sign
    n = -n; //make n positive
    i = 0;
    
    do{ // generate digits in reverse order
        s[i++] = n % 10 + '0'; // get next digit
    } while ((n /= 10) > 0); //delete it
    
    if(sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void main()
{
    return 0;
}