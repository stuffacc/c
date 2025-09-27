#include<stdio.h>


void print_array(int size, int array[]);


void main() {
    int m = 6;
    int n = 10;

    printf("Введите m: ");
    scanf("%d", &m);

    printf("Введите n: ");
    scanf("%d", &n);


    int size = n + m;
    int array[size];
    // заполнить array
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

printf("Исходный: ");
print_array(size, array);

    for (int j = 0; j < m; j++) {
	for (int i = 1; i < size; i++) {
		int current = array[i - 1];
		int next = array[i];


		array[i - 1] = next;
		array[i] = current;


		}
	}
printf("Конечный: ");
print_array(size, array);
}

void print_array(int size, int array[]) {
	for (int i = 0; i < size; i++) {
        	printf("%d ", array[i]);
    	}
	printf("\n");
}
