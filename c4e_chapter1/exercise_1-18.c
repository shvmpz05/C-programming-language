#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int lim);
int removetrail(char s[]);

/**
 * main - entry point
 * 
 * Return:0 Always Success
 * 
*/

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if(removetrail(line) > 0)
        printf("%s", line);
    }
    return (0);
}

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
    s[i] = '\0';

    return (i);
}

int removetrail(char s[])
{
    int i;

    for (i = 0; s[i] != '\n'; ++i)
    ;
    --i;

    for (i > 0; ((s[i] == ' ') || (s[i] == '\t')); --i)
    ;

    if(i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}