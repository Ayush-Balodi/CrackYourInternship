class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end(),[&](auto a , auto b){
            return a>b;
        });
        int l=0,j=1;
        return ( (nums[l]-1) * (nums[j]-1) );        
    }
};