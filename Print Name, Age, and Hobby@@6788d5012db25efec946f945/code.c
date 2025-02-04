#include <stdio.h>

int main(){
    char name, hobby;
    int age;
    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
    return 0;
}