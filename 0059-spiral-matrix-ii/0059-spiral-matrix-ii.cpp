class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int k=0;
        vector<vector<int>> nums(n, vector<int>(n, 0));
        
        int column_start=0, column_end=n-1;
        int row_start=0, row_end=n-1;
        
        while( column_start<=column_end and row_start<=row_end ){
            
            for( int col=column_start ; col<=column_end ; col++ ){
                nums[row_start][col] = k+=1;
            }
            
            row_start++;
            
            for( int row=row_start ; row<=row_end ; row++ ){
                nums[row][column_end] = k+=1;
            }
            
            column_end--;
            
            for( int col=column_end ; col>=column_start ; col-- ){
                nums[row_end][col] = k+=1;
            }
            
            row_end--;
            
            for( int row=row_end ; row>=row_start ; row-- ){
                nums[row][column_start] = k+=1;
            }
            
            column_start++;
        }
        return nums;
    }
};