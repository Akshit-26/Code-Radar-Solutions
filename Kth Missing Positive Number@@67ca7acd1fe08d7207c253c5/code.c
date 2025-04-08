int findKthMissing(int arr[], int n, int k){
    int missingCount = 0, i = 0, expected = 1;
    while(missingCount < k){
        if(i < n && arr[i] == expected){
            i++;
        }else{
            missingCount++;
            if(missingCount == k) return expected;
        }
        expected++;
    }
    return -1;
}