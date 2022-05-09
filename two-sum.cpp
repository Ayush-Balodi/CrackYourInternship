/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/two-sum/

    TC = O(n^2)
    SC = O(1) as O(2) size of vector is termed as constant.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<int> v;
        
        for( int i=0 ; i<n ; i++ ){
            for( int j=i+1 ; j<n ; j++ ){
                if( (nums[i]+nums[j]) == target ){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};