#include <stdio.h>

int main()
{
    int x, n;
    long long result = 1;
    int i;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d raised to the power %d = %lld\n", x, n, result);

    return 0;
}