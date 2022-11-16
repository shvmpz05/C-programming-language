#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always success
 */

int mult(int a, int b);

int main(void)
{
	int mult();
	int retval;

	retval = mult(4,2);
	printf("Answer: %d\n", retval);
	
	return (0);
}

int mult(int a, int b)
{
	int c = a * b;
	return (c);
} 
