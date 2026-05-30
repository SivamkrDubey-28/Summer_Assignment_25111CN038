#include <stdio.h>

int main() {
    int st, end, i, j, isPrime;  //for the range , here i have taken st as starting no. & end as last range digit.

    printf("Enter the starting number: ");
    scanf("%d", &st);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", st, end);

    for (i = st; i <= end; i++) {
        if (i <= 1)
            continue;    //to skip the current iteration if it is less than equal to 1.

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}