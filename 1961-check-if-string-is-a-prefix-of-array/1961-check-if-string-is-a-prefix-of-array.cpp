class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans="";
        for( auto x:words ){
            ans+=x;
            if( ans == s ){
                return true;
            }
        }
        return false;
    }
};