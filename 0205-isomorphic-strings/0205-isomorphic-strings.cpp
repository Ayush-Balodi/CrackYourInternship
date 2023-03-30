class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        unordered_map<char,char> mp1, mp2;
        
        for( int i=0; i<n; i++ ){
            if( mp1[s[i]] and mp1[s[i]] != t[i] )
                return false;
            if( mp2[t[i]] and mp2[t[i]] != s[i] )
                return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};

// I am just saving the character matching in both string
// If found not same at any time just returning false
// Else if not found making the new dictionary about it.