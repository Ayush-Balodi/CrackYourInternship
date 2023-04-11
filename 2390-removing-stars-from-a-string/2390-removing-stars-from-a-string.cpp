class Solution {
public:
    string removeStars(string s) {
        string result="";
        int n=s.length();
        for( int i=0 ; i<n ; i++ ){
            if( s[i] == '*' ){
                result.pop_back();
                continue;
            }
            result.push_back(s[i]);
        }
        return result;
    }
};