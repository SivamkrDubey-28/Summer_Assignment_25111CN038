#include <stdio.h>
int main(){
    int n , d , s , temp;
    printf("enter the no. for which u want armstrong:");
    scanf("%d",&n);
    s=0;
    temp=n;
    while(n>0){
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if (temp==s){
        printf("the no. is Armtrong !!");
    }else{
        printf("the no. is not armstrong !!");
    }
    return 0;
    
}