#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    printf("Enter number integer: ");
    scanf("%d %d", &a, &b);
    printf("Enter Number floating point: ");
    scanf("%f %f", &c, &d);
    
    int sum_int = a + b;
    int diff_int = a - b;
    
    float sum_float = c + d;
    float diff_float = c - d;
    printf("%d %d\n", sum_int, diff_int);
    printf("%.1f %.1f", sum_float, diff_float);
    
    return 0;
}
