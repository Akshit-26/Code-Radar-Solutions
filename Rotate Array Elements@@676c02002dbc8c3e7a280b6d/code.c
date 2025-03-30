#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n
    reverse(arr, 0, n - 1);       // Reverse the entire array
    reverse(arr, 0, k - 1);       // Reverse the first k elements
    reverse(arr, k, n - 1);       // Reverse the remaining elements
}

int main() {
    int n, k;

    // Input the size of the array and the number of rotations
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Rotate the array
    rotateRight(arr, n, k);

    // Print the rotated array
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}