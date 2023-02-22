class Solution {
private:
    void helper( vector<vector<int>> &visited, vector<vector<char>> &grid, int i, int j, int n, int m ){
        if( i<0 || i>=n || j<0 || j>=m ){
            return;
        }
        if( grid[i][j] == '0' || visited[i][j] == 1 ){
            return;
        }
        int x[4] = {0,1,0,-1};
        int y[4] = {1,0,-1,0};
        
        visited[i][j] = 1;
        
        for( int k=0 ; k<4 ; k++ ){
            if( visited[i][j] != 0 ){
                helper( visited, grid, i+x[k], j+y[k], n, m );
            }
        }
        return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size(), count=0;
        vector<vector<int>> visited( n, vector<int>(m, 0) );
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( grid[i][j] == '1' && visited[i][j] == 0 ){
                    helper( visited, grid, i, j, n, m );
                    count++;
                }
            }
        }
        return count;
    }
};
/*
     0   1   2   3   4
  0["1","1","1","1","0"]
  1["1","1","0","1","0"]
  2["1","1","0","0","0"]
  3["0","0","0","0","0"]
    
     0   1   2   3   4
  0["1","1","1","1","0"]
  1["0","0","0","1","0"]
  2["0","0","0","0","0"]
  3["0","0","0","0","0"]

*/