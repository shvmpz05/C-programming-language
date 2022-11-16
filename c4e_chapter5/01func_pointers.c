#include <stdio.h>

/**
 * main - pointers in conjuction with pointers
 *
 * Return: 0 Always 
 */

int swap(int *px, int *py);

int main(void)
{
	int a = 10;
	int b = 20;
	
	printf("a:%d " , a);
	printf("b:%d", b);
	printf("\n");

	swap(&a, &b);

	printf("a:%d ", a);
	printf("b:%d", b);

	return (0);
}

/**
 * swap - swap two interger varibles
 *
 * Return: nothing
 */

int swap(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
