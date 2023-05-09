class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> nums(n, vector<int>(n, 0));
        int k=1;
        
        int column_start=0, column_end=n-1;
        int row_start=0, row_end=n-1;
        
        while( column_start <= column_end and row_start <= row_end ){
            
            for( int col=column_start ; col<=column_end ; col++ ){
                nums[row_start][col] = k++;
            }
            
            row_start+=1;
            
            for( int row=row_start ; row<=row_end ; row++ ){
                nums[row][column_end] = k++;
            }
            
            column_end-=1;
            
            for( int col=column_end ; col>=column_start ; col-- ){
                nums[row_end][col] = k++;
            }
            
            row_end-=1;
            
            for( int row=row_end ; row>=row_start ; row-- ){
                nums[row][column_start] = k++;
            }
            
            column_start+=1;
        }
        return nums;
    }
};