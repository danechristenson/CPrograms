#include <stdio.h>

int main()
{
      
}

/* bit count: count 1 bits in x */
int bitcount (unsigned x) 
{
    int b;
    
    for (b = 0; x != 0; x >>= 1)
        if(x & 01)
        b++;
    return b;
}

/* bitcountFast: count 1 bits in x */
int bitbcountFast(unsigned x)
{
    int b;
    
    for( b = 0; x != 0; x >>= 1)
        if (x & 01)
        b++;
    return b;
}