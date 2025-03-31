#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int running_sum = 0;
    for(int i=0; i<n; i++){
        running_sum += arr[i];
        printf("%d ", running_sum);
    }

    return 0;

}