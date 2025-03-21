#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int even_count = 0;
    int odd_count = 0;
    for(i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even_count+=1;
        }else{
            odd_count+=1;
        }
    }

    printf("%d %d", even_count, odd_count);

    return 0;
}