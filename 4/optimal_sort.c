#include<stdio.h>

void sortArray(int start, int end, int arr[]);

void sortArray(int start, int end, int arr[]) {
	if (end - start <= 1) {
		return;
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
		}
	}
	
	arr[end - 1] = arr[left];
	arr[left] = pivot;

	sortArray(start, left, arr);
	sortArray(left + 1, end, arr);

}
