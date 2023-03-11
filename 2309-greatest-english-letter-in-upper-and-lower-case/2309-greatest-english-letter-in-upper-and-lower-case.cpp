class Solution {
public:
    string greatestLetter(string s) {
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for( auto x:s ){
            if(x>='a' && x<='z'){ hash1[x-'a']++; }
            else{ hash2[x-'A']++; }
        }
        string ans="";
        for( int i=25 ; i>=0 ; i-- ){
            if( hash1[i]>0 && hash2[i]>0 ){
                ans += i+'A';
                return ans;
            }
        } 
        return ans;
    }
};