#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for(i=0; i<n; i++){
        if(arr[i] == k){
            printf("%d", i);
        }else{
            printf("-1");
        }
    }

    return 0;
}