#include <stdio.h>

int main(){
    int binary[], num;
    int i = 0;
    scanf("%d", &num);
    while(n > 0){
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        printf("%d", binary[j]);
    }
    return 0;
}