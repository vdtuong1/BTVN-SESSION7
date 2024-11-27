#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    int *mang = (int *)malloc(n * sizeof(int));

    if (mang == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1; 
    }

    
    printf("Nhap gia tri tung phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }


    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    
    free(mang);

    return 0;
}

