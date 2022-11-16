#include <stdio.h>

/**
 * main - how to use & and *
 *
 * Return: 0 Success
 */

int main(void)
{
	int x = 2; y = 45, z[10];
	int *ip;

	ip = &x; 	/* Assigns the addresss of x to the pointer ip */
	y = *ip;	/* Assigns the value of x to y as ip points to the value at the address of x hence y is now 2 */
	*ip = 0; 	/* Assigning the value zero to x as this is where the ip pointer refers to */
	ip = &z[0]; 	/* Assinging the address of the first value of the z array or the array in itself to the pointer ip */
	
	*ip += 1;	/* increments the value of z[0] by one */
	++*ip;		/* Increments the value of z[0] by one */
	(*ip)++;	/* Increments the value of z[0] by one paranethesis means we increamenting the value it is pointing to and not the address */

	return (0);
}
