#include <stdio.h>

/**
 * main - understanding pointers and arrays
 *
 * Return: 0 
 */

int main(void)
{
	int a[10];		/* Initailizing an array */
	int *pa;		/* Inititalizing a pointer */

	pa = &a[0];		/* Assigning variable to pointer pa contains the address of a[0]*/
	x = *pa;		/* Copying the content of a[0] to z */

				/* If pa points to an element in an array then pa + 1 points to the next element of the array
	 			* *(pa + 1) refers to element a[1] of the array
	 			* Thus pa + i == &a[i] and *(pa + i) has the contents of a[i]
	 			*/

	pa = a;			/* Alternative method of assigning address to pointer since variable of array
				 * since the name of the variable of an array si the same as the location of the first element
				*/
	int b = *(a + i);	/* Hence this can also be a reference to an element a[i] */
}

