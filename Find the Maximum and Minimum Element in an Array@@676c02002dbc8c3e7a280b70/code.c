#include <stdio.h>

int main(){
    int n, arr[n], i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int min = max = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }else{
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}