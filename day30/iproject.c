#include <stdio.h>
#include <string.h>

#define SIZE 10

char seats[SIZE][20];

// Function to initialize seats
void initializeSeats()
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        strcpy(seats[i], "Empty");
    }
}

// Function to display seat status
void displaySeats()
{
    int i;

    printf("\n------ Flight Seating Status ------\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("Seat %d : %s\n", i + 1, seats[i]);
    }
}

// Function to reserve seat
void reserveSeat()
{
    int seatNo;
    char name[20];

    printf("Enter Seat Number (1-10): ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > SIZE)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if(strcmp(seats[seatNo - 1], "Empty") != 0)
    {
        printf("Seat Already Reserved!\n");
        return;
    }

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    strcpy(seats[seatNo - 1], name);

    printf("Seat Reserved Successfully!\n");
}

// Function to cancel reservation
void cancelReservation()
{
    int seatNo;

    printf("Enter Seat Number to Cancel: ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > SIZE)
    {
        printf("Invalid Seat Number!\n");
        return;
    }

    if(strcmp(seats[seatNo - 1], "Empty") == 0)
    {
        printf("Seat is Already Empty!\n");
        return;
    }

    strcpy(seats[seatNo - 1], "Empty");

    printf("Reservation Cancelled Successfully!\n");
}

// Function to search passenger
void searchPassenger()
{
    char name[20];
    int i, found = 0;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    for(i = 0; i < SIZE; i++)
    {
        if(strcmp(seats[i], name) == 0)
        {
            printf("%s is sitting on Seat %d\n", name, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Passenger Not Found!\n");
    }
}

int main()
{
    int choice;

    initializeSeats();

    do
    {
        printf("\n===== Flight Seat Reservation System =====\n");
        printf("1. Display Seats\n");
        printf("2. Reserve Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Search Passenger\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displaySeats();
                break;

            case 2:
                reserveSeat();
                break;

            case 3:
                cancelReservation();
                break;

            case 4:
                searchPassenger();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}