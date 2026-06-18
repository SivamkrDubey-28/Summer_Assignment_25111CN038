#include <stdio.h>

int main(){
    char str[200];
    int i=0,count=1;

    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){

        if(str[i]==' '){
            count++;
        }

        i++;
    }

    printf("%d",count);

    return 0;
}