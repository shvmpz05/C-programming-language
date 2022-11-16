#include <stdio.h>

/* Counting all blanks, tabs and newlines*/

int main(void)
{
    int c, n1, n2, n3;
    n1 = 0;
    n2 = 0;
    n3 = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++n1;
        else if (c == '\n')
            ++n2;
        else if (c == ' ')
            ++n3;
    }
    printf("Blanks: %d\n Tabs: %d\n Newlines: %d\n", n3, n1, n2 );
    return (0);
}