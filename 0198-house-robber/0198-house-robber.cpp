class Solution {
public:
    int house( int dp[] , int i , vector<int> &nums ){
        if( i>= nums.size() ){
            return 0;
        }
        if( dp[i] != -1 ){
            return dp[i];
        } 
        int take = house( dp , i+2 , nums ) + nums[i];
        int notake = house( dp , i+1 , nums ) + 0;
        dp[i] = max(take,notake);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        int dp[n+1];
        memset( dp , -1 , sizeof(dp) );
        return house( dp , 0 , nums);
    }
};