class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
      
        int n=nums.size(), minval=INT_MAX ,number=-1;
        for( int i=0 ; i<n ; i++ ){
            //minval = min( abs(0-nums[i]),minval);
            int x = abs(0-nums[i]);
            if( minval == x && number<nums[i] ){
                number = nums[i];
                continue;
            }
            if( minval > x ){
                minval = x;
                number = nums[i];
            }
        }
        return number;
    }
};