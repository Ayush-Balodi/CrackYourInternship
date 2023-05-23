class Solution {
public:
    int recursive( vector<vector<int>>& grid, vector<vector<int>> &dp, int i, int j, int m, int n ){
        if( i<0 or i>=m or j<0 or j>=n ){
            return 0;
        }
        if( dp[i][j] != -1 ){
            return dp[i][j];
        }
        if( i == m-1 and j == n-1 ){
            return grid[i][j];
        }
        int take1=INT_MAX, take2=INT_MAX;
        if( i+1<m ){
            take1 = recursive( grid, dp, i+1, j, m, n );
        }
        if( j+1<n ){
            take2 = recursive( grid, dp, i, j+1, m, n );
        }
        dp[i][j] = grid[i][j] + min(take1, take2);
        return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1) );
        return recursive( grid, dp, 0, 0, m, n );
    }
};