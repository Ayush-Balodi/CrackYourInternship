/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/running-sum-of-1d-array/

    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int currentSum = 0 , n = nums.size();
        vector<int> arr(n);
        
        for( int i=0 ; i<n ; i++ ){
            currentSum += nums[i];
            arr[i] = currentSum;
        }
        return arr;
    }
};