#include <stdio.h>
#include <stdlib.h>

/**
 * main - arguments to main
 * @argc - number of arguments supplied to the program
 * @argv - pointers of strings to that 
 *
 * Return: 0 Always Success
 */

int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
