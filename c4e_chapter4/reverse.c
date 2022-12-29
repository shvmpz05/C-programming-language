#include <string.h>
#include <stdio.h>

void print_reverse(char *s)
{
	int length = strlen(s);
	char reversed[length - 1];

	for(int i = 0; i < length; i++)
	{
		reversed[i] = s[length - 1 - i];
	}

	reversed[length] = '\0';

	printf("%s\n", reversed);
}
