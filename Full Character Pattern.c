#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    // Outer loop to print all rows
    for (i = 0; i < n; i++) {

        // First inner loop 1 to print white spaces
        for (j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");

        // Second inner loop 2 to print alphabets
        for (k = 0; k < 2 * i + 1; k++)
            printf("%c ", 'A' + k);
        printf("\n");
    }
    return 0;
}

