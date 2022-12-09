#include <stdio.h>

/**
 * main - Print length of a string
 * 
 * Return: 0 Always Success
*/

int mystrlen(char s[]);

int main(void)
{
    
    printf("The lenght of this string is %d\n", mystrlen("Hello World"));
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