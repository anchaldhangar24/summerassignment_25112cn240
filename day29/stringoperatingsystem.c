#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length");
    printf("\n2. Reverse String");
    printf("\n3. Convert to Uppercase");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        case 3:
            printf("Uppercase String = %s", strupr(str));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}