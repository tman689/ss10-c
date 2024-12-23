#include <stdio.h>

int main() {
    int arr[] = {7, 2, 1, 6, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int key;
    printf("Nhap vao so nguyen can tim: ");
    scanf("%d", &key);
    int left = 0, right = n - 1, mid, found = 0;
    while (left <= right) {
        mid = (left + right) / 2; 
        if (arr[mid] == key) {
            printf("Phan tu %d duoc tim thay o vi tri %d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    if (!found) {
        printf("Phan tu %d khong co trong mang.\n", key);
    }

    return 0;
}

