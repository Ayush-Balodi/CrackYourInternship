/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/pascals-triangle/

    TC = O(numRows.numRows)
    SC = O(1)
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> nums(numRows , vector<int>(numRows,0));
        for( int i=0 ; i<numRows ; i++ ){
            
            for( int j=0 ; j<=i ; j++ ){
                nums[j].resize(j+1);
                if( j==0 || j==i ){
                    nums[i][j] = 1;
                }
                else{
                    nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
                }
            }
        }
        return nums;
    }
};