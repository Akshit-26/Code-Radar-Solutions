#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
             printf("%c ", (char)(a+64));
             a++;
        }
        printf("\n");
    }
    return 0;
}