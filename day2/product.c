#include <stdio.h>

int main() {
    int n, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10) {
        digit = n % 10;
        product = product * digit;
    }

    printf("Product of digits = %d", product);

    return 0;
}