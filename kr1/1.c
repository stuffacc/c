#include <stdio.h>

void to2(char string[], int num);
int palindrom(char string[]);
int sizeOfString(char string[]);

void main() {
        int n = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
                char string[200] = {' '};
                to2(string, i);
                
                int res = palindrom(string);
                if (res == 1) {
                        printf("%d\n", i);
                }
        }
}

void to2(char string[], int num) {
        int index = 0;
        while (num > 0) {
                int ost = num % 2;
                num = num / 2;
                string[index] = (char) (ost);
                index++;
        }
        string[index] = '\t';
}


int palindrom(char string[]) {
        int res = 1;
        int size = sizeOfString(string);
        for (int i = 0; i < size; i++) {
                if (string[i] != string[size-1-i]) {
                        res = 0;
                        break;
                }
        }
        
        return res;
}

int sizeOfString(char string[]) {
        int size = 0;
        while (string[size] != '\t') {
                size++;
        }
        
        return size;
}
