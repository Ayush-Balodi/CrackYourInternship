class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> row[10];
        set<char> col[10];
        set<char> box[10];
        
        for( int i=0 ; i<9 ; i++ ){
            for( int j=0 ; j<9 ; j++ ){
                
                char ch=board[i][j];
                if( ch == '.' )
                    continue;
                
                if( row[i].count(ch) >= 1 )
                    return false;
                else
                    row[i].insert(ch);
                
                if( col[j].count(ch) >= 1 )
                    return false;
                else
                    col[j].insert(ch);
                
                int bi=(i/3)*3+(j/3);
                if( box[bi].count(ch) >= 1 )
                    return false;
                else
                    box[bi].insert(ch);
            }
        }
        return true;
    }
};