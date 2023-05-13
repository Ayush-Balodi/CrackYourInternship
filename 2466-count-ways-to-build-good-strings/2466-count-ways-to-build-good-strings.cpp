class Solution {
public:
    
    int helper( int low, int high, int zero, int one, int length, vector<int> &dp ){
        if( length > high ){
            return 0;
        }
        if( dp[length] != -1 ){
            return dp[length];
        }
        int ans=0;
        if( length >= low ){
            ans++;
        }
        int ans1 = helper( low, high, zero, one, length+zero, dp );
        int ans2 = helper( low, high, zero, one, length+one, dp );
        dp[length] = (ans+ans1+ans2)%1000000007;
        return dp[length];
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1, -1);
        int count = helper(low, high, zero, one, 0, dp);
        return count;
    }
};