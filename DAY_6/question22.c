#include <stdio.h>

int main() {
    int num,binary = 0,place = 1,remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder= num%2;
        binary= binary + remainder*place;  //to Adds the binary digit to the correct position.
        place= place*10;  //shift to the next digit place.
        num= num / 2;
    }

    printf("Binary equivalent = %d" ,binary);

    return 0;
}