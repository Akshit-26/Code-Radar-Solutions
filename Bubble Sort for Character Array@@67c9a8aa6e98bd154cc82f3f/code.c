void selectionSort(char arr[], int n){
    int i, j, minidx;
    char temp;
    for(i = 0; i < n-1; i++){
        minidx = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[minidx]) minidx = j;
        }
        if(minidx != i){
            temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++) printf("%c ", arr[i]);
}