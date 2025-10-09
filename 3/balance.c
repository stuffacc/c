#include<stdio.h>

void main() {
    printf("Введите строку: ");
    char ch = getchar();
    int k = 0;

    
    while (ch != '\n') {
        if (ch == '(') {
            k++;
        }
        else if (ch == ')') {
            k--;
        }
        if (k < 0) {
            break;
        }
        ch = getchar();
    }
    
    if (k == 0) {
        printf("Баланс есть\n");
    }
    else {
        printf("Баланс нарушен\n");
    }
}
