int fibonacciSeries(int n){
    if(n <= 0) return n;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}