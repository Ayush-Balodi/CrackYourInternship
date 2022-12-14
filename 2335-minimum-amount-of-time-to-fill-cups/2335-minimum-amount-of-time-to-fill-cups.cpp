class Solution {
public:
    int fillCups(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        if( nums[0]+nums[1] > nums[2] ) return sum/2 + sum%2;
        return nums[2];
    }
};