#include <stdio.h>

/**
 * factorial - gets the factorial of an integer
 *
 * main - entry point
 *
 * Return: 0 Always seccess
 */

int factorial(int n);

int main(void)
{
	printf("%d\n", factorial(4));

	return (0);
}

int factorial(int n)
{
	if (n <= 0)
		return (1);
	return n * factorial(n - 1);
}
