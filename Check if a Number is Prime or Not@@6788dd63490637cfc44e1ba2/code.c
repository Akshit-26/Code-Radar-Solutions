#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a==2){
        printf("Prime");
    }else{
        for(int i=2; i<a; i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }else{
            printf("Prime");
            break;
        }
    }
    }
    return 0;
}