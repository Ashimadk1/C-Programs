#include <stdio.h>

int main() {
    int i,j, n = 5; 

    // Outer loop for printing rows
    for (i = n; i >= 1; i--) {

        // Inner loop for printing 
        // the character in each row
        for (j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }

    return 0;
}

