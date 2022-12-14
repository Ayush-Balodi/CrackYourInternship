class Solution {
public:
    string longestPalindrome(string s) {
        
        int l=s.length();
        if( l<2 ){
            return s;
        }
        vector<vector<int>> dp(l,vector<int>(l,0));
        int start=0, end=1;
        
        for( int i=0 ; i<l ; i++ ){
            dp[i][i] = 1;
        }
        for( int i=0 ; i<l-1 ; i++ ){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                start=i; end=2;
            }
        }
        
        for( int i=2 ; i<l ; i++ ){
            for( int j=0 ; j<l-i ; j++ ){
                int left=j, right=i+j;
                if( dp[left+1][right-1] == 1 && s[left]==s[right] ){
                    dp[left][right]=1; 
                    start=j; end=i+1;
                }
            }
        }
        return s.substr(start,end);
    }
};