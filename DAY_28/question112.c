#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact c;

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone: ");
    scanf("%s", c.phone);

    printf("\nName: %s", c.name);
    printf("\nPhone: %s", c.phone);

    return 0;
}