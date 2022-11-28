#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: 0 Always Success
*/

void tempConversion();

int main(void)
{
    tempConversion();

    return(0);
}

 /**
  * tempConversion - display Celcius to Ferenheit conversion table
  * 
  * Return: 
 */

void tempConversion()
{
    int lower, upper, step;
    float celcius, ferenheit;

    lower = 0;
    upper = 300;
    step = 20;
    celcius = lower;

    printf("Celcius \t Ferehheit\n");

    while (celcius <= upper)
    {
        ferenheit = ((9 / 5) * celcius) + 32;
        printf("%4.1f \t \t %6.1f\n", celcius, ferenheit);
        celcius = celcius + step;
    }
}