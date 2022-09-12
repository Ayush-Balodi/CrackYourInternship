/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/concatenation-of-array
*/

Approach1;-)
TC = O(2*n) = O( n )
SC = O(1)

Code:-)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    
        int n = nums.size();
        vector<int> ans(2*n);
        
        int k=0;
        for( int i=0 ; i<2*n ; i++ ){
            ans[i] = nums[k];
            k++;
            if( k == n ){
                k=0;
            }
        }
        return ans;
    }
};

Approach2;-)
TC = O(n) + O(n) = O(n)
SC = O(1)

Code:-)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> ans;
        int n= nums.size();
        
        for( int i=0 ; i<n ; i++ ){
            ans.push_back(nums[i]);
        }
        for( int i=0 ; i<n ; i++ ){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};