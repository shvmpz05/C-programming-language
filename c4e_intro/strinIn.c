#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always Success
 */

int main(void)
{
	char name[100];

	printf("Enter Name\n");
	scanf("%100s", name);
	printf("Hello %s ", name);
	
	return (0);
}
