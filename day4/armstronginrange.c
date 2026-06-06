#include <stdio.h>

int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++) {
        sum = 0;
        temp = num;

        for (; temp != 0; temp /= 10) {
            rem = temp % 10;
            sum += rem * rem * rem;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}