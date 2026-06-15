#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int main() {
    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");
    fibonacci(num);

    return 0;
}