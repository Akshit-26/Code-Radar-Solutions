// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int max = 0;
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0 && arr[i] == max){
            printf("%d", arr[i]);

        }
    }
}