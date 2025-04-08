void printPrimesInRange(int a, int b){
    for(int i = a; i <= b; i++){
        if(i <= 1) continue;
        int isPrime = 1;
        for(int j = 2; j < i/2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d ", i);
            isPrime = 1;
        }
    }
    if(!isPrime) printf("No prime numbers");
}