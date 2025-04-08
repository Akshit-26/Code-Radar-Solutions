int isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0; 
            break;
        }else{
            return 1;
            break;
        }
    }
    return 0;
}