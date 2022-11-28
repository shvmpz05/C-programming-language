#include <stdio.h>

/**
 * main - Entry point 
 * 
 * Return: 0 Always Success
*/

int power(int base, int num);

int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));

    return (0);
}

/**
 * power - gets a base and powers it to the input given
 * @base - number to be powered up
 * @num - power to use
 * 
 * Return: result int
*/

int power(int base, int num)
{
    int i, p;

    p = 1;
    for (i = 1; i <= num; ++i)
        p = p * base;
    return (p);
}