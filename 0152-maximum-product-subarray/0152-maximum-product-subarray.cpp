class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size(), prefix=1, suffix=1, max_pre=INT_MIN, max_suf=INT_MIN;
        
        for( int i=0 ; i<n ; i++ ){
            
            prefix *= nums[i];
            suffix *= nums[n-i-1];
            
            max_pre = max(prefix, max_pre);
            max_suf = max(suffix, max_suf);
            
            if(prefix == 0){prefix=1;}
            if(suffix == 0){suffix=1;}
        }
        return max(max_pre, max_suf);
    }
};