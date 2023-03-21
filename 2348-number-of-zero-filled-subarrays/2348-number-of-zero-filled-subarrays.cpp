class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        int n=nums.size();
        long long curr=0, ans=0;
        for( int i=0 ; i<n ; i++ ){
            if( nums[i] == 0 ){
                curr++;
            }
            if(nums[i]!=0 && curr>0){
                ans += curr*(curr+1)/2;
                curr=0;
            }
        }
        if(curr>0){
                ans += curr*(curr+1)/2;
                curr=0;
        }
        return ans;
    }
};