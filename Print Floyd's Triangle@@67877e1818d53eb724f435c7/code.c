#include <stdio.h>

int main() {
    int rows, num = 1;

    // Get the number of rows from the user
    printf();
    scanf("%d", &rows);

    // Generate Floyd's Triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
