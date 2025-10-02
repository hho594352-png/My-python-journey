void match_it_up(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: i = %d, j = %d\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No pair found\n");
    }
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[50];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    match_it_up(arr, n, target);
    return 0;
}