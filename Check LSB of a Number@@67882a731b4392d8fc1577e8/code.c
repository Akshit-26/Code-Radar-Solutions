#include <stdio.h>

int main(){
    int num, lsb;
    scanf("%d", &num);
    lsb = num && 1;
    if(lsb == 1){
        printf("Set");
    }else if(lsb == 0){
        printf("Not Set");
    }
    return 0;
}