class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n=nums.size();
        for( int i=0; i<n; i++ ){
            for( int j=i+1; j<=i+indexDiff and j<n; j++ ){
                if( abs(nums[i] - nums[j]) <=valueDiff ){
                    return true;
                }
            }
        }
        return false;
    }
};