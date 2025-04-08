#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int nst = 1, nsp = (2*N-1)/2, ml = (2*N-1)/2 + 1;

    for(int i=1; i<=2*N-1; i++){
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