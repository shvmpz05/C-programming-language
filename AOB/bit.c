#include <stdio.h>
#include <stdlib.h>

/**
 * main - bit wise manipulation
 *
 * Return: 0 always
 */
int convertToBinary(int h);

int main(void)
{
    unsigned int a = 0x66;
    unsigned int b = 0x02;
    unsigned int e = 0x89;
    unsigned int f = (0x01 << 1);
    unsigned int g = (0x01 | 0x01);
    unsigned int h = (0x66 & 0x22);
    int i = 98;
    int k = convertToBinary(98);
    unsigned int j = (0x44 | 0x22);
    unsigned int l = (0x01 & 0x01);
    unsigned int m = (0x89 & 0x01);
    unsigned int n = (~0x98);

    unsigned int c = (a & b);
    unsigned int d = (0x89 >> 3);

    printf("a & b is %x\n", c);
    printf("d left shift one is %x\n", d);
    printf("0x89 to base 10 is %d\n", e);
    printf("0x13 shift left by 1 is %x\n", f);
    printf("0x01 | 0x01 = %x\n", g);
    printf("0x66 & 0x22 = %x\n", h);
    printf("98 to base 16 is %x\n", i);
    printf("98 to binary is %d\n", k);
    printf("0x44 | 0x22 is %x\n", j);
    printf("0x01 | 0x00 is %x\n", l);
    printf("0x01 & 0x00 is %x\n", m);
    printf("value of ~0x98 is %x\n", n);
}

int convertToBinary(int h)
{
    int a[10], i;
    for (i = 0; h > 0; i++)
    {
        a[i] = h % 2;
        h = h / 2;
    }
    for (i = i - 1; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
}