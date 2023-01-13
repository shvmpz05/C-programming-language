#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int myNums[] = {a, b, c, d};
    int largest = 0;
    for (int i = 0; i < 4; i++) {
        if( largest < myNums[i]) {
            largest = myNums[i];
        }
    }
    return largest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}