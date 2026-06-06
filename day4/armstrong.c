#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (; temp != 0; temp = temp / 10) {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
    }

    if (sum == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}