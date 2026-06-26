#include <stdio.h>

int main() {
    int roll;
    char name[50];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    if (marks >= 40)
        printf("Result      : Pass\n");
    else
        printf("Result      : Fail\n");

    return 0;
}