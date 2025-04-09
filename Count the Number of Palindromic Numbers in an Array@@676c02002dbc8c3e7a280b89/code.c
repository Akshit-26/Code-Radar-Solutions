#include <stdio.h>

int countPalindrome(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        int original = num, reversed = 0,
        int digit = arr[i] % 10;
        reversed = reversed*10 + digit;
        arr[i] /= 10;
    }
    if(original == reversed) count++;
    return count;
}

int main(){
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", countPalindrome);

    return 0;
}