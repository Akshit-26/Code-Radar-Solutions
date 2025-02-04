#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if(a>=33 && a<=47){
        printf("Special Character");
    }else if(a>=48 && a<=57){
        printf("Digit");
    }else if(a==97 || a==101 || a==105 || a==111 || a==117){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    retrun 0;
}