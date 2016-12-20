#include <stdio.h>

int main()
{
      int n = 1 << 9;
    
    printf("AND\t%d\t%d\n", n, (n & 0177));
    printf("OR\t%d\t%d\n", n, (n | 0177));
    printf("Left\t%d\t%d\n", n, (n << 7));
    printf("Right\t%d\t%d\n", n, (n >>7));
    printf("~\t%d\t%d\n", n, (~n));
    getchar();
    return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x  >> (p + 1 - n)) & ~(~0 << n );
}

/* setbits: return x with n bits at position p */
unsigned setbits(unsigned x, int p, int n)
{
    return( x >> (p + 1 - n)) & ~(~0 << n);
}