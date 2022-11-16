#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	printf("Celcius \t Ferehheit\n");

	float celcius, ferenheit;
	int upper, lower, step;

	lower = 0;
	step = 20;
	upper = 300;

	celcius = lower;

	while (celcius <= upper)
	{
		ferenheit = ((9 / 5) * celcius) + 32;
		printf("%4.1f \t \t %6.1f\n", celcius, ferenheit);
		celcius = celcius + step;
	}
	return (0);
}
