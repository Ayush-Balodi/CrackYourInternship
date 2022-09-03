/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

    TC = O(n^2)
    SC = O(1)
*/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> result;
        int n = nums.size();
        for( int i=0 ; i<n ; i++ ){
            int c=0;
            for( int j=0 ; j<n ; j++ ){
                if( j!=i && nums[j] < nums[i] ){
                    c++;
                }
            }
            result.push_back(c);
        }
        return result;
    }
};