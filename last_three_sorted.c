#include <stdio.h>

void sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void lastelelements(int arr[], int len, int target) {
    printf("Last %d elements: ", target);
    for (int i = len - 1; i >= len - target; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {2, 67, 43, -2, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, len);

    printf("Sorted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Enter how many last elements you want: ");
    scanf("%d", &target);

    lastelelements(arr, len, target);

    return 0;
}