#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        int a = 1;
        for(int j=1; j<=N+1-i; j++){
            int d = a + 64;
            a++;
            printf("%c ", (char)d);
        }
        printf("\n");
    }

    return 0;
}