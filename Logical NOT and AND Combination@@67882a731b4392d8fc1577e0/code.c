#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);  // Read the first integer
    int b;
    scanf("%d", &b);  // Read the second integer

    // Check if both numbers are less than or equal to 0
    if (a <= 0 && b <= 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
