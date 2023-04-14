class Solution {
public:
    int longestPalindromeSubseq(string str1) {
        
        string str2=str1;
        reverse(str2.begin(), str2.end());
        
        int n=str1.length();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(str1[i] == str2[j]){
                    dp[i][j] = 1+dp[i+1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};