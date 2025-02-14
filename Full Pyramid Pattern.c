#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    // Outer loop to print all rows
    for (i = 0; i < n; i++) {

        // First inner loop to print white spaces
        for (j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");

        // Second inner loop to print numbers
        for (k = 0; k < 2 * i + 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}

