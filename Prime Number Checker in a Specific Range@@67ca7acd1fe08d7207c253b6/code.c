void printPrimesInRange(int a, int b){
    for(int i = a; i <= b; i++){
        for(int j = 2; j < i/2; j++){
            if(i % j == 0){
                break;
            }else{
                printf("%d ", i);
                break;
            }
        }
    }
}