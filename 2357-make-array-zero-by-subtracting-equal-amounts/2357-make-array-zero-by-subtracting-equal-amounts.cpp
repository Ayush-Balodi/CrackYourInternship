class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        int count=0 , min;
        while( true ){
            min=INT_MAX;
            for( int i=0 ; i<n ; i++ ){
                if( nums[i] != 0 ){
                    if( min > nums[i] ){
                        min=nums[i];
                    }
                }
            }
            if( min == INT_MAX ){
                break;
            }
            for( int i=0 ; i<n ; i++ ){
                if( nums[i] != 0 ){
                    nums[i] -= min;
                }
            }
            count++;
        }
        return count;
    }
};