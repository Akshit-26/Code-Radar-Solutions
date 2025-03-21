#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[n]);
    }

    int k;
    scanf("%d", &k);

    for(i=0; i<n; i++){
        if(arr[i] == k){
            printf("%d", i);
        }
    }

    return 0;
}