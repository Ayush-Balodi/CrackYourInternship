class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> maxval(n), minval(n);
        minval[0]=nums[0];
        maxval[n-1] = nums[n-1];
        for( int i=1 ; i<n ; i++ ){
            minval[i] = min(minval[i-1],nums[i]);
        }
        
        for( int i=n-2; i>=0 ; i-- ){
            maxval[i] = max(maxval[i+1], nums[i]);
        }
        
        for( int i=1 ; i<n-1 ; i++ ){
            if(nums[i]>minval[i-1] and nums[i]<maxval[i+1] ){
                return true;
            }
        }
        return false;
    }
};