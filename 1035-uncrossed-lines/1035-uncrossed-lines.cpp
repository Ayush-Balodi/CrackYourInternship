class Solution {
private:
    int solve( vector<vector<int>> &dp, vector<int> &nums1, vector<int> &nums2, int index1, int index2 ){
        if( index1>=nums1.size() or index2>=nums2.size() ){
            return 0;
        }
        int ans=0;
        if( dp[index1][index2] != -1 ){
            return dp[index1][index2];
        }  
        for( int i=index1 ; i<nums1.size() ; i++ ){
            for( int j=index2 ; j<nums2.size() ; j++ ){
                if( nums1[i] == nums2[j] ){
                    ans = max(ans, 1+solve( dp, nums1, nums2, i+1, j+1 ));
                } 
            }
        }
        dp[index1][index2] = ans;
        return dp[index1][index2];
    } 
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), -1));
        return solve( dp, nums1, nums2, 0, 0 );
    }
};