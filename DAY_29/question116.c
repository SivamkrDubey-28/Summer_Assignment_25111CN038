#include <stdio.h>

struct Item
{
    int id, qty;
    char name[50];
};

int main()
{
    struct Item i;

    printf("Enter Item ID: ");
    scanf("%d", &i.id);

    printf("Enter Item Name: ");
    scanf("%s", i.name);

    printf("Enter Quantity: ");
    scanf("%d", &i.qty);

    printf("\nID: %d", i.id);
    printf("\nName: %s", i.name);
    printf("\nQuantity: %d", i.qty);

    return 0;
}