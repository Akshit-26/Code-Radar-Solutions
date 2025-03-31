#include <stdio.h>

int longestConsecutive(int arr[], int size) {
    int longestStreak = 0;

    for (int i = 0; i < size; i++) {
        int currentNum = arr[i];
        int currentStreak = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] == currentNum + 1) {
                currentStreak++;
                currentNum++;
            }
        }

        if (currentStreak > longestStreak) {
            longestStreak = currentStreak;
        }
    }

    return longestStreak;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    int longestSequence = longestConsecutive(arr, size);
    printf("%d\n", longestSequence);

    return 0;
}