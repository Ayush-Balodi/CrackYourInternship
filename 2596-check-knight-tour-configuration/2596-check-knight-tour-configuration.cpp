class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        
        vector<vector<int>> valid={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
        int n=grid.size();
        int count=1, l=0, r=0;
        while( count < n*n ){
            bool flag = false;
            for( int i=0 ; i<8 ; i++ ){
                int t1=l, t2=r;
                l = l+ valid[i][0];
                r = r+ valid[i][1];
                if( l>=0 && l<n && r>=0 && r<n && grid[l][r] == count ){
                    flag = true;
                    break;
                }
                l=t1,r=t2;
            }
            if( !flag )
                return false;
            count++;
        }
        return true;
    }
};