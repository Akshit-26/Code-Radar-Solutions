#include <stdio.h>

int main(){
    int n, arr[n], i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        if(arr[0]>arr[1]){
            printf("%d", arr[0]);
            break;
        }else if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
            printf("%d", arr[i]);
            break;
        }else if(arr[n-1]>arr[n-2]){
            printf("%d", arr[n-1]);
            break;
        }
        }
    }

    return 0;
}