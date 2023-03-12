class Solution {
public:
    int maxScore(string s) {
        int one=0, zero=0;
        for( auto x:s ){
            if( x == '1' )
                one++;
        }
        int n=s.length(), sum=0;
        for( int i=0 ; i<n-1 ; i++ ){
            if(s[i] == '0'){
                zero++;
            }
            else{
                one--;
            }
            sum = max(sum,zero+one);
        }
        return sum;
    }
};