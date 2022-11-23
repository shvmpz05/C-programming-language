#include <stdio.h>

#define IN 1       /* Inside a word*/
#define OUT 0      /* Outside a word*/

/**
 * main - Counting words, characters in input
 * 
 * Return: 0 Always Success
*/
int main(void)
{
    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c =='\n')
            ++n1;
        if (c == ' ' || c == '\n' || '\t')
            state = OUT;
        else if (state == OUT )
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d, %d,  %d", n1, nc, nw);

    return (0);
}

