int sumOfDigits(int n) {
    // Write your code here
    int ans = 0;
    if( n / 10 <= 0)
        {
            return ans = n;
        }
    else{
        return ans = (n % 10) + sumOfDigits(n / 10);
    }

}
