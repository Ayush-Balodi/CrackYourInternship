class Solution {
public:
    char findTheDifference(string s, string t) {
        if( s=="" ){
            return t[0];
        }
        map<char,int> mp;
        for( auto x:s ) mp[x]++;
        
        for( auto x:t ){
            if( --mp[x] < 0 ){
                return x;
            }
        }
        return '\0';
    }
};