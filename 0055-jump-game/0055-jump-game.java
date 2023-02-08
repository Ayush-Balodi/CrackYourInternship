class Solution {
    public boolean canJump(int[] nums) {
        
        int n=nums.length, flag=n-1;
        for( int i=n-2; i>=0 ; i-- ){
            if( nums[i]+i >= flag ){
                flag = i;
            }
        }
        if( flag == 0 ){
            return true;
        }
        return false;
    }
}