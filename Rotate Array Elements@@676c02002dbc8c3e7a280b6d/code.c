#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", arr[i]);
    }
    
    int K;
    scanf("%d", &K);

    int k = K%N;
    for(int i=0, j=N; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0, i<N; i++){
        printf("%d", arr[i]);
    }
    return 0;
}