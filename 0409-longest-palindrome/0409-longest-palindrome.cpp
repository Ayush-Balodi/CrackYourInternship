class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> mp;
        for( auto x:s ){
            mp[x]++;
        }
        
        bool odd_found=false;
        int result=0;
        
        for( auto x:mp ){
            if( x.second % 2 == 0 ){
                result+=x.second;
            }
            else{
                result += x.second-1;
                odd_found = true;
            }
        }
        
        if(odd_found)
            result++;
        
        return result;
    }
};