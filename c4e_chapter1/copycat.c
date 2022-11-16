#include <stdio.h>

/* Copying input to output but with few blanks*/

int main(void)
{
    int c;
    char space_found = 0;

    while ((c = getchar()) != EOF)
    {
        if ((!space_found) || (c != ' '))
            putchar(c);
        space_found = (c == ' ');
    }
    return (0);
}