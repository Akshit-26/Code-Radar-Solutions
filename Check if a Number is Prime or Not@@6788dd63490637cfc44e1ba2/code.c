#include <stdio.h>

int main(){
    int a, flag;
    scanf("%d", &a);
    if(a>2){
        for(int i=2; i<a; i++){
            if(a%i==0){
                flag = 0;
                break;
            }else{
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}