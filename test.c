#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the triangle
    int i, j;

    i = 1; // Loop counter for rows

    do {
        // Print asterisks for the current row
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
        i++;
    } while (i <= rows);

    return 0;
}
