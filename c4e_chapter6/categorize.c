#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc != 6)
	{
		fprintf(stderr, "You need to give 5 arguments\n");
		return 1;
	}
	char line[80];
	FILE *in;
	if(!(in = fopen("spooky.csv", r)))
	{
		fprintf(stderr, "Cant open file.\n");
		return 1;
	}
	FILE *file2 = fopen(argv[2], "w");
	FILE *file3 = fopen(argv[4], "w");
	FILE *file4 = fopen(argv[5], "w");
	while(fscanf(in, "%79[^\n]\n", line) == 1)
	{
		if(strstr(line, argv[1]))
			fprintf(file2, "%s\n", line);
		else if(strstr(line, argv[3]))
			fprintf(file3, "%s\n", line);
		else
			fprintf(file4, "%s\n", line);
	}
	fclose(file2);
	fclose(file3);
	fclose(file4);

	return(0);
}
