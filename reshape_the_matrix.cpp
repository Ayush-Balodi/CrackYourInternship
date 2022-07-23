/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reshape-the-matrix/

    TC = O(m.n) + O(r.c)
    SC = O(k) + O(r.c)
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size() , n = nums[0].size();
        int total = m * n;
        
        if( total != r*c ){
            return nums;
        }
        
        vector<vector<int>> ans(r, vector<int>(c,0));
        vector<int> v;
        
        int k=0;
        for( int i=0 ; i<m ; i++ ){
            
            for(int j=0 ; j<n ; j++ ){
                
                v.push_back(nums[i][j]);
            }
        }
        
        for( int i=0 ; i<r ; i++ ){
            
            for(int j=0 ; j<c ; j++ ){
                
                ans[i][j] = v[k++];
            }
        }
        
        return ans;
    }
};

/*
    TC = O(m.n)
    SC = O(r.c)
*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size() , n = nums[0].size();
        int total = m * n;
        
        if( total != r*c ){
            return nums;
        }
        
        vector<vector<int>> ans(r, vector<int>(c,0));
        
        int row=0 , col=0;
        for( int i=0 ; i<m ; i++ ){
            
            for(int j=0 ; j<n ; j++ ){
                ans[row][col] = nums[i][j];
                col++;
                if( col == c ){
                    row++;
                    col=0;
                }
            }
        }        
        return ans;
    }
};