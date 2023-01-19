#include <stdio.h>
#include "main.h"

int main(void)
{
	int distance;
	struct point maxpt = {320, 200};
	printf("%i %i\n", maxpt.x, maxpt.y);

	distance = distance_from_origin(&maxpt);
	printf("The distance of maxpt from origin is %i\n", distance);
	return(0);
}
