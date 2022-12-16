#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Always Success
 */

void forturneCookie(char s[]);
int main(void)
{
	char quote[] = "Cookies make you fat";
	forturneCookie(quote);
}

void forturneCookie(char s[])
{
	printf("%s", s);
	printf("space occupied by msg is %i\n", sizeof(s));
}
