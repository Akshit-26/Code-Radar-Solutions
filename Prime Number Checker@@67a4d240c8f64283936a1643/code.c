int isPrime(int n){
    if(n > 0){
        if(n == 1) break;
        else if(n == 2) return 1;
        else{
            for(int i = 2; i = n/2; i++){
                if(n % i == 0) return 0;
                else return 1;
            }
        }
    }
}