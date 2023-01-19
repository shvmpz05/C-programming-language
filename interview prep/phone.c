#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *create_Phone_Number(char phoneNumber[15], const unsigned char nums[10]) {
    sprintf(phoneNumber, "(%u%u%u) %u%u%u-%u%u%u%u", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]);
    return phoneNumber;
}

int main(void) {
    char phnum[15];
   printf("%s\n", create_Phone_Number(phnum, (const unsigned char[]){1,2,3,4,5,6,7,8,9,0}));
}