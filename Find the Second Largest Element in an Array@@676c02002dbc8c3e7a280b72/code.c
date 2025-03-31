#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int first, second;

    if (n < 2) {
        return -1;
    }

    first = second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == first) {
        return -1;
    }

    return second;
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSecondLargest(arr, n);
    if (result != -1) {
        printf("%d\n", result);
    }

    return 0;
}
