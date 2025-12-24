#include <stdio.h>

void main() {
  printf("Введите строку: ");
  char string[256];
  fgets(string, sizeof(string), stdin);
  int k = 0;

  int index = 0;
  while (string[index] != '\0') {
    char ch = string[index];
    if (ch == '(') {
      k++;
    } else if (ch == ')') {
      k--;
    }
    if (k < 0) {
      break;
    }
    index++;
  }

  if (k == 0) {
    printf("Баланс есть\n");
  } else {
    printf("Баланс нарушен\n");
  }
}
