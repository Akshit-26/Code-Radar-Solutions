void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) { 
            if (arr[i] > arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
}