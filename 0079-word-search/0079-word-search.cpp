class Solution {
private:
    bool helper( vector<vector<char>> &board, string word, int i , int j, int n, int m, int k ){
        if( k >= word.size() ){return true;}
        if( i<0 || i>=n || j<0 || j>=m || board[i][j] != word[k] ){ return false;}
        if( word.size() == 1 && board[i][j] == word[0] ){ return true;}
        
        board[i][j] = '.';
        bool temp = false;
        int x[4] = {0,1,0,-1};
        int y[4] = {1,0,-1,0};
        
        for( int ind=0 ; ind<4 ; ind++ ){
            temp = temp || helper( board, word, i+x[ind], j+y[ind], n, m, k+1 );
        }
        board[i][j] = word[k];
        return temp;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size();
        if( n == 0 || word.size() == 0 ){return false;}
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if(word[0] == board[i][j]){
                    if( helper( board, word, i, j, n, m, 0) ){return true;}
                }
            }
        }
        return false;
    }
};