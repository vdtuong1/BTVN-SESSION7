#include <stdio.h>

int main() {
  
    int mang[5] = {12, 45, 7, 23, 9};
    int max = mang[0]; 
    int min = mang[0]; 
    
    for (int i = 1; i < 5; i++) {
        if (mang[i] > max) {
            max = mang[i]; 
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

