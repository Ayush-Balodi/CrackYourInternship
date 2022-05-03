/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git

    TC = O(n^2)
    SC = O(1) as no extra space is consumed.
*/
class Solution {
public:
    
    void sort( vector<int> &nums ){
        
        int n = nums.size();
        
        for( int i=0 ; i<n-1 ; i++ ){
            for( int j=i+1 ; j<n ; j++ ){
                if( nums[i] > nums[j] ){
                    int temp = nums[i];
                    nums[i]  = nums[j];
                    nums[j]  = temp;
                }
            }
        }
        return;
    }
    
    void sortColors(vector<int>& nums) {
        sort( nums );
        return;
    }
};