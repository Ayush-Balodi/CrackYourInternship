class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        int first=n-1;
        for( int i=n-2 ; i>=0 ; i-- ){
            if( nums[i]+i >= first ){
                first=i;
            }
        }
        if( first == 0 ){
            return true;
        }
        return false;
    }
};