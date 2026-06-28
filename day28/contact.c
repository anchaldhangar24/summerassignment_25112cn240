#include <stdio.h>

int main() {
    char name[50], phone[15], email[50];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\n Contact Details \n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %s\n", phone);
    printf("Email        : %s\n", email);

    return 0;
}