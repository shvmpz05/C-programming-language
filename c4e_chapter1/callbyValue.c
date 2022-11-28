#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int power(int base, int n);

int main(void)
{
    printf("%d\n", power(3, 4));

    return (0);
}

int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return (p);
}