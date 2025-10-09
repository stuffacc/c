#include<stdio.h>

void printArray(int size, int arr[]);
void sortArray(int start, int end, int arr[]);


void main() {
    int arr[100];
    int n = 0;

    while (n < 100 && scanf("%d", &arr[n]) == 1) {
	n++;
	
	if (getchar() == '\n') {
	    break;
	}
    }
    printArray(n, arr);
    sortArray(0, n, arr);
    printArray(n, arr);
}


void printArray(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");
}