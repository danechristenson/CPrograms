#include <stdio.h>

int main(){
    printf("Changed");
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