/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/rotate-image/
    
    TC = O(n^2) + O(n^2)
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