class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.length() != goal.length() ){
            return false;
        }
        int n=s.length();
        for( int i=0 ; i<n-1 ; i++ ){
            if( s==goal ){
                return true;
            }
            char ch = s[0];
            for( int j=0 ; j<n-1; j++ ){
                s[j] = s[j+1];
            }
            s[n-1] = ch;
            cout << s << endl;
        }
        if( s==goal ){
                return true;
        }
        return false; 
    }
};