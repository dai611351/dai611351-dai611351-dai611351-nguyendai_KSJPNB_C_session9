#include <stdio.h>
int main() {
    
	int arr[100];
    int n, currentLength;
    
	printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n > 100 || n < 0){
        printf("Phan tu khong hop le");
        return 0;
    }
    
	currentLength = n;
    printf("Moi ban nhap phan tu:\n"); 
    for (int i = 0; i < n; i++){
        printf("[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
	int addValue, addIndex;
    printf("Moi ban them phan tu: ");
    scanf("%d", &addValue);
    printf("Moi ban nhap them vi tri: ");
    scanf("%d", &addIndex);
    
	if (addIndex < 0 || addIndex >= 100){
        printf("Vi tri khong hop le\n");
        return 0;
    }
    
	if (addIndex >= currentLength){
        arr[addIndex] = addValue;
        currentLength = addIndex + 1; 
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;  
    }
    
	printf("---> ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

