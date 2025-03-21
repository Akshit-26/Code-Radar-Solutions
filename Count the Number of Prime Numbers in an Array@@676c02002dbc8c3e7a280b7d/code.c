#include <stdio.h>

int isPrime(int num){
    if(num <= 1){
        return 0;
    }
    for(int i=0; i<num/2; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(i=0; i<n; i++){
        if(isPrime){
            count++;
        }
    }
    return 0;
}