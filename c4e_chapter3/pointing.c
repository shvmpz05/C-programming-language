#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Always Success
 */

void go_south_east(int *lon, int *lat);
int main(void)
{
	int lon = -50;
	int lat = 54;

	go_south_east(&lon, &lat);
	printf("You are now at coordinate %i latitude %i longitude\n", lat, lon);

	return(0);
}

void go_south_east(int *lon, int *lat)
{
	*lon += 1;
	*lat -= 1;
}
