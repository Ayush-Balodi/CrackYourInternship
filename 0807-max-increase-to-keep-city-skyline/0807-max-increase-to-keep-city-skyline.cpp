class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<int> row(n,0), col(n,0);
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                row[i] = max(row[i], grid[i][j]);
                col[i] = max(col[i], grid[j][i]);
            }
        }
        
        int result=0;
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                result += (min(row[i], col[j]) - grid[i][j]);
            } 
        } 
        return result;
    }
};