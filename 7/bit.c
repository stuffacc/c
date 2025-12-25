#include "bit.h"


void copyArr(char arr1[], char arr2[], int n) {
    for (int i = 0; i < n; i++) {
        arr1[i] = arr2[i];
    }
}

void decToBin(int num, char bin[]) {
    int temp = num;
    if (temp < 0) {
        temp = -temp;
    }
    
    for (int i = BITS - 1; i >= 0; i--) {
        bin[i] = (char) (temp % 2) + '0';
        temp = temp / 2;
    }
}

void invert(char bin[]) {
    for (int i = 0; i < BITS; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }
}

void addInBin(char a[], char b[], char result[]) {
    int carry = 0;
    
    for (int i = BITS - 1; i >= 0; i--) {
        int bitA = (int) a[i] - '0';
        int bitB = (int) b[i] - '0';
        
        int sum = bitA + bitB + carry;
        
        result[i] = (char) (sum % 2) + '0';
        carry = sum / 2;
    }
}

int binToDec(char bin[]) {
    if (bin[0] == '0') {
        int result = 0;
        for (int i = 0; i < BITS; i++) {
            result = result * 2 + (bin[i] - '0');
        }
        return result;
    }
    else {
        char minusOne[BITS] = {'1', '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'};
    
        char result[BITS] = {'0'};
        addInBin(bin, minusOne, result);
        
        invert(result);
        
        int res = 0;
        for (int i = 0; i < BITS; i++) {
            res = res * 2 + (bin[i] - '0');
        }
        return res;
    }
}

void printBinary(char bin[]) {
    for (int i = 0; i < BITS; i++) {
        printf("%c", bin[i]);
    }
    printf("\n");
}

int main() {
    int a, b;
    printf("Введите два числа (Integer):\n");
    printf("Первое число: ");
    scanf("%d", &a);
    printf("Второе число: ");
    scanf("%d", &b);
    
    char binA[32] = {'0'};
    char binB[32] = {'0'};
    
    decToBin(a, binA);
    decToBin(b, binB);
    
    if (a < 0) {
        invert(binA);
        
        char one[BITS] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'};
        one[BITS - 1] = '1';
    
        char result[BITS] = {'0'};
        addInBin(binA, one, result);
        
        copyArr(binA, result, BITS);
    }
    
    if (b < 0) {
        invert(binB);
        
        char one[BITS] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'};
        
        printBinary(one);
    
        char result[BITS] = {'0'};
        addInBin(binB, one, result);
        
        copyArr(binB, result, BITS);
    }
    
    printf("\nДвоичное\n");
    printf("Число %d: ", a);
    printBinary(binA);
    
    printf("Число %d: ", b);
    printBinary(binB);
    
    char binSum[BITS] = {'0'};
    addInBin(binA, binB, binSum);
    
    printf("\nСумма в двоичном\n");
    printBinary(binSum);
    
    int sumDecimal = binToDec(binSum);
    
    printf("\nСумма в десятичной\n");
    
    printf("%d\n", sumDecimal);
    
    return 0;
}
