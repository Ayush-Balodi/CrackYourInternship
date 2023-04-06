class Solution {
private:
    void dfs( vector<vector<int>> &grid, int i , int j, int n, int m ){
        
        if( i<0 or i>=n or j<0 or j>=m ){
            return;
        }
        if(grid[i][j] != 0 ){
            return;
        }
        int x[4]={0,1,-1,0};
        int y[4]={1,0,0,-1};
        grid[i][j] = 1;
        for( int k=0 ; k<4 ; k++ ){
            dfs( grid, i+x[k], j+y[k], n, m );
        }
        return;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        
        //BORDER DFS
        for(int i=0 ; i<n ; i++ ){
            for(int j=0 ; j<m ; j++ ){
                if( i*j == 0 or i==n-1 or j==m-1 ){
                    dfs( grid, i, j, n, m );
                }
            }
        }
        
        //REST of the regions for answer;
        int ans=0;
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( grid[i][j] == 0 ){
                    ans++;
                    dfs( grid, i, j, n, m );
                }
            }
        }
        return ans;
    }
};
/*
     0   1   2   3   4
  [1 1 1 1 1 1 1 0]
  [1 0 0 0 0 1 1 0]
  [1 0 1 0 1 1 1 0]
  [1 0 0 0 0 1 0 1]
  [1 1 1 1 1 1 1 0]
    
     0   1   2   3   4
  0["1","1","1","1","1"]
  1["0","0","0","1","1"]
  2["0","0","0","1","1"]
  3["0","0","0","1","1"]

*/