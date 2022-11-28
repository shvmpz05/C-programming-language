#include <stdio.h>

/**
 * main - histogram of different types of characters
 * 
 * Return: 0 Always Success
*/

int main(void)
{
    int c, i, nSpace, nDigit, nOther;
    nSpace = nDigit = nOther = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++nDigit;
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nSpace;
        else
            ++nOther;
    }
    printf("digits = ");
        for (i = 0; i < nDigit; ++i)
            putchar('*');
        putchar('\n');
    printf("Spaces = ");
        for (i = 0; i < nSpace; ++i)
            putchar('*');
        putchar('\n');
    printf("Characters = ");
        for (i = 0; i < nOther; ++i)
            putchar('*');
        putchar('\n');
    
    return (0);
}