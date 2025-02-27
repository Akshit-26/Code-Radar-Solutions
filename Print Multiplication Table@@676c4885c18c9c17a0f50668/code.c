#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    for(i=1; i<=10; i++){
        printf("%d X %d = %d\m", n, i, n*i);
    }

    return 0;
}