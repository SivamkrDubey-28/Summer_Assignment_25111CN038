#include <stdio.h>

int main()
{
    int seats = 50, book;

    printf("Available Seats: %d\n", seats);
    printf("Enter seats to book: ");
    scanf("%d", &book);

    if (book <= seats)
    {
        seats -= book;
        printf("Booking Successful\n");
        printf("Remaining Seats: %d", seats);
    }
    else
    {
        printf("Not Enough Seats");
    }

    return 0;
}