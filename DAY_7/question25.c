#include <stdio.h>
int factorial(int n){
    if (n==0||n==1){    //this is base case.
        return 1;
    }else{
        return n*factorial(n-1); //this is recursive case.
    }
}
int main(){
    int num ;
    printf("enter a no. :");
    scanf("%d",&num);
    printf("factorial of %d is %d\n",num,factorial(num));
}