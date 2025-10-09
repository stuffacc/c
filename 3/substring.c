#include<stdio.h>
#include<string.h>


void main() {
	char string[100];
	char substring[99];

	printf("Введи строку: ");
	fgets(string, sizeof(string), stdin);


	printf("Введи подстроку: ");
	fgets(substring, sizeof(substring), stdin);

	int lenString = strlen(string) - 1;
	int lenSubstring = strlen(substring) - 1;

	int count = 0;

	for (int i = 0; i < lenString; i++) {
		int k = 0;

		for (int j = 0; j < lenSubstring; j++) {

			if (string[i+j] != substring[j]) {
				break;
			}
			
			k += 1;
			

			if (k == lenSubstring) {
				count += 1;
				break;
			}
			

		}
	}
	printf("Количество вхождений: %d\n", count);
}
