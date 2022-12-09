class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=n-1,j=n-2;
        return ( (nums[l]-1) * (nums[j]-1) );        
    }
};