#include <stdio.h>

int main() {
    int num, ogNum, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    ogNum = num;

    while (num != 0) {
        reverse = reverse * 10 + num % 10; 
        num /= 10; 
    }

    if (ogNum == reverse) {
        printf("%d is a palindrome.\n", ogNum);
    } else {
        printf("%d is not a palindrome.\n", ogNum);
    }

    return 0;
}