class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n=s.size(), m=t.size();
        if( n != m ){ return false; }
        map<char,int> m1;
        map<char,int> m2;
        
        for( int i=0 ; i<n ; i++ ){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        
        if( m1 == m2 ){ return true;}
        return false;
    }
};