#include <stdio.h>

void multi_all(int arr[], int len) {
    int result[len];

    for (int i = 0; i < len; i++) {
        int prod = 1;
        for (int j = 0; j < len; j++) {
            if (i != j) {
                prod *= arr[j];
            }
        }
        result[i] = prod;
    }

    printf("Result: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    multi_all(arr, 5);
    return 0;
}