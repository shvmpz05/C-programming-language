#include "main.h"

/**
 * sum_digit - return sum of all digits in a given value
 * @n - input from user
 *
 * Return: 0 Success
 */

unsigned int sum_digit(unsigned int n)
{
	/* base case */
	if (n == 0)
		return (0);
	return ( (n % 10) + sum_digit( n / 10));
}
