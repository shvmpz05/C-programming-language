#include <stdio.h>
#include <stdlib.h>

int cp(void);

int main(void)
{
	int a = cp();

	printf("%d\n", a);

}

int cp(void)
{
	char *s;

	s = malloc(12);
	strcpy(s, "Best School");
	return(0);
}
