#include <stdio.h>

/**
 * main - counting occurence of numbers spaces tabs newline and any other character
 * 
 * Return: 0 Always Success
*/

int main(void)
{
    int c, i, nspace, nother;
    int myArray[10];
    nspace = nother = 0;

    for (i = 0; i < 10; ++i)
        myArray[i] = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++myArray[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nspace;
        else
            ++nother;
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf("%d", myArray[i]);
    printf(", white space = %d, other = %d\n", nspace, nother);
}