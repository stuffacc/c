#include<stdio.h>

void main() {
	int x = 0;
	printf("Введите x: ");
	scanf("%d", &x);
	
	int x2 = x * x;
	
	int res2 = (x2 + x) * (x2 + 1) + 1;
	printf("%d\n", res2);
}
