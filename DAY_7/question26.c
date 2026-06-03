#include <stdio.h>
int fibonacci(int n){
    if (n==0){   //base case
        return 0;
    }else if(n==1){ //base case.
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);  //Recursive function to return the nth Fibonacci number.
    }
    }
int main(){
    int terms ;
    printf("enter the no. of terms:");
    scanf("%d",&terms);
     
    printf("fibonacci series:");
    for(int i=0; i<terms; i++){
        printf("%d",fibonacci(i));
    }
    return 0;
}