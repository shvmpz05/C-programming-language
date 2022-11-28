#include <stdio.h>

/**
 * main - prints histogram of length of words
 * 
 * Return: 0 Always Success
*/

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            putchar('\n');
        else
            putchar('*');
    }
    return (0);
}