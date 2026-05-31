#include <stdio.h>
int main(){
    int n,i;
    int t1=0,t2=1,nxtterm;

    printf("enter the no. of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:");

    for(i=0;i<=n;++i){
        //to print the current term.
        printf("%d",t1);
        //now for calculating the next term.
        nxtterm =t1 + t2;
        //now to shift the variable for the next iteration.
        t1=t2;
        t2=nxtterm;

    }
    printf("\n");

    return 0;


}