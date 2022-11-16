#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 
 */

int main(void)
{
	float fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3.1f \t \t %6.f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return (0);
}
