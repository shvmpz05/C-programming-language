#include <stdio.h>

/**
 * strlen - get length of a string 
 *
 * Return: number of characters in string
 */

int _strlen(char *s);

int main(void)
{
	int string_len;

	string_len = _strlen("Hello World!");

	printf("The string is %i characters long \n", string_len);

	return (0);
}

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}
