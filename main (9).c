#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int array[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        // Move elements of array[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {12, 31, 25, 8, 32, 17};
    int size = sizeof(array) / sizeof(array[0]);
    
    // Printing original array
    printf("Before sorting, array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
    
    // Sorting array using insertion sort
    insertionSort(array, size);
    
    // Printing sorted array
    printf("\nAfter sorting, array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}