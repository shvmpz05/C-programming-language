#include <stdio.h>
#define MAX 1000
#define LIMIT 80

/**
 * main - Entry point
 * 
 * Return:0 Always Success
*/

int getline(char line[], int lim);

int main(void)
{
    int len;
    char line[MAX];

    while ((len = getline(line, MAX)) > 0)
    {
        if (len > LIMIT)
            printf("%s", line);
    }
    return (0);
}

/**
 * getline - this method for getiing line
 * @s: array for storing the string
 * @lim: limit of the string
*/

int getline(char s[], int lim)
{
    int i, c;

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

