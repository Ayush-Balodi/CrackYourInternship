class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> result;
        
        int pre=1;
        for( auto x:nums ){
            pre*=x;
        } 
        for( int i=0 ; i<n ; i++ ){
            int pro=1;
            if(nums[i] == 0){
                for( int j=0 ; j<n ; j++ ){
                    if( j==i ){ continue; }
                    pro *= nums[j];
                }
                result.push_back(pro);
                continue;
            }
            result.push_back(pre/nums[i]);
        }
        return result;
    }
};