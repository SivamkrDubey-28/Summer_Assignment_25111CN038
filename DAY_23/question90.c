#include <stdio.h>

int main(){
    char str[100];
    int i,j,len=0;

    fgets(str,sizeof(str),stdin);

    while(str[len]!='\0'&&str[len]!='\n'){
        len++;
    }

    for(i=0;i<len;i++){

        for(j=i+1;j<len;j++){

            if(str[i]==str[j]){
                printf("%c",str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character");

    return 0;
}