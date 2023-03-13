class Solution {
public:
    int longestPalindrome(string s) {
        
        // frequency map
        unordered_map<char,int> mp;
        for( auto x:s ) mp[x]++;
        
        int result=0;
        bool odd_found=false;
        
        //iterating over map and counting the evnen frequent characters for palindrome and further having a single count for middle element which can be odd one.
        for( auto &x:mp ){
            if( x.second % 2 == 0 ){
                result += x.second;
            }
            else{
                odd_found=true;
                result += x.second-1;
            }
        }
        if( odd_found ){
            result++;
        }
        return result;
    }
};