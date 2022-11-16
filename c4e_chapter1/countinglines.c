#include <stdio.h>

/*counting lines in input*/

int main(void)
{
    int c, n1;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
    printf("%d\n", n1);

    return (0);
}