class Solution {
public:
    int partitionString(string s) {
        int n=s.length(), ans=1; // ans is 1 as we will miss a case when it doesn't include his own.
        map<char,int> hashmap;
        for( int i=0 ; i<n ; i++ ){
            hashmap[s[i]]++;
            if( hashmap[s[i]] == 2 ){
                i--;
                ans++;
                hashmap.clear();
            }
        }
        return ans;
    }
};