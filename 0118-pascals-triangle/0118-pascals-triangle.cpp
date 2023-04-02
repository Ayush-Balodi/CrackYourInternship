class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> matrix(numRows , vector<int>(numRows,0));
        for( int i=0 ; i<numRows ; i++ ){
            matrix[i].resize(i+1);
            for( int j=0 ; j<=i ; j++ ){
                if( j==0 or j==i )
                    matrix[i][j]=1;
                else
                    matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
            }
        }
        return matrix;
    }
};