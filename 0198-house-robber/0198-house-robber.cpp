class Solution {
private:
    int helper(vector<int> &nums, vector<int> &dp, int i, int n){
        if( i>=n ){
            return 0;
        }
        if( dp[i] != -1 ){
            return dp[i];
        }
        int take = helper(nums, dp, i+2, n) + nums[i];
        int notake = helper(nums, dp, i+1, n) + 0;
        dp[i] = max(take, notake);
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n+1, -1);
        int answer = helper(nums, dp, 0, n);
        
        for( int i=0 ; i<=n ; i++ ){
            cout << dp[i] << " ";
        }
        
        return answer;
    }
};