#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: 0 Always Success
*/

int getLeapYear(int c);

int main(void)
{
    getLeapYear(2007);

    return (0);
}

/**
 * getLeapYear - check for leap year
 * @c: integer to check
 * Return: 0 Always success
*/

int getLeapYear(int c)
{
    if((c % 4 == 0 && c % 100 != 0) || c % 400 == 0)
        printf("It is a leap year %d\n", c);
    else
        printf("%d is not a leap year\n", c);
}