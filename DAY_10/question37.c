#include <stdio.h>

int main() {
    int i,j,n=5;

    for(i=1; i<=n; i++) { //outer loop is for space in rows
        for(j=1; j<=n-i; j++)
            printf(" ");

        for(j=1; j<=2*i-1; j++) //for star pattern.
            printf("*");

        printf("\n");
    }
    return 0;
}