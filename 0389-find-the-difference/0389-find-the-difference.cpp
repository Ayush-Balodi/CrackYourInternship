class Solution {
public:
    char findTheDifference(string s, string t) {
//         if( s=="" ){
//             return t[0];
//         }
//         map<char,int> mp;
//         for( auto x:s ) mp[x]++;
        
//         for( auto x:t ){
//             if( --mp[x] < 0 ){
//                 return x;
//             }
//         }
//         return '\0';
        int n=s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for( int i=0 ; i<n ; i++ ){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[n];
    }
};