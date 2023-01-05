#include <stdio.h>

int main(void)
{
	float longitude, latitude;
	char info[89];
	while(scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
	{
		if((latitude > 25 && latitude < 35))
			if((longitude > -76 && longitude < -64))
				printf("%f, %f, %s\n", latitude, longitude, info);
	}
	return(0);
}
