#include <stdio.h>
#define MAXLINE 1000
/**
 * main - Entry point
 * 
 * Return: 0 Always Success
*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);
    return (0);
}

/**
 * getline - gets line from input 
 * @s: character from line 
 * @lim: limit of the line 
 * 
 * Return: line
*/
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    else
    {
        while ((c = getchar()) != EOF && c != '\n')
        {
            ++i;
        }
        if (c == '\n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return (i);
}

/** 
 * copy - copy line thats the longest
 * @to: where to end on the line
 * @from: where to start from on the line
 * 
 * Return: line
*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}