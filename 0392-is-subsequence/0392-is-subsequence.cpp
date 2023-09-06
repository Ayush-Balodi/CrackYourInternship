class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int m=s.size(), n=t.size();
        if( m == 0 ){
            return true;
        }
        if( n == 0 ){
            return false;
        }
        int k=0;
        for( int i=0 ; i<n ; i++ ){
            if( t[i] == s[k] ){
                if( k==m-1 ){
                    return true;
                }
                k++;
            }
        }
        return false;
    }
};