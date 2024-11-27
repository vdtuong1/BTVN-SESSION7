#include <stdio.h>

int main() {
    
    int mang[5];
    int do_dai = 5;

    
    printf("Nhap gia tri cho tung phan tu cua mang:\n");
    for (int i = 0; i < do_dai; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

  
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < do_dai; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, mang[i]);
    }

    return 0;
}

