#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N], i;
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int increasing = 0, decreasing = 0;
    for(int i=0; i<N; i++){
        if(arr[i] >= arr[i+1]){
            decreasing = 1;
        }if(arr[i] <= arr[i+1]){
            increasing = 1;
        }
    }
    
    if(increasing || decreasing) printf("YES");
    else printf("NO");

    return 0;
}