#include <stdio.h>

int maxProd(int arr[], int n){
    int max1 = arr[0];
    int max2 = arr[1];

    for(int i = 2; i < n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] > max2){
            max2 = arr[i];
        }
    }
    return max1*max2;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", maxProd);
    return 0;
}