#include "optimal_sort.h"

void printArray(int size, int arr[]);

void main()
{
    int arr[100];
    int before[100];
    int n = 0;

    while (n < 100 && scanf("%d", &arr[n]) == 1) {
        before[n] = arr[n];
        n++;

        if (getchar() == '\n') {
            break;
        }
    }

    printArray(n, arr);
    int changes = sortArray(0, n, arr, 0);
    printArray(n, arr);

    printf("%d %d\n", n, changes);
}

void printArray(int size, int arr[])
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
