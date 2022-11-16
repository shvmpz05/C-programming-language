#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always Success
 */

int main(void)
{
	int usf, euf;

	printf("Enter Floor Number\n");
	scanf("%d", &usf);

	euf = usf - 1;

	printf("EU floor is %d\n", euf);
}
