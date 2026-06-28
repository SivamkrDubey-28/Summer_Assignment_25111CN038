#include <stdio.h>

struct Book
{
    int id;
    char name[50];
};

int main()
{
    struct Book b[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n%d %s", b[i].id, b[i].name);
    }

    return 0;
}