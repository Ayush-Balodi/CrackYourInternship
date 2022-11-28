class Solution {
public:
    vector<int> getRow(int n) {
        
        vector<vector<int>> nums( n+1 , vector<int>(n+1,0) );
        
        for( int i=0 ; i<=n ; i++ ){
            for( int j=0 ; j<=i ; j++ ){
                nums[i].resize( j+1 );
                if( j==0 || j==i ){
                    nums[i][j] = 1;
                } 
                else{
                    nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
                }
            }
        }
        
        return nums[n];
    }
};