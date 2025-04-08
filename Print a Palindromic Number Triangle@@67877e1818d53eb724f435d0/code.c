#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        int a = i-1;
        for(int k=1; k<=N-i; k++) printf(" ");
        for(int j=1; j<=i; j++) printf("%d ", j);
        for(int q=1; q<=i-1; q++){
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}