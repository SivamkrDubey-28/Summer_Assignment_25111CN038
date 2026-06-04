#include <stdio.h>

int main() {
    int rowLimit = 5;
    
    for (int i = 1; i <= rowLimit; i++) {
        
        for (int j = 1; j <= i; j++) {  // Inner loop prints the current row's number repeatedly.
            printf("%d", i);
        }  
        printf("\n");
    }
    return 0;
}