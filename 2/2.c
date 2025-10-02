#include<stdio.h>


void main() {
	int a = 5;
	int b = 2;

	printf("Введите a: ");
	scanf("%d", &a);
	printf("Введите b: ");
	scanf("%d", &b);


	if (b == 0) {
		printf("Делить на 0 нельзя\n");
	}
	else {
		int k = 0;
		if (a < 0) {
			a = a * (-1);
		}


		if (b < 0) {
			b = b * (-1);
		}


		while (a >= b) {
			k++;
			a = a - b;
		}


	printf("Неполное частное: %d\n", k);
    }
}
