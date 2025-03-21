#include <stdio.h>

int main(){
    int N, i;
    int arr[100];
    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<N-1; i++){
        if(arr[i] < arr[i+1]){
        printf("Sorted");
        }else{
        printf("Not Sorted");
        }
    }

    return 0;
}