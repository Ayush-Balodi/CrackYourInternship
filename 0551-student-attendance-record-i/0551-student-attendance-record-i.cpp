class Solution {
public:
    bool checkRecord(string s) {
        int c=0, n=s.length();
        for( int i=0 ; i<n ; i++ ){
            if( s[i] == 'A' ){
                c++;
                if( c>=2 ){ return false; }
            }
            if( i+2<n && s[i] == 'L' && s[i+1] == 'L' && s[i+2] =='L'){
                return false;
            }
        }
        return true;
    }
};