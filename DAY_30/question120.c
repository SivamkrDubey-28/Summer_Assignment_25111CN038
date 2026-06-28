#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

void addBook(struct Book b[], int *n)
{
    printf("Enter Book ID: ");
    scanf("%d", &b[*n].id);

    printf("Enter Book Title: ");
    scanf("%s", b[*n].title);

    printf("Enter Author Name: ");
    scanf("%s", b[*n].author);

    (*n)++;
    printf("Book Added Successfully\n");
}

void displayBooks(struct Book b[], int n)
{
    int i;

    if (n == 0)
    {
        printf("No Books Available\n");
        return;
    }

    printf("\n----- Book Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook ID: %d", b[i].id);
        printf("\nTitle: %s", b[i].title);
        printf("\nAuthor: %s\n", b[i].author);
    }
}

void searchBook(struct Book b[], int n)
{
    int id, i, found = 0;

    printf("Enter Book ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Book ID: %d\n", b[i].id);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Book Not Found\n");
}

int main()
{
    struct Book b[100];
    int n = 0, choice;

    do
    {
        printf("\n\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(b, &n);
            break;

        case 2:
            displayBooks(b, n);
            break;

        case 3:
            searchBook(b, n);
            break;

        case 4:
            printf("Exiting...");
            break;

        default:
            printf("Invalid Choice");
        }
    } while (choice != 4);

    return 0;
}