#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Quiz Application\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 3)
        score++;

    printf("\nYour Score = %d/2\n", score);

    return 0;
}