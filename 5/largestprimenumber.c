#include <stdio.h>

int main() {
    int n, i, j, largest = 1, Prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {  // i is a factor

            Prime = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    Prime = 0;
                    break;
                }
            }

            if (Prime) {
                largest = i;
            }
        }
    }

    printf("Largest prime factor = %d\n", largest);

    return 0;
}