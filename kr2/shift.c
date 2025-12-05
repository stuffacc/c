#include <stdio.h>

void main() {
        int* arr[32] = {0};
        
	
	int n;
	printf("Введите число: ");
	scanf("%d", &n);
	
	toArray(n, &arr);
	
	for (int i = 0; i < 32; i++) {
	        int a = arr[i];
	        printf("%d", a);
	}
	printf("\n");
	
}

void toArray(int n, int* arr[32]) {
        int step = 0;
        while (n > 0) {
                int res = n % 2;
                n = n / 2;
                step++;
                arr[32-step] = res;
        }
}
