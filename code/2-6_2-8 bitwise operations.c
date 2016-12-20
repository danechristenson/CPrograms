void testCase()
{
    int n = 1 << 9;

printf("AND\t%d\t%d\n", n, (n & 0177));
printf("OR\t%d\t%d\n", n, (n | 0177));
printf("\^\t%d\t%d\n", n, (n ^ 0177));
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
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
return( x >> (p + 1 - n)) | ~(~0 << n);
unsigned msk = ~(~0 << n);
}

/* invert: invert n bits from position p */
unsigned invert(unsigned x, int p, int n)
{
return (0);
}