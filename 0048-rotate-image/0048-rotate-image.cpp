class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size(), n=matrix[0].size();
        for( int i=0 ; i<m ; i++ ){
            for( int j=i ; j<n ; j++ ){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for( vector<int> &x:matrix ){
            reverse(x.begin(), x.end());
        }
        return;
    }
};