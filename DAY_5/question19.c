#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {       //if the no. num is divisible by its i then they are the factors.
            printf("%d ", i);
        }
    }

    return 0;
}