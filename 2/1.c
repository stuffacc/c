#include<stdio.h>

void main() {
	int x;
	printf("Введите x: ");
	scanf("%d", &x);
	// за 3
	
	
	int x2 = x * x;
	int x3 = x2 * x;
	int x4 = x3 * x;
	
	int res = x4 + x3 + x2 + 1;
	printf("%d\n", res);


}
