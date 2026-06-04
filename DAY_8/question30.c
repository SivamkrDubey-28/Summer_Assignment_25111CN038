#include <stdio.h>

int main() {
    int rowlimit=5;
    
    for (int i=1; i<=rowlimit; i++){
        
        for (int j = 1; j <= i; j++){ // Inner loop prints numbers from 1 up to the current row. 
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}