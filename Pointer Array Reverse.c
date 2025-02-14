#include <stdio.h>

int main() {
    // Declaring variables
    int n, i, arr1[15];
    int *pt;

  

  
    printf(" Input the number of elements to store in the array  ");
    scanf("%d", &n);

    pt = &arr1[0];  // pt stores the address of base array arr1

    // Inputting elements into the array using pointers
    printf(" Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i + 1);
        scanf("%d", pt); // Accepting the address of the value
        pt++;
    }

    pt = &arr1[n - 1]; // Setting pt to point at the last element of the array

    // Displaying the elements of the array in reverse order using pointers
    printf("\n The elements of array in reverse order are :");
    for (i = n; i > 0; i--) {
        printf("\n element - %d : %d  ", i, *pt); // Printing the element and its value
        pt--; // Moving the pointer to the previous element
    }

    printf("\n\n");
}

