class Solution {
public:
    /*DP TOP DOWN OR MEMOIZATION*/
    // int solve( string str1, string str2, int i, int j, vector<vector<int>> &dp ){
    //     if( i==str1.length() ){
    //         return 0;
    //     }
    //     if( j==str2.length() ){
    //         return 0;
    //     }
    //     if( dp[i][j] != -1 ){
    //         return dp[i][j];
    //     } 
    //     int ans=0;
    //     if( str1[i] == str2[j] ){
    //         ans = 1+solve(str1, str2, i+1, j+1, dp);
    //     }
    //     else{
    //         ans = max(solve(str1, str2, i+1, j, dp), solve(str1, str2, i, j+1, dp));
    //     }
    //     return dp[i][j] = ans;
    // }
    /*DP BOTTOM UP*/
    // int solveTab( string str1, string str2, int n, int m ){
    //     vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    //     for( int i=n-1 ; i>=0 ; i-- ){
    //         for( int j=m-1 ; j>=0 ; j-- ){
    //             int ans=0;
    //             if( str1[i] == str2[j] ){
    //                 ans = 1+dp[i+1][j+1];
    //             }
    //             else{
    //                 ans = max(dp[i+1][j], dp[i][j+1]);
    //             }
    //             dp[i][j] = ans;
    //         }
    //     }
    //     return dp[0][0];
    // }
    /*DP BOTTOM UP REDUCED SPACE COMPLEXICITY*/
    int solveTab( string str1, string str2, int n, int m ){
        // vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        vector<int> curr(m+1, 0);
        vector<int> next(m+1, 0);
        for( int i=n-1 ; i>=0 ; i-- ){
            for( int j=m-1 ; j>=0 ; j-- ){
                int ans=0;
                if( str1[i] == str2[j] ){
                    ans = 1+next[j+1];
                }
                else{
                    ans = max(next[j], curr[j+1]);
                }
                curr[j] = ans;
            }
            next=curr;
        }
        return next[0];
    }
    int longestCommonSubsequence(string str1, string str2) {
        int n=str1.length(), m=str2.length();
        return solveTab(str1, str2, n, m);
        // vector<vector<int>> dp(str1.length(), vector<int>(str2.length(),-1));
        // return solve(str1, str2, 0, 0, dp);
    }
};