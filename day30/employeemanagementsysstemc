#include <stdio.h>

int main() {
    int id[5];
    char name[5][50];
    float salary[5];
    int i;

    printf("Enter details of 5 employees:\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\nEmployee Records \n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", id[i]);
        printf("Employee Name : %s\n", name[i]);
        printf("Salary        : %.2f\n", salary[i]);
    }

    return 0;
}