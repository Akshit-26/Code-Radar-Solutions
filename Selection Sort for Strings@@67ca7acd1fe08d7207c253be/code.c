#include <string.h>

void selectionSort(char arr[][100], int n){
    int i, j, minidx;
    char temp[100]
    for(i = 0; i < n-1; i++){
        minidx = i;
        for(j = i+1; j < n; j++){
            if(strcmp(arr[j], arr[minidx]) > 0) minidx = j;
        }
        if(minidx != i){
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minidx]);
            strcpy(arr[minidx], temp);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++) printf("%s ", arr[i]);
}