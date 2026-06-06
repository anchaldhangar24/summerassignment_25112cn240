#include <stdio.h>

int main() {
    int num, rev= 0, rem, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    for (; n != 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse number = %d", rev);
    return 0;
}
