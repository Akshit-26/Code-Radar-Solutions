// Your code here...
#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0) count++;
    }
    int brr[count];
    for(int i=0; i<n; i++){
        for(int j=0; j<count; j++){
            if(arr[i]%2 == 0) brr[j] = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", brr[i]);
    }
    return 0;
    
}