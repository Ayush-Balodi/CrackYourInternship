/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/rotate-image/
    
    TC = O(n^2) + O(n^2) => O(n^2)
    SC = O(1)
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size() , m=matrix[0].size();
        
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<i ; j++ ){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for( int i=0 ; i<n ; i++ ){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};

/*
    Java Solution
    TC = O(n^2) + O(n^2) => O(n^2)
    SC = O(1)
*/

class Solution {
    public void rotate(int[][] matrix) {
        
        for( int i=0 ; i<matrix.length ; i++ ){
            for( int j=0 ; j<i ; j++ ){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for( int i=0 ; i<matrix.length ; i++ ){
            for( int j=0 ; j<matrix[0].length/2 ; j++ ){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.length-1-j];
                matrix[i][matrix.length-1-j] = temp;
            }
        }
    }
}