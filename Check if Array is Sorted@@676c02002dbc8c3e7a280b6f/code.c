#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N], i;
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    
    if(N == 1){
        printf("Sorted");
        break;
    }

    int isSorted = 0;
    for(i=0; i<N-1; i++){
        if(arr[i] <= arr[i+1]){
            isSorted = 1;
            break;
        }
    }

    if(isSorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }

    return 0;
}