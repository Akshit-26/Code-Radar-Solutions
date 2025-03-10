#include <stdio.h>

int main(){
    int num, n, a;
    scanf("%d %d", &num, &n);
    a = (num >> n) & 1;
    printf("%d", a);
    return 0;
}