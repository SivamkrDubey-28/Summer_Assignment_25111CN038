#include <stdio.h>
int sumOfDigits(int num) {
    // Base case: if the number becomes 0, return 0
    if (num == 0) {
        return 0;
    }else{
        return (num % 10) + sumOfDigits(num / 10);  //// Recursive case: extract the last digit and add it to the sum of the remaining digits
    }
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    result = sumOfDigits(num);
    printf("The sum of the digits is: %d\n", result);

    return 0;
}