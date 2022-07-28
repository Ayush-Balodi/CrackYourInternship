/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/search-a-2d-matrix

    TC = O(1)
    SC = O(1)
    20ms
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for( int i=0 ; i<9 ; i++ ){
            
            int m[10] = {0};
            for( int j=0 ; j<9 ; j++ ){
                if( board[i][j] != '.' ){
                    ++m[board[i][j]-'0'];
                }
            }
            
            for( int x=1 ; x<10 ; ++x ){
                if(m[x] > 1){
                    return false;
                }
            }
        }
        
        for( int i=0 ; i<9 ; i++ ){
            
            int m[10] = {0};
            for( int j=0 ; j<9 ; j++ ){
                if( board[j][i] != '.'){
                    ++m[board[j][i] - '0'];
                }
            }
            
            for( int x=1 ; x<10 ; ++x ){
                if( m[x] > 1 ){
                    return false;
                }
            }
        }
        
        for( int i=0 ; i<9 ; i+=3 ){
            for(int j=0 ; j<9 ; j+=3 ){
                int m[10] = {0};
                for( int k=i ; k<i+3 ; ++k ){
                    for( int l=j ; l<j+3 ; ++l ){
                        if( board[k][l] != '.' ){
                            ++m[board[k][l] - '0'];
                        }
                    }
                }
                for( int x=1 ; x<10 ; ++x ){
                    if( m[x] > 1 ){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

/*
    Java code
    TC = O(1)
    SC = O(1)

    25ms
    It should be fast as it is providing result in ine iteration.
*/

class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        HashSet st = new HashSet();
        
        for( int i=0 ; i<9 ; i++ ){
            for( int j=0 ; j<9 ; j++ ){
                
                if( board[i][j] != '.' ){
                    
                    if( !st.add("row"+i+board[i][j]) || !st.add("col"+j+board[i][j]) ){
                        return false;
                    }
                    if( !st.add("box"+(i/3)+j/3+board[i][j]) ){
                        return false;
                    }
                }
            }
        }
        return true;
    }
}