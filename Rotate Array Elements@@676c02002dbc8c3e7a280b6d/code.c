#include <stdio.h>

void reverse(int arr[], int N, int a, int b){
    int i=0, j=N-1;
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

    reverse(arr, N, 0, N-1);
    reverse(arr, N, 0, K-1);
    reverse(arr, N, K, N-1);

    for(int i=0; i<N; i++){
        printf("%d", arr[i]);
    }
    return 0;
}