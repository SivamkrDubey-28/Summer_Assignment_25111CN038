#include <stdio.h>

int main(){
    char str[100];
    int i,j,count,len=0;

    fgets(str,sizeof(str),stdin);

    while(str[len]!='\0'&&str[len]!='\n'){
        len++;
    }

    for(i=0;i<len;i++){

        count=0;

        for(j=0;j<len;j++){

            if(str[i]==str[j]){
                count++;
            }
        }

        if(count==1){
            printf("%c",str[i]);
            return 0;
        }
    }

    printf("No non-repeating character");

    return 0;
}