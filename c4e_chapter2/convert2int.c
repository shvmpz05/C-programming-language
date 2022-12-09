#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: 0 Always Success
*/

int aToI(char s[]);
int main(void)
{
    printf("%d\n", aToI("Hello world"));
}

int aToI(char s[])
{
    int i, n; 

    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;   
}