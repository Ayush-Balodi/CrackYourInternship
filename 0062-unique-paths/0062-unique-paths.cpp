class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> nums(m,vector<int>(n,0));
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( i==0 || j==0 ){
                    nums[i][j]=1;
                }
                else{
                    nums[i][j]=nums[i-1][j]+nums[i][j-1];
                }
            }
        }
        return nums[m-1][n-1];
    }
};