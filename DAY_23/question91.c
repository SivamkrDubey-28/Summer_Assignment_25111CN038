#include <stdio.h>

int main(){
    char str1[100],str2[100];
    int count1[256]={0},count2[256]={0};
    int i=0,flag=1;

    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    while(str1[i]!='\0'){
        count1[str1[i]]++;
        i++;
    }

    i=0;

    while(str2[i]!='\0'){
        count2[str2[i]]++;
        i++;
    }

    for(i=0;i<256;i++){

        if(count1[i]!=count2[i]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}