#include <stdio.h>

// Function to sort array in descending order
void sortDescending(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]<arr[j+1]) {  // Notice the '<' operator here.
                int temp= arr[j];
                arr[j]= arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {15, 8, 22, 1, 45, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    sortDescending(arr, n);
    printf("Sorted array in descending order: \n");
    printArray(arr, n);
    
    return 0;
}