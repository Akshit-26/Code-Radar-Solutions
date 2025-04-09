#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    return original == reversed;
}

int countPalindromicElements(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {121, 123, 131, 145, 1441, 12321, 567};
    int size = sizeof(arr) / sizeof(arr[0]);

    int palindromicCount = countPalindromicElements(arr, size);
    printf("Number of palindromic elements in the array: %d\n", palindromicCount);

    return 0;
}