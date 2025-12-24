#include "optimal_sort.h"

int sortArray(int start, int end, int arr[], int changes)
{
    if (end - start <= 1) {
        return 0;
    }

    int pivot = arr[end - 1];
    int left = start;
    int right = end - 2;

    while (left <= right) {
        while (arr[left] <= pivot && left <= right) {
            left++;
        }

        while (arr[right] > pivot && left <= right) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
            changes += 2;
        }
    }

    arr[end - 1] = arr[left];
    arr[left] = pivot;

    changes += 2;
    changes += sortArray(start, left, arr, changes);
    changes += sortArray(left + 1, end, arr, changes);

    return changes;
}
