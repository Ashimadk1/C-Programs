#include <stdio.h>

int main() {
    int i,j,n = 4;
    int c = 1;

    // Outer loop to print all rows
    for (i = 0; i < n; i++) {

        // Inner loop to print abphabet in each row
        for (j = 0; j <= i; j++)
            printf("%d ", c++);
        printf("\n");
    }
    return 0;
}

