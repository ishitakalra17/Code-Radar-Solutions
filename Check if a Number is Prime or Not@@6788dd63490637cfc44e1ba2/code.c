#include<stdio.h>
int main()
{
    int a, i, isPrime = 1; // Assume number is prime
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i<a; i++) {
        if (a % i == 0) {
            isPrime = 0; // Found a divisor, not prime
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}