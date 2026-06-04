#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++) { // Outer loop for the number of rows
        for (int j=1; j<=i; j++) { // here , Inner loop prints the '*'.
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}