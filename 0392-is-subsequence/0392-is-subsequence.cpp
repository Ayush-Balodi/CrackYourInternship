class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=t.length(), n2=s.length();
        
        if( n2==0 )
            return true;
        if( n1==0 )
            return false;
        
        int c=0, k=0;
        for( int i=0; i<n1; i++ ){
            if( t[i] == s[k] ){
                if( k==n2-1 )
                    return true;
                k++;
            }
        }
        return false;
    }
};