#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("1. Capital of India?\n1.Delhi\n2.Mumbai\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("2. 5+5=?\n");
    scanf("%d", &ans);
    if (ans == 10)
        score++;

    printf("Score=%d", score);

    return 0;
}