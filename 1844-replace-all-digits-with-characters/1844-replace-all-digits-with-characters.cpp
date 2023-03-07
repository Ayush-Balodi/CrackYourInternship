class Solution {
private:
    char shift( char a, int b ){
        return a+b;
    }
public:
    string replaceDigits(string s) {
        int n=s.length();
        for( int i=1 ; i<n ; i+=2 ){
            s[i] = shift(s[i-1],s[i]-'0');
        }
        return s;
    }
};