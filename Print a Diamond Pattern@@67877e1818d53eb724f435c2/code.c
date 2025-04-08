#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int nst = 1, nsp = N/2, ml = N/2 + 1;

    for(int i=1; i<=N; i++){
        for(int k=1; k<=nsp; k++) printf(" ");
        for(int j=1; j<=nst; j++) printf("*");
        if(i<ml){
            nst += 2;
            nsp--;
        }else{
            nst -= 2;
            nsp++;
        }
        printf("\n");
    }
    return 0;
}