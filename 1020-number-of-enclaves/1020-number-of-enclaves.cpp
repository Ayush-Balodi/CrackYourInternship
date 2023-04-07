class Solution {
private:
    void dfs( vector<vector<int>> &grid, int i, int j, int n, int m ){
        if( i<0 || i>=n || j<0 || j>=m ){
            return;
        }
        if( grid[i][j] == 0 ){
            return;
        }
        grid[i][j] = 0;
        int x[4]={1,0,0,-1};
        int y[4]={0,1,-1,0};
        
        for( int k=0 ; k<4 ; k++ ){
            dfs( grid, i+x[k], j+y[k], n, m );
        }
        return;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n=grid.size(), m=grid[0].size();
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( i*j == 0 || i==n-1 || j==m-1 ){
                    dfs( grid, i, j, n, m );
                }
            }
        }
        
        int count=0;
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( grid[i][j] == 1 ){
                    // dfs( grid, i, j, n, m );
                    count++;
                }
            }
        }
        return count;
    }
};