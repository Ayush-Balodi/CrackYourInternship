class Solution {
public:
    int dfs( vector<vector<int>> &dp, vector<vector<int>> &nums, int i, int j, int m, int n ){
        if( i<0 or i>=m or j<0 or j>=n ){
            return 0;
        }
        if( nums[i][j] == 1 ){
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
            ans += dfs( dp, nums, i+1, j , m, n );
        }
        if( j+1 < n ){
            ans += dfs( dp, nums, i, j+1, m, n );
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        
        int m=nums.size(), n=nums[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return dfs( dp, nums, 0, 0, m, n );
    }
};