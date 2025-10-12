#include<stdio.h>

void printArray(int size, int arr[]);
void sortArray(int start, int end, int arr[]);
int changes(int size, int arr1[], int arr2[]);

void main() {
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
    sortArray(0, n, arr);
    printArray(n, arr);
    
    printf("%d %d\n", n, changes(n, before, arr));
}


void printArray(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");
}

int changes(int size, int arr1[], int arr2[]) {
    int diff = 0;
    for (int i = 0; i < size; i++) {
	if (arr1[i] != arr2[i]) {
		diff++;
	}
    }

    return diff;
}