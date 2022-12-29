#include <stdio.h>
#include "main.h"

char tracks[][80] = {
                "I left my heart in Harvad Med School",
                "Newark, Newark - a wonderful town",
                "Dancing with a dork",
                "From here to maternity",
                "The girl from Iwo Juma",
};

int main(void)
{
	char usertrack[80];
	char check[80];
	int i;
	
	printf("Search for: ");
	fgets(usertrack, 80, stdin);
	findtrack(usertrack, tracks);
	return(0);
}
