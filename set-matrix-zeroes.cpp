/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/set-matrix-zeroes/submissions/

    TC = O( m * n )
    SC = O( m + n )
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        
        int m = nums.size();
        int n = nums[0].size();
        
        vector<pair<int,int>> v;
        
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( nums[i][j] == 0 ){
                    v.push_back({i,j});
                }
            }
        }
        
        int km = v.size();
        
        for( int i=0 ; i<km ; i++ ){
            
            int in1 = v[i].first;
            int in2 = v[i].second;
            
            for( int k=0 ; k<n ; k++ ){
                nums[in1][k] = 0;
            }
            
            for( int k=0 ; k<m ; k++ ){
                nums[k][in2] = 0;
            }
        }
        return;
    }
};

/*
    TC = O( m*n )
    SC = O(1)
*/