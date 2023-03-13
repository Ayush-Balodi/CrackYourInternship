class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int ans=0, n=nums.size();
        for( int i=1 ; i<n ; i++ ){
            if( nums[i-1]+1 > nums[i] ){
                int d = nums[i-1]+1-nums[i];
                nums[i] = d+nums[i];
                ans += d;
            }
        }
        return ans;
    }
};