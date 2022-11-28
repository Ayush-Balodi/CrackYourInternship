class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        for( int j=0 ; j<n ; j++ ){
            for( int i=0 ; i<n-j-1 ; i++ ){
                nums[i] = (nums[i] + nums[i+1])%10;
            }
        }
        return nums[0];
    }
};