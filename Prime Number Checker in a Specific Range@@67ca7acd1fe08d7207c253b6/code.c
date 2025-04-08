void printPrimesInRange(int a, int b){
    int foundPrime = 0;
    for(int i = a; i <= b; i++){
        if(i <= 1) continue;
        int isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
            foundPrime = 1;
        }
    }
    if(!foundPrime) printf("No prime numbers");
}