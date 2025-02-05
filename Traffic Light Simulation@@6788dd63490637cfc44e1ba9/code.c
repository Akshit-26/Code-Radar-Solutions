#include <stdio.h>

int main(){
    char t;
    scanf("%c", &t);
    if(t=='R'){
        printf("Stop");
    }else if(t=='G'){
        printf("Go");
    }else if(t=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}