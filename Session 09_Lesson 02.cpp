#include <stdio.h>
int main() {

    int arr[] = {15, 53, 34, 40, 25}; 
    int n = 5; 

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int index, newNum;

    printf("Moi ban nhap vi tri can sua (0-4): ");
    scanf("%d", &index);
    printf("Moi ban nhap gia tri moi: ");
    scanf("%d", &newNum);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le");
        return 0; 
    }

    arr[index] = newNum;
	
	printf("---> ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

