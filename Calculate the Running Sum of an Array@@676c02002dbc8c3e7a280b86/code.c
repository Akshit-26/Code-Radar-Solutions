#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    running_sum = 0;
    for(int i=0; i<n; i++){
        running_sum += arr[i];
        printf("%d ", arr[i]);
    }

    return 0;

}