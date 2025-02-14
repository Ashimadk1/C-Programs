#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    // Outer loop to print each row
    for (i = 1; i <= n; i++) {

        // Print leading white spaces
        for (j = 1; j <= n - i; j++)
            printf("  ");

        // Print numbers for first or last column, or last row
        // print whitespaces for the rest
        for ( k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n)
                printf("%d ", k);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

