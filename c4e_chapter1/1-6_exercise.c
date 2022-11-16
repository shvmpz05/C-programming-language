#include <stdio.h>

int main(void)
{
    int c = getchar();
    
    if (c == EOF)
    {
        printf("%d\n", c);
    }
    else
    {
        printf("Its not EOF");
    }
}