class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int currSum=0, totalSum=0;
        
        for( auto x:nums ){
            totalSum += x;
        }
        
        for( int i=0; i<n; i++ ){
            if( currSum == totalSum-currSum-nums[i] ){
                return i;
            }
            currSum+=nums[i];
        }
        return -1;
    }
};