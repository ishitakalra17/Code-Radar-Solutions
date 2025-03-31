#include <stdio.h>

int fibonacci(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    
    return fibonacci(a - 1) + fibonacci(a - 2);  // Recursive call
}

int main()
{
    int num;
    printf("Enter a number: ");  // Some platforms require an explicit prompt
    scanf("%d", &num);  // Read user input

    int result = fibonacci(num);  // Call the Fibonacci function
    printf("Fibonacci of %d is: %d\n", num, result);  // Print properly formatted output

    return 0;
}
