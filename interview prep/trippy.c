#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void trippy(int n) {
    int margin = n;
    for(int i = n; i >= 1; i--) {
        for(int j = n; j >= 1; j--) {
            printf("%d", margin);
        };
        printf("\n");
    };
};

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    trippy(n);
    return 0;
}