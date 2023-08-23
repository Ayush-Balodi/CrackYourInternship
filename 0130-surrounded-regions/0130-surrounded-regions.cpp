class Solution {
public:
    void dfs( vector<vector<char>> &board, int i, int j, int m, int n ){
        
        if( i<0 or i>=m or j<0 or j>=n ){
            return;
        }
        if( board[i][j] == 'O' ){
            board[i][j] = '#';
        }
        else{
            return;
        }
        dfs(board, i+1, j, m, n );
        dfs(board, i, j+1, m, n );
        dfs(board, i, j-1, m, n );
        dfs(board, i-1, j, m, n );
        return;
    }
    void solve(vector<vector<char>>& board) {
        
        int m=board.size(), n=board[0].size();
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( i==0 or i==m-1 or j==0 or j==n-1 ){
                    if( board[i][j] == 'O' ){
                        dfs( board, i, j, m, n );
                    }
                }
                
            }
        }
        
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( board[i][j] == '#' ){
                    board[i][j] = 'O'; continue;
                }
                if( board[i][j] == 'O' ){
                    board[i][j] = 'X';
                }
            }
        }
        return;
    }
};