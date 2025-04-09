#include <stdio.h>

int isPalindrome(int num){
    int original = num, reversed = 0;

    while(num > 0){
        int digit = num % 10;
        reversed = reversed*10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int countPalindrome(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(isPalindrome(arr[i]));
        count++;
    }
    return count;
}

int main(){
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", countPalindrome(arr, n));

    return 0;
}