#include <stdio.h>
#include <stdlib.h>

/**
 * Sample C program for testing the build and debug configuration
 */
int main() {
    printf("Hello from C!\n");
    printf("This is a test file for C compilation.\n");
    
    int numbers[] = {5, 2, 8, 1, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("\nArray contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}

