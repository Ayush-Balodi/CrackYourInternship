class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        
        int m=nums.size(), n=nums[0].size(), sum=0;
        for( int i=0; i<m; i++ ){
            sum = sum + nums[i][i];
        }
        for( int i=0 ; i<n ; i++ ){
            if( i == n-i-1 ){
                continue;
            }
            sum = sum + nums[i][n-i-1];
        }
        return sum;
    }
};