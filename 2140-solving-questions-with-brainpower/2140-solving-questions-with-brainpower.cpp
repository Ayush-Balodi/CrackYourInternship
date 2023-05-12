class Solution {
public:
    long long helper( vector<vector<int>> &nums, vector<long long> &dp, int i, int n ){
        if( i>=n ){
            return 0;
        }
        if( dp[i] != -1 ){
            return dp[i];
        } 
        long long take = helper(nums, dp, i+nums[i][1]+1, n) + nums[i][0];
        long long notake = helper(nums, dp, i+1, n) + 0;
        dp[i] = max(take, notake);
        return dp[i];
    }
    long long mostPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<long long> dp(n+1, -1);
        long long solve= helper( nums, dp, 0, n );
        return solve;
    }
};