#include <stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    if(c<=0){
        printf("Freezing");
    }else{
        printf("Above Freezing");
    }
    return 0;
}