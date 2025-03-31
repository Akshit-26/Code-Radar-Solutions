#include <stdio.h>

void findFrequency(int arr[], int n) {
    int i, j;
    int visited[n];  

    for(i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for(i = 0; i < n; i++) {
        int count = 1;  

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1; 
                count++;  
            }
        }

        printf("%d %d\n", arr[i], count);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findFrequency(arr, n);

    return 0;
}
