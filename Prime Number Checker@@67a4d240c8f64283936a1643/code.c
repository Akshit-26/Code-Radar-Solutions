int isPrime(int n){
    for(int i = 0; i < n; i++){
        if(n % i == 0) return 1;
        else return 0;
    }
}