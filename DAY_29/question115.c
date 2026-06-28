#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("1.Length\n2.Reverse\n");
    scanf("%d", &choice);

    printf("Enter String: ");
    scanf("%s", str);

    switch (choice)
    {
    case 1:
        printf("Length = %d", strlen(str));
        break;

    case 2:
        strrev(str);
        printf("%s", str);
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}