class Solution {
public:
    int minimumSum(int n, int k) {
        
        int sum=0, last=max(n, k-1);
        for( int i=1 ; i<=n ; i++ ){
            sum += i;
            int num2 = k-i;
            if( num2 >i and num2<=n ){
                ++last;
                sum = last + sum - num2;
            }
        }
        return sum;
    }
};