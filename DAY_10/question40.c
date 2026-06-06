#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for(i=0; i<5; i++) {

        for(j=0; j<4-i; j++)
            printf(" ");

        for(ch='A'; ch<='A'+i; ch++)  //for inc. character pattern
            printf("%c", ch);

        for(ch='A'+i-1; ch>='A'; ch--) //for decc. character pattern
            printf("%c", ch);

        printf("\n");
    }

    return 0;
}