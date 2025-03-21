#include <stdio.h>

int main(){
    int N, i;
    int arr[100];
    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", arr[100]);

    return 0;
}