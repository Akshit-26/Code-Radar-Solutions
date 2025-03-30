#include <stdio.h>

void reverse(int arr[], int n, int a, int b){
    int i=0, j=n-1;
    for(int i=a, j=b; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    k = k%n;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, n, 0, n-1);
    reverse(arr, n, 0, k-1);
    reverse(arr, n, k, n-1);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}