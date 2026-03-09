#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int n = 5;
    
    // 1. Use malloc to allocate memory for 5 integers
    // sizeof(int) * n calculates the total bytes needed
    int *arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Take user input
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Print the values
    printf("\nThe values in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. Deallocate memory using free
    free(arr);
    arr = NULL;

    printf("\nMemory freed successfully.\n");

    return 0;
}


