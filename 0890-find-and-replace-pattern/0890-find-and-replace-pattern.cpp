class Solution {
public:
    bool match( string w, string p ){
        
        map<char,char> m1;
        map<char,char> m2;
        
        int n=w.length();
        for( int i=0 ; i<n ; i++ ){
            if(m1.find(w[i]) == m1.end() ){m1[w[i]] = p[i];}
            if(m2.find(p[i]) == m2.end() ){m2[p[i]] = w[i];}
            if( m1[w[i]] != p[i] || m2[p[i]] != w[i] ){
                return false;
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        for( auto x:words ){
            if( match(x,pattern) ){
                ans.push_back(x);
            }
        }
        return ans;
    }
};