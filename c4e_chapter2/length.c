#include <stdio.h>

/**
 * main - Print length of a string
 * 
 * Return: 0 Always Success
*/


int mystrlen(char s[]);
unsigned int htoi(char s[]);


int main(void)
{
    
    printf("The lenght of this string is %d\n", mystrlen("Hello World"));s
}

int mystrlen(char s[])
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        ++i;
    }
    return i;
}


/**
 * htoi - changes string of hexadecimal numbers to their int counterparts
 * @s: string to check for 
 * 
 * Return: integer or the hexadecimal
*/

int htoi(char s[])
{
    int hexdigit, i, inhex, n;
    i = 0;

    if(s[i] == '0')
    {
        ++i;
        if(s[i] == 'x' || s[i] == 'X')
            ++i;
    }

    n = 0;
    inhex = YES;

    for(;inhex == YES; ++i)
        hexdigit = s[i] - '0';
    else if(s[i] >= 'a' && s[i] <= 'f')
        hexdigit = s[i] - 'a' + 10;
    else if(s[i] >= 'A' && s[i] <= 'F')
        hexdigit = s[i] - 'A' + 10;
    else
        inhex = NO;

    if(inhex == YES)
    {
        n = 16 * n + hexdigit;
    }

    return n;   
}