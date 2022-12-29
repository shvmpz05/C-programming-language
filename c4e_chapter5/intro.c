#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Alway Success
 */

int main(void)
{
	int nums[] = {1, 2, 3};
	printf("address of nums i %p\n", nums);
	printf("address of nums + 1 %p\n", nums + 1);

	char name[40];
	int age;
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	printf("Entery you age: ");
	scanf("%i\n", &age);
	printf("Name: %s\nAge: %i", name, age);
	return (0);
}
