#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter base (x): ");  //here we will give the base no. 
    scanf("%d", &x);

    printf("Enter exponent (n): ");  //here we will give the power upto we want .
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("x raise to the power n :  %d^%d = %d\n", x, n, result);

    return 0;
}