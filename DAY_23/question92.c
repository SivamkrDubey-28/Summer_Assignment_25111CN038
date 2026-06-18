#include <stdio.h>

int main(){
    char str[100];
    int freq[256]={0};
    int i=0,max=0;
    char ch;

    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        freq[str[i]]++;
        i++;
    }

    for(i=0;i<256;i++){

        if(freq[i]>max){
            max=freq[i];
            ch=i;
        }
    }

    printf("%c",ch);

    return 0;
}