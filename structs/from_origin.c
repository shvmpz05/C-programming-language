#include <math.h>
#include "main.h"

double distance_from_origin(struct point *p)
{
	return sqrt(p->x * p->x + p->y * p->y);
}
