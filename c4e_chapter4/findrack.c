#include <string.h>
#include <stdio.h>

void findtrack(char search_for[], char tracks[][80])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if(strstr(tracks[i], search_for))
		{
			printf("Track %i:' '%s'\n", i , tracks[i]);
		}
	}
}
