#include <stdio.h> 

int getSum(int n);

void main() {
        int arr[] = {2, 4, 6, 8, 10, 35};
        int size = sizeof(arr) / sizeof(int);
        
        int mx = 0;
        
        for (int i = 0; i < size; i++) {
                int sm = getSum(arr[i]);
                if (sm > mx) {
                        mx = sm;
                }
        }
        
        
        for (int i = 0; i < size; i++) {
                int sm = getSum(arr[i]);
                if (sm == mx) {
                        printf("%d\n", arr[i]);
                }
        }
        
        
        
        
        
}

int getSum(int n) { 
      int sum = 0;
      while (n != 0) {
          sum = sum + n % 10;
          n = n / 10;
      }
      return sum;
}
