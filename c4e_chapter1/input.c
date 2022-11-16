#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
