#include <stdio.h>

int main() {
    int i,j,n = 5;
  
      // Outer loop to print each row
    for ( i = 1; i <= n; i++) {
      
          // Inner loop to print the whitespace and stars
        for (j = 1; j <= i; j++) {
          
            // Print '*' for first or last column, or last row
              // print whitespaces for the rest
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

