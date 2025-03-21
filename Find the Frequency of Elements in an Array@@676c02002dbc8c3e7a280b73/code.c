#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(i=0; j=i+1; i<n; j<n; i++; j++){
        if(arr[i] == arr[j]){
            count+=1;
        }
    }
    prinf("%d %d", arr[i], count);

    return 0;
}