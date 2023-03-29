class Solution {
public:
    int dp[501][501];
    int helper(int i, int j, vector<int> &p ){
        if( i>j )
            return 0;
        if( dp[i][j] != -1 )
            return dp[i][j];
        return dp[i][j]=max(p[i]-helper(i+1, j, p), helper(i, j-1, p));
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return helper(0,piles.size()-1, piles)>0;
    }
};