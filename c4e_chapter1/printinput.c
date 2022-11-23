#include <stdio.h>  

/**
 * main - print input one word per line
 * 
 * Return: 0 Always success
*/

#define IN  1 /* Inside a text */  
#define OUT 0 /* Outside a text */ 

int main(void)
{
    int c, nw = 0, state = OUT;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(state == IN)
            {
                state = OUT;
                putchar('\n');
            }
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
                ++nw;
            }
            putchar(c);
        }
        printf("%d\n", nw);
        return (0);
    }
}
    