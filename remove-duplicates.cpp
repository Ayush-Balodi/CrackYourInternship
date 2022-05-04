/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-duplicates-from-sorted-array/
    TC = O(n)
    SC = O(1) as no extra space is consumed.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=1;
        
        for( int j=1 ; j<n ; j++ ){
            if( nums[j] != nums[j-1] ){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};