#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int first = 1;
	int val, maxval, minval;
	char line[1000];

	while(gets(line) != NULL)
	{
		if (strcmp(line, "done") == 0)
			break;
		val = atoi(line);

		if (first || val > maxval)
			maxval = val;
		if (first || val < minval)
			minval = val;
		first = 0;
	}

	printf("Maximum value is %d\n", maxval);
	printf("Minimum value is %d\n", minval);

	return (0);
}
