#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int j=2; j<arr[i]/2; j++){
        if(arr[i]%j==0){
            count+=1;
        }
    }
}