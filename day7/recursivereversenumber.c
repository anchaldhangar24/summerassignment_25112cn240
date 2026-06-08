#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0)
        return rev;

    rev = rev * 10 + (num % 10);
    return reverse(num / 10, rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = reverse(num, 0);

    printf("Reversed number = %d\n", result);

    return 0;
}