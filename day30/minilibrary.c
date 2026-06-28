#include <stdio.h>

int main() {
    int bookId[5], i;
    char bookName[5][50], author[5][50];

    printf("Enter details of 5 books:\n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n Library Records \n");

    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", bookId[i]);
        printf("Book Name   : %s\n", bookName[i]);
        printf("Author Name : %s\n", author[i]);
    }

    return 0;
}