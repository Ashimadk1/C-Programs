#include <stdio.h>

int main() {
	int i,j,k;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
