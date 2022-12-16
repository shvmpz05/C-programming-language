#include <stdio.h>
#define MAXLINE 1000

/**
 * main - Entry point
 * 
 * Return:0 
*/

void squeeze(char s1[], char s2[]);
int mgetline(char line[], int maxline);
int main(void)
{
	char s1[MAXLINE], s2[MAXLINE];

	putchar('s');
	putchar('1');
	mgetline(s1, MAXLINE);

	putchar('s');
	putchar('2');
	mgetline(s2, MAXLINE);

	squeeze(s1, s2);
	printf("%s", s1);

	return (0);
}

/**
 * mgetline - get string passed to the input
 *
 * @line: string to check
 * @maxline: max string to be input or copied
 *
 * @Return: string
 */

int mgetline(char line[], int maxline)
{
	int i, c;

	for(i = 0;i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	
	if(c == '\n')
		line[i++] = c;

	line[i] = '\0';
}

/**
 * squeeze - remove characters that are in string 1 that are in string 2
 *
 * @s1: string to remove charactes from 
 * @s2: string to ue to remove characters
 *
 * Return: nothing
 */

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	k = 0;

	for(i = 0; s1[i] != '\0'; ++i)
	{
		for(j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
			;
		if(s2[j] == '\n')
			s1[k++] == s1[i];
	}
	s2[k] = '\0';
}










