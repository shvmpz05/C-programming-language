#include <stdio.h>
#include <float.h>
#include <limits.h>

/**
 * main - Printing ranges of char int short and long
 * 
 * Return: 0 (Always) success
*/

int main(void)
{
    printf("Print ranges of various data types in c\n");

    printf("Minimum of Signed Char %d\n", -(char)((unsigned char) ~0 >> 1) -1);
    printf("Maximum of Singed char %d\n", (char)((unsigned char) ~0 >> 1));

    printf("Minimum Signed short %d\n", -(short)((unsigned short) ~0 >> 1) -1);
    printf("Maximum of signed short %d\n", (short)((unsigned short) ~0 >> 1));

    printf("Minimum of Singed int %d\n", -(int)((unsigned int) ~0 >> 1) -1);
    printf("Maximum of singed int %d\n", (int)((unsigned int)~0 >> 1));

    printf("Minimum of singed long %d\n", -(long)((unsigned long)~0 >> 1) -1);
    printf("Maximum of singed long %d\n", (long)((unsigned long)~0 >> 1));

    printf("Maximum of Unsigned char %d\n", (unsigned char)~0);
    printf("Maximum of int %u\n", (unsigned int)~0);
    printf("Maximum of Short %d\n", (unsigned short)~0);
    printf("Maximum of long %lu\n", (unsigned long)~0);

    printf("Ranges of various floating-point types from standard headers:\n");
    printf("Minimum Signed Char %d\n", SCHAR_MIN);
    printf("Maximum Signed Char %d\n", SCHAR_MAX);

    printf("Minimum Signed Short %d\n", SHRT_MIN);
    printf("Maximum Signed Short %d\n", SHRT_MAX);

    printf("Minimum Signed Int %d\n", INT_MIN);
    printf("Maximum Signed Int %d\n", INT_MAX);

    printf("Minimum Signed Long %ld\n", LONG_MIN);
    printf("Maximum signed Long %ld\n", LONG_MAX);

    /* Unsigned Maximum Values */

    printf("Maximum Unsigned Char %d\n", UCHAR_MAX);
    printf("Maximum Unsigned Short %d\n", USHRT_MAX);
    printf("Maximum Unsigned Int %u\n", UINT_MAX);
    printf("Maximum Unsigned Long %lu\n", ULONG_MAX);

}