#include <stdio.h>
#include <string.h>

int main(){
    char str[];
    scanf("%s", &str);

    int length = strlen(str);
    int temp = str[0];
    str[0] = str[length-1];
    str[length-1] = temp;

    printf("%s", str);

    return 0;
}