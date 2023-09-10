class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                
                if( i == 0 ){
                    dp[i][j] = matrix[i][j];
                    continue;
                }
                if( j == 0 ){
                    dp[i][j] = min((dp[i-1][j]+matrix[i][j]), (dp[i-1][j+1]+matrix[i][j]));
                }
                else if( j == n-1 ){
                    dp[i][j] = min((dp[i-1][j]+matrix[i][j]), (dp[i-1][j-1]+matrix[i][j]));
                }
                else{
                    dp[i][j] = min(min(dp[i-1][j]+matrix[i][j], dp[i-1][j-1]+matrix[i][j]), dp[i-1][j+1]+matrix[i][j]);
                }
            }
        }
        
        return *min_element(begin(dp[n-1]), end(dp[n-1]));
    }
};