#include <stdio.h>

int main() {
    int arr[100];      
    int currentLength; 

    printf("Moi ban nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);

    if (currentLength <= 0 || currentLength > 100) {
        printf("So phan tu khong hop le\n");
    }

    printf("Moi ban nhap cac phan tu cua mang:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int deleteIndex;
    printf("Nhap vi tri can xoa (0-%d): ", currentLength);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le\n");
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--; 

    printf("---> ");
    for (int i = 0; i < currentLength - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

