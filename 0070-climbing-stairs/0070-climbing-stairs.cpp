class Solution {
public:
    int dp[46] = {0};
    int climbStairs(int n) {
        if( n < 2 ){
            return 1;
        }
        if(dp[n-1]==0)
            dp[n-1] = climbStairs(n-1);
        if(dp[n-2]==0)
            dp[n-2] = climbStairs(n-2);
        
        return dp[n-1]+dp[n-2]; 
    }
};