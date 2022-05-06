/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/move-zeroes/
    
    I have two pointer approach for this.
    TC = O(n)
    SC = O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if( n == 0 || n == 1 ){
            return;
        }
        
        int i=0 ;
        
        for( int j=0 ; j<n ; j++ ){
            if( nums[j] != 0 ){
                nums[i] = nums[j];
                i++;
            }
        }
        
        if( i != 0 ){
            for( int k=i ; k<n ; k++ ){
            nums[k] = 0;
            }
        }
        return;
    }
};