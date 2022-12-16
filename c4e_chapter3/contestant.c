#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:0 Always Success
 */

int main(void)
{
	int contestant[] = {1, 2, 3};
	int *choice = contestant;

	contestant[0] = 2;
	contestant[1] = contestant[2];
	contestant[2] = *choice;

	printf("I am going to pick contestant %i\n", contestant[2]);
}
