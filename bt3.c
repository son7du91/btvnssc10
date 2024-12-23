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
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Mảng sau khi sắp xếp tăng dần: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
