class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length(), m=word2.length();
        int i=0, j=0, flag=1;
        string ans="";
        while( i<n && j<m ){
            if( flag ){
                ans += word1[i++];
                flag=0;
            }
            if( !flag ){
                ans += word2[j++];
                flag=1;
            }
        }
        
        while( i<n ) ans += word1[i++];
        while( j<m ) ans += word2[j++];
        return ans;
    }
};