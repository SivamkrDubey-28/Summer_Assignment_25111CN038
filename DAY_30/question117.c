#include <stdio.h>

int main()
{
    char name[5][50];
    int marks[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\nStudent Records\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s %d\n", name[i], marks[i]);
    }

    return 0;
}