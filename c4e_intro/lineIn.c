#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	char line[1000];
	
	printf("Enter line\n");
	scanf("%[^\n]1000s", line);
	printf("Line: %s\n", line);

	return (0);
}
