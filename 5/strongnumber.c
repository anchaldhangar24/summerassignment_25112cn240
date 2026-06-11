#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store original number

    // Process each digit
    while (num > 0) {
        remainder = num % 10; // Extract last digit

        // Find factorial of the digit
        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact; // Add factorial to sum
        num /= 10;   // Remove last digit
    }

    // Check if sum of factorials equals original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}