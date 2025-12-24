#include <stdio.h>

void print_array(int size, int array[]);

void main()
{
    int size = 18;
    int array[size];
    int count = 0;

    print_array(size, array);

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            count++;
        }
    }

    printf("Количество нулей: %d\n", count);
}

void print_array(int size, int array[])
{
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
