int isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n <= 2) return 1;
        else{
            if(n % i == 0) return 0;
            else return 1;
        }
    }
    return 0;
}