class Solution {
public:
    int helper( vector<vector<int>> &nums, vector<vector<int>> &memo, int i, int j, int m, int n ){
        n=nums[i].size();
        if( i<0 or i>=m or j<0 or j>=n ){
            return 0;
        }
        if( memo[i][j] != -1 ){
            return memo[i][j];
        }
        if( i==m-1 ){
            return nums[i][j];
        }
        return memo[i][j] = nums[i][j] +  min(helper(nums, memo, i+1, j, m, n), helper(nums, memo, i+1, j+1, m, n));
    }
    int minimumTotal(vector<vector<int>>& nums) {
        int m=nums.size();
        vector<vector<int>> memo(m, vector<int>(m,-1));
        return helper(nums, memo, 0, 0, m, 0);
    }
};