#pragma once
#include <stdio.h>

#define BITS 32

void copyArr(char arr1[], char arr2[], int n);
void decToBin(int num, char bin[]);
void invert(char bin[]);
void addInBin(char a[], char b[], char result[]);
int binToDec(char bin[]);
void printBinary(char bin[]);
