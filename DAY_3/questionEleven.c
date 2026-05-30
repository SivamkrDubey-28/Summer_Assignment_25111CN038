#include <stdio.h>

int main() {
    int a, b, temp;    //taking two no.s as input which are going to be checked .

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {    //using while loop because we dont know the no. of iteration.
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    return 0;
}