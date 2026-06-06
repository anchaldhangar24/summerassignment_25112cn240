#include <stdio.h>

int main() {
    int num, original, reverse = 0, rem, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    for (n = num; n != 0; n = n / 10) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
    }
    if (original == reverse)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");

    return 0;
}