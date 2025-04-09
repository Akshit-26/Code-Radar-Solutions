#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3}; // You can change the array to test different cases
    int n = sizeof(arr) / sizeof(arr[0]);

    int increasing = 1, decreasing = 1; // Flags for checking if the array is increasing or decreasing

    // Loop through the array and check the order of elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = 0; // If any element is greater than the previous one, it's not decreasing
        }
        if (arr[i] < arr[i - 1]) {
            increasing = 0; // If any element is smaller than the previous one, it's not increasing
        }
    }

    // Check if the array is either increasing or decreasing
    if (increasing || decreasing) {
        printf("The array is monotonic.\n");
    } else {
        printf("The array is not monotonic.\n");
    }

    return 0;
}
