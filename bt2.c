#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
    }
    printf("Mảng ban đầu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mảng sau khi sắp xếp tăng dần: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
