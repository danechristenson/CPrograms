#include <stdio.h>
#include <limits.h>

findRange()
{
	//chars
	printf("Number of bits in a char: %d\n\n", CHAR_BIT);

	printf("Maximum number of char: %d\n", CHAR_MAX);
	printf("Minimum number of char: %d\n\n", CHAR_MIN);

	printf("Maximum number of signed char: %d\n", SCHAR_MAX);
	printf("Minimum number of signed char: %d\n\n", SCHAR_MIN);

	printf("Maximum number of unsigned char: %d\n\n\n",(unsigned) UCHAR_MAX);

	//shorts
	printf("Maximum number of short: %d\n", SHRT_MAX);
	printf("Minimum number of short: %d\n\n", SHRT_MIN);

	printf("Maximum number of unsigned short: %d\n\n\n",(unsigned) USHRT_MAX);


	// integers
	printf("Maximum number of int: %d\n", INT_MAX);
	printf("Minimum number of int: %d\n\n", INT_MIN);

	printf("Maximum number of unsigned int: %u\n\n\n", UINT_MAX);

	//longs
	printf("Maximum number of long: %ld\n", LONG_MAX);
	printf("Minimum number of long: %ld\n\n", LONG_MIN);

	printf("Maximum number of unsigned long: %ud", ULLONG_MAX);


	getchar();
	

}
