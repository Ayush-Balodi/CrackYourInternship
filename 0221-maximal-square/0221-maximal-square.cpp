class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if( matrix.empty() ){
            return 0;
        }
        
        int m=matrix.size(), n=matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        int ans=INT_MIN;
        
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( i == 0 or j == 0 ){
                    if( matrix[i][j] == '1' ){
                        dp[i][j] = 1;
                    }
                }
                else{
                    if( matrix[i][j] == '1' ){
                        dp[i][j] = min({dp[i][j-1], dp[i-1][j-1], dp[i-1][j]}) + 1;
                    }
                }
                ans = max(dp[i][j], ans);
            }
        }
        return ans*ans;
    }
};