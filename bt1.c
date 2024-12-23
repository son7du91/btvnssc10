#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mảng hiện tại: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int a;
    printf("Nhập phần tử bất kỳ: ");
    scanf("%d", &a);
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("Phần tử %d tồn tại trong mảng tại vị trí %d.\n", a, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phần tử %d không tồn tại trong mảng.\n", a);
    }
    return 0;
}
