#include <stdio.h>
#include "main.h"

int main(void)
{
	char *juices[] = {
"gonfruit", "waterberry", "sharonfruit", "uglifruit",
"rumberry", "kiwifruit", "mulberry", "strawberry",
"blueberry", "blackberry", "starfruit" 
};

	char *a;

	puts(juices[6]);
	print_reverse(juices[7]);
	a = juices[2];
	juices[2] = juices[8];
	juices[8] = a;
	puts(juices[8]);
	print_reverse(juices[(18 + 7) / 5]);
	puts(juices[2]);
	print_reverse(juices[9]);
	juices[1] = juices[3];
	puts(juices[10]);
	print_reverse(juices[1]);
return 0;
}
