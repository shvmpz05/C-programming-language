#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void find_occurences(char string[]) {
    int occurences[11];
    char testing[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for(int i = 0; i < 11; i++) {
        int count = 0;
        for(int j = 0; j < 11; j++) {
            if(testing[i] == string[j]) {
                count++;
            }
        }
        occurences[i] = count;
    }
    for(int k = 0; k < 11; k++) {
        if(occurences[k] == '\0') {
            printf("\n");
        }
        printf("%d", )
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char mystring[11];
    scanf("%c", &mystring);
    find_occurences(&mystring);

    return 0;
}
