class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size(), n=nums[0].size();
        int i=0;
        
        while( i < m ){
            
            if( nums[i][n-1] == target )
                return true;
            else if( nums[i][n-1] > target )
                break;
            else if( nums[i][n-1] < target )
                i++;
            else
                return false;
        }
        
        if( i < m ){
            for( int j=0 ; j<n ; j++ ){
                if(nums[i][j] == target)
                    return true;
            } 
        } 
        return false;
    }
};