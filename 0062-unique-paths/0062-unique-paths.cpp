class Solution {
public:
    int helper( vector<vector<int>> &dp, int i, int j, int m, int n ){
        if( i>m or j>n ){
            return 0;
        }
        if( dp[i][j] != -1 ){
            return dp[i][j];
        }
        if( i==m-1 and j==n-1 ){
            return 1;
        }
        int ans=0;
        if( i+1 < m ){
            dp[i+1][j] = helper( dp, i+1, j, m, n );
            ans += dp[i+1][j];
        }
        
        if( j+1 < n ){
            dp[i][j+1] = helper( dp, i, j+1, m, n );
            ans += dp[i][j+1];
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    int uniquePaths(int m, int n){
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(dp, 0, 0, m, n);
    }
};