#include <stdio.h>

int main() {
    int i, j;
    scanf("%d", &i);  // Read an integer from the user

    // Outer loop controls the rows
    for (; i > 0; i--) {  
        // Inner loop prints '*' i times
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}