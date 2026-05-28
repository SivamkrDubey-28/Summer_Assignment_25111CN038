#include<stdio.h>
int main(){
    int n,d;
    int count=0;
    printf("enter the number ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        count++;
        n=n/10;
    }
    
    printf("%d",count);
    return 0;
}