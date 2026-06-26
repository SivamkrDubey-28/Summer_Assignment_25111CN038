#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess;

    srand(time(0));
    num = rand() % 100 + 1;

    do
    {
        printf("Guess number: ");
        scanf("%d", &guess);

        if (guess > num)
            printf("Too High\n");
        else if (guess < num)
            printf("Too Low\n");

    } while (guess != num);

    printf("Correct!");

    return 0;
}