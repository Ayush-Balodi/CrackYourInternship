class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if( s.size() != t.size() ){
            return false;
        }
        int m=s.size();
        map<char,int> mp1;
        map<char,int> mp2;
        
        for( int i=0 ; i<m ; i++ ){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1==mp2;
    }
};