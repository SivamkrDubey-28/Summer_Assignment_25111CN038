#include <stdio.h>

int main() {
    int num,count= 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>0) {     
        count += num & 1;     //here using bitwise and if both bit 1 then to increase the count. 
        num = num >> 1;       //here using right shift to check the next bit.
    }

    printf("Number of set bits = %d", count);

    return 0;
}