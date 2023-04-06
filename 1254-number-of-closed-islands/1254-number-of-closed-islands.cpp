class Solution {
private:
    void dfs( vector<vector<int>> &grid, vector<vector<int>> &visited, int i, int j, int n, int m ){
        if( i<0 || i>=n || j<0 || j>=m ){
            return;
        }
        if( visited[i][j] == 1 || grid[i][j] == 1 ){
            return;
        }
        visited[i][j] = 1;
        dfs( grid, visited, i, j+1, n, m );
        dfs( grid, visited, i+1, j, n, m );
        dfs( grid, visited, i, j-1, n, m );
        dfs( grid, visited, i-1, j, n, m );
        return;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m,0));
        
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( i*j==0 || i==n-1 || j==m-1 ){
                    dfs( grid, visited, i, j, n, m );
                }
            }
        }
        int count=0;
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( visited[i][j] == 0 && grid[i][j] == 0 ){
                    dfs( grid, visited, i, j, n, m );
                    count++;
                }
            }
        }
        return count;
    }
};