#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > size / 2) {
            return arr[i];
        }
    }
    return -1; 
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    
    int majorityElement = findMajorityElement(arr, size);
    
    if (majorityElement != -1) {
        printf("%d\n", majorityElement);
    } else {
        printf("-1\n");
    }
    
    return 0;
}