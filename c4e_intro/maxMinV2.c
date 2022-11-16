#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int first = 1;
	int val, maxVal, minVal;

	while(scanf("%d", &val) != EOF)
	{
		if (first || val > maxVal)
			maxVal = val;
		if (first || val < minVal)
			minVal = val;
		first = 0;
	}
	printf("Minimum Value is: %d\n", minVal);
	printf("Maximum Value is: %d\n", maxVal);

	return (0);
}
