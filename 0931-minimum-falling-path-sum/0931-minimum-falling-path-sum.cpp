class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        
        for( int i=0 ; i<n; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( i==0 ){
                    dp[i][j] = matrix[i][j];
                    continue;
                }
                if( j==0 ){
                    dp[i][j] = min((dp[i-1][j] + matrix[i][j]) , (dp[i-1][j+1] + matrix[i][j]));
                }
                else if( j==m-1 ){
                    dp[i][j] = min((dp[i-1][j] + matrix[i][j]),(dp[i-1][j-1] + matrix[i][j]));
                }
                else{
                    dp[i][j] = min(min((dp[i-1][j] + matrix[i][j]),(dp[i-1][j+1] + matrix[i][j])),(dp[i-1][j-1] + matrix[i][j]));
                }
            }
        }
        int minval = INT_MAX;
        for( int i=0 ; i<m ; i++ ){
            minval = min(minval,dp[n-1][i]);
        }
        return minval;
    }
};