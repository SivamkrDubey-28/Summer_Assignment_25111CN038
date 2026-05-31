#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nxtTerm;

    printf("Enter the position (n) to find the nth Fibonacci term: ");
    scanf("%d", &n);

    // cases for the first two terms because first two are always known
    if (n == 1) {
        printf("The 1st Fibonacci term is: %d\n", t1);
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is: %d\n", t2);
    } 
    else {
        // We already know terms 1 and 2, so we start counting at term 3
        for (i = 3; i <= n; ++i) {
            nxtTerm = t1 + t2;
            
            // Shift the variables forward
            t1 = t2;
            t2 = nxtTerm;
        }
        
        printf("The %dth Fibonacci term is: %d\n", n, nxtTerm);
    }

    return 0;
}