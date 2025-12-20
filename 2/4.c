#include<stdio.h>

void main() {
    int k = 0;
    int arr[28] = { 0 };
    for (int i = 0; i <= 9; i++) {
    	for (int j = 0; j <= 9; j++) {
    	    for (int k = 0; k <= 9; k++) {
    	        int sm = i + j + k;
    	        arr[sm]++;
    	    }
    	}	
    }
    	        
    	        
    for (int i = 0; i < 28; i++) {
        k += (arr[i]*arr[i]);
    }
    	        

    printf("%d\n", k);
}
