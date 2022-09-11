/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/search-insert-position/
    
    TC = O(logn)
    SC = O(1)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if( target < nums[0] ){
            return 0;
        }
        int n=nums.size() ,mid;
        int low=0, high=n-1;
        if( target > nums[n-1] ){
            return n;
        }
        
        while( low <= high ){
            
            mid = (low+high)/2;
            
            if( nums[mid] == target ){
                return mid;
            }
            else if( nums[mid] > target ){
                high = mid-1;
            }
            else if( nums[mid] < target ){
                low = mid+1;
            }
        }
        return low;
    }
};