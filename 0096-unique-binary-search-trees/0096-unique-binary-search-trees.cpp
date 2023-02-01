class Solution {
public:
    long long int binomial( int n , int k ){
        if( k > n-k ){ k=n-k; }
        long long int result = 1;
        for( int i=0 ; i<k ; i++ ){
            result *= (n-i);
            result /= (i+1);
        }
        return result;
    }
    int numTrees(int n) {
        return binomial(n<<1,n)/(n+1); // 2n=>(n<<1)
    }
};