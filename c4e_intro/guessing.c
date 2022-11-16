#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int val;

	while(scanf("%d", &val) != EOF)
	{
		if (val == 42)
		{
			printf("Good job you win\n");
			break;
		}
		else if (val < 42)
			printf("Too low try again\n");
		else if (val > 42)
			printf("Too hign try again\n");
	}
	return (0);
}
