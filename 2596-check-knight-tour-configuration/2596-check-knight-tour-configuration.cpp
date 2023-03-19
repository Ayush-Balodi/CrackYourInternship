class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        
        vector<vector<int>> valid={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
        int n=grid.size();
        int count=1, l=0, r=0;
        int num = n*n-1;
        
        while( num-- ){
            
            bool flag = false;
            for( int i=0 ; i<8 ; i++ ){
        
                int newL = l+ valid[i][0];
                int newR = r+ valid[i][1];
                if( newL>=0 && newL<n && newR>=0 && newR<n && grid[newL][newR] == count ){
                    
                    l=newL, r=newR;
                    flag = true;
                    break;
                }
            }
            count++;
            if( flag == false )
                return false;
        }
        return true;
    }
};