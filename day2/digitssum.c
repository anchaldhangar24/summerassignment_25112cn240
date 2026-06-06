#include <stdio.h>

int main() {
    int num, sum = 0, digit, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = num; i != 0; i = i / 10) {
        digit = i % 10;
        sum = sum + digit;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}