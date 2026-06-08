#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 1) {   // Check if the last bit is 1
            count++;
        }
        n = n / 2;          // Move to the next bit
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}
