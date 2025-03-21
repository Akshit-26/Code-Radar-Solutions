#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n], i, j;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);

        for(j=i+1; j<n-1; j++){
            if(arr[i] > arr[j]){
                printf("%d", arr[i]);
            }
        }
    }
    return 0;
}