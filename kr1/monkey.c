#include <stdio.h>

int isSorted(int arr[], int size);
void swap(int arr[]);

void main() {
        int arr[] = {2, 4, 6, 8, 10};
        int size = sizeof(arr) / sizeof(int);
        printf("%d\n", isSorted(arr, size));
        for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
        }
        
        
        
}

int isSorted(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
                if (arr[i] > arr[i+1]) {
                        return 0;
                }
        }
        
        return 1;
}

void swap(int arr[]) {
        
}
