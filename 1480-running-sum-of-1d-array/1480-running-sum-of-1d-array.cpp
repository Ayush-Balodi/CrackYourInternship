class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int currSum=0, n=nums.size();
        for( int i=0; i<n; i++ ){
            currSum += nums[i];
            nums[i] = currSum;
        }
        return nums;
    }
};