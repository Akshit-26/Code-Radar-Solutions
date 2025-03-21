#include <stdio.h>

int main(){
    int n, arr[n], i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int temp = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>temp){
            temp = arr[i];
        }
    }
    printf("%d", temp);
    return 0;
}