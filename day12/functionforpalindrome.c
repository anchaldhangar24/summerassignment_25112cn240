#include <stdio.h>

int Palindrome(int num) {
    int original = num;
    int rev = 0, rem;

    for(; num > 0; num = num / 10) {
        rem = num % 10;           
        rev = rev * 10 + rem;     
    }

    if(rev == original)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(Palindrome(num))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}