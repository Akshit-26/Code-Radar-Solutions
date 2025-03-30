#include <stdio.h>

void reverse(int arr[], int N, int a, int b){
    int i=0, j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", arr[i]);
    }
    
    int K;
    scanf("%d", &K);
    K = K%N;

    reverse(arr, n, 0, n-1);
    reverse(arr, n, 0, k-1);
    reverse(arr, n, k, n-1);

    for(int i=0; i<N; i++){
        printf("%d", arr[i]);
    }
    return 0;
}