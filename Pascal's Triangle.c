#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    // Outer loop for rows
    for (i = 1; i <= n; i++) {

        // First inner loop for leading white spaces
        for (j = 0; j < n - i; j++)
            printf(" ");

        // Coefficient
        int C = 1; 

        // Second inner loop for printing numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}

