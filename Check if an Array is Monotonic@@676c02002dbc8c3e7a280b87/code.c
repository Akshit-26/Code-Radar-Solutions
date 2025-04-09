#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N], i;
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        if(arr[i] > arr[i+1] || arr[i] < arr[i+1]) printf("YES");
        else printf("NO");
    }
    return 0;
}