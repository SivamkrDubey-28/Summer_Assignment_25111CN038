#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    printf("1.Deposit\n2.Withdraw\n3.Balance\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        scanf("%f", &amount);
        balance += amount;
        printf("Balance = %.2f", balance);
        break;

    case 2:
        scanf("%f", &amount);
        if (amount <= balance)
            balance -= amount;
        else
            printf("Insufficient Balance\n");

        printf("Balance = %.2f", balance);
        break;

    case 3:
        printf("Balance = %.2f", balance);
        break;
    }

    return 0;
}