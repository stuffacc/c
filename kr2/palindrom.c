#include "list.h"

void main() {
	List list;
	initList(&list);
	
	int n;
	printf("Введите количество: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
	        int a;
	        scanf("%d", &a);
	        addValue(&list, a);
	}
	
	
	int res = isPalindrom(&list);
	if (res == 0) {
	        printf("Не палиндром\n");
	}
	else {
	        printf("Палиндром\n");
	}
}
