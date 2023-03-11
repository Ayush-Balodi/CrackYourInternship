class Solution {
private:
    int solveTab(string str1, string str2, int n){
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        int ans=0;
        for( int i=n-1 ; i>=0 ; i-- ){
            for( int j=n-1 ; j>=0 ; j-- ){
                if(str1[i] == str2[j]){
                    ans = 1+dp[i+1][j+1];
                }
                else{
                    ans = max(dp[i+1][j] , dp[i][j+1]);
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        string str1, str2;
        str1=s;
        reverse(s.begin(), s.end());
        str2=s;
        return solveTab(str1, str2, n);
    }
};