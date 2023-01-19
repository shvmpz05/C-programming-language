#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    int operation_and = 0;
    int operation_or = 0;
    int operation_xor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (((i & j) > operation_and) && ((i & j) < k))
            {
                operation_and = i & j;
            };
            if (((i | j) > operation_or) && ((i | j) < k))
            {
                operation_or = i | j;
            };
            if (((i ^ j) > operation_xor) && ((i ^ j) < k))
            {
                operation_xor = i ^ j;
            };
        };
    };
    printf("%d\n%d\n%d\n", operation_and, operation_or, operation_xor);
};

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
