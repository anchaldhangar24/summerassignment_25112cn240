#include <stdio.h>

int Armstrong(int num) {
    int original = num;
    int rem, sum = 0;

    while(num > 0) {
        rem = num % 10;       
        sum = sum + (rem * rem * rem); 
        num = num / 10;        
    }

    if(sum == original)
        return 1;   
    else
        return 0;   
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(Armstrong(num))
        printf("It is an Armstrong number\n");
    else
        printf("It is not an Armstrong number\n");

    return 0;
}