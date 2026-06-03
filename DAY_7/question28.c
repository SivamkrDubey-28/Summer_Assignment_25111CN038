#include <stdio.h>

int reverse(int num, int rev){
    if(num == 0)  //base case.
        return rev;

    return reverse(num / 10, rev * 10 + num % 10); //Recursive case: take the last digit and build the reversed number.
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverse(num, 0);

    printf("Reversed number = %d\n", reversed);

    return 0;
}