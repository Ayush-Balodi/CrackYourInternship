class Solution {
public:
    string removeStars(string s) {
        if( s=="*" ){
            return "";
        }
        int n=s.length();
        string ans="";
        
        for( int i=0 ; i<n ; i++ ){
            if( i!=0 && s[i]=='*' ){
                ans.pop_back();
                continue;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};