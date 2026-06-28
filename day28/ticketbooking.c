#include <stdio.h>

int main() {
    char name[50];
    int tickets;
    float price = 250, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\n Ticket Details \n");
    printf("Customer Name : %s\n", name);
    printf("Ticket Price  : Rs. %.2f\n", price);
    printf("Tickets Booked: %d\n", tickets);
    printf("Total Amount  : Rs. %.2f\n", total);

    return 0;
}