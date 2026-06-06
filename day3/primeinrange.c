#include <stdio.h>

int main() {
    int start, end, i, j, Prime;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        Prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime)
            printf("%d ", i);
    }

    return 0;
}