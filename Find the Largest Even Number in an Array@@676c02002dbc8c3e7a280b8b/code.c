// Your code here...
#include <stdio.h>

int findLargestEven(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    return (max = arr[0]) ? -1 : max;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", findLargestEven(arr, n));
    
    return 0;
    
}