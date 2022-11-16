#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int i;
	FILE *hand;
	char line[1000];

	hand = fopen("romeo.txt", "r");

	while (fgets(line, 1000, hand) != NULL)
	{
		for (i = 0; i < strlen(line); i++)
			putchar(toupper(line[i]));
	}
}
