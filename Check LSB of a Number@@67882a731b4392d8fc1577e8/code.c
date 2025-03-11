#include <stdio.h>

int main(){
    int num, lsb;
    scanf("%d", &num);
    lsb = num && 1;
    if(lsb == 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}