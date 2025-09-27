#include<stdio.h>

void main() {
    int k = 0;
    for (int num1 = 0; num1 <= 9; num1++) {
    	for (int num2 = 0; num2 <= 9; num2++) {
    	    for (int num3 = 0; num3 <= 9; num3++) {
    
    	        for (int num4 = 0; num4 <= 9; num4++) {
    
    	            for (int num5 = 0; num5 <= 9; num5++) {
    
    			for (int num6 = 0; num6 <= 9; num6++) {

				int part1 = num1 + num2 + num3;
				int part2 = num4 + num5 + num6;
				if (part1 == part2) {
					k = k + 1;
				}
}}}}}} //  

printf("%d", k);
}
