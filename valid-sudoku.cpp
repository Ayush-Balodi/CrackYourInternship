/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/search-a-2d-matrix

    TC = O(1)
    SC = O(1)
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