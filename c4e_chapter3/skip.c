#include <stdio.h>

/**
 * main - skip character using arrays
 *
 * Return: 0 Always Success
 */

void skip(char msg[]);
int main(void)
{
	char msg[]  = "Don't call me";
	skip(msg);
}
void skip(char msg[])
{
	puts(msg + 6);
}
