class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m=matrix.size(), n=matrix[0].size();// row and cols
        vector<int> nums;
        
        int column_start=0, column_end=n-1; // cols configuration
        int row_start=0, row_end=m-1; // rows configuration
       
        while( column_start<=column_end and row_start<=row_end ){
            
            for( int col=column_start ; col<=column_end ; col++ ){
                nums.push_back(matrix[row_start][col]);
            }
            
            row_start+=1; 
            
            for( int row=row_start ; row<=row_end ; row++ ){
                nums.push_back(matrix[row][column_end]);
            }
            
            column_end-=1;
            if(column_start > column_end || row_start > row_end) break;
            for( int col=column_end ; col>=column_start ; col-- ){
                nums.push_back(matrix[row_end][col]);
            }
            
            row_end-=1;
            
            for( int row=row_end ; row>=row_start ; row-- ){
                nums.push_back(matrix[row][column_start]);
            }
            
            column_start+=1;
        }
        return nums;
    }
};