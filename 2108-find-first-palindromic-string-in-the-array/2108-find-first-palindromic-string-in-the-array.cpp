class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for( auto &x:words ){
            bool flag=true;
            int n=x.length();
            for( int i=0 ; i<n/2 ; i++ ){
                if( x[i] != x[n-i-1] ){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return x;
            }
        }
        return "";
    }
};