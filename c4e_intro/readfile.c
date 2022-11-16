#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	char line[1000];
	FILE *hand;

	hand = fopen("romeo.txt", "r");
	
	while (fgets(line, 1000, hand) != NULL)
	{
		printf("%s", line);
	}
	return (0);
}
