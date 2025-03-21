#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", &str);

    int length = strlen(str);
    int start = 0;
    int end = length-1;
    while(start < end){
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
    printf("%s", str);

    return 0;
}