#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int lastdigit = n % 10;
        sum +=  lastdigit;
        n = n / 10;
    };
    printf("%i", sum);
    return 0;
}