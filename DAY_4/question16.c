#include <stdio.h>
int main() {
    int start, end, num, temp, sum, digits, d, p, i;

    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers: ");
    
    for (num = start; num <= end; num++) {  // Loop through every number in the given range
        sum = 0;
        digits = 0;

        
        for (temp = num; temp > 0; temp /= 10) { //this loop os to Count how many digits the current number has
            digits++;
        }

        for (temp = num; temp > 0; temp /= 10) { // to Extract digits, calculate power, and add to sum
            d = temp % 10;
            p = 1;
            
            for(i = 0; i < digits; i++) {       // Multiply the digit by itself 'digits' times
                p *= d; 
            }
            sum += p;
        }
        
        if (sum == num) {                      //conditional statement to check If it's an Armstrong number, print it
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}